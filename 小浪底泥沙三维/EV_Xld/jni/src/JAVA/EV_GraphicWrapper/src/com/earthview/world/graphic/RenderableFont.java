package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 字体可渲染对象抽象类
 */
public class RenderableFont extends com.earthview.world.graphic.Renderable {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderableFont", new RenderableFontClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCRenderableFontProxy", new RenderableFontClassFactory());
	}

	public RenderableFont() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCRenderableFontProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.RenderableFont".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean preRender_CSceneManager_CRenderSystem(long pNativeObject, long sm, long rsys);
	/**
	 * 参见EarthView::World::Graphic::CRenderable
	 */
	public boolean preRender(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		long rsysParamValue = (rsys == null ? 0L : rsys.nativeObject.pointer);
		boolean returnValue = preRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, smParamValue, rsysParamValue);
		return returnValue;
	}
	native private boolean preRender_CSceneManager_CRenderSystem_NoVirtual(long pNativeObject, long sm, long rsys);
	protected boolean preRender_NoVirtual(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		long rsysParamValue = (rsys == null ? 0L : rsys.nativeObject.pointer);
		boolean returnValue = preRender_CSceneManager_CRenderSystem_NoVirtual(this.nativeObject.pointer, smParamValue, rsysParamValue);
		return returnValue;
	}

	native private void postRender_CSceneManager_CRenderSystem(long pNativeObject, long sm, long rsys);
	public void postRender(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		long rsysParamValue = (rsys == null ? 0L : rsys.nativeObject.pointer);
		postRender_CSceneManager_CRenderSystem(this.nativeObject.pointer, smParamValue, rsysParamValue);
	}
	native private void postRender_CSceneManager_CRenderSystem_NoVirtual(long pNativeObject, long sm, long rsys);
	protected void postRender_NoVirtual(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.RenderSystem rsys)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		long rsysParamValue = (rsys == null ? 0L : rsys.nativeObject.pointer);
		postRender_CSceneManager_CRenderSystem_NoVirtual(this.nativeObject.pointer, smParamValue, rsysParamValue);
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

	protected  void onUpdateRenderQueue_CRenderQueue_ev_uint8_callback(long queue, short renderQueueId)
	{
		com.earthview.world.graphic.RenderQueue queueParamValue = (queue == 0L ? null : new com.earthview.world.graphic.RenderQueue(CreatedWhenConstruct.CWC_NotToCreate));
		if(queueParamValue != null)
		{
		queueParamValue.setDelegate(true);
		queueParamValue.setInstancePointer(new InstancePointer(queue));
		IClassFactory queueParamValueClassFactory = GlobalClassFactoryMap.get(queueParamValue.getCppInstanceTypeName());
		if (queueParamValueClassFactory != null)
		{
			queueParamValue.setDelegate(true);
			queueParamValue = (com.earthview.world.graphic.RenderQueue)queueParamValueClassFactory.create();
			queueParamValue.setDelegate(true);
			queueParamValue.setInstancePointer(new InstancePointer(queue));
		}
		}
		short renderQueueIdParamValue = renderQueueId;
		onUpdateRenderQueue(queueParamValue, renderQueueIdParamValue);
	}

	native private void onUpdateRenderQueue_CRenderQueue_ev_uint8(long pNativeObject, long queue, short renderQueueId);
	/**
	 * 渲染队列更新（由CTextureTextMovable）回调
	 * @param queue 当前渲染队列
	 */
	public void onUpdateRenderQueue(com.earthview.world.graphic.RenderQueue queue, short renderQueueId)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		short renderQueueIdParamValue = renderQueueId;
		onUpdateRenderQueue_CRenderQueue_ev_uint8(this.nativeObject.pointer, queueParamValue, renderQueueIdParamValue);
	}
	native private void onUpdateRenderQueue_CRenderQueue_ev_uint8_NoVirtual(long pNativeObject, long queue, short renderQueueId);
	protected void onUpdateRenderQueue_NoVirtual(com.earthview.world.graphic.RenderQueue queue, short renderQueueId)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		short renderQueueIdParamValue = renderQueueId;
		onUpdateRenderQueue_CRenderQueue_ev_uint8_NoVirtual(this.nativeObject.pointer, queueParamValue, renderQueueIdParamValue);
	}

	protected  void onVisitRenderable_CVisitor_ev_bool_callback(long visitor, boolean debugRenderables)
	{
		com.earthview.world.graphic.Renderable.Visitor visitorParamValue = (visitor == 0L ? null : new com.earthview.world.graphic.Renderable.Visitor(CreatedWhenConstruct.CWC_NotToCreate));
		if(visitorParamValue != null)
		{
		visitorParamValue.setDelegate(true);
		visitorParamValue.setInstancePointer(new InstancePointer(visitor));
		IClassFactory visitorParamValueClassFactory = GlobalClassFactoryMap.get(visitorParamValue.getCppInstanceTypeName());
		if (visitorParamValueClassFactory != null)
		{
			visitorParamValue.setDelegate(true);
			visitorParamValue = (com.earthview.world.graphic.Renderable.Visitor)visitorParamValueClassFactory.create();
			visitorParamValue.setDelegate(true);
			visitorParamValue.setInstancePointer(new InstancePointer(visitor));
		}
		}
		boolean debugRenderablesParamValue = debugRenderables;
		onVisitRenderable(visitorParamValue, debugRenderablesParamValue);
	}

	native private void onVisitRenderable_CVisitor_ev_bool(long pNativeObject, long visitor, boolean debugRenderables);
	/**
	 * 访问Renderable(由CTextureTextMovable)回调
	 * @param visitor 访问者
	 * @param debugRenderables 
	 */
	public void onVisitRenderable(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		boolean debugRenderablesParamValue = debugRenderables;
		onVisitRenderable_CVisitor_ev_bool(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
	}
	native private void onVisitRenderable_CVisitor_ev_bool_NoVirtual(long pNativeObject, long visitor, boolean debugRenderables);
	protected void onVisitRenderable_NoVirtual(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		boolean debugRenderablesParamValue = debugRenderables;
		onVisitRenderable_CVisitor_ev_bool_NoVirtual(this.nativeObject.pointer, visitorParamValue, debugRenderablesParamValue);
	}

	protected  void onAttachedToNode_CNode_callback(long node)
	{
		com.earthview.world.graphic.Node nodeParamValue = (node == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(nodeParamValue != null)
		{
		nodeParamValue.setDelegate(true);
		nodeParamValue.setInstancePointer(new InstancePointer(node));
		IClassFactory nodeParamValueClassFactory = GlobalClassFactoryMap.get(nodeParamValue.getCppInstanceTypeName());
		if (nodeParamValueClassFactory != null)
		{
			nodeParamValue.setDelegate(true);
			nodeParamValue = (com.earthview.world.graphic.Node)nodeParamValueClassFactory.create();
			nodeParamValue.setDelegate(true);
			nodeParamValue.setInstancePointer(new InstancePointer(node));
		}
		}
		onAttachedToNode(nodeParamValue);
	}

	native private void onAttachedToNode_CNode(long pNativeObject, long node);
	/**
	 * 绑定节点
	 */
	public void onAttachedToNode(com.earthview.world.graphic.Node node)
	{
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		onAttachedToNode_CNode(this.nativeObject.pointer, nodeParamValue);
	}
	native private void onAttachedToNode_CNode_NoVirtual(long pNativeObject, long node);
	protected void onAttachedToNode_NoVirtual(com.earthview.world.graphic.Node node)
	{
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		onAttachedToNode_CNode_NoVirtual(this.nativeObject.pointer, nodeParamValue);
	}

	native private void setProjMatrixOffset_Real(long pNativeObject, double val);
	/**
	 * 设置投影矩阵偏移
	 * @param val 偏移值
	 */
	public void setProjMatrixOffset(double val)
	{
		double valParamValue = val;
		setProjMatrixOffset_Real(this.nativeObject.pointer, valParamValue);
	}
	native private void setProjOffsetMaxAngle_ev_real32(long pNativeObject, float val);
	/// <summary>
	/// 设置执行投影矩阵偏移的最大角度
	/// </summary>
	/// <param name="val">角度值<param>
	public void setProjOffsetMaxAngle(float val)
	{
		float valParamValue = val;
		setProjOffsetMaxAngle_ev_real32(this.nativeObject.pointer, valParamValue);
	}
	native private void refresh_CTextureTextStyle_CVector2_CAxisAlignedBox(long pNativeObject, long ref_style, long pen, long aabb);
	/**
	 * 执行renderable自身的所有需要的更新(非线程安全)
	 * @param style 文本风格
	 * @param pen 绘制字体的“笔”在局部坐标系下的位置,将以“笔”作为可渲染字符或文本的左上角起点
	 */
	public void refresh(com.earthview.world.graphic.TextureTextStyle ref_style, com.earthview.world.spatial.math.Vector2 pen, com.earthview.world.spatial.math.AxisAlignedBox aabb)
	{
		long ref_styleParamValue = (ref_style == null ? 0L : ref_style.nativeObject.pointer);
		long penParamValue = pen.nativeObject.pointer;
		long aabbParamValue = aabb.nativeObject.pointer;
		refresh_CTextureTextStyle_CVector2_CAxisAlignedBox(this.nativeObject.pointer, ref_styleParamValue, penParamValue, aabbParamValue);
	}
	native private void forceRefresh_CTextureTextStyle_CVector2_CAxisAlignedBox(long pNativeObject, long ref_style, long pen, long aabb);
	/**
	 * 强制执行renderable自身的所有需要的更新(非线程安全)
	 * @param pen 绘制字体的“笔”在局部坐标系下的位置,将以“笔”作为可渲染字符或文本的左上角起点
	 */
	public void forceRefresh(com.earthview.world.graphic.TextureTextStyle ref_style, com.earthview.world.spatial.math.Vector2 pen, com.earthview.world.spatial.math.AxisAlignedBox aabb)
	{
		long ref_styleParamValue = (ref_style == null ? 0L : ref_style.nativeObject.pointer);
		long penParamValue = pen.nativeObject.pointer;
		long aabbParamValue = aabb.nativeObject.pointer;
		forceRefresh_CTextureTextStyle_CVector2_CAxisAlignedBox(this.nativeObject.pointer, ref_styleParamValue, penParamValue, aabbParamValue);
	}
	native private void bindWorldMaxtrix_CMatrix4(long pNativeObject, long mx4);
	/**
	 * 绑定世界变换矩阵
	 */
	public void bindWorldMaxtrix(com.earthview.world.spatial.math.Matrix4 mx4)
	{
		long mx4ParamValue = (mx4 == null ? 0L : mx4.nativeObject.pointer);
		bindWorldMaxtrix_CMatrix4(this.nativeObject.pointer, mx4ParamValue);
	}
	native private void updateRenderStatus_ev_bool_ev_bool(long pNativeObject, boolean geometryOutOfDate, boolean colorOutOfDate);
	/**
	 * 更新渲染状态
	 */
	public void updateRenderStatus(boolean geometryOutOfDate, boolean colorOutOfDate)
	{
		boolean geometryOutOfDateParamValue = geometryOutOfDate;
		boolean colorOutOfDateParamValue = colorOutOfDate;
		updateRenderStatus_ev_bool_ev_bool(this.nativeObject.pointer, geometryOutOfDateParamValue, colorOutOfDateParamValue);
	}
	protected  void setProjOffsetEnable_ev_bool_callback(boolean enable)
	{
		boolean enableParamValue = enable;
		setProjOffsetEnable(enableParamValue);
	}

	native private void setProjOffsetEnable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 是否开启偏移
	 * @param enable 
	 */
	public void setProjOffsetEnable(boolean enable)
	{
		boolean enableParamValue = enable;
		setProjOffsetEnable_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private void setProjOffsetEnable_ev_bool_NoVirtual(long pNativeObject, boolean enable);
	protected void setProjOffsetEnable_NoVirtual(boolean enable)
	{
		boolean enableParamValue = enable;
		setProjOffsetEnable_ev_bool_NoVirtual(this.nativeObject.pointer, enableParamValue);
	}

	native private boolean getProjOffsetEnable_void(long pNativeObject);
	public boolean getProjOffsetEnable()
	{
		boolean returnValue = getProjOffsetEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  void setDepthCheckEnabled_ev_bool_callback(boolean enable)
	{
		boolean enableParamValue = enable;
		setDepthCheckEnabled(enableParamValue);
	}

	native private void setDepthCheckEnabled_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 是否开启深度测度
	 * @param enable 
	 */
	public void setDepthCheckEnabled(boolean enable)
	{
		boolean enableParamValue = enable;
		setDepthCheckEnabled_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private void setDepthCheckEnabled_ev_bool_NoVirtual(long pNativeObject, boolean enable);
	protected void setDepthCheckEnabled_NoVirtual(boolean enable)
	{
		boolean enableParamValue = enable;
		setDepthCheckEnabled_ev_bool_NoVirtual(this.nativeObject.pointer, enableParamValue);
	}

	native private boolean getDepthCheckEnabled_void(long pNativeObject);
	/**
	 * 获取是否开启深度测度
	 */
	public boolean getDepthCheckEnabled()
	{
		boolean returnValue = getDepthCheckEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	public RenderableFont(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderableFont(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	native protected void register_onUpdateRenderQueue_CRenderQueue_ev_uint8(long pNativeObject, String method);
	native protected void register_onVisitRenderable_CVisitor_ev_bool(long pNativeObject, String method);
	native protected void register_onAttachedToNode_CNode(long pNativeObject, String method);
	native protected void register_setProjOffsetEnable_ev_bool(long pNativeObject, String method);
	native protected void register_setDepthCheckEnabled_ev_bool(long pNativeObject, String method);
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
			this.register_onUpdateRenderQueue_CRenderQueue_ev_uint8(this.nativeObject.pointer, "onUpdateRenderQueue_CRenderQueue_ev_uint8_callback");
			this.register_onVisitRenderable_CVisitor_ev_bool(this.nativeObject.pointer, "onVisitRenderable_CVisitor_ev_bool_callback");
			this.register_onAttachedToNode_CNode(this.nativeObject.pointer, "onAttachedToNode_CNode_callback");
			this.register_setProjOffsetEnable_ev_bool(this.nativeObject.pointer, "setProjOffsetEnable_ev_bool_callback");
			this.register_setDepthCheckEnabled_ev_bool(this.nativeObject.pointer, "setDepthCheckEnabled_ev_bool_callback");
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
	
	public static RenderableFont fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderableFont obj = null;
 		if(baseObj instanceof RenderableFont)
		{
			obj = (RenderableFont)baseObj;
		} else {
			obj = new RenderableFont(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRenderableFont");
			obj.increaseCast();
		}

		return obj;
	}
}
