package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 广告板链类该类总是面向摄像机，作用于一系列的广告板定义广告板链相关操作的类
 */
public class BillboardChain extends com.earthview.world.graphic.MovableObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CBillboardChain", new BillboardChainClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCBillboardChainProxy", new BillboardChainClassFactory());
	}

	/**
	 * 广告板链内部渲染类
	 */
	public static class BillboardChainInternalRenderable extends com.earthview.world.graphic.Renderable {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CBillboardChain::CBillboardChainInternalRenderable", new BillboardChainInternalRenderableClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CBillboardChain::JCBillboardChainInternalRenderableProxy", new BillboardChainInternalRenderableClassFactory());
		}

		/**
		 * 构造函数
		 * @param parent 广告板链指针
		 */
		public BillboardChainInternalRenderable(com.earthview.world.graphic.BillboardChain ref_parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			Create("JCBillboardChainInternalRenderableProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.BillboardChain$BillboardChainInternalRenderable".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private long getMaterial_void(long pNativeObject);
		/**
		 * 获得材质信息
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

		native private double getSquaredViewDepth_CCamera(long pNativeObject, long cam);
		/**
		 * 获得摄像机视场深度的平方
		 * @param cam 摄像机视场
		 * @return 视场大小的值
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

		native private long getMovableObject_void(long pNativeObject);
		///调整位置
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

		public BillboardChainInternalRenderable(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public BillboardChainInternalRenderable(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static BillboardChainInternalRenderable fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			BillboardChainInternalRenderable obj = null;
 			if(baseObj instanceof BillboardChainInternalRenderable)
			{
				obj = (BillboardChainInternalRenderable)baseObj;
			} else {
				obj = new BillboardChainInternalRenderable(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CBillboardChainInternalRenderable");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class BillboardChainInternalRenderableClassFactory implements IClassFactory {
		public BaseObject create()
		{
			BillboardChainInternalRenderable emptyInstance = new BillboardChainInternalRenderable(CreatedWhenConstruct.CWC_NotToCreate);
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
		com.earthview.world.graphic.BillboardChain.BillboardChainInternalRenderable returnValue = getRenderablePtr();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRenderablePtr_void(long pNativeObject);
	public com.earthview.world.graphic.BillboardChain.BillboardChainInternalRenderable getRenderablePtr()
	{
		long returnValue = getRenderablePtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.BillboardChain.BillboardChainInternalRenderable __returnValue = new com.earthview.world.graphic.BillboardChain.BillboardChainInternalRenderable(CreatedWhenConstruct.CWC_NotToCreate, "CBillboardChainInternalRenderable");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.BillboardChain.BillboardChainInternalRenderable)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBillboardChainInternalRenderable");
		}
		return __returnValue;
	}
	native private long getRenderablePtr_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.BillboardChain.BillboardChainInternalRenderable getRenderablePtr_NoVirtual()
	{
		long returnValue = getRenderablePtr_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.BillboardChain.BillboardChainInternalRenderable __returnValue = new com.earthview.world.graphic.BillboardChain.BillboardChainInternalRenderable(CreatedWhenConstruct.CWC_NotToCreate, "CBillboardChainInternalRenderable");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.BillboardChain.BillboardChainInternalRenderable)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBillboardChainInternalRenderable");
		}
		return __returnValue;
	}

	/**
	 * 广告板链元素类该类定义广告板链的元素及其相关操作
	 */
	public static class Element extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CBillboardChain::CElement", new ElementClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public Element() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CElement", null);
		}

		/**
		 * 构造函数
		 * @param pos 三维的位置
		 * @param fWidth 宽度
		 * @param fTexCoord 纹理坐标
		 * @param color 颜色
		 */
		public Element(com.earthview.world.spatial.math.Vector3 pos, double fWidth, double fTexCoord, com.earthview.world.graphic.ColourValue colour, com.earthview.world.spatial.math.Quaternion o) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer posPtr = new BasePointer(pos);
			list.add("pos", posPtr.get());
			BasePointer fWidthPtr = new BasePointer(fWidth);
			list.add("fWidth", fWidthPtr.get());
			BasePointer fTexCoordPtr = new BasePointer(fTexCoord);
			list.add("fTexCoord", fTexCoordPtr.get());
			BasePointer colourPtr = new BasePointer(colour);
			list.add("colour", colourPtr.get());
			BasePointer oPtr = new BasePointer(o);
			list.add("o", oPtr.get());
			Create("CElement", list);
		}

		native private long get_position_void(long pNativeObject);
		public com.earthview.world.spatial.math.Vector3 get_position()
		{
			long jniValue = get_position_void(this.nativeObject.pointer);
			
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
		
		native private void set_position_CVector3 (long pNativeObject, long value);
		public void set_position(com.earthview.world.spatial.math.Vector3 position)
		{
			long positionParamValue = position.nativeObject.pointer;
			
			set_position_CVector3(this.nativeObject.pointer, positionParamValue);
		}
		
		native private double get_width_void(long pNativeObject);
		public double get_width()
		{
			double jniValue = get_width_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_width_Real (long pNativeObject, double value);
		public void set_width(double width)
		{
			double widthParamValue = width;
			
			set_width_Real(this.nativeObject.pointer, widthParamValue);
		}
		
		native private double get_texCoord_void(long pNativeObject);
		public double get_texCoord()
		{
			double jniValue = get_texCoord_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_texCoord_Real (long pNativeObject, double value);
		public void set_texCoord(double texCoord)
		{
			double texCoordParamValue = texCoord;
			
			set_texCoord_Real(this.nativeObject.pointer, texCoordParamValue);
		}
		
		native private long get_colour_void(long pNativeObject);
		public com.earthview.world.graphic.ColourValue get_colour()
		{
			long jniValue = get_colour_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CColourValue");
			}
			return __returnValue;
		}
		
		native private void set_colour_CColourValue (long pNativeObject, long value);
		public void set_colour(com.earthview.world.graphic.ColourValue colour)
		{
			long colourParamValue = colour.nativeObject.pointer;
			
			set_colour_CColourValue(this.nativeObject.pointer, colourParamValue);
		}
		
		native private long get_orientation_void(long pNativeObject);
		public com.earthview.world.spatial.math.Quaternion get_orientation()
		{
			long jniValue = get_orientation_void(this.nativeObject.pointer);
			
			com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
			}
			return __returnValue;
		}
		
		native private void set_orientation_CQuaternion (long pNativeObject, long value);
		public void set_orientation(com.earthview.world.spatial.math.Quaternion orientation)
		{
			long orientationParamValue = orientation.nativeObject.pointer;
			
			set_orientation_CQuaternion(this.nativeObject.pointer, orientationParamValue);
		}
		
		public Element(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Element(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static Element fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Element obj = null;
 			if(baseObj instanceof Element)
			{
				obj = (Element)baseObj;
			} else {
				obj = new Element(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CElement");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ElementClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Element emptyInstance = new Element(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 广告板链元素列表类该类定义广告板链的元素列表相关操作
	 */
	public static class ElementList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CBillboardChain::ElementList", new ElementListClassFactory());
		}

		/**
		 * 构造函数
		 * @param  
		 */
		public ElementList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ElementList", null);
		}

		native private void push_back_CElement(long pNativeObject, long t);
		/**
		 * 在广告板链后面增加一个元素
		 * @param t 增加的元素
		 */
		public void push_back(com.earthview.world.graphic.BillboardChain.Element t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_CElement(this.nativeObject.pointer, tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		/**
		 * 移除广告板链中的某一个元素
		 * @param pos 该移除元素所在迭代器位置
		 */
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		/**
		 * 判断广告板链是否为空
		 * @param  
		 * @return 如果为空返回true，否则false
		 */
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.BillboardChain.Element OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.BillboardChain.Element __returnValue = new com.earthview.world.graphic.BillboardChain.Element(CreatedWhenConstruct.CWC_NotToCreate, "CElement");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.BillboardChain.Element)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CElement");
			}
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.BillboardChain.Element at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.BillboardChain.Element __returnValue = new com.earthview.world.graphic.BillboardChain.Element(CreatedWhenConstruct.CWC_NotToCreate, "CElement");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.BillboardChain.Element)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CElement");
			}
			return __returnValue;
		}
		native private long size_void(long pNativeObject);
		/**
		 * 广告板链存储元素的大小
		 * @param  
		 * @return 当前广告版元素的个数
		 */
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		/**
		 * 调整板链存储元素的大小
		 * @param newSize 新的广告板存储元素的个数
		 */
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void reserve_ev_size_t(long pNativeObject, long count);
		/**
		 * 广告板列表预留存储空间
		 * @param count 预留空间大小
		 */
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		/**
		 * 清空广告板列表中的元素
		 * @param  
		 */
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public ElementList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ElementList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ElementList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ElementList obj = null;
 			if(baseObj instanceof ElementList)
			{
				obj = (ElementList)baseObj;
			} else {
				obj = new ElementList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ElementList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ElementListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ElementList emptyInstance = new ElementList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 构造函数
	 * @param name 名称
	 * @param maxElements 存储元素最大值
	 * @param numberOfChains 元素个数
	 * @param useTextureCoords 是否使用纹理坐标
	 * @param useColours 是否使用了颜色
	 */
	public BillboardChain(String name, long maxElements, long numberOfChains, boolean useTextureCoords, boolean useColours, boolean dynamic) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer maxElementsPtr = new BasePointer(maxElements);
		list.add("maxElements", maxElementsPtr.get());
		BasePointer numberOfChainsPtr = new BasePointer(numberOfChains);
		list.add("numberOfChains", numberOfChainsPtr.get());
		BasePointer useTextureCoordsPtr = new BasePointer(useTextureCoords);
		list.add("useTextureCoords", useTextureCoordsPtr.get());
		BasePointer useColoursPtr = new BasePointer(useColours);
		list.add("useColours", useColoursPtr.get());
		BasePointer dynamicPtr = new BasePointer(dynamic);
		list.add("dynamic", dynamicPtr.get());
		Create("JCBillboardChainProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.BillboardChain".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param name 名称
	 * @param maxElements 存储元素最大值
	 * @param numberOfChains 元素个数
	 * @param useTextureCoords 是否使用纹理坐标
	 * @param useColours 是否使用了颜色
	 */
	public BillboardChain(String name, long maxElements, long numberOfChains, boolean useTextureCoords, boolean useColours) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer maxElementsPtr = new BasePointer(maxElements);
		list.add("maxElements", maxElementsPtr.get());
		BasePointer numberOfChainsPtr = new BasePointer(numberOfChains);
		list.add("numberOfChains", numberOfChainsPtr.get());
		BasePointer useTextureCoordsPtr = new BasePointer(useTextureCoords);
		list.add("useTextureCoords", useTextureCoordsPtr.get());
		BasePointer useColoursPtr = new BasePointer(useColours);
		list.add("useColours", useColoursPtr.get());
		Create("JCBillboardChainProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.BillboardChain".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param name 名称
	 * @param maxElements 存储元素最大值
	 * @param numberOfChains 元素个数
	 * @param useTextureCoords 是否使用纹理坐标
	 */
	public BillboardChain(String name, long maxElements, long numberOfChains, boolean useTextureCoords) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer maxElementsPtr = new BasePointer(maxElements);
		list.add("maxElements", maxElementsPtr.get());
		BasePointer numberOfChainsPtr = new BasePointer(numberOfChains);
		list.add("numberOfChains", numberOfChainsPtr.get());
		BasePointer useTextureCoordsPtr = new BasePointer(useTextureCoords);
		list.add("useTextureCoords", useTextureCoordsPtr.get());
		Create("JCBillboardChainProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.BillboardChain".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param name 名称
	 * @param maxElements 存储元素最大值
	 * @param numberOfChains 元素个数
	 */
	public BillboardChain(String name, long maxElements, long numberOfChains) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer maxElementsPtr = new BasePointer(maxElements);
		list.add("maxElements", maxElementsPtr.get());
		BasePointer numberOfChainsPtr = new BasePointer(numberOfChains);
		list.add("numberOfChains", numberOfChainsPtr.get());
		Create("JCBillboardChainProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.BillboardChain".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param name 名称
	 * @param maxElements 存储元素最大值
	 */
	public BillboardChain(String name, long maxElements) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer maxElementsPtr = new BasePointer(maxElements);
		list.add("maxElements", maxElementsPtr.get());
		Create("JCBillboardChainProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.BillboardChain".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param name 名称
	 */
	public BillboardChain(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCBillboardChainProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.BillboardChain".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void setMaxChainElements_ev_size_t_callback(long maxElements)
	{
		long maxElementsParamValue = maxElements;
		setMaxChainElements(maxElementsParamValue);
	}

	native private void setMaxChainElements_ev_size_t(long pNativeObject, long maxElements);
	/**
	 * 设置链上元素数量的最大值
	 * @param maxElements 最大值
	 */
	public void setMaxChainElements(long maxElements)
	{
		long maxElementsParamValue = maxElements;
		setMaxChainElements_ev_size_t(this.nativeObject.pointer, maxElementsParamValue);
	}
	native private void setMaxChainElements_ev_size_t_NoVirtual(long pNativeObject, long maxElements);
	protected void setMaxChainElements_NoVirtual(long maxElements)
	{
		long maxElementsParamValue = maxElements;
		setMaxChainElements_ev_size_t_NoVirtual(this.nativeObject.pointer, maxElementsParamValue);
	}

	protected  long getMaxChainElements_void_callback()
	{
		long returnValue = getMaxChainElements();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getMaxChainElements_void(long pNativeObject);
	/**
	 * 获得链上元素数量的最大值
	 * @param  
	 * @return 最大值
	 */
	public long getMaxChainElements()
	{
		long returnValue = getMaxChainElements_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMaxChainElements_void_NoVirtual(long pNativeObject);
	protected long getMaxChainElements_NoVirtual()
	{
		long returnValue = getMaxChainElements_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setNumberOfChains_ev_size_t_callback(long numChains)
	{
		long numChainsParamValue = numChains;
		setNumberOfChains(numChainsParamValue);
	}

	native private void setNumberOfChains_ev_size_t(long pNativeObject, long numChains);
	/**
	 * 设置广告板链个数
	 * @param numChains 
	 */
	public void setNumberOfChains(long numChains)
	{
		long numChainsParamValue = numChains;
		setNumberOfChains_ev_size_t(this.nativeObject.pointer, numChainsParamValue);
	}
	native private void setNumberOfChains_ev_size_t_NoVirtual(long pNativeObject, long numChains);
	protected void setNumberOfChains_NoVirtual(long numChains)
	{
		long numChainsParamValue = numChains;
		setNumberOfChains_ev_size_t_NoVirtual(this.nativeObject.pointer, numChainsParamValue);
	}

	protected  long getNumberOfChains_void_callback()
	{
		long returnValue = getNumberOfChains();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getNumberOfChains_void(long pNativeObject);
	/**
	 * 获得广告板链个数
	 * @param  
	 */
	public long getNumberOfChains()
	{
		long returnValue = getNumberOfChains_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getNumberOfChains_void_NoVirtual(long pNativeObject);
	protected long getNumberOfChains_NoVirtual()
	{
		long returnValue = getNumberOfChains_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setUseTextureCoords_ev_bool_callback(boolean use)
	{
		boolean useParamValue = use;
		setUseTextureCoords(useParamValue);
	}

	native private void setUseTextureCoords_ev_bool(long pNativeObject, boolean use);
	/**
	 * 设置是否使用纹理坐标
	 * @param use 是否使用
	 */
	public void setUseTextureCoords(boolean use)
	{
		boolean useParamValue = use;
		setUseTextureCoords_ev_bool(this.nativeObject.pointer, useParamValue);
	}
	native private void setUseTextureCoords_ev_bool_NoVirtual(long pNativeObject, boolean use);
	protected void setUseTextureCoords_NoVirtual(boolean use)
	{
		boolean useParamValue = use;
		setUseTextureCoords_ev_bool_NoVirtual(this.nativeObject.pointer, useParamValue);
	}

	protected  boolean getUseTextureCoords_void_callback()
	{
		boolean returnValue = getUseTextureCoords();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getUseTextureCoords_void(long pNativeObject);
	/**
	 * 判断是否使用纹理坐标
	 * @param  
	 * @return 作用了返回true，否则false
	 */
	public boolean getUseTextureCoords()
	{
		boolean returnValue = getUseTextureCoords_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getUseTextureCoords_void_NoVirtual(long pNativeObject);
	protected boolean getUseTextureCoords_NoVirtual()
	{
		boolean returnValue = getUseTextureCoords_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public enum TexCoordDirection implements INativeEnum<TexCoordDirection> {
		TCD_U(TexCoordDirectionHelper.ENUM_VALUES[0]),
		TCD_V(TexCoordDirectionHelper.ENUM_VALUES[1]);
		private int value;
		TexCoordDirection(int i) {
			this.value = i;
		}
		public TexCoordDirection getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final TexCoordDirection toEnum(int retval) {
			if(retval == TCD_U.value){
				return TCD_U;
			}
			else if(retval == TCD_V.value){
				return TCD_V;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class TexCoordDirectionHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	protected  void setTextureCoordDirection_TexCoordDirection_callback(int dir)
	{
		com.earthview.world.graphic.BillboardChain.TexCoordDirection dirParamValue = com.earthview.world.graphic.BillboardChain.TexCoordDirection.toEnum(dir);
		setTextureCoordDirection(dirParamValue);
	}

	native private void setTextureCoordDirection_TexCoordDirection(long pNativeObject, int dir);
	/**
	 * 设置纹理的坐标方向
	 * @param dir 方向
	 */
	public void setTextureCoordDirection(com.earthview.world.graphic.BillboardChain.TexCoordDirection dir)
	{
		int dirParamValue = dir.getValue();
		setTextureCoordDirection_TexCoordDirection(this.nativeObject.pointer, dirParamValue);
	}
	native private void setTextureCoordDirection_TexCoordDirection_NoVirtual(long pNativeObject, int dir);
	protected void setTextureCoordDirection_NoVirtual(com.earthview.world.graphic.BillboardChain.TexCoordDirection dir)
	{
		int dirParamValue = dir.getValue();
		setTextureCoordDirection_TexCoordDirection_NoVirtual(this.nativeObject.pointer, dirParamValue);
	}

	protected  int getTextureCoordDirection_void_callback()
	{
		com.earthview.world.graphic.BillboardChain.TexCoordDirection returnValue = getTextureCoordDirection();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getTextureCoordDirection_void(long pNativeObject);
	/**
	 * 获得纹理的坐标方向信息
	 * @param  
	 * @return 纹理坐标方向
	 */
	public com.earthview.world.graphic.BillboardChain.TexCoordDirection getTextureCoordDirection()
	{
		int returnValue = getTextureCoordDirection_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.BillboardChain.TexCoordDirection.toEnum(returnValue);
	}
	native private int getTextureCoordDirection_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.BillboardChain.TexCoordDirection getTextureCoordDirection_NoVirtual()
	{
		int returnValue = getTextureCoordDirection_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.graphic.BillboardChain.TexCoordDirection.toEnum(returnValue);
	}

	protected  void setOtherTextureCoordRange_Real_Real_callback(double start, double end)
	{
		double startParamValue = start;
		double endParamValue = end;
		setOtherTextureCoordRange(startParamValue, endParamValue);
	}

	native private void setOtherTextureCoordRange_Real_Real(long pNativeObject, double start, double end);
	/**
	 * 设置其它纹理的坐标范围信息
	 * @param start 开始
	 * @param end 结束
	 */
	public void setOtherTextureCoordRange(double start, double end)
	{
		double startParamValue = start;
		double endParamValue = end;
		setOtherTextureCoordRange_Real_Real(this.nativeObject.pointer, startParamValue, endParamValue);
	}
	native private void setOtherTextureCoordRange_Real_Real_NoVirtual(long pNativeObject, double start, double end);
	protected void setOtherTextureCoordRange_NoVirtual(double start, double end)
	{
		double startParamValue = start;
		double endParamValue = end;
		setOtherTextureCoordRange_Real_Real_NoVirtual(this.nativeObject.pointer, startParamValue, endParamValue);
	}

	protected  void getOtherTextureCoordRange_Real_Real_callback(long start, long end)
	{
		DoublePointer startParamValue = new DoublePointer(new InstancePointer(start));
		DoublePointer endParamValue = new DoublePointer(new InstancePointer(end));
		getOtherTextureCoordRange(startParamValue, endParamValue);
	}

	native private void getOtherTextureCoordRange_Real_Real(long pNativeObject, long start, long end);
	/**
	 * 获得其它纹理的坐标范围信息
	 * @param  
	 * @return 纹理范围
	 */
	public void getOtherTextureCoordRange(DoublePointer start, DoublePointer end)
	{
		long startParamValue = start.nativeObject.pointer;
		long endParamValue = end.nativeObject.pointer;
		getOtherTextureCoordRange_Real_Real(this.nativeObject.pointer, startParamValue, endParamValue);
	}
	native private void getOtherTextureCoordRange_Real_Real_NoVirtual(long pNativeObject, long start, long end);
	protected void getOtherTextureCoordRange_NoVirtual(DoublePointer start, DoublePointer end)
	{
		long startParamValue = start.nativeObject.pointer;
		long endParamValue = end.nativeObject.pointer;
		getOtherTextureCoordRange_Real_Real_NoVirtual(this.nativeObject.pointer, startParamValue, endParamValue);
	}

	protected  void setUseVertexColours_ev_bool_callback(boolean use)
	{
		boolean useParamValue = use;
		setUseVertexColours(useParamValue);
	}

	native private void setUseVertexColours_ev_bool(long pNativeObject, boolean use);
	/**
	 * 设置使用顶点颜色
	 * @param use 是否使用
	 */
	public void setUseVertexColours(boolean use)
	{
		boolean useParamValue = use;
		setUseVertexColours_ev_bool(this.nativeObject.pointer, useParamValue);
	}
	native private void setUseVertexColours_ev_bool_NoVirtual(long pNativeObject, boolean use);
	protected void setUseVertexColours_NoVirtual(boolean use)
	{
		boolean useParamValue = use;
		setUseVertexColours_ev_bool_NoVirtual(this.nativeObject.pointer, useParamValue);
	}

	protected  boolean getUseVertexColours_void_callback()
	{
		boolean returnValue = getUseVertexColours();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getUseVertexColours_void(long pNativeObject);
	/**
	 * 判断是否使用顶点颜色
	 * @param  
	 * @return 使用了返回true，否则返回false
	 */
	public boolean getUseVertexColours()
	{
		boolean returnValue = getUseVertexColours_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getUseVertexColours_void_NoVirtual(long pNativeObject);
	protected boolean getUseVertexColours_NoVirtual()
	{
		boolean returnValue = getUseVertexColours_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setDynamic_ev_bool_callback(boolean dyn)
	{
		boolean dynParamValue = dyn;
		setDynamic(dynParamValue);
	}

	native private void setDynamic_ev_bool(long pNativeObject, boolean dyn);
	/**
	 * 设置缓冲区是否与Dynamic改造信息匹配
	 * @param dyn 是否合适
	 */
	public void setDynamic(boolean dyn)
	{
		boolean dynParamValue = dyn;
		setDynamic_ev_bool(this.nativeObject.pointer, dynParamValue);
	}
	native private void setDynamic_ev_bool_NoVirtual(long pNativeObject, boolean dyn);
	protected void setDynamic_NoVirtual(boolean dyn)
	{
		boolean dynParamValue = dyn;
		setDynamic_ev_bool_NoVirtual(this.nativeObject.pointer, dynParamValue);
	}

	protected  boolean getDynamic_void_callback()
	{
		boolean returnValue = getDynamic();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getDynamic_void(long pNativeObject);
	/**
	 * 判断缓冲区是否与Dynamic改造信息匹配
	 * @param  
	 * @return 合适返回true，否则返回false
	 */
	public boolean getDynamic()
	{
		boolean returnValue = getDynamic_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getDynamic_void_NoVirtual(long pNativeObject);
	protected boolean getDynamic_NoVirtual()
	{
		boolean returnValue = getDynamic_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void addChainElement_ev_size_t_CElement_callback(long chainIndex, long billboardChainElement)
	{
		long chainIndexParamValue = chainIndex;
		com.earthview.world.graphic.BillboardChain.Element billboardChainElementParamValue = new com.earthview.world.graphic.BillboardChain.Element(CreatedWhenConstruct.CWC_NotToCreate);
		billboardChainElementParamValue.setDelegate(true);
		billboardChainElementParamValue.setInstancePointer(new InstancePointer(billboardChainElement));
		IClassFactory billboardChainElementParamValueClassFactory = GlobalClassFactoryMap.get(billboardChainElementParamValue.getCppInstanceTypeName());
		if (billboardChainElementParamValueClassFactory != null)
		{
			billboardChainElementParamValue.setDelegate(true);
			billboardChainElementParamValue = (com.earthview.world.graphic.BillboardChain.Element)billboardChainElementParamValueClassFactory.create();
			billboardChainElementParamValue.setDelegate(true);
			billboardChainElementParamValue.setInstancePointer(new InstancePointer(billboardChainElement));
		}
		addChainElement(chainIndexParamValue, billboardChainElementParamValue);
	}

	native private void addChainElement_ev_size_t_CElement(long pNativeObject, long chainIndex, long billboardChainElement);
	/**
	 * 在元素链最前面增加一个元素
	 * @param chainIndex 链索引
	 * @param billboardChainElement 所增加的元素
	 */
	public void addChainElement(long chainIndex, com.earthview.world.graphic.BillboardChain.Element billboardChainElement)
	{
		long chainIndexParamValue = chainIndex;
		long billboardChainElementParamValue = billboardChainElement.nativeObject.pointer;
		addChainElement_ev_size_t_CElement(this.nativeObject.pointer, chainIndexParamValue, billboardChainElementParamValue);
	}
	native private void addChainElement_ev_size_t_CElement_NoVirtual(long pNativeObject, long chainIndex, long billboardChainElement);
	protected void addChainElement_NoVirtual(long chainIndex, com.earthview.world.graphic.BillboardChain.Element billboardChainElement)
	{
		long chainIndexParamValue = chainIndex;
		long billboardChainElementParamValue = billboardChainElement.nativeObject.pointer;
		addChainElement_ev_size_t_CElement_NoVirtual(this.nativeObject.pointer, chainIndexParamValue, billboardChainElementParamValue);
	}

	protected  void removeChainElement_ev_size_t_callback(long chainIndex)
	{
		long chainIndexParamValue = chainIndex;
		removeChainElement(chainIndexParamValue);
	}

	native private void removeChainElement_ev_size_t(long pNativeObject, long chainIndex);
	/**
	 * 从元素链的尾部移除一个元素
	 * @param chainIndex 链索引
	 */
	public void removeChainElement(long chainIndex)
	{
		long chainIndexParamValue = chainIndex;
		removeChainElement_ev_size_t(this.nativeObject.pointer, chainIndexParamValue);
	}
	native private void removeChainElement_ev_size_t_NoVirtual(long pNativeObject, long chainIndex);
	protected void removeChainElement_NoVirtual(long chainIndex)
	{
		long chainIndexParamValue = chainIndex;
		removeChainElement_ev_size_t_NoVirtual(this.nativeObject.pointer, chainIndexParamValue);
	}

	protected  void updateChainElement_ev_size_t_ev_size_t_CElement_callback(long chainIndex, long elementIndex, long billboardChainElement)
	{
		long chainIndexParamValue = chainIndex;
		long elementIndexParamValue = elementIndex;
		com.earthview.world.graphic.BillboardChain.Element billboardChainElementParamValue = new com.earthview.world.graphic.BillboardChain.Element(CreatedWhenConstruct.CWC_NotToCreate);
		billboardChainElementParamValue.setDelegate(true);
		billboardChainElementParamValue.setInstancePointer(new InstancePointer(billboardChainElement));
		IClassFactory billboardChainElementParamValueClassFactory = GlobalClassFactoryMap.get(billboardChainElementParamValue.getCppInstanceTypeName());
		if (billboardChainElementParamValueClassFactory != null)
		{
			billboardChainElementParamValue.setDelegate(true);
			billboardChainElementParamValue = (com.earthview.world.graphic.BillboardChain.Element)billboardChainElementParamValueClassFactory.create();
			billboardChainElementParamValue.setDelegate(true);
			billboardChainElementParamValue.setInstancePointer(new InstancePointer(billboardChainElement));
		}
		updateChainElement(chainIndexParamValue, elementIndexParamValue, billboardChainElementParamValue);
	}

	native private void updateChainElement_ev_size_t_ev_size_t_CElement(long pNativeObject, long chainIndex, long elementIndex, long billboardChainElement);
	/**
	 * 更新链中的元素
	 * @param chainIndex 链索引
	 * @param elementIndex 元素索引
	 * @param billboardChainElement 用来更新的元素
	 */
	public void updateChainElement(long chainIndex, long elementIndex, com.earthview.world.graphic.BillboardChain.Element billboardChainElement)
	{
		long chainIndexParamValue = chainIndex;
		long elementIndexParamValue = elementIndex;
		long billboardChainElementParamValue = billboardChainElement.nativeObject.pointer;
		updateChainElement_ev_size_t_ev_size_t_CElement(this.nativeObject.pointer, chainIndexParamValue, elementIndexParamValue, billboardChainElementParamValue);
	}
	native private void updateChainElement_ev_size_t_ev_size_t_CElement_NoVirtual(long pNativeObject, long chainIndex, long elementIndex, long billboardChainElement);
	protected void updateChainElement_NoVirtual(long chainIndex, long elementIndex, com.earthview.world.graphic.BillboardChain.Element billboardChainElement)
	{
		long chainIndexParamValue = chainIndex;
		long elementIndexParamValue = elementIndex;
		long billboardChainElementParamValue = billboardChainElement.nativeObject.pointer;
		updateChainElement_ev_size_t_ev_size_t_CElement_NoVirtual(this.nativeObject.pointer, chainIndexParamValue, elementIndexParamValue, billboardChainElementParamValue);
	}

	protected  long getChainElement_ev_size_t_ev_size_t_callback(long chainIndex, long elementIndex)
	{
		long chainIndexParamValue = chainIndex;
		long elementIndexParamValue = elementIndex;
		com.earthview.world.graphic.BillboardChain.Element returnValue = getChainElement(chainIndexParamValue, elementIndexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getChainElement_ev_size_t_ev_size_t(long pNativeObject, long chainIndex, long elementIndex);
	/**
	 * 获得链中的元素
	 * @param chainIndex 链索引
	 * @param elementIndex 元素索引
	 * @return 获得的元素
	 */
	public com.earthview.world.graphic.BillboardChain.Element getChainElement(long chainIndex, long elementIndex)
	{
		long chainIndexParamValue = chainIndex;
		long elementIndexParamValue = elementIndex;
		long returnValue = getChainElement_ev_size_t_ev_size_t(this.nativeObject.pointer, chainIndexParamValue, elementIndexParamValue);
		com.earthview.world.graphic.BillboardChain.Element __returnValue = new com.earthview.world.graphic.BillboardChain.Element(CreatedWhenConstruct.CWC_NotToCreate, "CElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.BillboardChain.Element)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CElement");
		}
		return __returnValue;
	}
	native private long getChainElement_ev_size_t_ev_size_t_NoVirtual(long pNativeObject, long chainIndex, long elementIndex);
	protected com.earthview.world.graphic.BillboardChain.Element getChainElement_NoVirtual(long chainIndex, long elementIndex)
	{
		long chainIndexParamValue = chainIndex;
		long elementIndexParamValue = elementIndex;
		long returnValue = getChainElement_ev_size_t_ev_size_t_NoVirtual(this.nativeObject.pointer, chainIndexParamValue, elementIndexParamValue);
		com.earthview.world.graphic.BillboardChain.Element __returnValue = new com.earthview.world.graphic.BillboardChain.Element(CreatedWhenConstruct.CWC_NotToCreate, "CElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.BillboardChain.Element)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CElement");
		}
		return __returnValue;
	}

	protected  long getNumChainElements_ev_size_t_callback(long chainIndex)
	{
		long chainIndexParamValue = chainIndex;
		long returnValue = getNumChainElements(chainIndexParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getNumChainElements_ev_size_t(long pNativeObject, long chainIndex);
	/**
	 * 获得链中的元素的个数
	 * @param chainIndex 链索引
	 * @return 获得的元素个数
	 */
	public long getNumChainElements(long chainIndex)
	{
		long chainIndexParamValue = chainIndex;
		long returnValue = getNumChainElements_ev_size_t(this.nativeObject.pointer, chainIndexParamValue);
		return returnValue;
	}
	native private long getNumChainElements_ev_size_t_NoVirtual(long pNativeObject, long chainIndex);
	protected long getNumChainElements_NoVirtual(long chainIndex)
	{
		long chainIndexParamValue = chainIndex;
		long returnValue = getNumChainElements_ev_size_t_NoVirtual(this.nativeObject.pointer, chainIndexParamValue);
		return returnValue;
	}

	protected  void clearChain_ev_size_t_callback(long chainIndex)
	{
		long chainIndexParamValue = chainIndex;
		clearChain(chainIndexParamValue);
	}

	native private void clearChain_ev_size_t(long pNativeObject, long chainIndex);
	/**
	 * 清除指定链中的元素但保留元素链
	 * @param chainIndex 链索引
	 */
	public void clearChain(long chainIndex)
	{
		long chainIndexParamValue = chainIndex;
		clearChain_ev_size_t(this.nativeObject.pointer, chainIndexParamValue);
	}
	native private void clearChain_ev_size_t_NoVirtual(long pNativeObject, long chainIndex);
	protected void clearChain_NoVirtual(long chainIndex)
	{
		long chainIndexParamValue = chainIndex;
		clearChain_ev_size_t_NoVirtual(this.nativeObject.pointer, chainIndexParamValue);
	}

	protected  void clearAllChains_void_callback()
	{
		clearAllChains();
	}

	native private void clearAllChains_void(long pNativeObject);
	/**
	 * 清除所有链中的元素但保留元素链
	 * @param  
	 */
	public void clearAllChains()
	{
		clearAllChains_void(this.nativeObject.pointer);
	}
	native private void clearAllChains_void_NoVirtual(long pNativeObject);
	protected void clearAllChains_NoVirtual()
	{
		clearAllChains_void_NoVirtual(this.nativeObject.pointer);
	}

	native private boolean getFaceCamera_void(long pNativeObject);
	/**
	 * 返回是否面向相机
	 * @return 是否面向相机
	 */
	public boolean getFaceCamera()
	{
		boolean returnValue = getFaceCamera_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setFaceCamera_bool_CVector3(long pNativeObject, boolean faceCamera, long normalVector);
	/**
	 * 设置是否面向相机
	 * @param faceCamera 是否面向相机
	 * @param normalVector 当不是面向相机时，则面向的向量
	 */
	public void setFaceCamera(boolean faceCamera, com.earthview.world.spatial.math.Vector3 normalVector)
	{
		boolean faceCameraParamValue = faceCamera;
		long normalVectorParamValue = normalVector.nativeObject.pointer;
		setFaceCamera_bool_CVector3(this.nativeObject.pointer, faceCameraParamValue, normalVectorParamValue);
	}
	native private void setFaceCamera_bool(long pNativeObject, boolean faceCamera);
	/**
	 * 设置是否面向相机
	 * @param faceCamera 是否面向相机
	 */
	public void setFaceCamera(boolean faceCamera)
	{
		boolean faceCameraParamValue = faceCamera;
		setFaceCamera_bool(this.nativeObject.pointer, faceCameraParamValue);
	}
	protected  String getMaterialName_void_callback()
	{
		String returnValue = getMaterialName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getMaterialName_void(long pNativeObject);
	/**
	 * 获得使用的材质名称
	 * @param  
	 * @return 材质名称
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

	protected  void setMaterialName_EVString_EVString_callback(String name, String groupName)
	{
		String nameParamValue = name;
		String groupNameParamValue = groupName;
		setMaterialName(nameParamValue, groupNameParamValue);
	}

	native private void setMaterialName_EVString_EVString(long pNativeObject, String name, String groupName);
	/**
	 * 设置材质名称
	 * @param name 名称
	 * @param groupName 组名称
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
	 * @param name 名称
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

	native private double getBoundingRadius_void(long pNativeObject);
	/**
	 * 获得包围盒半径
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

	native private long getBoundingBox_void(long pNativeObject);
	/**
	 * 获得边框盒
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

	native private void visitRenderables_CVisitor_ev_bool(long pNativeObject, long visitor, boolean debugRenderables);
	/**
	 * 访问可渲染的物体
	 * @param visitor 访问者
	 * @param debugRenderables 是否显示调试的物体
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

	protected  void setupChainContainers_void_callback()
	{
		setupChainContainers();
	}

	native private void setupChainContainers_void(long pNativeObject);
	/**
	 * 创建广告板链容器
	 * @param  
	 */
	public void setupChainContainers()
	{
		setupChainContainers_void(this.nativeObject.pointer);
	}
	native private void setupChainContainers_void_NoVirtual(long pNativeObject);
	protected void setupChainContainers_NoVirtual()
	{
		setupChainContainers_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setupVertexDeclaration_void_callback()
	{
		setupVertexDeclaration();
	}

	native private void setupVertexDeclaration_void(long pNativeObject);
	/**
	 * 创建顶点声明
	 * @param  
	 */
	public void setupVertexDeclaration()
	{
		setupVertexDeclaration_void(this.nativeObject.pointer);
	}
	native private void setupVertexDeclaration_void_NoVirtual(long pNativeObject);
	protected void setupVertexDeclaration_NoVirtual()
	{
		setupVertexDeclaration_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setupBuffers_void_callback()
	{
		setupBuffers();
	}

	native private void setupBuffers_void(long pNativeObject);
	/**
	 * 创建顶点和索引缓冲
	 * @param  
	 */
	public void setupBuffers()
	{
		setupBuffers_void(this.nativeObject.pointer);
	}
	native private void setupBuffers_void_NoVirtual(long pNativeObject);
	protected void setupBuffers_NoVirtual()
	{
		setupBuffers_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void updateVertexBuffer_CCamera_callback(long cam)
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
		updateVertexBuffer(camParamValue);
	}

	native private void updateVertexBuffer_CCamera(long pNativeObject, long cam);
	/**
	 * 更新顶点缓冲
	 * @param cam 摄像机
	 */
	public void updateVertexBuffer(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		updateVertexBuffer_CCamera(this.nativeObject.pointer, camParamValue);
	}
	native private void updateVertexBuffer_CCamera_NoVirtual(long pNativeObject, long cam);
	protected void updateVertexBuffer_NoVirtual(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		updateVertexBuffer_CCamera_NoVirtual(this.nativeObject.pointer, camParamValue);
	}

	protected  void updateIndexBuffer_void_callback()
	{
		updateIndexBuffer();
	}

	native private void updateIndexBuffer_void(long pNativeObject);
	/**
	 * 更新索引缓冲
	 * @param  
	 */
	public void updateIndexBuffer()
	{
		updateIndexBuffer_void(this.nativeObject.pointer);
	}
	native private void updateIndexBuffer_void_NoVirtual(long pNativeObject);
	protected void updateIndexBuffer_NoVirtual()
	{
		updateIndexBuffer_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void updateBoundingBox_void_callback()
	{
		updateBoundingBox();
	}

	native private void updateBoundingBox_void(long pNativeObject);
	/**
	 * 更新限制边框盒
	 * @param  
	 */
	public void updateBoundingBox()
	{
		updateBoundingBox_void(this.nativeObject.pointer);
	}
	native private void updateBoundingBox_void_NoVirtual(long pNativeObject);
	protected void updateBoundingBox_NoVirtual()
	{
		updateBoundingBox_void_NoVirtual(this.nativeObject.pointer);
	}

	public BillboardChain(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public BillboardChain(CreatedWhenConstruct cwc, String classNameStr) {
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
	 * 获取可移动对象的类型标识
	 * @param  
	 */
	public long getTypeFlags()
	{
		return super.getTypeFlags_NoVirtual();
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
	native protected void register_setMaxChainElements_ev_size_t(long pNativeObject, String method);
	native protected void register_getMaxChainElements_void(long pNativeObject, String method);
	native protected void register_setNumberOfChains_ev_size_t(long pNativeObject, String method);
	native protected void register_getNumberOfChains_void(long pNativeObject, String method);
	native protected void register_setUseTextureCoords_ev_bool(long pNativeObject, String method);
	native protected void register_getUseTextureCoords_void(long pNativeObject, String method);
	native protected void register_setTextureCoordDirection_TexCoordDirection(long pNativeObject, String method);
	native protected void register_getTextureCoordDirection_void(long pNativeObject, String method);
	native protected void register_setOtherTextureCoordRange_Real_Real(long pNativeObject, String method);
	native protected void register_getOtherTextureCoordRange_Real_Real(long pNativeObject, String method);
	native protected void register_setUseVertexColours_ev_bool(long pNativeObject, String method);
	native protected void register_getUseVertexColours_void(long pNativeObject, String method);
	native protected void register_setDynamic_ev_bool(long pNativeObject, String method);
	native protected void register_getDynamic_void(long pNativeObject, String method);
	native protected void register_addChainElement_ev_size_t_CElement(long pNativeObject, String method);
	native protected void register_removeChainElement_ev_size_t(long pNativeObject, String method);
	native protected void register_updateChainElement_ev_size_t_ev_size_t_CElement(long pNativeObject, String method);
	native protected void register_getChainElement_ev_size_t_ev_size_t(long pNativeObject, String method);
	native protected void register_getNumChainElements_ev_size_t(long pNativeObject, String method);
	native protected void register_clearChain_ev_size_t(long pNativeObject, String method);
	native protected void register_clearAllChains_void(long pNativeObject, String method);
	native protected void register_getMaterialName_void(long pNativeObject, String method);
	native protected void register_setMaterialName_EVString_EVString(long pNativeObject, String method);
	native protected void register_setMaterialName_EVString(long pNativeObject, String method);
	native protected void register_setupChainContainers_void(long pNativeObject, String method);
	native protected void register_setupVertexDeclaration_void(long pNativeObject, String method);
	native protected void register_setupBuffers_void(long pNativeObject, String method);
	native protected void register_updateVertexBuffer_CCamera(long pNativeObject, String method);
	native protected void register_updateIndexBuffer_void(long pNativeObject, String method);
	native protected void register_updateBoundingBox_void(long pNativeObject, String method);
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
			this.register_setMaxChainElements_ev_size_t(this.nativeObject.pointer, "setMaxChainElements_ev_size_t_callback");
			this.register_getMaxChainElements_void(this.nativeObject.pointer, "getMaxChainElements_void_callback");
			this.register_setNumberOfChains_ev_size_t(this.nativeObject.pointer, "setNumberOfChains_ev_size_t_callback");
			this.register_getNumberOfChains_void(this.nativeObject.pointer, "getNumberOfChains_void_callback");
			this.register_setUseTextureCoords_ev_bool(this.nativeObject.pointer, "setUseTextureCoords_ev_bool_callback");
			this.register_getUseTextureCoords_void(this.nativeObject.pointer, "getUseTextureCoords_void_callback");
			this.register_setTextureCoordDirection_TexCoordDirection(this.nativeObject.pointer, "setTextureCoordDirection_TexCoordDirection_callback");
			this.register_getTextureCoordDirection_void(this.nativeObject.pointer, "getTextureCoordDirection_void_callback");
			this.register_setOtherTextureCoordRange_Real_Real(this.nativeObject.pointer, "setOtherTextureCoordRange_Real_Real_callback");
			this.register_getOtherTextureCoordRange_Real_Real(this.nativeObject.pointer, "getOtherTextureCoordRange_Real_Real_callback");
			this.register_setUseVertexColours_ev_bool(this.nativeObject.pointer, "setUseVertexColours_ev_bool_callback");
			this.register_getUseVertexColours_void(this.nativeObject.pointer, "getUseVertexColours_void_callback");
			this.register_setDynamic_ev_bool(this.nativeObject.pointer, "setDynamic_ev_bool_callback");
			this.register_getDynamic_void(this.nativeObject.pointer, "getDynamic_void_callback");
			this.register_addChainElement_ev_size_t_CElement(this.nativeObject.pointer, "addChainElement_ev_size_t_CElement_callback");
			this.register_removeChainElement_ev_size_t(this.nativeObject.pointer, "removeChainElement_ev_size_t_callback");
			this.register_updateChainElement_ev_size_t_ev_size_t_CElement(this.nativeObject.pointer, "updateChainElement_ev_size_t_ev_size_t_CElement_callback");
			this.register_getChainElement_ev_size_t_ev_size_t(this.nativeObject.pointer, "getChainElement_ev_size_t_ev_size_t_callback");
			this.register_getNumChainElements_ev_size_t(this.nativeObject.pointer, "getNumChainElements_ev_size_t_callback");
			this.register_clearChain_ev_size_t(this.nativeObject.pointer, "clearChain_ev_size_t_callback");
			this.register_clearAllChains_void(this.nativeObject.pointer, "clearAllChains_void_callback");
			this.register_getMaterialName_void(this.nativeObject.pointer, "getMaterialName_void_callback");
			this.register_setMaterialName_EVString_EVString(this.nativeObject.pointer, "setMaterialName_EVString_EVString_callback");
			this.register_setMaterialName_EVString(this.nativeObject.pointer, "setMaterialName_EVString_callback");
			this.register_setupChainContainers_void(this.nativeObject.pointer, "setupChainContainers_void_callback");
			this.register_setupVertexDeclaration_void(this.nativeObject.pointer, "setupVertexDeclaration_void_callback");
			this.register_setupBuffers_void(this.nativeObject.pointer, "setupBuffers_void_callback");
			this.register_updateVertexBuffer_CCamera(this.nativeObject.pointer, "updateVertexBuffer_CCamera_callback");
			this.register_updateIndexBuffer_void(this.nativeObject.pointer, "updateIndexBuffer_void_callback");
			this.register_updateBoundingBox_void(this.nativeObject.pointer, "updateBoundingBox_void_callback");
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
	
	public static BillboardChain fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		BillboardChain obj = null;
 		if(baseObj instanceof BillboardChain)
		{
			obj = (BillboardChain)baseObj;
		} else {
			obj = new BillboardChain(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CBillboardChain");
			obj.increaseCast();
		}

		return obj;
	}
}
