package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 广告版设置类定义广告板设置及相关操作
 */
public class BillboardSet extends com.earthview.world.graphic.MovableObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CBillboardSet", new BillboardSetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCBillboardSetProxy", new BillboardSetClassFactory());
	}

	/**
	 * 广告板设置内部渲染类
	 */
	public static class BillboardSetInternalRenderable extends com.earthview.world.graphic.Renderable {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CBillboardSet::CBillboardSetInternalRenderable", new BillboardSetInternalRenderableClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CBillboardSet::JCBillboardSetInternalRenderableProxy", new BillboardSetInternalRenderableClassFactory());
		}

		/**
		 * 构造函数
		 * @param parent 广告板链指针
		 */
		public BillboardSetInternalRenderable(com.earthview.world.graphic.BillboardSet ref_parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			Create("JCBillboardSetInternalRenderableProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.BillboardSet$BillboardSetInternalRenderable".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private long getMaterial_void(long pNativeObject);
		/**
		 * 获得材质
		 * @param  
		 * @return 材质
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
		 * 获得渲染操作信息
		 * @param op 渲染操作
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
		 * 获得世界变换转换矩阵
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

		native private long getMovableObject_void(long pNativeObject);
		public com.earthview.world.graphic.MovableObject getMovableObject()
		{
			long returnValue = getMovableObject_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
			}
			return __returnValue;
		}
		native private long getMovableObject_void_NoVirtual(long pNativeObject);
		protected com.earthview.world.graphic.MovableObject getMovableObject_NoVirtual()
		{
			long returnValue = getMovableObject_void_NoVirtual(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.MovableObject __returnValue = new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate, "CMovableObject");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.MovableObject)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CMovableObject");
			}
			return __returnValue;
		}

		native private double getSquaredViewDepth_CCamera(long pNativeObject, long cam);
		/**
		 * 获得摄像机视场深度的平方
		 * @param cam 摄像机
		 */
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
		 * 获得光照信息
		 * @param  
		 * @return 光照列表
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

		public BillboardSetInternalRenderable(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public BillboardSetInternalRenderable(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static BillboardSetInternalRenderable fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			BillboardSetInternalRenderable obj = null;
 			if(baseObj instanceof BillboardSetInternalRenderable)
			{
				obj = (BillboardSetInternalRenderable)baseObj;
			} else {
				obj = new BillboardSetInternalRenderable(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CBillboardSetInternalRenderable");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class BillboardSetInternalRenderableClassFactory implements IClassFactory {
		public BaseObject create()
		{
			BillboardSetInternalRenderable emptyInstance = new BillboardSetInternalRenderable(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
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

	protected  long getRenderablePtr_void_callback()
	{
		com.earthview.world.graphic.BillboardSet.BillboardSetInternalRenderable returnValue = getRenderablePtr();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRenderablePtr_void(long pNativeObject);
	public com.earthview.world.graphic.BillboardSet.BillboardSetInternalRenderable getRenderablePtr()
	{
		long returnValue = getRenderablePtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.BillboardSet.BillboardSetInternalRenderable __returnValue = new com.earthview.world.graphic.BillboardSet.BillboardSetInternalRenderable(CreatedWhenConstruct.CWC_NotToCreate, "CBillboardSetInternalRenderable");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.BillboardSet.BillboardSetInternalRenderable)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBillboardSetInternalRenderable");
		}
		return __returnValue;
	}
	native private long getRenderablePtr_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.BillboardSet.BillboardSetInternalRenderable getRenderablePtr_NoVirtual()
	{
		long returnValue = getRenderablePtr_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.BillboardSet.BillboardSetInternalRenderable __returnValue = new com.earthview.world.graphic.BillboardSet.BillboardSetInternalRenderable(CreatedWhenConstruct.CWC_NotToCreate, "CBillboardSetInternalRenderable");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.BillboardSet.BillboardSetInternalRenderable)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBillboardSetInternalRenderable");
		}
		return __returnValue;
	}

	protected  void increasePool_ev_size_t_callback(long size)
	{
		long sizeParamValue = size;
		increasePool(sizeParamValue);
	}

	native private void increasePool_ev_size_t(long pNativeObject, long size);
	/**
	 * 增长池
	 * @param size 空间大小
	 */
	public void increasePool(long size)
	{
		long sizeParamValue = size;
		increasePool_ev_size_t(this.nativeObject.pointer, sizeParamValue);
	}
	native private void increasePool_ev_size_t_NoVirtual(long pNativeObject, long size);
	protected void increasePool_NoVirtual(long size)
	{
		long sizeParamValue = size;
		increasePool_ev_size_t_NoVirtual(this.nativeObject.pointer, sizeParamValue);
	}

	public static class SortByDirectionFunctor extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CBillboardSet::CSortByDirectionFunctor", new SortByDirectionFunctorClassFactory());
		}

		native private long get_sortDir_void(long pNativeObject);
		public com.earthview.world.spatial.math.Vector3 get_sortDir()
		{
			long jniValue = get_sortDir_void(this.nativeObject.pointer);
			
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
		
		native private void set_sortDir_CVector3 (long pNativeObject, long value);
		public void set_sortDir(com.earthview.world.spatial.math.Vector3 sortDir)
		{
			long sortDirParamValue = sortDir.nativeObject.pointer;
			
			set_sortDir_CVector3(this.nativeObject.pointer, sortDirParamValue);
		}
		
		public SortByDirectionFunctor(com.earthview.world.spatial.math.Vector3 dir) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer dirPtr = new BasePointer(dir);
			list.add("dir", dirPtr.get());
			Create("CSortByDirectionFunctor", list);
		}

		public SortByDirectionFunctor(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SortByDirectionFunctor(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SortByDirectionFunctor fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SortByDirectionFunctor obj = null;
 			if(baseObj instanceof SortByDirectionFunctor)
			{
				obj = (SortByDirectionFunctor)baseObj;
			} else {
				obj = new SortByDirectionFunctor(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CSortByDirectionFunctor");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SortByDirectionFunctorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SortByDirectionFunctor emptyInstance = new SortByDirectionFunctor(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class SortByDistanceFunctor extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CBillboardSet::CSortByDistanceFunctor", new SortByDistanceFunctorClassFactory());
		}

		native private long get_sortPos_void(long pNativeObject);
		public com.earthview.world.spatial.math.Vector3 get_sortPos()
		{
			long jniValue = get_sortPos_void(this.nativeObject.pointer);
			
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
		
		native private void set_sortPos_CVector3 (long pNativeObject, long value);
		public void set_sortPos(com.earthview.world.spatial.math.Vector3 sortPos)
		{
			long sortPosParamValue = sortPos.nativeObject.pointer;
			
			set_sortPos_CVector3(this.nativeObject.pointer, sortPosParamValue);
		}
		
		public SortByDistanceFunctor(com.earthview.world.spatial.math.Vector3 pos) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer posPtr = new BasePointer(pos);
			list.add("pos", posPtr.get());
			Create("CSortByDistanceFunctor", list);
		}

		public SortByDistanceFunctor(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SortByDistanceFunctor(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SortByDistanceFunctor fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SortByDistanceFunctor obj = null;
 			if(baseObj instanceof SortByDistanceFunctor)
			{
				obj = (SortByDistanceFunctor)baseObj;
			} else {
				obj = new SortByDistanceFunctor(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CSortByDistanceFunctor");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SortByDistanceFunctorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SortByDistanceFunctor emptyInstance = new SortByDistanceFunctor(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 构造函数
	 * @param name 名称
	 * @param poolSize pool的空间大小
	 * @param externalDataSource 是否有另外的数据资源
	 */
	public BillboardSet(String name, long poolSize, boolean externalDataSource) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer poolSizePtr = new BasePointer(poolSize);
		list.add("poolSize", poolSizePtr.get());
		BasePointer externalDataSourcePtr = new BasePointer(externalDataSource);
		list.add("externalDataSource", externalDataSourcePtr.get());
		Create("JCBillboardSetProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.BillboardSet".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param name 名称
	 * @param poolSize pool的空间大小
	 */
	public BillboardSet(String name, long poolSize) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer poolSizePtr = new BasePointer(poolSize);
		list.add("poolSize", poolSizePtr.get());
		Create("JCBillboardSetProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.BillboardSet".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param name 名称
	 */
	public BillboardSet(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCBillboardSetProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.BillboardSet".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long createBillboard_CVector3_CColourValue(long pNativeObject, long position, long colour);
	/**
	 * 创建广告板
	 * @param position 在三维中的位置
	 * @param colour 颜色
	 * @return 创建的广告板
	 */
	public com.earthview.world.graphic.Billboard createBillboard(com.earthview.world.spatial.math.Vector3 position, com.earthview.world.graphic.ColourValue colour)
	{
		long positionParamValue = position.nativeObject.pointer;
		long colourParamValue = colour.nativeObject.pointer;
		long returnValue = createBillboard_CVector3_CColourValue(this.nativeObject.pointer, positionParamValue, colourParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Billboard __returnValue = new com.earthview.world.graphic.Billboard(CreatedWhenConstruct.CWC_NotToCreate, "CBillboard");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Billboard)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBillboard");
		}
		return __returnValue;
	}
	native private long createBillboard_CVector3(long pNativeObject, long position);
	/**
	 * 创建广告板
	 * @param position 在三维中的位置
	 * @return 创建的广告板
	 */
	public com.earthview.world.graphic.Billboard createBillboard(com.earthview.world.spatial.math.Vector3 position)
	{
		long positionParamValue = position.nativeObject.pointer;
		long returnValue = createBillboard_CVector3(this.nativeObject.pointer, positionParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Billboard __returnValue = new com.earthview.world.graphic.Billboard(CreatedWhenConstruct.CWC_NotToCreate, "CBillboard");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Billboard)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBillboard");
		}
		return __returnValue;
	}
	native private long createBillboard_Real_Real_Real_CColourValue(long pNativeObject, double x, double y, double z, long colour);
	/**
	 * 创建广告板
	 * @param x x坐标的值
	 * @param y y坐标的值
	 * @param z z坐标的值
	 * @param colour 颜色
	 * @return 创建的广告板
	 */
	public com.earthview.world.graphic.Billboard createBillboard(double x, double y, double z, com.earthview.world.graphic.ColourValue colour)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		long colourParamValue = colour.nativeObject.pointer;
		long returnValue = createBillboard_Real_Real_Real_CColourValue(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue, colourParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Billboard __returnValue = new com.earthview.world.graphic.Billboard(CreatedWhenConstruct.CWC_NotToCreate, "CBillboard");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Billboard)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBillboard");
		}
		return __returnValue;
	}
	native private long createBillboard_Real_Real_Real(long pNativeObject, double x, double y, double z);
	/**
	 * 创建广告板
	 * @param x x坐标的值
	 * @param y y坐标的值
	 * @param z z坐标的值
	 * @return 创建的广告板
	 */
	public com.earthview.world.graphic.Billboard createBillboard(double x, double y, double z)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zParamValue = z;
		long returnValue = createBillboard_Real_Real_Real(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Billboard __returnValue = new com.earthview.world.graphic.Billboard(CreatedWhenConstruct.CWC_NotToCreate, "CBillboard");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Billboard)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBillboard");
		}
		return __returnValue;
	}
	protected  int getNumBillboards_void_callback()
	{
		int returnValue = getNumBillboards();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getNumBillboards_void(long pNativeObject);
	/**
	 * 获得广告板的数量
	 * @param  
	 * @return 广告板编号
	 */
	public int getNumBillboards()
	{
		int returnValue = getNumBillboards_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getNumBillboards_void_NoVirtual(long pNativeObject);
	protected int getNumBillboards_NoVirtual()
	{
		int returnValue = getNumBillboards_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setAutoextend_ev_bool_callback(boolean autoextend)
	{
		boolean autoextendParamValue = autoextend;
		setAutoextend(autoextendParamValue);
	}

	native private void setAutoextend_ev_bool(long pNativeObject, boolean autoextend);
	/**
	 * 设置自动扩充
	 * @param autoextend 是否自动扩充
	 */
	public void setAutoextend(boolean autoextend)
	{
		boolean autoextendParamValue = autoextend;
		setAutoextend_ev_bool(this.nativeObject.pointer, autoextendParamValue);
	}
	native private void setAutoextend_ev_bool_NoVirtual(long pNativeObject, boolean autoextend);
	protected void setAutoextend_NoVirtual(boolean autoextend)
	{
		boolean autoextendParamValue = autoextend;
		setAutoextend_ev_bool_NoVirtual(this.nativeObject.pointer, autoextendParamValue);
	}

	protected  boolean getAutoextend_void_callback()
	{
		boolean returnValue = getAutoextend();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getAutoextend_void(long pNativeObject);
	/**
	 * 获得是否自动扩充
	 * @param  
	 * @return 自动扩充返回true，否则返回false
	 */
	public boolean getAutoextend()
	{
		boolean returnValue = getAutoextend_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getAutoextend_void_NoVirtual(long pNativeObject);
	protected boolean getAutoextend_NoVirtual()
	{
		boolean returnValue = getAutoextend_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setSortingEnabled_ev_bool_callback(boolean sortenable)
	{
		boolean sortenableParamValue = sortenable;
		setSortingEnabled(sortenableParamValue);
	}

	native private void setSortingEnabled_ev_bool(long pNativeObject, boolean sortenable);
	/**
	 * 设置排序是否启用
	 * @param sortenable 是否排序
	 */
	public void setSortingEnabled(boolean sortenable)
	{
		boolean sortenableParamValue = sortenable;
		setSortingEnabled_ev_bool(this.nativeObject.pointer, sortenableParamValue);
	}
	native private void setSortingEnabled_ev_bool_NoVirtual(long pNativeObject, boolean sortenable);
	protected void setSortingEnabled_NoVirtual(boolean sortenable)
	{
		boolean sortenableParamValue = sortenable;
		setSortingEnabled_ev_bool_NoVirtual(this.nativeObject.pointer, sortenableParamValue);
	}

	protected  boolean getSortingEnabled_void_callback()
	{
		boolean returnValue = getSortingEnabled();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getSortingEnabled_void(long pNativeObject);
	/**
	 * 获得排序是否启用
	 * @param  
	 */
	public boolean getSortingEnabled()
	{
		boolean returnValue = getSortingEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getSortingEnabled_void_NoVirtual(long pNativeObject);
	protected boolean getSortingEnabled_NoVirtual()
	{
		boolean returnValue = getSortingEnabled_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setPoolSize_ev_size_t_callback(long size)
	{
		long sizeParamValue = size;
		setPoolSize(sizeParamValue);
	}

	native private void setPoolSize_ev_size_t(long pNativeObject, long size);
	/**
	 * 设置广告板池大小
	 * @param size 空间大小
	 */
	public void setPoolSize(long size)
	{
		long sizeParamValue = size;
		setPoolSize_ev_size_t(this.nativeObject.pointer, sizeParamValue);
	}
	native private void setPoolSize_ev_size_t_NoVirtual(long pNativeObject, long size);
	protected void setPoolSize_NoVirtual(long size)
	{
		long sizeParamValue = size;
		setPoolSize_ev_size_t_NoVirtual(this.nativeObject.pointer, sizeParamValue);
	}

	protected  long getPoolSize_void_callback()
	{
		long returnValue = getPoolSize();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getPoolSize_void(long pNativeObject);
	/**
	 * 获得广告板池大小
	 * @param  
	 */
	public long getPoolSize()
	{
		long returnValue = getPoolSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getPoolSize_void_NoVirtual(long pNativeObject);
	protected long getPoolSize_NoVirtual()
	{
		long returnValue = getPoolSize_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void clear_void_callback()
	{
		clear();
	}

	native private void clear_void(long pNativeObject);
	/**
	 * 清除广告板，置空
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private void clear_void_NoVirtual(long pNativeObject);
	protected void clear_NoVirtual()
	{
		clear_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long getBillboard_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.graphic.Billboard returnValue = getBillboard(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBillboard_ev_uint32(long pNativeObject, long index);
	/**
	 * 获得广告板
	 * @param index 广告板索引
	 * @return 广告板
	 */
	public com.earthview.world.graphic.Billboard getBillboard(long index)
	{
		long indexParamValue = index;
		long returnValue = getBillboard_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Billboard __returnValue = new com.earthview.world.graphic.Billboard(CreatedWhenConstruct.CWC_NotToCreate, "CBillboard");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Billboard)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBillboard");
		}
		return __returnValue;
	}
	native private long getBillboard_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.graphic.Billboard getBillboard_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getBillboard_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Billboard __returnValue = new com.earthview.world.graphic.Billboard(CreatedWhenConstruct.CWC_NotToCreate, "CBillboard");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Billboard)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBillboard");
		}
		return __returnValue;
	}

	protected  void removeBillboard_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		removeBillboard(indexParamValue);
	}

	native private void removeBillboard_ev_uint32(long pNativeObject, long index);
	/**
	 * 移除广告板
	 * @param index 广告板索引
	 */
	public void removeBillboard(long index)
	{
		long indexParamValue = index;
		removeBillboard_ev_uint32(this.nativeObject.pointer, indexParamValue);
	}
	native private void removeBillboard_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected void removeBillboard_NoVirtual(long index)
	{
		long indexParamValue = index;
		removeBillboard_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
	}

	protected  void removeBillboard_CBillboard_callback(long pBill)
	{
		com.earthview.world.graphic.Billboard pBillParamValue = (pBill == 0L ? null : new com.earthview.world.graphic.Billboard(CreatedWhenConstruct.CWC_NotToCreate));
		if(pBillParamValue != null)
		{
		pBillParamValue.setDelegate(true);
		pBillParamValue.setInstancePointer(new InstancePointer(pBill));
		IClassFactory pBillParamValueClassFactory = GlobalClassFactoryMap.get(pBillParamValue.getCppInstanceTypeName());
		if (pBillParamValueClassFactory != null)
		{
			pBillParamValue.setDelegate(true);
			pBillParamValue = (com.earthview.world.graphic.Billboard)pBillParamValueClassFactory.create();
			pBillParamValue.setDelegate(true);
			pBillParamValue.setInstancePointer(new InstancePointer(pBill));
		}
		}
		removeBillboard(pBillParamValue);
	}

	native private void removeBillboard_CBillboard(long pNativeObject, long pBill);
	/**
	 * 移除广告板
	 * @param pBill 广告板
	 */
	public void removeBillboard(com.earthview.world.graphic.Billboard pBill)
	{
		long pBillParamValue = (pBill == null ? 0L : pBill.nativeObject.pointer);
		removeBillboard_CBillboard(this.nativeObject.pointer, pBillParamValue);
	}
	native private void removeBillboard_CBillboard_NoVirtual(long pNativeObject, long pBill);
	protected void removeBillboard_NoVirtual(com.earthview.world.graphic.Billboard pBill)
	{
		long pBillParamValue = (pBill == null ? 0L : pBill.nativeObject.pointer);
		removeBillboard_CBillboard_NoVirtual(this.nativeObject.pointer, pBillParamValue);
	}

	protected  void setBillboardOrigin_BillboardOrigin_callback(int origin)
	{
		com.earthview.world.graphic.BillboardOrigin originParamValue = com.earthview.world.graphic.BillboardOrigin.toEnum(origin);
		setBillboardOrigin(originParamValue);
	}

	native private void setBillboardOrigin_BillboardOrigin(long pNativeObject, int origin);
	/**
	 * 设置广告板原点
	 * @param origin 广告板原点
	 */
	public void setBillboardOrigin(com.earthview.world.graphic.BillboardOrigin origin)
	{
		int originParamValue = origin.getValue();
		setBillboardOrigin_BillboardOrigin(this.nativeObject.pointer, originParamValue);
	}
	native private void setBillboardOrigin_BillboardOrigin_NoVirtual(long pNativeObject, int origin);
	protected void setBillboardOrigin_NoVirtual(com.earthview.world.graphic.BillboardOrigin origin)
	{
		int originParamValue = origin.getValue();
		setBillboardOrigin_BillboardOrigin_NoVirtual(this.nativeObject.pointer, originParamValue);
	}

	protected  int getBillboardOrigin_void_callback()
	{
		com.earthview.world.graphic.BillboardOrigin returnValue = getBillboardOrigin();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getBillboardOrigin_void(long pNativeObject);
	/**
	 * 获得广告板原点
	 */
	public com.earthview.world.graphic.BillboardOrigin getBillboardOrigin()
	{
		int returnValue = getBillboardOrigin_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.BillboardOrigin.toEnum(returnValue);
	}
	native private int getBillboardOrigin_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.BillboardOrigin getBillboardOrigin_NoVirtual()
	{
		int returnValue = getBillboardOrigin_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.graphic.BillboardOrigin.toEnum(returnValue);
	}

	protected  void setBillboardRotationType_BillboardRotationType_callback(int rotationType)
	{
		com.earthview.world.graphic.BillboardRotationType rotationTypeParamValue = com.earthview.world.graphic.BillboardRotationType.toEnum(rotationType);
		setBillboardRotationType(rotationTypeParamValue);
	}

	native private void setBillboardRotationType_BillboardRotationType(long pNativeObject, int rotationType);
	/**
	 * 设置广告板旋转类型
	 * @param rotationType 旋转类型
	 */
	public void setBillboardRotationType(com.earthview.world.graphic.BillboardRotationType rotationType)
	{
		int rotationTypeParamValue = rotationType.getValue();
		setBillboardRotationType_BillboardRotationType(this.nativeObject.pointer, rotationTypeParamValue);
	}
	native private void setBillboardRotationType_BillboardRotationType_NoVirtual(long pNativeObject, int rotationType);
	protected void setBillboardRotationType_NoVirtual(com.earthview.world.graphic.BillboardRotationType rotationType)
	{
		int rotationTypeParamValue = rotationType.getValue();
		setBillboardRotationType_BillboardRotationType_NoVirtual(this.nativeObject.pointer, rotationTypeParamValue);
	}

	protected  int getBillboardRotationType_void_callback()
	{
		com.earthview.world.graphic.BillboardRotationType returnValue = getBillboardRotationType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getBillboardRotationType_void(long pNativeObject);
	/**
	 * 获得广告板旋转类型
	 * @param  
	 * @return 旋转类型
	 */
	public com.earthview.world.graphic.BillboardRotationType getBillboardRotationType()
	{
		int returnValue = getBillboardRotationType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.BillboardRotationType.toEnum(returnValue);
	}
	native private int getBillboardRotationType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.BillboardRotationType getBillboardRotationType_NoVirtual()
	{
		int returnValue = getBillboardRotationType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.graphic.BillboardRotationType.toEnum(returnValue);
	}

	protected  void setDefaultDimensions_Real_Real_callback(double width, double height)
	{
		double widthParamValue = width;
		double heightParamValue = height;
		setDefaultDimensions(widthParamValue, heightParamValue);
	}

	native private void setDefaultDimensions_Real_Real(long pNativeObject, double width, double height);
	/**
	 * 设置默认宽高
	 * @param width 宽度
	 * @param height 高度
	 */
	public void setDefaultDimensions(double width, double height)
	{
		double widthParamValue = width;
		double heightParamValue = height;
		setDefaultDimensions_Real_Real(this.nativeObject.pointer, widthParamValue, heightParamValue);
	}
	native private void setDefaultDimensions_Real_Real_NoVirtual(long pNativeObject, double width, double height);
	protected void setDefaultDimensions_NoVirtual(double width, double height)
	{
		double widthParamValue = width;
		double heightParamValue = height;
		setDefaultDimensions_Real_Real_NoVirtual(this.nativeObject.pointer, widthParamValue, heightParamValue);
	}

	protected  void setDefaultWidth_Real_callback(double width)
	{
		double widthParamValue = width;
		setDefaultWidth(widthParamValue);
	}

	native private void setDefaultWidth_Real(long pNativeObject, double width);
	/**
	 * 设置默认宽度
	 * @param width 宽度
	 */
	public void setDefaultWidth(double width)
	{
		double widthParamValue = width;
		setDefaultWidth_Real(this.nativeObject.pointer, widthParamValue);
	}
	native private void setDefaultWidth_Real_NoVirtual(long pNativeObject, double width);
	protected void setDefaultWidth_NoVirtual(double width)
	{
		double widthParamValue = width;
		setDefaultWidth_Real_NoVirtual(this.nativeObject.pointer, widthParamValue);
	}

	protected  double getDefaultWidth_void_callback()
	{
		double returnValue = getDefaultWidth();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getDefaultWidth_void(long pNativeObject);
	/**
	 * 设置默认宽度
	 * @param  
	 */
	public double getDefaultWidth()
	{
		double returnValue = getDefaultWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getDefaultWidth_void_NoVirtual(long pNativeObject);
	protected double getDefaultWidth_NoVirtual()
	{
		double returnValue = getDefaultWidth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setDefaultHeight_Real_callback(double height)
	{
		double heightParamValue = height;
		setDefaultHeight(heightParamValue);
	}

	native private void setDefaultHeight_Real(long pNativeObject, double height);
	/**
	 * 设置默认高度
	 * @param height 高度
	 */
	public void setDefaultHeight(double height)
	{
		double heightParamValue = height;
		setDefaultHeight_Real(this.nativeObject.pointer, heightParamValue);
	}
	native private void setDefaultHeight_Real_NoVirtual(long pNativeObject, double height);
	protected void setDefaultHeight_NoVirtual(double height)
	{
		double heightParamValue = height;
		setDefaultHeight_Real_NoVirtual(this.nativeObject.pointer, heightParamValue);
	}

	protected  double getDefaultHeight_void_callback()
	{
		double returnValue = getDefaultHeight();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getDefaultHeight_void(long pNativeObject);
	/**
	 * 设置默认高度
	 * @param  
	 */
	public double getDefaultHeight()
	{
		double returnValue = getDefaultHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getDefaultHeight_void_NoVirtual(long pNativeObject);
	protected double getDefaultHeight_NoVirtual()
	{
		double returnValue = getDefaultHeight_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setMaterialName_EVString_EVString_callback(String name, String groupName)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		setMaterialName(nameParamValue, groupNameParamValue);
	}

	native private void setMaterialName_EVString_EVString(long pNativeObject, String name, String groupName);
	/**
	 * 设置材质名称
	 * @param groupName 材质组的名称
	 * @param name 材质名称
	 */
	public void setMaterialName(String name, String groupName)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		setMaterialName_EVString_EVString(this.nativeObject.pointer, nameParamValue, groupNameParamValue);
	}
	native private void setMaterialName_EVString_EVString_NoVirtual(long pNativeObject, String name, String groupName);
	protected void setMaterialName_NoVirtual(String name, String groupName)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		setMaterialName_EVString_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue, groupNameParamValue);
	}

	protected  void setMaterialName_EVString_callback(String name)
	{
		String nameParamValue = name;
		setMaterialName(nameParamValue);
	}

	native private void setMaterialName_EVString(long pNativeObject, String name);
	/**
	 * 设置材质名称
	 * @param name 材质名称
	 */
	public void setMaterialName(String name)
	{
		String nameParamValue = name;
		setMaterialName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setMaterialName_EVString_NoVirtual(long pNativeObject, String name);
	protected void setMaterialName_NoVirtual(String name)
	{
		String nameParamValue = name;
		setMaterialName_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	protected  String getMaterialName_void_callback()
	{
		String returnValue = getMaterialName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getMaterialName_void(long pNativeObject);
	/**
	 * 获得材质名称
	 * @param  
	 */
	public String getMaterialName()
	{
		String returnValue = getMaterialName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getMaterialName_void_NoVirtual(long pNativeObject);
	protected String getMaterialName_NoVirtual()
	{
		String returnValue = getMaterialName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void _notifyCurrentCamera_CCamera(long pNativeObject, long cam);
	/**
	 * 通报当前摄像机
	 * @param cam 当前摄像机
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

	native private void beginBillboards_ev_size_t(long pNativeObject, long numBillboards);
	/**
	 * 开始广告板信息
	 * @param numBillboards 广告板数量
	 */
	public void beginBillboards(long numBillboards)
	{
		long numBillboardsParamValue = numBillboards;
		beginBillboards_ev_size_t(this.nativeObject.pointer, numBillboardsParamValue);
	}
	native private void beginBillboards_void(long pNativeObject);
	/**
	 * 开始广告板信息
	 * @param  
	 */
	public void beginBillboards()
	{
		beginBillboards_void(this.nativeObject.pointer);
	}
	native private void injectBillboard_CBillboard(long pNativeObject, long bb);
	/**
	 * 注入广告板
	 * @param bb 广告板
	 */
	public void injectBillboard(com.earthview.world.graphic.Billboard bb)
	{
		long bbParamValue = bb.nativeObject.pointer;
		injectBillboard_CBillboard(this.nativeObject.pointer, bbParamValue);
	}
	native private void endBillboards_void(long pNativeObject);
	/**
	 * 结束广告板
	 * @param  
	 */
	public void endBillboards()
	{
		endBillboards_void(this.nativeObject.pointer);
	}
	native private void setBounds_CAxisAlignedBox_Real(long pNativeObject, long box, double radius);
	/**
	 * 设置范围
	 * @param box 包围盒
	 * @param radius 半径
	 */
	public void setBounds(com.earthview.world.spatial.math.AxisAlignedBox box, double radius)
	{
		long boxParamValue = box.nativeObject.pointer;
		double radiusParamValue = radius;
		setBounds_CAxisAlignedBox_Real(this.nativeObject.pointer, boxParamValue, radiusParamValue);
	}
	native private long getBoundingBox_void(long pNativeObject);
	/// 获得包围盒
	/// </summary>
	/// <param name=""></param>
	/// <returns>中轴盒</returns>
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
	/// 获得包围盒的半径
	/// </summary>
	/// <param name=""></param>
	/// <returns>半径</returns>
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

	protected  void setMaterial_CMaterialPtr_callback(long material)
	{
		com.earthview.world.graphic.MaterialPtr materialParamValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
		materialParamValue.setDelegate(true);
		materialParamValue.setInstancePointer(new InstancePointer(material));
		IClassFactory materialParamValueClassFactory = GlobalClassFactoryMap.get(materialParamValue.getCppInstanceTypeName());
		if (materialParamValueClassFactory != null)
		{
			materialParamValue.setDelegate(true);
			materialParamValue = (com.earthview.world.graphic.MaterialPtr)materialParamValueClassFactory.create();
			materialParamValue.setDelegate(true);
			materialParamValue.setInstancePointer(new InstancePointer(material));
		}
		setMaterial(materialParamValue);
	}

	native private void setMaterial_CMaterialPtr(long pNativeObject, long material);
	/**
	 * 设置材质
	 * @param material 材质
	 * @return 材质
	 */
	public void setMaterial(com.earthview.world.graphic.MaterialPtr material)
	{
		long materialParamValue = material.nativeObject.pointer;
		setMaterial_CMaterialPtr(this.nativeObject.pointer, materialParamValue);
	}
	native private void setMaterial_CMaterialPtr_NoVirtual(long pNativeObject, long material);
	protected void setMaterial_NoVirtual(com.earthview.world.graphic.MaterialPtr material)
	{
		long materialParamValue = material.nativeObject.pointer;
		setMaterial_CMaterialPtr_NoVirtual(this.nativeObject.pointer, materialParamValue);
	}

	protected  void _notifyBillboardResized_void_callback()
	{
		_notifyBillboardResized();
	}

	native private void _notifyBillboardResized_void(long pNativeObject);
	/**
	 * 通报广告板尺寸改变
	 * @param  
	 */
	public void _notifyBillboardResized()
	{
		_notifyBillboardResized_void(this.nativeObject.pointer);
	}
	native private void _notifyBillboardResized_void_NoVirtual(long pNativeObject);
	protected void _notifyBillboardResized_NoVirtual()
	{
		_notifyBillboardResized_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void _notifyBillboardRotated_void_callback()
	{
		_notifyBillboardRotated();
	}

	native private void _notifyBillboardRotated_void(long pNativeObject);
	/// 通报广告板旋转
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	public void _notifyBillboardRotated()
	{
		_notifyBillboardRotated_void(this.nativeObject.pointer);
	}
	native private void _notifyBillboardRotated_void_NoVirtual(long pNativeObject);
	protected void _notifyBillboardRotated_NoVirtual()
	{
		_notifyBillboardRotated_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean getCullIndividually_void_callback()
	{
		boolean returnValue = getCullIndividually();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getCullIndividually_void(long pNativeObject);
	/**
	 * 获得是否逐个剔除
	 * @param  
	 */
	public boolean getCullIndividually()
	{
		boolean returnValue = getCullIndividually_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getCullIndividually_void_NoVirtual(long pNativeObject);
	protected boolean getCullIndividually_NoVirtual()
	{
		boolean returnValue = getCullIndividually_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setCullIndividually_ev_bool_callback(boolean cullIndividual)
	{
		boolean cullIndividualParamValue = cullIndividual;
		setCullIndividually(cullIndividualParamValue);
	}

	native private void setCullIndividually_ev_bool(long pNativeObject, boolean cullIndividual);
	/// 设置是否逐个剔除
	/// </summary>
	/// <param name="cullIndividual">是否选择单个</param>
	/// <returns></returns>
	public void setCullIndividually(boolean cullIndividual)
	{
		boolean cullIndividualParamValue = cullIndividual;
		setCullIndividually_ev_bool(this.nativeObject.pointer, cullIndividualParamValue);
	}
	native private void setCullIndividually_ev_bool_NoVirtual(long pNativeObject, boolean cullIndividual);
	protected void setCullIndividually_NoVirtual(boolean cullIndividual)
	{
		boolean cullIndividualParamValue = cullIndividual;
		setCullIndividually_ev_bool_NoVirtual(this.nativeObject.pointer, cullIndividualParamValue);
	}

	protected  void setBillboardType_BillboardType_callback(int bbt)
	{
		com.earthview.world.graphic.BillboardType bbtParamValue = com.earthview.world.graphic.BillboardType.toEnum(bbt);
		setBillboardType(bbtParamValue);
	}

	native private void setBillboardType_BillboardType(long pNativeObject, int bbt);
	/// 设置广告板类型
	/// </summary>
	/// <param name="bbt">广告板类型</param>
	/// <returns></returns>
	public void setBillboardType(com.earthview.world.graphic.BillboardType bbt)
	{
		int bbtParamValue = bbt.getValue();
		setBillboardType_BillboardType(this.nativeObject.pointer, bbtParamValue);
	}
	native private void setBillboardType_BillboardType_NoVirtual(long pNativeObject, int bbt);
	protected void setBillboardType_NoVirtual(com.earthview.world.graphic.BillboardType bbt)
	{
		int bbtParamValue = bbt.getValue();
		setBillboardType_BillboardType_NoVirtual(this.nativeObject.pointer, bbtParamValue);
	}

	protected  int getBillboardType_void_callback()
	{
		com.earthview.world.graphic.BillboardType returnValue = getBillboardType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getBillboardType_void(long pNativeObject);
	/// 获得广告板类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>广告板类型</returns>
	public com.earthview.world.graphic.BillboardType getBillboardType()
	{
		int returnValue = getBillboardType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.BillboardType.toEnum(returnValue);
	}
	native private int getBillboardType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.BillboardType getBillboardType_NoVirtual()
	{
		int returnValue = getBillboardType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.graphic.BillboardType.toEnum(returnValue);
	}

	protected  void setCommonDirection_CVector3_callback(long vec)
	{
		com.earthview.world.spatial.math.Vector3 vecParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		vecParamValue.setDelegate(true);
		vecParamValue.setInstancePointer(new InstancePointer(vec));
		IClassFactory vecParamValueClassFactory = GlobalClassFactoryMap.get(vecParamValue.getCppInstanceTypeName());
		if (vecParamValueClassFactory != null)
		{
			vecParamValue.setDelegate(true);
			vecParamValue = (com.earthview.world.spatial.math.Vector3)vecParamValueClassFactory.create();
			vecParamValue.setDelegate(true);
			vecParamValue.setInstancePointer(new InstancePointer(vec));
		}
		setCommonDirection(vecParamValue);
	}

	native private void setCommonDirection_CVector3(long pNativeObject, long vec);
	/**
	 * 设置通用的方向
	 * @param vec 三维向量
	 */
	public void setCommonDirection(com.earthview.world.spatial.math.Vector3 vec)
	{
		long vecParamValue = vec.nativeObject.pointer;
		setCommonDirection_CVector3(this.nativeObject.pointer, vecParamValue);
	}
	native private void setCommonDirection_CVector3_NoVirtual(long pNativeObject, long vec);
	protected void setCommonDirection_NoVirtual(com.earthview.world.spatial.math.Vector3 vec)
	{
		long vecParamValue = vec.nativeObject.pointer;
		setCommonDirection_CVector3_NoVirtual(this.nativeObject.pointer, vecParamValue);
	}

	protected  long getCommonDirection_void_callback()
	{
		com.earthview.world.spatial.math.Vector3 returnValue = getCommonDirection();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCommonDirection_void(long pNativeObject);
	/**
	 * 获得通用的方向
	 * @param  三维向量
	 * @return 三维向量
	 */
	public com.earthview.world.spatial.math.Vector3 getCommonDirection()
	{
		long returnValue = getCommonDirection_void(this.nativeObject.pointer);
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
	native private long getCommonDirection_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector3 getCommonDirection_NoVirtual()
	{
		long returnValue = getCommonDirection_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setCommonUpVector_CVector3_callback(long vec)
	{
		com.earthview.world.spatial.math.Vector3 vecParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		vecParamValue.setDelegate(true);
		vecParamValue.setInstancePointer(new InstancePointer(vec));
		IClassFactory vecParamValueClassFactory = GlobalClassFactoryMap.get(vecParamValue.getCppInstanceTypeName());
		if (vecParamValueClassFactory != null)
		{
			vecParamValue.setDelegate(true);
			vecParamValue = (com.earthview.world.spatial.math.Vector3)vecParamValueClassFactory.create();
			vecParamValue.setDelegate(true);
			vecParamValue.setInstancePointer(new InstancePointer(vec));
		}
		setCommonUpVector(vecParamValue);
	}

	native private void setCommonUpVector_CVector3(long pNativeObject, long vec);
	/**
	 * 设置通用的上方向
	 * @param vec 三维向量
	 */
	public void setCommonUpVector(com.earthview.world.spatial.math.Vector3 vec)
	{
		long vecParamValue = vec.nativeObject.pointer;
		setCommonUpVector_CVector3(this.nativeObject.pointer, vecParamValue);
	}
	native private void setCommonUpVector_CVector3_NoVirtual(long pNativeObject, long vec);
	protected void setCommonUpVector_NoVirtual(com.earthview.world.spatial.math.Vector3 vec)
	{
		long vecParamValue = vec.nativeObject.pointer;
		setCommonUpVector_CVector3_NoVirtual(this.nativeObject.pointer, vecParamValue);
	}

	protected  long getCommonUpVector_void_callback()
	{
		com.earthview.world.spatial.math.Vector3 returnValue = getCommonUpVector();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCommonUpVector_void(long pNativeObject);
	/**
	 * 获得通用的上方向
	 * @param  三维向量
	 * @return 三维向量
	 */
	public com.earthview.world.spatial.math.Vector3 getCommonUpVector()
	{
		long returnValue = getCommonUpVector_void(this.nativeObject.pointer);
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
	native private long getCommonUpVector_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector3 getCommonUpVector_NoVirtual()
	{
		long returnValue = getCommonUpVector_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setUseAccurateFacing_ev_bool_callback(boolean acc)
	{
		boolean accParamValue = acc;
		setUseAccurateFacing(accParamValue);
	}

	native private void setUseAccurateFacing_ev_bool(long pNativeObject, boolean acc);
	/**
	 * 设置广告板是否使用精确对准
	 * @param acc 是否使用精确模式
	 */
	public void setUseAccurateFacing(boolean acc)
	{
		boolean accParamValue = acc;
		setUseAccurateFacing_ev_bool(this.nativeObject.pointer, accParamValue);
	}
	native private void setUseAccurateFacing_ev_bool_NoVirtual(long pNativeObject, boolean acc);
	protected void setUseAccurateFacing_NoVirtual(boolean acc)
	{
		boolean accParamValue = acc;
		setUseAccurateFacing_ev_bool_NoVirtual(this.nativeObject.pointer, accParamValue);
	}

	protected  boolean getUseAccurateFacing_void_callback()
	{
		boolean returnValue = getUseAccurateFacing();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getUseAccurateFacing_void(long pNativeObject);
	/**
	 * 获得广告板是否使用精确对准
	 * @param  
	 * @return 如果精确返回true，否则false
	 */
	public boolean getUseAccurateFacing()
	{
		boolean returnValue = getUseAccurateFacing_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getUseAccurateFacing_void_NoVirtual(long pNativeObject);
	protected boolean getUseAccurateFacing_NoVirtual()
	{
		boolean returnValue = getUseAccurateFacing_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
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

	protected  void _updateBounds_void_callback()
	{
		_updateBounds();
	}

	native private void _updateBounds_void(long pNativeObject);
	/**
	 * 更新包围盒
	 * @param  
	 */
	public void _updateBounds()
	{
		_updateBounds_void(this.nativeObject.pointer);
	}
	native private void _updateBounds_void_NoVirtual(long pNativeObject);
	protected void _updateBounds_NoVirtual()
	{
		_updateBounds_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void visitRenderables_CVisitor_ev_bool(long pNativeObject, long visitor, boolean debugRenderables);
	/**
	 * 访问可渲染的物体
	 * @param visitor 访问者
	 * @param debugRenderables 是否调试可渲染的物体
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
	/**
	 * 访问可渲染的物体
	 * @param visitor 访问者
	 */
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

	protected  void _sortBillboards_CCamera_callback(long cam)
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
		_sortBillboards(camParamValue);
	}

	native private void _sortBillboards_CCamera(long pNativeObject, long cam);
	/**
	 * 排序
	 * @param cam 摄像机
	 */
	public void _sortBillboards(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		_sortBillboards_CCamera(this.nativeObject.pointer, camParamValue);
	}
	native private void _sortBillboards_CCamera_NoVirtual(long pNativeObject, long cam);
	protected void _sortBillboards_NoVirtual(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		_sortBillboards_CCamera_NoVirtual(this.nativeObject.pointer, camParamValue);
	}

	protected  int _getSortMode_void_callback()
	{
		com.earthview.world.graphic.SortMode returnValue = _getSortMode();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int _getSortMode_void(long pNativeObject);
	/**
	 * 获得排序模式
	 * @param  
	 * @return 分类模式
	 */
	public com.earthview.world.graphic.SortMode _getSortMode()
	{
		int returnValue = _getSortMode_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.SortMode.toEnum(returnValue);
	}
	native private int _getSortMode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.SortMode _getSortMode_NoVirtual()
	{
		int returnValue = _getSortMode_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.graphic.SortMode.toEnum(returnValue);
	}

	protected  void setBillboardsInWorldSpace_ev_bool_callback(boolean ws)
	{
		boolean wsParamValue = ws;
		setBillboardsInWorldSpace(wsParamValue);
	}

	native private void setBillboardsInWorldSpace_ev_bool(long pNativeObject, boolean ws);
	/**
	 * 设置是否把广告板看做世界空间
	 * @param ws 是否
	 */
	public void setBillboardsInWorldSpace(boolean ws)
	{
		boolean wsParamValue = ws;
		setBillboardsInWorldSpace_ev_bool(this.nativeObject.pointer, wsParamValue);
	}
	native private void setBillboardsInWorldSpace_ev_bool_NoVirtual(long pNativeObject, boolean ws);
	protected void setBillboardsInWorldSpace_NoVirtual(boolean ws)
	{
		boolean wsParamValue = ws;
		setBillboardsInWorldSpace_ev_bool_NoVirtual(this.nativeObject.pointer, wsParamValue);
	}

	protected  void setTextureCoords_FloatRect_ev_uint16_callback(long coords, int numCoords)
	{
		com.earthview.world.graphic.FloatRect coordsParamValue = (coords == 0L ? null : new com.earthview.world.graphic.FloatRect(CreatedWhenConstruct.CWC_NotToCreate));
		if(coordsParamValue != null)
		{
		coordsParamValue.setDelegate(true);
		coordsParamValue.setInstancePointer(new InstancePointer(coords));
		IClassFactory coordsParamValueClassFactory = GlobalClassFactoryMap.get(coordsParamValue.getCppInstanceTypeName());
		if (coordsParamValueClassFactory != null)
		{
			coordsParamValue.setDelegate(true);
			coordsParamValue = (com.earthview.world.graphic.FloatRect)coordsParamValueClassFactory.create();
			coordsParamValue.setDelegate(true);
			coordsParamValue.setInstancePointer(new InstancePointer(coords));
		}
		}
		int numCoordsParamValue = numCoords;
		setTextureCoords(coordsParamValue, numCoordsParamValue);
	}

	native private void setTextureCoords_FloatRect_ev_uint16(long pNativeObject, long coords, int numCoords);
	/**
	 * 设置纹理坐标
	 * @param coords 坐标
	 * @param numCoords 坐标数量
	 */
	public void setTextureCoords(com.earthview.world.graphic.FloatRect coords, int numCoords)
	{
		long coordsParamValue = (coords == null ? 0L : coords.nativeObject.pointer);
		int numCoordsParamValue = numCoords;
		setTextureCoords_FloatRect_ev_uint16(this.nativeObject.pointer, coordsParamValue, numCoordsParamValue);
	}
	native private void setTextureCoords_FloatRect_ev_uint16_NoVirtual(long pNativeObject, long coords, int numCoords);
	protected void setTextureCoords_NoVirtual(com.earthview.world.graphic.FloatRect coords, int numCoords)
	{
		long coordsParamValue = (coords == null ? 0L : coords.nativeObject.pointer);
		int numCoordsParamValue = numCoords;
		setTextureCoords_FloatRect_ev_uint16_NoVirtual(this.nativeObject.pointer, coordsParamValue, numCoordsParamValue);
	}

	protected  void setTextureStacksAndSlices_ev_uchar_ev_uchar_callback(short stacks, short slices)
	{
		short stacksParamValue = stacks;
		short slicesParamValue = slices;
		setTextureStacksAndSlices(stacksParamValue, slicesParamValue);
	}

	native private void setTextureStacksAndSlices_ev_uchar_ev_uchar(long pNativeObject, short stacks, short slices);
	/**
	 * 设置纹理堆栈和限幅
	 * @param stacks 堆栈
	 * @param slices 限幅
	 */
	public void setTextureStacksAndSlices(short stacks, short slices)
	{
		short stacksParamValue = stacks;
		short slicesParamValue = slices;
		setTextureStacksAndSlices_ev_uchar_ev_uchar(this.nativeObject.pointer, stacksParamValue, slicesParamValue);
	}
	native private void setTextureStacksAndSlices_ev_uchar_ev_uchar_NoVirtual(long pNativeObject, short stacks, short slices);
	protected void setTextureStacksAndSlices_NoVirtual(short stacks, short slices)
	{
		short stacksParamValue = stacks;
		short slicesParamValue = slices;
		setTextureStacksAndSlices_ev_uchar_ev_uchar_NoVirtual(this.nativeObject.pointer, stacksParamValue, slicesParamValue);
	}

	protected  long getTextureCoords_ev_uint16_callback(long oNumCoords)
	{
		UShortPointer oNumCoordsParamValue = (oNumCoords == 0L ? null : new UShortPointer(new InstancePointer(oNumCoords)));
		com.earthview.world.graphic.FloatRect returnValue = getTextureCoords(oNumCoordsParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTextureCoords_ev_uint16(long pNativeObject, long oNumCoords);
	/**
	 * 获得纹理坐标
	 * @param oNumCoords 坐标编号
	 * @return 纹理坐标
	 */
	public com.earthview.world.graphic.FloatRect getTextureCoords(UShortPointer oNumCoords)
	{
		long oNumCoordsParamValue = (oNumCoords == null ? 0L : oNumCoords.nativeObject.pointer);
		long returnValue = getTextureCoords_ev_uint16(this.nativeObject.pointer, oNumCoordsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.FloatRect __returnValue = new com.earthview.world.graphic.FloatRect(CreatedWhenConstruct.CWC_NotToCreate, "FloatRect");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.FloatRect)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "FloatRect");
		}
		return __returnValue;
	}
	native private long getTextureCoords_ev_uint16_NoVirtual(long pNativeObject, long oNumCoords);
	protected com.earthview.world.graphic.FloatRect getTextureCoords_NoVirtual(UShortPointer oNumCoords)
	{
		long oNumCoordsParamValue = (oNumCoords == null ? 0L : oNumCoords.nativeObject.pointer);
		long returnValue = getTextureCoords_ev_uint16_NoVirtual(this.nativeObject.pointer, oNumCoordsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.FloatRect __returnValue = new com.earthview.world.graphic.FloatRect(CreatedWhenConstruct.CWC_NotToCreate, "FloatRect");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.FloatRect)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "FloatRect");
		}
		return __returnValue;
	}

	protected  void setPointRenderingEnabled_ev_bool_callback(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setPointRenderingEnabled(enabledParamValue);
	}

	native private void setPointRenderingEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置是否启用点渲染模式
	 * @param enabled 是否使用点渲染
	 */
	public void setPointRenderingEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setPointRenderingEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void setPointRenderingEnabled_ev_bool_NoVirtual(long pNativeObject, boolean enabled);
	protected void setPointRenderingEnabled_NoVirtual(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setPointRenderingEnabled_ev_bool_NoVirtual(this.nativeObject.pointer, enabledParamValue);
	}

	protected  boolean isPointRenderingEnabled_void_callback()
	{
		boolean returnValue = isPointRenderingEnabled();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isPointRenderingEnabled_void(long pNativeObject);
	/**
	 * 是否启用点渲染模式
	 * @param  
	 * @return 使用点渲染返回true，否则返回false
	 */
	public boolean isPointRenderingEnabled()
	{
		boolean returnValue = isPointRenderingEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isPointRenderingEnabled_void_NoVirtual(long pNativeObject);
	protected boolean isPointRenderingEnabled_NoVirtual()
	{
		boolean returnValue = isPointRenderingEnabled_void_NoVirtual(this.nativeObject.pointer);
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

	native private void setAutoUpdate_ev_bool(long pNativeObject, boolean autoUpdate);
	/**
	 * 设置自动更新信息
	 * @param autoUpdate 是否自动更新
	 */
	public void setAutoUpdate(boolean autoUpdate)
	{
		boolean autoUpdateParamValue = autoUpdate;
		setAutoUpdate_ev_bool(this.nativeObject.pointer, autoUpdateParamValue);
	}
	native private boolean getAutoUpdate_void(long pNativeObject);
	/**
	 * 获得自动更新信息
	 * @param  
	 * @return 是否自动更新
	 */
	public boolean getAutoUpdate()
	{
		boolean returnValue = getAutoUpdate_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void notifyBillboardDataChanged_void(long pNativeObject);
	/**
	 * 通报广告板信息更改
	 * @param  
	 */
	public void notifyBillboardDataChanged()
	{
		notifyBillboardDataChanged_void(this.nativeObject.pointer);
	}
	native private boolean setSelected_IntVector(long pNativeObject, long objIndics);
	/// <summary>
	/// 设置选中的对象				
	/// <param name="objIndics">选中的对象集合</param>				
	/// <returns></returns>
	public boolean setSelected(com.earthview.world.core.IntVector objIndics)
	{
		long objIndicsParamValue = objIndics.nativeObject.pointer;
		boolean returnValue = setSelected_IntVector(this.nativeObject.pointer, objIndicsParamValue);
		return returnValue;
	}
	native private boolean setSelected_IntVector_NoVirtual(long pNativeObject, long objIndics);
	protected boolean setSelected_NoVirtual(com.earthview.world.core.IntVector objIndics)
	{
		long objIndicsParamValue = objIndics.nativeObject.pointer;
		boolean returnValue = setSelected_IntVector_NoVirtual(this.nativeObject.pointer, objIndicsParamValue);
		return returnValue;
	}

	native private long getSelected_void(long pNativeObject);
	/// <summary>
	/// 获得选中的对象				
	/// <param name=""></param>				
	/// <returns>选中的对象集合</returns>
	public com.earthview.world.core.IntVector getSelected()
	{
		long returnValue = getSelected_void(this.nativeObject.pointer);
		com.earthview.world.core.IntVector __returnValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.IntVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntVector");
		}
		return __returnValue;
	}
	native private long getSelected_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.IntVector getSelected_NoVirtual()
	{
		long returnValue = getSelected_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.IntVector __returnValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.IntVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntVector");
		}
		return __returnValue;
	}

	native private boolean selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(long pNativeObject, long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long point);
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
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long objIndexParamValue = objIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3(this.nativeObject.pointer, rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, pointParamValue);
		return returnValue;
	}
	native private boolean selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_NoVirtual(long pNativeObject, long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long point);
	protected boolean selectBy_NoVirtual(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long objIndexParamValue = objIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_NoVirtual(this.nativeObject.pointer, rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, pointParamValue);
		return returnValue;
	}

	native private boolean selectBy_CAxisAlignedBox_ev_bool_IntVector(long pNativeObject, long aabb, boolean prepareToRenderSelection, long indexVec);
	/**
	 * 盒选择
	 * @param aabb 盒
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param indexVec 选中的对象序号的集合
	 * @return true:物体包围盒与指定盒相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.AxisAlignedBox aabb, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		long aabbParamValue = aabb.nativeObject.pointer;
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long indexVecParamValue = indexVec.nativeObject.pointer;
		boolean returnValue = selectBy_CAxisAlignedBox_ev_bool_IntVector(this.nativeObject.pointer, aabbParamValue, prepareToRenderSelectionParamValue, indexVecParamValue);
		return returnValue;
	}
	native private boolean selectBy_CAxisAlignedBox_ev_bool_IntVector_NoVirtual(long pNativeObject, long aabb, boolean prepareToRenderSelection, long indexVec);
	protected boolean selectBy_NoVirtual(com.earthview.world.spatial.math.AxisAlignedBox aabb, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		long aabbParamValue = aabb.nativeObject.pointer;
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long indexVecParamValue = indexVec.nativeObject.pointer;
		boolean returnValue = selectBy_CAxisAlignedBox_ev_bool_IntVector_NoVirtual(this.nativeObject.pointer, aabbParamValue, prepareToRenderSelectionParamValue, indexVecParamValue);
		return returnValue;
	}

	native private boolean selectBy_CSphere_ev_bool_IntVector(long pNativeObject, long sphere, boolean prepareToRenderSelection, long indexVec);
	/**
	 * 球选择
	 * @param sphere 球
	 * @param prepareToRenderSelection 是否准备渲染选中的对象
	 * @param indexVec 选中的对象序号的集合
	 * @return true:物体包围盒与指定球相交;false:不相交
	 */
	public boolean selectBy(com.earthview.world.spatial.math.Sphere sphere, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		long sphereParamValue = sphere.nativeObject.pointer;
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long indexVecParamValue = indexVec.nativeObject.pointer;
		boolean returnValue = selectBy_CSphere_ev_bool_IntVector(this.nativeObject.pointer, sphereParamValue, prepareToRenderSelectionParamValue, indexVecParamValue);
		return returnValue;
	}
	native private boolean selectBy_CSphere_ev_bool_IntVector_NoVirtual(long pNativeObject, long sphere, boolean prepareToRenderSelection, long indexVec);
	protected boolean selectBy_NoVirtual(com.earthview.world.spatial.math.Sphere sphere, boolean prepareToRenderSelection, com.earthview.world.core.IntVector indexVec)
	{
		long sphereParamValue = sphere.nativeObject.pointer;
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long indexVecParamValue = indexVec.nativeObject.pointer;
		boolean returnValue = selectBy_CSphere_ev_bool_IntVector_NoVirtual(this.nativeObject.pointer, sphereParamValue, prepareToRenderSelectionParamValue, indexVecParamValue);
		return returnValue;
	}

	native private boolean selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(long pNativeObject, long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long submeshIndex, long instanceIndex, long segmentIndex, long point);
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
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long objIndexParamValue = objIndex.nativeObject.pointer;
		long submeshIndexParamValue = submeshIndex.nativeObject.pointer;
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(this.nativeObject.pointer, rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue);
		return returnValue;
	}
	native private boolean selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_NoVirtual(long pNativeObject, long ray, long viewport, boolean prepareToRenderSelection, long objIndex, long submeshIndex, long instanceIndex, long segmentIndex, long point);
	protected boolean selectComponentBy_NoVirtual(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, boolean prepareToRenderSelection, IntegerPointer objIndex, IntegerPointer submeshIndex, IntegerPointer instanceIndex, IntegerPointer segmentIndex, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean prepareToRenderSelectionParamValue = prepareToRenderSelection;
		long objIndexParamValue = objIndex.nativeObject.pointer;
		long submeshIndexParamValue = submeshIndex.nativeObject.pointer;
		long instanceIndexParamValue = instanceIndex.nativeObject.pointer;
		long segmentIndexParamValue = segmentIndex.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_NoVirtual(this.nativeObject.pointer, rayParamValue, viewportParamValue, prepareToRenderSelectionParamValue, objIndexParamValue, submeshIndexParamValue, instanceIndexParamValue, segmentIndexParamValue, pointParamValue);
		return returnValue;
	}

	native private void renderSelection_void(long pNativeObject);
	/**
	 * 绘制选择对象
	 * @param  
	 */
	public void renderSelection()
	{
		renderSelection_void(this.nativeObject.pointer);
	}
	native private void renderSelection_void_NoVirtual(long pNativeObject);
	protected void renderSelection_NoVirtual()
	{
		renderSelection_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void clearSelection_void(long pNativeObject);
	/**
	 * 清除选择
	 * @param  
	 */
	public void clearSelection()
	{
		clearSelection_void(this.nativeObject.pointer);
	}
	native private void clearSelection_void_NoVirtual(long pNativeObject);
	protected void clearSelection_NoVirtual()
	{
		clearSelection_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean getAutoFitCamera_void_callback()
	{
		boolean returnValue = getAutoFitCamera();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getAutoFitCamera_void(long pNativeObject);
	/**
	 * 广告板随相机距离缩放
	 * @param  
	 */
	public boolean getAutoFitCamera()
	{
		boolean returnValue = getAutoFitCamera_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getAutoFitCamera_void_NoVirtual(long pNativeObject);
	protected boolean getAutoFitCamera_NoVirtual()
	{
		boolean returnValue = getAutoFitCamera_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setAutoFitCamera_ev_bool_callback(boolean autofit)
	{
		boolean autofitParamValue = autofit;
		setAutoFitCamera(autofitParamValue);
	}

	native private void setAutoFitCamera_ev_bool(long pNativeObject, boolean autofit);
	public void setAutoFitCamera(boolean autofit)
	{
		boolean autofitParamValue = autofit;
		setAutoFitCamera_ev_bool(this.nativeObject.pointer, autofitParamValue);
	}
	native private void setAutoFitCamera_ev_bool_NoVirtual(long pNativeObject, boolean autofit);
	protected void setAutoFitCamera_NoVirtual(boolean autofit)
	{
		boolean autofitParamValue = autofit;
		setAutoFitCamera_ev_bool_NoVirtual(this.nativeObject.pointer, autofitParamValue);
	}

	protected  double getReduceDistance_void_callback()
	{
		double returnValue = getReduceDistance();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getReduceDistance_void(long pNativeObject);
	/**
	 * 广告板随相机距离缩放，到达一定距离开始缩小,为0表示无穷大
	 * @param  
	 */
	public double getReduceDistance()
	{
		double returnValue = getReduceDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getReduceDistance_void_NoVirtual(long pNativeObject);
	protected double getReduceDistance_NoVirtual()
	{
		double returnValue = getReduceDistance_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setReduceDistance_Real_callback(double reduceDis)
	{
		double reduceDisParamValue = reduceDis;
		setReduceDistance(reduceDisParamValue);
	}

	native private void setReduceDistance_Real(long pNativeObject, double reduceDis);
	public void setReduceDistance(double reduceDis)
	{
		double reduceDisParamValue = reduceDis;
		setReduceDistance_Real(this.nativeObject.pointer, reduceDisParamValue);
	}
	native private void setReduceDistance_Real_NoVirtual(long pNativeObject, double reduceDis);
	protected void setReduceDistance_NoVirtual(double reduceDis)
	{
		double reduceDisParamValue = reduceDis;
		setReduceDistance_Real_NoVirtual(this.nativeObject.pointer, reduceDisParamValue);
	}

	public BillboardSet(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public BillboardSet(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	native protected void register_getMaterial_void(long pNativeObject, String method);
	native protected void register_getRenderOperation_CRenderOperation(long pNativeObject, String method);
	native protected void register_getWorldTransforms_CMatrix4(long pNativeObject, String method);
	native protected void register_getSquaredViewDepth_CCamera(long pNativeObject, String method);
	native protected void register_getLights_void(long pNativeObject, String method);
	native protected void register_getRenderablePtr_void(long pNativeObject, String method);
	native protected void register_increasePool_ev_size_t(long pNativeObject, String method);
	native protected void register_getNumBillboards_void(long pNativeObject, String method);
	native protected void register_setAutoextend_ev_bool(long pNativeObject, String method);
	native protected void register_getAutoextend_void(long pNativeObject, String method);
	native protected void register_setSortingEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_getSortingEnabled_void(long pNativeObject, String method);
	native protected void register_setPoolSize_ev_size_t(long pNativeObject, String method);
	native protected void register_getPoolSize_void(long pNativeObject, String method);
	native protected void register_clear_void(long pNativeObject, String method);
	native protected void register_getBillboard_ev_uint32(long pNativeObject, String method);
	native protected void register_removeBillboard_ev_uint32(long pNativeObject, String method);
	native protected void register_removeBillboard_CBillboard(long pNativeObject, String method);
	native protected void register_setBillboardOrigin_BillboardOrigin(long pNativeObject, String method);
	native protected void register_getBillboardOrigin_void(long pNativeObject, String method);
	native protected void register_setBillboardRotationType_BillboardRotationType(long pNativeObject, String method);
	native protected void register_getBillboardRotationType_void(long pNativeObject, String method);
	native protected void register_setDefaultDimensions_Real_Real(long pNativeObject, String method);
	native protected void register_setDefaultWidth_Real(long pNativeObject, String method);
	native protected void register_getDefaultWidth_void(long pNativeObject, String method);
	native protected void register_setDefaultHeight_Real(long pNativeObject, String method);
	native protected void register_getDefaultHeight_void(long pNativeObject, String method);
	native protected void register_setMaterialName_EVString_EVString(long pNativeObject, String method);
	native protected void register_setMaterialName_EVString(long pNativeObject, String method);
	native protected void register_getMaterialName_void(long pNativeObject, String method);
	native protected void register_setMaterial_CMaterialPtr(long pNativeObject, String method);
	native protected void register__notifyBillboardResized_void(long pNativeObject, String method);
	native protected void register__notifyBillboardRotated_void(long pNativeObject, String method);
	native protected void register_getCullIndividually_void(long pNativeObject, String method);
	native protected void register_setCullIndividually_ev_bool(long pNativeObject, String method);
	native protected void register_setBillboardType_BillboardType(long pNativeObject, String method);
	native protected void register_getBillboardType_void(long pNativeObject, String method);
	native protected void register_setCommonDirection_CVector3(long pNativeObject, String method);
	native protected void register_getCommonDirection_void(long pNativeObject, String method);
	native protected void register_setCommonUpVector_CVector3(long pNativeObject, String method);
	native protected void register_getCommonUpVector_void(long pNativeObject, String method);
	native protected void register_setUseAccurateFacing_ev_bool(long pNativeObject, String method);
	native protected void register_getUseAccurateFacing_void(long pNativeObject, String method);
	native protected void register__updateBounds_void(long pNativeObject, String method);
	native protected void register__sortBillboards_CCamera(long pNativeObject, String method);
	native protected void register__getSortMode_void(long pNativeObject, String method);
	native protected void register_setBillboardsInWorldSpace_ev_bool(long pNativeObject, String method);
	native protected void register_setTextureCoords_FloatRect_ev_uint16(long pNativeObject, String method);
	native protected void register_setTextureStacksAndSlices_ev_uchar_ev_uchar(long pNativeObject, String method);
	native protected void register_getTextureCoords_ev_uint16(long pNativeObject, String method);
	native protected void register_setPointRenderingEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_isPointRenderingEnabled_void(long pNativeObject, String method);
	native protected void register_getAutoFitCamera_void(long pNativeObject, String method);
	native protected void register_setAutoFitCamera_ev_bool(long pNativeObject, String method);
	native protected void register_getReduceDistance_void(long pNativeObject, String method);
	native protected void register_setReduceDistance_Real(long pNativeObject, String method);
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
			this.register_getMaterial_void(this.nativeObject.pointer, "getMaterial_void_callback");
			this.register_getRenderOperation_CRenderOperation(this.nativeObject.pointer, "getRenderOperation_CRenderOperation_callback");
			this.register_getWorldTransforms_CMatrix4(this.nativeObject.pointer, "getWorldTransforms_CMatrix4_callback");
			this.register_getSquaredViewDepth_CCamera(this.nativeObject.pointer, "getSquaredViewDepth_CCamera_callback");
			this.register_getLights_void(this.nativeObject.pointer, "getLights_void_callback");
			this.register_getRenderablePtr_void(this.nativeObject.pointer, "getRenderablePtr_void_callback");
			this.register_increasePool_ev_size_t(this.nativeObject.pointer, "increasePool_ev_size_t_callback");
			this.register_getNumBillboards_void(this.nativeObject.pointer, "getNumBillboards_void_callback");
			this.register_setAutoextend_ev_bool(this.nativeObject.pointer, "setAutoextend_ev_bool_callback");
			this.register_getAutoextend_void(this.nativeObject.pointer, "getAutoextend_void_callback");
			this.register_setSortingEnabled_ev_bool(this.nativeObject.pointer, "setSortingEnabled_ev_bool_callback");
			this.register_getSortingEnabled_void(this.nativeObject.pointer, "getSortingEnabled_void_callback");
			this.register_setPoolSize_ev_size_t(this.nativeObject.pointer, "setPoolSize_ev_size_t_callback");
			this.register_getPoolSize_void(this.nativeObject.pointer, "getPoolSize_void_callback");
			this.register_clear_void(this.nativeObject.pointer, "clear_void_callback");
			this.register_getBillboard_ev_uint32(this.nativeObject.pointer, "getBillboard_ev_uint32_callback");
			this.register_removeBillboard_ev_uint32(this.nativeObject.pointer, "removeBillboard_ev_uint32_callback");
			this.register_removeBillboard_CBillboard(this.nativeObject.pointer, "removeBillboard_CBillboard_callback");
			this.register_setBillboardOrigin_BillboardOrigin(this.nativeObject.pointer, "setBillboardOrigin_BillboardOrigin_callback");
			this.register_getBillboardOrigin_void(this.nativeObject.pointer, "getBillboardOrigin_void_callback");
			this.register_setBillboardRotationType_BillboardRotationType(this.nativeObject.pointer, "setBillboardRotationType_BillboardRotationType_callback");
			this.register_getBillboardRotationType_void(this.nativeObject.pointer, "getBillboardRotationType_void_callback");
			this.register_setDefaultDimensions_Real_Real(this.nativeObject.pointer, "setDefaultDimensions_Real_Real_callback");
			this.register_setDefaultWidth_Real(this.nativeObject.pointer, "setDefaultWidth_Real_callback");
			this.register_getDefaultWidth_void(this.nativeObject.pointer, "getDefaultWidth_void_callback");
			this.register_setDefaultHeight_Real(this.nativeObject.pointer, "setDefaultHeight_Real_callback");
			this.register_getDefaultHeight_void(this.nativeObject.pointer, "getDefaultHeight_void_callback");
			this.register_setMaterialName_EVString_EVString(this.nativeObject.pointer, "setMaterialName_EVString_EVString_callback");
			this.register_setMaterialName_EVString(this.nativeObject.pointer, "setMaterialName_EVString_callback");
			this.register_getMaterialName_void(this.nativeObject.pointer, "getMaterialName_void_callback");
			this.register_setMaterial_CMaterialPtr(this.nativeObject.pointer, "setMaterial_CMaterialPtr_callback");
			this.register__notifyBillboardResized_void(this.nativeObject.pointer, "_notifyBillboardResized_void_callback");
			this.register__notifyBillboardRotated_void(this.nativeObject.pointer, "_notifyBillboardRotated_void_callback");
			this.register_getCullIndividually_void(this.nativeObject.pointer, "getCullIndividually_void_callback");
			this.register_setCullIndividually_ev_bool(this.nativeObject.pointer, "setCullIndividually_ev_bool_callback");
			this.register_setBillboardType_BillboardType(this.nativeObject.pointer, "setBillboardType_BillboardType_callback");
			this.register_getBillboardType_void(this.nativeObject.pointer, "getBillboardType_void_callback");
			this.register_setCommonDirection_CVector3(this.nativeObject.pointer, "setCommonDirection_CVector3_callback");
			this.register_getCommonDirection_void(this.nativeObject.pointer, "getCommonDirection_void_callback");
			this.register_setCommonUpVector_CVector3(this.nativeObject.pointer, "setCommonUpVector_CVector3_callback");
			this.register_getCommonUpVector_void(this.nativeObject.pointer, "getCommonUpVector_void_callback");
			this.register_setUseAccurateFacing_ev_bool(this.nativeObject.pointer, "setUseAccurateFacing_ev_bool_callback");
			this.register_getUseAccurateFacing_void(this.nativeObject.pointer, "getUseAccurateFacing_void_callback");
			this.register__updateBounds_void(this.nativeObject.pointer, "_updateBounds_void_callback");
			this.register__sortBillboards_CCamera(this.nativeObject.pointer, "_sortBillboards_CCamera_callback");
			this.register__getSortMode_void(this.nativeObject.pointer, "_getSortMode_void_callback");
			this.register_setBillboardsInWorldSpace_ev_bool(this.nativeObject.pointer, "setBillboardsInWorldSpace_ev_bool_callback");
			this.register_setTextureCoords_FloatRect_ev_uint16(this.nativeObject.pointer, "setTextureCoords_FloatRect_ev_uint16_callback");
			this.register_setTextureStacksAndSlices_ev_uchar_ev_uchar(this.nativeObject.pointer, "setTextureStacksAndSlices_ev_uchar_ev_uchar_callback");
			this.register_getTextureCoords_ev_uint16(this.nativeObject.pointer, "getTextureCoords_ev_uint16_callback");
			this.register_setPointRenderingEnabled_ev_bool(this.nativeObject.pointer, "setPointRenderingEnabled_ev_bool_callback");
			this.register_isPointRenderingEnabled_void(this.nativeObject.pointer, "isPointRenderingEnabled_void_callback");
			this.register_getAutoFitCamera_void(this.nativeObject.pointer, "getAutoFitCamera_void_callback");
			this.register_setAutoFitCamera_ev_bool(this.nativeObject.pointer, "setAutoFitCamera_ev_bool_callback");
			this.register_getReduceDistance_void(this.nativeObject.pointer, "getReduceDistance_void_callback");
			this.register_setReduceDistance_Real(this.nativeObject.pointer, "setReduceDistance_Real_callback");
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
	
	public static BillboardSet fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		BillboardSet obj = null;
 		if(baseObj instanceof BillboardSet)
		{
			obj = (BillboardSet)baseObj;
		} else {
			obj = new BillboardSet(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CBillboardSet");
			obj.increaseCast();
		}

		return obj;
	}
}
