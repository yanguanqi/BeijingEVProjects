package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 通用场景管理器类
 */
public class CommonSceneManager extends com.earthview.world.graphic.OctreeSceneManager {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CCommonSceneManager", new CommonSceneManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::JCCommonSceneManagerProxy", new CommonSceneManagerClassFactory());
	}

	/**
	 * 构造函数
	 * @param name 通用场景管理器名称
	 */
	public CommonSceneManager(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCCommonSceneManagerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.CommonSceneManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void showOrthAxis_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 显示坐标轴
	 * @param visible 是否显示
	 */
	public void showOrthAxis(boolean visible)
	{
		boolean visibleParamValue = visible;
		showOrthAxis_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private void setAxisPos_CCamera_ScreenLayout(long pNativeObject, long cam, int layout);
	/**
	 * 设置坐标轴位置
	 * @param cam 相机
	 * @param layout 屏幕布局枚举
	 */
	public void setAxisPos(com.earthview.world.graphic.Camera cam, com.earthview.world.spatial3d.FixedElement.ScreenLayout layout)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		int layoutParamValue = layout.getValue();
		setAxisPos_CCamera_ScreenLayout(this.nativeObject.pointer, camParamValue, layoutParamValue);
	}
	native private void setAxisPos_CCamera_ev_int32_ev_int32(long pNativeObject, long cam, int x, int y);
	/**
	 * 设置坐标轴位置
	 * @param cam 相机
	 * @param x x轴坐标
	 * @param y y轴坐标
	 */
	public void setAxisPos(com.earthview.world.graphic.Camera cam, int x, int y)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		int xParamValue = x;
		int yParamValue = y;
		setAxisPos_CCamera_ev_int32_ev_int32(this.nativeObject.pointer, camParamValue, xParamValue, yParamValue);
	}
	native private long getOrthAxis_void(long pNativeObject);
	/**
	 * 获得坐标轴
	 * @return EarthView::World::Geometry3D::COrthaxis,返回坐标轴
	 */
	public com.earthview.world.geometry3d.Orthaxis getOrthAxis()
	{
		long returnValue = getOrthAxis_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.Orthaxis __returnValue = new com.earthview.world.geometry3d.Orthaxis(CreatedWhenConstruct.CWC_NotToCreate, "COrthaxis");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.Orthaxis)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COrthaxis");
		}
		return __returnValue;
	}
	native private void showPlanaGrid_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 显示网格
	 * @param visible 是否显示
	 */
	public void showPlanaGrid(boolean visible)
	{
		boolean visibleParamValue = visible;
		showPlanaGrid_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private long getPlanarGrid_void(long pNativeObject);
	/**
	 * 获得网格
	 * @return EarthView::World::Geometry3D::CPlanargrid,返回网格
	 */
	public com.earthview.world.geometry3d.Planargrid getPlanarGrid()
	{
		long returnValue = getPlanarGrid_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.Planargrid __returnValue = new com.earthview.world.geometry3d.Planargrid(CreatedWhenConstruct.CWC_NotToCreate, "CPlanargrid");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.Planargrid)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPlanargrid");
		}
		return __returnValue;
	}
	native private long getFixElement_void(long pNativeObject);
	/**
	 * 返回固定类指针
	 */
	public com.earthview.world.spatial3d.FixedElement getFixElement()
	{
		long returnValue = getFixElement_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.FixedElement __returnValue = new com.earthview.world.spatial3d.FixedElement(CreatedWhenConstruct.CWC_NotToCreate, "CFixedElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.FixedElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFixedElement");
		}
		return __returnValue;
	}
	native private void setPlanarGridScale_ev_uint32(long pNativeObject, long x);
	/**
	 * 设置网格方阵大小(x*x)
	 * @param x 网格方阵大小(x*x)
	 */
	public void setPlanarGridScale(long x)
	{
		long xParamValue = x;
		setPlanarGridScale_ev_uint32(this.nativeObject.pointer, xParamValue);
	}
	native private void setPlanargridLineLength_ev_uint32(long pNativeObject, long lineLength);
	/**
	 * 设置单位网格长度
	 * @param lineLength 单位网格长度
	 */
	public void setPlanargridLineLength(long lineLength)
	{
		long lineLengthParamValue = lineLength;
		setPlanargridLineLength_ev_uint32(this.nativeObject.pointer, lineLengthParamValue);
	}
	native private void setPlanargridCentreColor_CColourValue(long pNativeObject, long colorValue);
	/**
	 * 设置网格中心十字线颜色
	 * @param colorValue 颜色
	 */
	public void setPlanargridCentreColor(com.earthview.world.graphic.ColourValue colorValue)
	{
		long colorValueParamValue = colorValue.nativeObject.pointer;
		setPlanargridCentreColor_CColourValue(this.nativeObject.pointer, colorValueParamValue);
	}
	native private void setOrthaxisLength_ev_uint32(long pNativeObject, long lenght);
	/**
	 * 设置坐标轴长度
	 * @param lenght 坐标轴长度
	 */
	public void setOrthaxisLength(long lenght)
	{
		long lenghtParamValue = lenght;
		setOrthaxisLength_ev_uint32(this.nativeObject.pointer, lenghtParamValue);
	}
	native private void setMovable_bool(long pNativeObject, boolean flag);
	/**
	 * 设置渲染窗体内对象的可移动属性
	 * @param flag 是否可移动
	 */
	public void setMovable(boolean flag)
	{
		boolean flagParamValue = flag;
		setMovable_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private void setScaleable_bool(long pNativeObject, boolean flag);
	/**
	 * 设置渲染窗体内对象的可缩放属性
	 * @param flag 是否可缩放
	 */
	public void setScaleable(boolean flag)
	{
		boolean flagParamValue = flag;
		setScaleable_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private void setRotatable_bool(long pNativeObject, boolean flag);
	/**
	 * 设置渲染窗体内对象的可旋转属性
	 * @param flag 是否可旋转
	 */
	public void setRotatable(boolean flag)
	{
		boolean flagParamValue = flag;
		setRotatable_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private boolean getMovable_void(long pNativeObject);
	/**
	 * 获得渲染窗体内对象的可移动属性
	 * @return bool,是否可移动
	 */
	public boolean getMovable()
	{
		boolean returnValue = getMovable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getScaleable_void(long pNativeObject);
	/**
	 * 获得渲染窗体内对象的可缩放属性
	 * @return bool,是否可移动
	 */
	public boolean getScaleable()
	{
		boolean returnValue = getScaleable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getRotatable_void(long pNativeObject);
	/**
	 * 获得渲染窗体内对象的可旋转属性
	 * @return bool,是否可旋转
	 */
	public boolean getRotatable()
	{
		boolean returnValue = getRotatable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setOrthoAxisPosition_ScreenLayout(long pNativeObject, int eLayout);
	/**
	 * 设置坐标轴位置
	 * @param eLayout 屏幕布局枚举
	 */
	public void setOrthoAxisPosition(com.earthview.world.spatial3d.FixedElement.ScreenLayout eLayout)
	{
		int eLayoutParamValue = eLayout.getValue();
		setOrthoAxisPosition_ScreenLayout(this.nativeObject.pointer, eLayoutParamValue);
	}
	native private void setOrthoAxisPosition_ev_int32_ev_int32(long pNativeObject, int x, int y);
	/**
	 * 设置坐标轴位置
	 * @param x x轴坐标
	 * @param y y轴坐标
	 */
	public void setOrthoAxisPosition(int x, int y)
	{
		int xParamValue = x;
		int yParamValue = y;
		setOrthoAxisPosition_ev_int32_ev_int32(this.nativeObject.pointer, xParamValue, yParamValue);
	}
	native private String getTypeName_void(long pNativeObject);
	/**
	 * 获得当前场景管理器类型
	 * @return EVString,类型名称
	 */
	public String getTypeName()
	{
		String returnValue = getTypeName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getTypeName_void_NoVirtual(long pNativeObject);
	protected String getTypeName_NoVirtual()
	{
		String returnValue = getTypeName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long createCamera_EVString(long pNativeObject, String name);
	/**
	 * 创建相机
	 * @param name 相机名称
	 * @return EarthView::World::Graphic::CCamera,相机
	 */
	public com.earthview.world.graphic.Camera createCamera(String name)
	{
		String nameParamValue = name;
		long returnValue = createCamera_EVString(this.nativeObject.pointer, nameParamValue);
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
	native private long createCamera_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.Camera createCamera_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = createCamera_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
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

	native private void addMovable_CMovableObject_CVector3(long pNativeObject, long mov, long pos);
	/**
	 * 添加movable
	 * @param mo 要添加的物体
	 * @param pos 物体的位置
	 */
	public void addMovable(com.earthview.world.graphic.MovableObject mov, com.earthview.world.spatial.math.Vector3 pos)
	{
		long movParamValue = (mov == null ? 0L : mov.nativeObject.pointer);
		long posParamValue = pos.nativeObject.pointer;
		addMovable_CMovableObject_CVector3(this.nativeObject.pointer, movParamValue, posParamValue);
	}
	native private void removeMovable_CMovableObject(long pNativeObject, long mov);
	/**
	 * 删除movable
	 * @param mo 要删除的物体
	 */
	public void removeMovable(com.earthview.world.graphic.MovableObject mov)
	{
		long movParamValue = (mov == null ? 0L : mov.nativeObject.pointer);
		removeMovable_CMovableObject(this.nativeObject.pointer, movParamValue);
	}
	native private boolean intersect_CRay_CVector3_CCamera_bool_ev_bool_ev_bool_ev_bool(long pNativeObject, long ray, long intersectPoint, long camera, boolean intersectModel, boolean positiveSide, boolean negativeSide, long modelIntersected);
	/**
	 * 求交
	 * @param ray 射线
	 * @param intersectPoint 射线起始位置
	 * @param camera 相机
	 * @param intersectModel 设置是否与模型求交
	 * @param positiveSide 设置是否正面求交
	 * @param negativeSide 设置是否反面求交
	 * @param modelIntersected 是否与模型相交
	 */
	public boolean intersect(com.earthview.world.spatial.math.Ray ray, com.earthview.world.spatial.math.Vector3 intersectPoint, com.earthview.world.graphic.Camera camera, boolean intersectModel, boolean positiveSide, boolean negativeSide, BooleanPointer modelIntersected)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long intersectPointParamValue = intersectPoint.nativeObject.pointer;
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		boolean intersectModelParamValue = intersectModel;
		boolean positiveSideParamValue = positiveSide;
		boolean negativeSideParamValue = negativeSide;
		long modelIntersectedParamValue = modelIntersected.nativeObject.pointer;
		boolean returnValue = intersect_CRay_CVector3_CCamera_bool_ev_bool_ev_bool_ev_bool(this.nativeObject.pointer, rayParamValue, intersectPointParamValue, cameraParamValue, intersectModelParamValue, positiveSideParamValue, negativeSideParamValue, modelIntersectedParamValue);
		return returnValue;
	}
	native private long mergeAlignedBox_CAxisAlignedBox(long pNativeObject, long rhs);
	/// 平行轴边框盒求并
	/// </summary>
	/// <param name="rhs">平行轴边框盒</param>
	/// <returns></returns>	
	public com.earthview.world.spatial.math.AxisAlignedBox mergeAlignedBox(com.earthview.world.spatial.math.AxisAlignedBox rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		long returnValue = mergeAlignedBox_CAxisAlignedBox(this.nativeObject.pointer, rhsParamValue);
		if(returnValue == 0L) {
			return null;
		}
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
	native private long getWholeAlignedBox_void(long pNativeObject);
	/// 获得求并后的平行轴边框盒
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>	
	public com.earthview.world.spatial.math.AxisAlignedBox getWholeAlignedBox()
	{
		long returnValue = getWholeAlignedBox_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
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
	native private void initWholeAlignedBox_void(long pNativeObject);
	/// 初始化求并的平行轴边框盒
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>	
	public void initWholeAlignedBox()
	{
		initWholeAlignedBox_void(this.nativeObject.pointer);
	}
	native private long getFixELementCameraListener_void(long pNativeObject);
	/**
	 * 获得坐标轴相机Listener
	 */
	public com.earthview.world.spatial3d.FixedElementCameraListener getFixELementCameraListener()
	{
		long returnValue = getFixELementCameraListener_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.FixedElementCameraListener __returnValue = new com.earthview.world.spatial3d.FixedElementCameraListener(CreatedWhenConstruct.CWC_NotToCreate, "CFixedElementCameraListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.FixedElementCameraListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFixedElementCameraListener");
		}
		return __returnValue;
	}
	public CommonSceneManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CommonSceneManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public void _alertVisibleObjects()
	{
		super._alertVisibleObjects_NoVirtual();
	}
	/**
	 * 创建场景节点的实现函数
	 * @param name 节点名称
	 * @return 场景节点
	 */
	public com.earthview.world.graphic.SceneNode createSceneNodeImpl()
	{
		return super.createSceneNodeImpl_NoVirtual();
	}
	public com.earthview.world.graphic.SceneNode createSceneNodeImpl(String name)
	{
		return super.createSceneNodeImpl_NoVirtual(name);
	}
	/**
	 * 初始化渲染队列内部方法
	 * @param  
	 */
	public void initRenderQueue()
	{
		super.initRenderQueue_NoVirtual();
	}
	public com.earthview.world.graphic.Pass deriveShadowCasterPass(com.earthview.world.graphic.Pass pass)
	{
		return super.deriveShadowCasterPass_NoVirtual(pass);
	}
	public com.earthview.world.graphic.Pass deriveShadowReceiverPass(com.earthview.world.graphic.Pass pass)
	{
		return super.deriveShadowReceiverPass_NoVirtual(pass);
	}
	public boolean validatePassForRendering(com.earthview.world.graphic.Pass pass)
	{
		return super.validatePassForRendering_NoVirtual(pass);
	}
	public boolean validateRenderableForRendering(com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.Renderable rend)
	{
		return super.validateRenderableForRendering_NoVirtual(pass, rend);
	}
	public com.earthview.world.graphic.MeshPtr createSkyboxPlane(com.earthview.world.graphic.SceneManager.BoxPlane bp, double distance, com.earthview.world.spatial.math.Quaternion orientation, String groupName)
	{
		return super.createSkyboxPlane_NoVirtual(bp, distance, orientation, groupName);
	}
	public com.earthview.world.graphic.MeshPtr createSkydomePlane(com.earthview.world.graphic.SceneManager.BoxPlane bp, double curvature, double tiling, double distance, com.earthview.world.spatial.math.Quaternion orientation, int xsegments, int ysegments, int ySegmentsToKeep, String groupName)
	{
		return super.createSkydomePlane_NoVirtual(bp, curvature, tiling, distance, orientation, xsegments, ysegments, ySegmentsToKeep, groupName);
	}
	public void useRenderableViewProjMode(com.earthview.world.graphic.Renderable pRend, boolean fixedFunction)
	{
		super.useRenderableViewProjMode_NoVirtual(pRend, fixedFunction);
	}
	public void resetViewProjMode(boolean fixedFunction)
	{
		super.resetViewProjMode_NoVirtual(fixedFunction);
	}
	//// Internal method for firing the queue start event
	public void firePreRenderQueues()
	{
		super.firePreRenderQueues_NoVirtual();
	}
	//// Internal method for firing the queue end event
	public void firePostRenderQueues()
	{
		super.firePostRenderQueues_NoVirtual();
	}
	//// Internal method for firing the queue start event, returns true if queue is to be skipped
	public boolean fireRenderQueueStarted(short id, String invocation)
	{
		return super.fireRenderQueueStarted_NoVirtual(id, invocation);
	}
	//// Internal method for firing the queue end event, returns true if queue is to be repeated
	public boolean fireRenderQueueEnded(short id, String invocation)
	{
		return super.fireRenderQueueEnded_NoVirtual(id, invocation);
	}
	//// Internal method for firing when rendering a single object.
	public void fireRenderSingleObjectStarted(com.earthview.world.graphic.Renderable rend, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.AutoParamDataSource source, com.earthview.world.graphic.LightList pLightList, boolean suppressRenderStateChanges)
	{
		super.fireRenderSingleObjectStarted_NoVirtual(rend, pass, source, pLightList, suppressRenderStateChanges);
	}
	public void fireRenderSingleObjectEnd(com.earthview.world.graphic.Renderable rend, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.AutoParamDataSource source, com.earthview.world.graphic.LightList pLightList, boolean suppressRenderStateChanges)
	{
		super.fireRenderSingleObjectEnd_NoVirtual(rend, pass, source, pLightList, suppressRenderStateChanges);
	}
	//// Internal method for firing the texture shadows updated event
	public void fireShadowTexturesUpdated(long numberOfShadowTextures)
	{
		super.fireShadowTexturesUpdated_NoVirtual(numberOfShadowTextures);
	}
	//// Internal method for firing the pre caster texture shadows event
	public void fireShadowTexturesPreCaster(com.earthview.world.graphic.Light light, com.earthview.world.graphic.Camera camera, long iteration)
	{
		super.fireShadowTexturesPreCaster_NoVirtual(light, camera, iteration);
	}
	//// Internal method for firing the pre receiver texture shadows event
	public void fireShadowTexturesPreReceiver(com.earthview.world.graphic.Light light, com.earthview.world.graphic.Frustum f)
	{
		super.fireShadowTexturesPreReceiver_NoVirtual(light, f);
	}
	///zxt add for v1.8
	//// Internal method for firing pre update scene graph event
	public void firePreUpdateSceneGraph(com.earthview.world.graphic.Camera camera)
	{
		super.firePreUpdateSceneGraph_NoVirtual(camera);
	}
	//// Internal method for firing post update scene graph event
	public void firePostUpdateSceneGraph(com.earthview.world.graphic.Camera camera)
	{
		super.firePostUpdateSceneGraph_NoVirtual(camera);
	}
	//// Internal method for firing find visible objects event
	public void firePreFindVisibleObjects(com.earthview.world.graphic.Viewport v)
	{
		super.firePreFindVisibleObjects_NoVirtual(v);
	}
	//// Internal method for firing find visible objects event
	public void firePostFindVisibleObjects(com.earthview.world.graphic.Viewport v)
	{
		super.firePostFindVisibleObjects_NoVirtual(v);
	}
	//// Internal method for firing destruction event
	public void fireSceneManagerDestroyed()
	{
		super.fireSceneManagerDestroyed_NoVirtual();
	}
	public void setViewport(com.earthview.world.graphic.Viewport vp)
	{
		super.setViewport_NoVirtual(vp);
	}
	public void renderVisibleObjectsDefaultSequence()
	{
		super.renderVisibleObjectsDefaultSequence_NoVirtual();
	}
	public void renderVisibleObjectsCustomSequence(com.earthview.world.graphic.RenderQueueInvocationSequence s)
	{
		super.renderVisibleObjectsCustomSequence_NoVirtual(s);
	}
	public void prepareRenderQueue()
	{
		super.prepareRenderQueue_NoVirtual();
	}
	public void renderSingleObject(com.earthview.world.graphic.Renderable rend, com.earthview.world.graphic.Pass pass, boolean lightScissoringClipping, boolean doLightIteration, com.earthview.world.graphic.LightList manualLightList)
	{
		super.renderSingleObject_NoVirtual(rend, pass, lightScissoringClipping, doLightIteration, manualLightList);
	}
	public void renderSingleObject(com.earthview.world.graphic.Renderable rend, com.earthview.world.graphic.Pass pass, boolean lightScissoringClipping, boolean doLightIteration)
	{
		super.renderSingleObject_NoVirtual(rend, pass, lightScissoringClipping, doLightIteration);
	}
	public com.earthview.world.graphic.AutoParamDataSource createAutoParamDataSource()
	{
		return super.createAutoParamDataSource_NoVirtual();
	}
	public void findLightsAffectingFrustum(com.earthview.world.graphic.Camera camera)
	{
		super.findLightsAffectingFrustum_NoVirtual(camera);
	}
	//// Internal method for setting up materials for shadows
	public void initShadowVolumeMaterials()
	{
		super.initShadowVolumeMaterials_NoVirtual();
	}
	//// Internal method for creating shadow textures (texture-based shadows)
	public void ensureShadowTexturesCreated()
	{
		super.ensureShadowTexturesCreated_NoVirtual();
	}
	//// Internal method for destroying shadow textures (texture-based shadows)
	public void destroyShadowTextures()
	{
		super.destroyShadowTextures_NoVirtual();
	}
	/**
	 * 准备阴影纹理
	 * @param cam 摄像机
	 * @param vp 视口
	 * @param lightList 光源列表，默认为空
	 */
	public void prepareShadowTextures(com.earthview.world.graphic.Camera cam, com.earthview.world.graphic.Viewport vp, com.earthview.world.graphic.LightList lightList)
	{
		super.prepareShadowTextures_NoVirtual(cam, vp, lightList);
	}
	public void prepareShadowTextures(com.earthview.world.graphic.Camera cam, com.earthview.world.graphic.Viewport vp)
	{
		super.prepareShadowTextures_NoVirtual(cam, vp);
	}
	public void setImageDefaultMaterial(com.earthview.world.graphic.MaterialPtr matPtr)
	{
		super.setImageDefaultMaterial_NoVirtual(matPtr);
	}
	public void setImageUseDefaultMaterial(boolean useDefaultMat)
	{
		super.setImageUseDefaultMaterial_NoVirtual(useDefaultMat);
	}
	public com.earthview.world.spatial.math.Vector3 getSunPosition()
	{
		return super.getSunPosition_NoVirtual();
	}
	public void setAtmosphereVisible(boolean visible)
	{
		super.setAtmosphereVisible_NoVirtual(visible);
	}
	public void storeAtmosphereVisibleState()
	{
		super.storeAtmosphereVisibleState_NoVirtual();
	}
	public void restoreAtmosphereVisibleState()
	{
		super.restoreAtmosphereVisibleState_NoVirtual();
	}
	public void setSunVisible(boolean flag)
	{
		super.setSunVisible_NoVirtual(flag);
	}
	/**
	 * 暂停渲染
	 * @param  
	 */
	public com.earthview.world.graphic.SceneManager.RenderContext _pauseRendering()
	{
		return super._pauseRendering_NoVirtual();
	}
	/**
	 * 继续渲染
	 * @param context 渲染环境
	 */
	public void _resumeRendering(com.earthview.world.graphic.SceneManager.RenderContext context)
	{
		super._resumeRendering_NoVirtual(context);
	}
	/**
	 * 将阴影锥绘制到模板缓冲内部方法
	 * @param light 光源
	 * @param cam 摄像机
	 * @param calcScissor 是否对方法进行修改，如果为false，则已经被修改
	 */
	public void renderShadowVolumesToStencil(com.earthview.world.graphic.Light light, com.earthview.world.graphic.Camera cam, boolean calcScissor)
	{
		super.renderShadowVolumesToStencil_NoVirtual(light, cam, calcScissor);
	}
	/**
	 * 设置阴影锥使用模板缓冲的参数
	 * @param context 渲染环境
	 */
	public void setShadowVolumeStencilState(boolean secondpass, boolean zfail, boolean twosided)
	{
		super.setShadowVolumeStencilState_NoVirtual(secondpass, zfail, twosided);
	}
	public com.earthview.world.graphic.SceneManager.ShadowCasterList findShadowCastersForLight(com.earthview.world.graphic.Light light, com.earthview.world.graphic.Camera camera)
	{
		return super.findShadowCastersForLight_NoVirtual(light, camera);
	}
	public void renderBasicQueueGroupObjects(com.earthview.world.graphic.RenderQueueGroup pGroup, com.earthview.world.graphic.QueuedRenderableCollection.OrganisationMode om)
	{
		super.renderBasicQueueGroupObjects_NoVirtual(pGroup, om);
	}
	public void renderAdditiveStencilShadowedQueueGroupObjects(com.earthview.world.graphic.RenderQueueGroup group, com.earthview.world.graphic.QueuedRenderableCollection.OrganisationMode om)
	{
		super.renderAdditiveStencilShadowedQueueGroupObjects_NoVirtual(group, om);
	}
	public void renderModulativeStencilShadowedQueueGroupObjects(com.earthview.world.graphic.RenderQueueGroup group, com.earthview.world.graphic.QueuedRenderableCollection.OrganisationMode om)
	{
		super.renderModulativeStencilShadowedQueueGroupObjects_NoVirtual(group, om);
	}
	public void renderTextureShadowCasterQueueGroupObjects(com.earthview.world.graphic.RenderQueueGroup group, com.earthview.world.graphic.QueuedRenderableCollection.OrganisationMode om)
	{
		super.renderTextureShadowCasterQueueGroupObjects_NoVirtual(group, om);
	}
	public void renderTextureShadowReceiverQueueGroupObjects(com.earthview.world.graphic.RenderQueueGroup group, com.earthview.world.graphic.QueuedRenderableCollection.OrganisationMode om)
	{
		super.renderTextureShadowReceiverQueueGroupObjects_NoVirtual(group, om);
	}
	public void renderModulativeTextureShadowedQueueGroupObjects(com.earthview.world.graphic.RenderQueueGroup group, com.earthview.world.graphic.QueuedRenderableCollection.OrganisationMode om)
	{
		super.renderModulativeTextureShadowedQueueGroupObjects_NoVirtual(group, om);
	}
	public void renderAdditiveTextureShadowedQueueGroupObjects(com.earthview.world.graphic.RenderQueueGroup group, com.earthview.world.graphic.QueuedRenderableCollection.OrganisationMode om)
	{
		super.renderAdditiveTextureShadowedQueueGroupObjects_NoVirtual(group, om);
	}
	///virtual void renderObjects(const EarthView::World::Graphic::CQueuedRenderableCollection& objs,
	///	EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om, ev_bool lightScissoringClipping,
	///	ev_bool doLightIteration, const EarthView::World::Graphic::LightList* manualLightList = 0);
	public void renderObjects(com.earthview.world.graphic.QueuedRenderableCollection objs, com.earthview.world.graphic.QueuedRenderableCollection.OrganisationMode om, boolean lightScissoringClipping, boolean doLightIteration, com.earthview.world.graphic.LightList manualLightList)
	{
		super.renderObjects_NoVirtual(objs, om, lightScissoringClipping, doLightIteration, manualLightList);
	}
	public void renderObjects(com.earthview.world.graphic.QueuedRenderableCollection objs, com.earthview.world.graphic.QueuedRenderableCollection.OrganisationMode om, boolean lightScissoringClipping, boolean doLightIteration)
	{
		super.renderObjects_NoVirtual(objs, om, lightScissoringClipping, doLightIteration);
	}
	///virtual void renderTransparentShadowCasterObjects(const EarthView::World::Graphic::CQueuedRenderableCollection& objs,
	///	EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om, ev_bool lightScissoringClipping,
	///	ev_bool doLightIteration, const EarthView::World::Graphic::LightList* manualLightList = 0);
	public void renderTransparentShadowCasterObjects(com.earthview.world.graphic.QueuedRenderableCollection objs, com.earthview.world.graphic.QueuedRenderableCollection.OrganisationMode om, boolean lightScissoringClipping, boolean doLightIteration, com.earthview.world.graphic.LightList manualLightList)
	{
		super.renderTransparentShadowCasterObjects_NoVirtual(objs, om, lightScissoringClipping, doLightIteration, manualLightList);
	}
	public void renderTransparentShadowCasterObjects(com.earthview.world.graphic.QueuedRenderableCollection objs, com.earthview.world.graphic.QueuedRenderableCollection.OrganisationMode om, boolean lightScissoringClipping, boolean doLightIteration)
	{
		super.renderTransparentShadowCasterObjects_NoVirtual(objs, om, lightScissoringClipping, doLightIteration);
	}
	public void updateRenderQueueSplitOptions()
	{
		super.updateRenderQueueSplitOptions_NoVirtual();
	}
	public void updateRenderQueueGroupSplitOptions(com.earthview.world.graphic.RenderQueueGroup group, boolean suppressShadows, boolean suppressRenderState)
	{
		super.updateRenderQueueGroupSplitOptions_NoVirtual(group, suppressShadows, suppressRenderState);
	}
	//// Set up a scissor rectangle from a group of lights
	public com.earthview.world.graphic.ClipResult buildAndSetScissor(com.earthview.world.graphic.LightList ll, com.earthview.world.graphic.Camera cam)
	{
		return super.buildAndSetScissor_NoVirtual(ll, cam);
	}
	//// Update a scissor rectangle from a single light
	public void buildScissor(com.earthview.world.graphic.Light l, com.earthview.world.graphic.Camera cam, com.earthview.world.graphic.RealRect rect)
	{
		super.buildScissor_NoVirtual(l, cam, rect);
	}
	public void resetScissor()
	{
		super.resetScissor_NoVirtual();
	}
	//// Build a set of user clip planes from a single non-directional light
	public com.earthview.world.graphic.ClipResult buildAndSetLightClip(com.earthview.world.graphic.LightList ll)
	{
		return super.buildAndSetLightClip_NoVirtual(ll);
	}
	public void buildLightClip(com.earthview.world.graphic.Light l, com.earthview.world.spatial.math.PlaneList planes)
	{
		super.buildLightClip_NoVirtual(l, planes);
	}
	public void resetLightClip()
	{
		super.resetLightClip_NoVirtual();
	}
	public void checkCachedLightClippingInfo()
	{
		super.checkCachedLightClippingInfo_NoVirtual();
	}
	public void useLights(com.earthview.world.graphic.LightList lights, int limit)
	{
		super.useLights_NoVirtual(lights, limit);
	}
	public void setViewMatrix(com.earthview.world.spatial.math.Matrix4 m)
	{
		super.setViewMatrix_NoVirtual(m);
	}
	public void useLightsGpuProgram(com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.LightList lights)
	{
		super.useLightsGpuProgram_NoVirtual(pass, lights);
	}
	public void bindGpuProgram(com.earthview.world.graphic.GpuProgram prog)
	{
		super.bindGpuProgram_NoVirtual(prog);
	}
	public void updateGpuProgramParameters(com.earthview.world.graphic.Pass p)
	{
		super.updateGpuProgramParameters_NoVirtual(p);
	}
	/**
	 * 通过摄像机名称获得摄像机
	 * @param name 名称
	 * @return 名称值
	 */
	public com.earthview.world.graphic.Camera getCamera(String name)
	{
		return super.getCamera_NoVirtual(name);
	}
	/**
	 * 判断指定名称的摄像机是否存在
	 * @param name 名称
	 * @return 成功，返回此名称，不成功，返回空
	 */
	public boolean hasCamera(String name)
	{
		return super.hasCamera_NoVirtual(name);
	}
	/**
	 * 通过指针删除场景中的摄像机
	 * @param cam 指向摄像机的指针
	 */
	public void destroyCamera(com.earthview.world.graphic.Camera cam)
	{
		super.destroyCamera_NoVirtual(cam);
	}
	/**
	 * 通过名称删除场景中的摄像机
	 * @param name 名称
	 */
	public void destroyCamera(String name)
	{
		super.destroyCamera_NoVirtual(name);
	}
	/**
	 * 删除场景中的所有摄像机
	 * @param  名称
	 */
	public void destroyAllCameras()
	{
		super.destroyAllCameras_NoVirtual();
	}
	/**
	 * 创建光源光源可以创建在固定点，或者挂接在场景节点
	 * @param name 新创建的光源名称
	 */
	public com.earthview.world.graphic.Light createLight(String name)
	{
		return super.createLight_NoVirtual(name);
	}
	/**
	 * 创建光源
	 * @param  
	 */
	public com.earthview.world.graphic.Light createLight()
	{
		return super.createLight_NoVirtual();
	}
	/**
	 * 获取由场景管理器创建的光源的数量
	 * @param  
	 */
	public int getLightCount()
	{
		return super.getLightCount_NoVirtual();
	}
	/**
	 * 通过序号获取光源
	 * @param index 序号
	 */
	public com.earthview.world.graphic.Light getLight(int index)
	{
		return super.getLight_NoVirtual(index);
	}
	/**
	 * 通过名称获取光源
	 * @param name 光源名称
	 */
	public com.earthview.world.graphic.Light getLight(String name)
	{
		return super.getLight_NoVirtual(name);
	}
	/**
	 * 判断是否存在给定名称的光源
	 * @param name 光源名称
	 */
	public boolean hasLight(String name)
	{
		return super.hasLight_NoVirtual(name);
	}
	/**
	 * 获取光源有效照射区域的裁剪面
	 * @param l 光源
	 */
	public com.earthview.world.spatial.math.PlaneList getLightClippingPlanes(com.earthview.world.graphic.Light l)
	{
		return super.getLightClippingPlanes_NoVirtual(l);
	}
	/**
	 * 设置光源和相机作用的裁剪矩形
	 * @param  
	 */
	public com.earthview.world.graphic.RealRect getLightScissorRect(com.earthview.world.graphic.Light l, com.earthview.world.graphic.Camera cam)
	{
		return super.getLightScissorRect_NoVirtual(l, cam);
	}
	/**
	 * 销毁指定的光源
	 * @param  
	 */
	public void destroyLight(String name)
	{
		super.destroyLight_NoVirtual(name);
	}
	public void destroyLight(com.earthview.world.graphic.Light light)
	{
		super.destroyLight_NoVirtual(light);
	}
	/**
	 * 销毁所有光源
	 * @param  
	 */
	public void destroyAllLights()
	{
		super.destroyAllLights_NoVirtual();
	}
	public String getSoftShadowTexName()
	{
		return super.getSoftShadowTexName_NoVirtual();
	}
	public com.earthview.world.graphic.Camera getShadowTexCam()
	{
		return super.getShadowTexCam_NoVirtual();
	}
	public com.earthview.world.spatial.math.Matrix4 getSoftShadowProjMatrix(int index)
	{
		return super.getSoftShadowProjMatrix_NoVirtual(index);
	}
	public com.earthview.world.spatial.math.Vector4 getCascadeEyeSpaceDepthArray()
	{
		return super.getCascadeEyeSpaceDepthArray_NoVirtual();
	}
	public float getSoftShadowNearClip(short index)
	{
		return super.getSoftShadowNearClip_NoVirtual(index);
	}
	public float getSoftShadowFarClip(short index)
	{
		return super.getSoftShadowFarClip_NoVirtual(index);
	}
	public boolean getIsUseSoftShadowFitToCascadesMode()
	{
		return super.getIsUseSoftShadowFitToCascadesMode_NoVirtual();
	}
	public void setIsUseSoftShadowFitToCascadesMode(boolean flag)
	{
		super.setIsUseSoftShadowFitToCascadesMode_NoVirtual(flag);
	}
	public short getCurrentClipIndex()
	{
		return super.getCurrentClipIndex_NoVirtual();
	}
	public boolean getIsUseSoftShadowTechnique()
	{
		return super.getIsUseSoftShadowTechnique_NoVirtual();
	}
	public void setIsUseSoftShadowTechnique(boolean flag)
	{
		super.setIsUseSoftShadowTechnique_NoVirtual(flag);
	}
	public float getCascadePartitionsPercent()
	{
		return super.getCascadePartitionsPercent_NoVirtual();
	}
	public void setCascadePartitionsPercent(float percent)
	{
		super.setCascadePartitionsPercent_NoVirtual(percent);
	}
	public int getCascadePartitionsDistance(short index)
	{
		return super.getCascadePartitionsDistance_NoVirtual(index);
	}
	public void setCascadePartitionsDistance(short index, short distance)
	{
		super.setCascadePartitionsDistance_NoVirtual(index, distance);
	}
	public com.earthview.world.graphic.PixelFormat getSoftShadowOffsetFormat()
	{
		return super.getSoftShadowOffsetFormat_NoVirtual();
	}
	public void checkShadowCasterInFrustum(com.earthview.world.graphic.Camera camera)
	{
		super.checkShadowCasterInFrustum_NoVirtual(camera);
	}
	public boolean hasShadowCasterInFrustum()
	{
		return super.hasShadowCasterInFrustum_NoVirtual();
	}
	public double getSoftShadowLightBleedPower()
	{
		return super.getSoftShadowLightBleedPower_NoVirtual();
	}
	public void setSoftShadowLightBleedPower(double power)
	{
		super.setSoftShadowLightBleedPower_NoVirtual(power);
	}
	public double getSoftShadowDepthOffset()
	{
		return super.getSoftShadowDepthOffset_NoVirtual();
	}
	public void setSoftShadowDepthOffset(double offset)
	{
		super.setSoftShadowDepthOffset_NoVirtual(offset);
	}
	public float getSoftShadowNormalFactor()
	{
		return super.getSoftShadowNormalFactor_NoVirtual();
	}
	public void setSoftShadowNormalFactor(float factor)
	{
		super.setSoftShadowNormalFactor_NoVirtual(factor);
	}
	public void _notifyLightsDirty()
	{
		super._notifyLightsDirty_NoVirtual();
	}
	public com.earthview.world.graphic.LightList _getLightsAffectingFrustum()
	{
		return super._getLightsAffectingFrustum_NoVirtual();
	}
	public void _populateLightList(com.earthview.world.spatial.math.Vector3 position, double radius, com.earthview.world.graphic.LightList destList, long lightMask)
	{
		super._populateLightList_NoVirtual(position, radius, destList, lightMask);
	}
	public void _populateLightList(com.earthview.world.spatial.math.Vector3 position, double radius, com.earthview.world.graphic.LightList destList)
	{
		super._populateLightList_NoVirtual(position, radius, destList);
	}
	public void showImage(boolean visible)
	{
		super.showImage_NoVirtual(visible);
	}
	public boolean getImageVisible()
	{
		return super.getImageVisible_NoVirtual();
	}
	public void showOcean(boolean visible)
	{
		super.showOcean_NoVirtual(visible);
	}
	public boolean getOceanVisible()
	{
		return super.getOceanVisible_NoVirtual();
	}
	public void _populateLightList(com.earthview.world.graphic.SceneNode sn, double radius, com.earthview.world.graphic.LightList destList, long lightMask)
	{
		super._populateLightList_NoVirtual(sn, radius, destList, lightMask);
	}
	public void _populateLightList(com.earthview.world.graphic.SceneNode sn, double radius, com.earthview.world.graphic.LightList destList)
	{
		super._populateLightList_NoVirtual(sn, radius, destList);
	}
	/**
	 * 创建场景节点如果不传递名称，则场景管理器会自动对其命名
	 * @param name 节点名称
	 */
	public com.earthview.world.graphic.SceneNode createSceneNode()
	{
		return super.createSceneNode_NoVirtual();
	}
	public com.earthview.world.graphic.SceneNode createSceneNode(String name)
	{
		return super.createSceneNode_NoVirtual(name);
	}
	/**
	 * 销毁场景节点				
	 * @param name 节点名称
	 */
	public void destroySceneNode(String name)
	{
		super.destroySceneNode_NoVirtual(name);
	}
	public void destroySceneNode(com.earthview.world.graphic.SceneNode sn)
	{
		super.destroySceneNode_NoVirtual(sn);
	}
	/**
	 * 获取根节点				
	 * @param name 节点名称
	 */
	public com.earthview.world.graphic.SceneNode getRootSceneNode()
	{
		return super.getRootSceneNode_NoVirtual();
	}
	/**
	 * 获取节点				
	 * @param name 节点名称
	 */
	public com.earthview.world.graphic.SceneNode getSceneNode(String name)
	{
		return super.getSceneNode_NoVirtual(name);
	}
	/**
	 * 判断是否存在给定名称的节点				
	 * @param name 节点名称
	 */
	public boolean hasSceneNode(String name)
	{
		return super.hasSceneNode_NoVirtual(name);
	}
	/**
	 * 创建模型实体				
	 * @param entityName 实体名称
	 * @param meshName mesh名称
	 * @param subentityIndics submesh部件序号集
	 * @param groupName mesh资源组名称
	 */
	public com.earthview.world.graphic.Entity createEntity(String entityName, String meshName, com.earthview.world.core.IntVector subentityIndics, String groupName)
	{
		return super.createEntity_NoVirtual(entityName, meshName, subentityIndics, groupName);
	}
	public com.earthview.world.graphic.Entity createEntity(String entityName, String meshName, String groupName)
	{
		return super.createEntity_NoVirtual(entityName, meshName, groupName);
	}
	public com.earthview.world.graphic.Entity createEntity(String entityName, String meshName, com.earthview.world.core.IntVector subentityIndics)
	{
		return super.createEntity_NoVirtual(entityName, meshName, subentityIndics);
	}
	public com.earthview.world.graphic.Entity createEntity(String entityName, String meshName)
	{
		return super.createEntity_NoVirtual(entityName, meshName);
	}
	public com.earthview.world.graphic.Entity createEntity(String entityName, com.earthview.world.graphic.MeshPtr pMesh, com.earthview.world.core.IntVector subentityIndics)
	{
		return super.createEntity_NoVirtual(entityName, pMesh, subentityIndics);
	}
	public com.earthview.world.graphic.Entity createEntity(String entityName, com.earthview.world.graphic.MeshPtr pMesh)
	{
		return super.createEntity_NoVirtual(entityName, pMesh);
	}
	public com.earthview.world.graphic.Entity createEntity(com.earthview.world.graphic.MeshPtr pMesh, com.earthview.world.core.IntVector subentityIndics)
	{
		return super.createEntity_NoVirtual(pMesh, subentityIndics);
	}
	public com.earthview.world.graphic.Entity createEntity(com.earthview.world.graphic.MeshPtr pMesh)
	{
		return super.createEntity_NoVirtual(pMesh);
	}
	public com.earthview.world.graphic.Entity createEntity(String meshName, com.earthview.world.core.IntVector subentityIndics)
	{
		return super.createEntity_NoVirtual(meshName, subentityIndics);
	}
	public com.earthview.world.graphic.Entity createEntity(String meshName)
	{
		return super.createEntity_NoVirtual(meshName);
	}
	/**
	 * 通过图形创建实体
	 * @param entityName 实体名称
	 * @param ptype 几何类型
	 */
	public com.earthview.world.graphic.Entity createEntity(String entityName, com.earthview.world.graphic.SceneManager.PrefabType ptype)
	{
		return super.createEntity_NoVirtual(entityName, ptype);
	}
	public com.earthview.world.graphic.Entity createEntity(com.earthview.world.graphic.SceneManager.PrefabType ptype)
	{
		return super.createEntity_NoVirtual(ptype);
	}
	/**
	 * 获取给定名称的实体				
	 * @param name 实体名称
	 */
	public com.earthview.world.graphic.Entity getEntity(String name)
	{
		return super.getEntity_NoVirtual(name);
	}
	/**
	 * 判断给定名称的实体是否存在				
	 * @param name 实体名称
	 */
	public boolean hasEntity(String name)
	{
		return super.hasEntity_NoVirtual(name);
	}
	/**
	 * 销毁实体				
	 * @param  
	 */
	public void destroyEntity(com.earthview.world.graphic.Entity ent)
	{
		super.destroyEntity_NoVirtual(ent);
	}
	public void destroyEntity(String name)
	{
		super.destroyEntity_NoVirtual(name);
	}
	/**
	 * 销毁所有实体				
	 * @param  
	 */
	public void destroyAllEntities()
	{
		super.destroyAllEntities_NoVirtual();
	}
	public com.earthview.world.graphic.ManualObject createManualObject(String name)
	{
		return super.createManualObject_NoVirtual(name);
	}
	public com.earthview.world.graphic.ManualObject createManualObject()
	{
		return super.createManualObject_NoVirtual();
	}
	public com.earthview.world.graphic.ManualObject getManualObject(String name)
	{
		return super.getManualObject_NoVirtual(name);
	}
	public boolean hasManualObject(String name)
	{
		return super.hasManualObject_NoVirtual(name);
	}
	public void destroyManualObject(com.earthview.world.graphic.ManualObject obj)
	{
		super.destroyManualObject_NoVirtual(obj);
	}
	public void destroyManualObject(String name)
	{
		super.destroyManualObject_NoVirtual(name);
	}
	public void destroyAllManualObjects()
	{
		super.destroyAllManualObjects_NoVirtual();
	}
	public boolean usingWebMercator()
	{
		return super.usingWebMercator_NoVirtual();
	}
	public com.earthview.world.graphic.BillboardChain createBillboardChain(String name)
	{
		return super.createBillboardChain_NoVirtual(name);
	}
	public com.earthview.world.graphic.BillboardChain createBillboardChain()
	{
		return super.createBillboardChain_NoVirtual();
	}
	public com.earthview.world.graphic.BillboardChain getBillboardChain(String name)
	{
		return super.getBillboardChain_NoVirtual(name);
	}
	public boolean hasBillboardChain(String name)
	{
		return super.hasBillboardChain_NoVirtual(name);
	}
	public void destroyBillboardChain(com.earthview.world.graphic.BillboardChain obj)
	{
		super.destroyBillboardChain_NoVirtual(obj);
	}
	public void destroyBillboardChain(String name)
	{
		super.destroyBillboardChain_NoVirtual(name);
	}
	public void destroyAllBillboardChains()
	{
		super.destroyAllBillboardChains_NoVirtual();
	}
	public com.earthview.world.graphic.RibbonTrail createRibbonTrail(String name)
	{
		return super.createRibbonTrail_NoVirtual(name);
	}
	public com.earthview.world.graphic.RibbonTrail createRibbonTrail()
	{
		return super.createRibbonTrail_NoVirtual();
	}
	public com.earthview.world.graphic.RibbonTrail getRibbonTrail(String name)
	{
		return super.getRibbonTrail_NoVirtual(name);
	}
	public boolean hasRibbonTrail(String name)
	{
		return super.hasRibbonTrail_NoVirtual(name);
	}
	public void destroyRibbonTrail(com.earthview.world.graphic.RibbonTrail obj)
	{
		super.destroyRibbonTrail_NoVirtual(obj);
	}
	public void destroyRibbonTrail(String name)
	{
		super.destroyRibbonTrail_NoVirtual(name);
	}
	public void destroyAllRibbonTrails()
	{
		super.destroyAllRibbonTrails_NoVirtual();
	}
	public com.earthview.world.graphic.ParticleSystem createParticleSystem(String name, String templateName)
	{
		return super.createParticleSystem_NoVirtual(name, templateName);
	}
	public com.earthview.world.graphic.ParticleSystem createParticleSystem(String name, long quota, String resourceGroup)
	{
		return super.createParticleSystem_NoVirtual(name, quota, resourceGroup);
	}
	public com.earthview.world.graphic.ParticleSystem createParticleSystem(String name, long quota)
	{
		return super.createParticleSystem_NoVirtual(name, quota);
	}
	public com.earthview.world.graphic.ParticleSystem createParticleSystem(String name)
	{
		return super.createParticleSystem_NoVirtual(name);
	}
	public com.earthview.world.graphic.ParticleSystem createParticleSystem(long quota, String resourceGroup)
	{
		return super.createParticleSystem_NoVirtual(quota, resourceGroup);
	}
	public com.earthview.world.graphic.ParticleSystem createParticleSystem(long quota)
	{
		return super.createParticleSystem_NoVirtual(quota);
	}
	public com.earthview.world.graphic.ParticleSystem createParticleSystem()
	{
		return super.createParticleSystem_NoVirtual();
	}
	public com.earthview.world.graphic.ParticleSystem getParticleSystem(String name)
	{
		return super.getParticleSystem_NoVirtual(name);
	}
	public boolean hasParticleSystem(String name)
	{
		return super.hasParticleSystem_NoVirtual(name);
	}
	public void destroyParticleSystem(com.earthview.world.graphic.ParticleSystem obj)
	{
		super.destroyParticleSystem_NoVirtual(obj);
	}
	public void destroyParticleSystem(String name)
	{
		super.destroyParticleSystem_NoVirtual(name);
	}
	public void destroyAllParticleSystems()
	{
		super.destroyAllParticleSystems_NoVirtual();
	}
	/**
	 * 清空场景清空场景中场景节点，光源等
	 * @param  
	 */
	public void clearScene()
	{
		super.clearScene_NoVirtual();
	}
	public void prepareWorldGeometry(String filename)
	{
		super.prepareWorldGeometry_NoVirtual(filename);
	}
	public void prepareWorldGeometry(com.earthview.world.core.DataStreamPtr stream, String typeName)
	{
		super.prepareWorldGeometry_NoVirtual(stream, typeName);
	}
	public void prepareWorldGeometry(com.earthview.world.core.DataStreamPtr stream)
	{
		super.prepareWorldGeometry_NoVirtual(stream);
	}
	public void setWorldGeometry(String filename)
	{
		super.setWorldGeometry_NoVirtual(filename);
	}
	public void setWorldGeometry(com.earthview.world.core.DataStreamPtr stream, String typeName)
	{
		super.setWorldGeometry_NoVirtual(stream, typeName);
	}
	public void setWorldGeometry(com.earthview.world.core.DataStreamPtr stream)
	{
		super.setWorldGeometry_NoVirtual(stream);
	}
	public long estimateWorldGeometry(String filename)
	{
		return super.estimateWorldGeometry_NoVirtual(filename);
	}
	public long estimateWorldGeometry(com.earthview.world.core.DataStreamPtr stream, String typeName)
	{
		return super.estimateWorldGeometry_NoVirtual(stream, typeName);
	}
	public long estimateWorldGeometry(com.earthview.world.core.DataStreamPtr stream)
	{
		return super.estimateWorldGeometry_NoVirtual(stream);
	}
	/**
	 * 从场景管理获取一个推荐的观察点通常这个方法返回原点，除非设定了坐标系或者世界坐标系推荐了起始点，如果有多于一个的推荐点，返回第一个。
	 * @param random 如果为真，将随机返回一个
	 */
	public com.earthview.world.graphic.ViewPoint getSuggestedViewpoint(boolean random)
	{
		return super.getSuggestedViewpoint_NoVirtual(random);
	}
	public com.earthview.world.graphic.ViewPoint getSuggestedViewpoint()
	{
		return super.getSuggestedViewpoint_NoVirtual();
	}
	/**
	 * 为场景设定一个特殊实现的选项
	 * @param strKey 设置的名称
	 * @param pValue 通过键值场景管理合理计算大小
	 * @return 成功返回true,失败返回false
	 */
	public boolean setOption(String strKey, VoidPointer pValue)
	{
		return super.setOption_NoVirtual(strKey, pValue);
	}
	/**
	 * 确认场景是否有一个特殊实现的选项
	 * @param strKey 设置的名称
	 * @param pValue 指针
	 * @return 成功返回设置的选项,失败返回pDestValue，其值设置为空
	 */
	public boolean getOption(String strKey, VoidPointer pDestValue)
	{
		return super.getOption_NoVirtual(strKey, pDestValue);
	}
	public boolean hasOption(String strKey)
	{
		return super.hasOption_NoVirtual(strKey);
	}
	public boolean getOptionValues(String strKey, com.earthview.world.core.StringVector refValueList)
	{
		return super.getOptionValues_NoVirtual(strKey, refValueList);
	}
	public boolean getOptionKeys(com.earthview.world.core.StringVector refKeys)
	{
		return super.getOptionKeys_NoVirtual(refKeys);
	}
	/**
	 * 更新场景图
	 * @param  
	 */
	public void _updateSceneGraph(com.earthview.world.graphic.Camera cam)
	{
		super._updateSceneGraph_NoVirtual(cam);
	}
	/**
	 * 查找可见对象
	 * @param  
	 */
	public void _findVisibleObjects(com.earthview.world.graphic.Camera cam, com.earthview.world.graphic.VisibleObjectsBoundsInfo visibleBounds, boolean onlyShadowCasters)
	{
		super._findVisibleObjects_NoVirtual(cam, visibleBounds, onlyShadowCasters);
	}
	/**
	 * 应用场景节点动画
	 * @param  
	 */
	public void _applySceneAnimations()
	{
		super._applySceneAnimations_NoVirtual();
	}
	/**
	 * 渲染可见对象
	 * @param  
	 */
	public void _renderVisibleObjects()
	{
		super._renderVisibleObjects_NoVirtual();
	}
	/**
	 * 渲染场景
	 * @param  
	 */
	public void _renderScene(com.earthview.world.graphic.Camera camera, com.earthview.world.graphic.Viewport vp, boolean includeOverlays)
	{
		super._renderScene_NoVirtual(camera, vp, includeOverlays);
	}
	public void _queueSkiesForRendering(com.earthview.world.graphic.Camera cam)
	{
		super._queueSkiesForRendering_NoVirtual(cam);
	}
	public void _setDestinationRenderSystem(com.earthview.world.graphic.RenderSystem ref_sys)
	{
		super._setDestinationRenderSystem_NoVirtual(ref_sys);
	}
	/**
	 * 设置是否启用一个天空平面
	 * @param enable ture为启用，false为不启用
	 * @param plane 平面的细节描述，它到摄像机的距离
	 * @param materialName 天空使用材质的名称
	 * @param scale 比例变换以适应天空平面
	 * @param tiling 指针
	 * @param drawFirst 指针
	 * @param bow 指针
	 * @param xsegments 指针
	 * @param ysegments 指针
	 * @param groupName 指针
	 */
	public void setSkyPlane(boolean enable, com.earthview.world.spatial.math.Plane plane, String materialName, double scale, double tiling, boolean drawFirst, double bow, int xsegments, int ysegments, String groupName)
	{
		super.setSkyPlane_NoVirtual(enable, plane, materialName, scale, tiling, drawFirst, bow, xsegments, ysegments, groupName);
	}
	public void setSkyPlane(boolean enable, com.earthview.world.spatial.math.Plane plane, String materialName, double scale, double tiling, boolean drawFirst, double bow, int xsegments, int ysegments)
	{
		super.setSkyPlane_NoVirtual(enable, plane, materialName, scale, tiling, drawFirst, bow, xsegments, ysegments);
	}
	public void setSkyPlane(boolean enable, com.earthview.world.spatial.math.Plane plane, String materialName, double scale, double tiling, boolean drawFirst, double bow, int xsegments)
	{
		super.setSkyPlane_NoVirtual(enable, plane, materialName, scale, tiling, drawFirst, bow, xsegments);
	}
	public void setSkyPlane(boolean enable, com.earthview.world.spatial.math.Plane plane, String materialName, double scale, double tiling, boolean drawFirst, double bow)
	{
		super.setSkyPlane_NoVirtual(enable, plane, materialName, scale, tiling, drawFirst, bow);
	}
	public void setSkyPlane(boolean enable, com.earthview.world.spatial.math.Plane plane, String materialName, double scale, double tiling, boolean drawFirst)
	{
		super.setSkyPlane_NoVirtual(enable, plane, materialName, scale, tiling, drawFirst);
	}
	public void setSkyPlane(boolean enable, com.earthview.world.spatial.math.Plane plane, String materialName, double scale, double tiling)
	{
		super.setSkyPlane_NoVirtual(enable, plane, materialName, scale, tiling);
	}
	public void setSkyPlane(boolean enable, com.earthview.world.spatial.math.Plane plane, String materialName, double scale)
	{
		super.setSkyPlane_NoVirtual(enable, plane, materialName, scale);
	}
	public void setSkyPlane(boolean enable, com.earthview.world.spatial.math.Plane plane, String materialName)
	{
		super.setSkyPlane_NoVirtual(enable, plane, materialName);
	}
	///     virtual void _setSkyPlane(
	///         ev_bool enable,
	///         const EarthView::World::Spatial::Math::CPlane& plane,
	///const EVString& materialName,
	///Real scale = 1000,
	///         Real tiling = 10,
	///ev_uint8 renderQueue = RENDER_QUEUE_SKIES_EARLY,
	///Real bow = 0,
	///         ev_int32 xsegments = 1,
	///ev_int32 ysegments = 1,
	///         const EVString& groupName = CResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);
	public void _setSkyPlane(boolean enable, com.earthview.world.spatial.math.Plane plane, String materialName, double scale, double tiling, short renderQueue, double bow, int xsegments, int ysegments, String groupName)
	{
		super._setSkyPlane_NoVirtual(enable, plane, materialName, scale, tiling, renderQueue, bow, xsegments, ysegments, groupName);
	}
	public void _setSkyPlane(boolean enable, com.earthview.world.spatial.math.Plane plane, String materialName, double scale, double tiling, short renderQueue, double bow, int xsegments, int ysegments)
	{
		super._setSkyPlane_NoVirtual(enable, plane, materialName, scale, tiling, renderQueue, bow, xsegments, ysegments);
	}
	public void _setSkyPlane(boolean enable, com.earthview.world.spatial.math.Plane plane, String materialName, double scale, double tiling, short renderQueue, double bow, int xsegments)
	{
		super._setSkyPlane_NoVirtual(enable, plane, materialName, scale, tiling, renderQueue, bow, xsegments);
	}
	public void _setSkyPlane(boolean enable, com.earthview.world.spatial.math.Plane plane, String materialName, double scale, double tiling, short renderQueue, double bow)
	{
		super._setSkyPlane_NoVirtual(enable, plane, materialName, scale, tiling, renderQueue, bow);
	}
	public void _setSkyPlane(boolean enable, com.earthview.world.spatial.math.Plane plane, String materialName, double scale, double tiling, short renderQueue)
	{
		super._setSkyPlane_NoVirtual(enable, plane, materialName, scale, tiling, renderQueue);
	}
	public void _setSkyPlane(boolean enable, com.earthview.world.spatial.math.Plane plane, String materialName, double scale, double tiling)
	{
		super._setSkyPlane_NoVirtual(enable, plane, materialName, scale, tiling);
	}
	public void _setSkyPlane(boolean enable, com.earthview.world.spatial.math.Plane plane, String materialName, double scale)
	{
		super._setSkyPlane_NoVirtual(enable, plane, materialName, scale);
	}
	public void _setSkyPlane(boolean enable, com.earthview.world.spatial.math.Plane plane, String materialName)
	{
		super._setSkyPlane_NoVirtual(enable, plane, materialName);
	}
	public void setSkyPlaneEnabled(boolean enable)
	{
		super.setSkyPlaneEnabled_NoVirtual(enable);
	}
	public boolean isSkyPlaneEnabled()
	{
		return super.isSkyPlaneEnabled_NoVirtual();
	}
	public com.earthview.world.graphic.SceneNode getSkyPlaneNode()
	{
		return super.getSkyPlaneNode_NoVirtual();
	}
	public com.earthview.world.graphic.SceneManager.SkyPlaneGenParameters getSkyPlaneGenParameters()
	{
		return super.getSkyPlaneGenParameters_NoVirtual();
	}
	public void setSkyBox(boolean enable, String materialName, double distance, boolean drawFirst, com.earthview.world.spatial.math.Quaternion orientation, String groupName)
	{
		super.setSkyBox_NoVirtual(enable, materialName, distance, drawFirst, orientation, groupName);
	}
	public void setSkyBox(boolean enable, String materialName, double distance, boolean drawFirst, com.earthview.world.spatial.math.Quaternion orientation)
	{
		super.setSkyBox_NoVirtual(enable, materialName, distance, drawFirst, orientation);
	}
	public void setSkyBox(boolean enable, String materialName, double distance, boolean drawFirst)
	{
		super.setSkyBox_NoVirtual(enable, materialName, distance, drawFirst);
	}
	public void setSkyBox(boolean enable, String materialName, double distance)
	{
		super.setSkyBox_NoVirtual(enable, materialName, distance);
	}
	public void setSkyBox(boolean enable, String materialName)
	{
		super.setSkyBox_NoVirtual(enable, materialName);
	}
	///     virtual void _setSkyBox(ev_bool enable, const EVString& materialName,
	///Real distance = 5000,
	///         ev_uint8 renderQueue = RENDER_QUEUE_SKIES_EARLY,
	///const EarthView::World::Spatial::Math::CQuaternion& orientation = EarthView::World::Spatial::Math::CQuaternion::IDENTITY,
	///         const EVString& groupName = CResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);
	public void _setSkyBox(boolean enable, String materialName, double distance, short renderQueue, com.earthview.world.spatial.math.Quaternion orientation, String groupName)
	{
		super._setSkyBox_NoVirtual(enable, materialName, distance, renderQueue, orientation, groupName);
	}
	public void _setSkyBox(boolean enable, String materialName, double distance, short renderQueue, com.earthview.world.spatial.math.Quaternion orientation)
	{
		super._setSkyBox_NoVirtual(enable, materialName, distance, renderQueue, orientation);
	}
	public void _setSkyBox(boolean enable, String materialName, double distance, short renderQueue)
	{
		super._setSkyBox_NoVirtual(enable, materialName, distance, renderQueue);
	}
	public void _setSkyBox(boolean enable, String materialName, double distance)
	{
		super._setSkyBox_NoVirtual(enable, materialName, distance);
	}
	public void _setSkyBox(boolean enable, String materialName)
	{
		super._setSkyBox_NoVirtual(enable, materialName);
	}
	public void setSkyBoxEnabled(boolean enable)
	{
		super.setSkyBoxEnabled_NoVirtual(enable);
	}
	public boolean isSkyBoxEnabled()
	{
		return super.isSkyBoxEnabled_NoVirtual();
	}
	public com.earthview.world.graphic.SceneNode getSkyBoxNode()
	{
		return super.getSkyBoxNode_NoVirtual();
	}
	public com.earthview.world.graphic.SceneManager.SkyBoxGenParameters getSkyBoxGenParameters()
	{
		return super.getSkyBoxGenParameters_NoVirtual();
	}
	/**
	 * 确认是否启用一个天空穹
	 * @param enable ture为启用，false为不启用
	 * @param plane 平面的细节描述，它到摄像机的距离
	 * @param materialName 天空使用材质的名称
	 * @param scale 比例变换以适应天空平面
	 * @param tiling 指针
	 * @param drawFirst 指针
	 * @param bow 指针
	 * @param xsegments 指针
	 * @param ysegments 指针
	 * @param groupName 指针
	 */
	public void setSkyDome(boolean enable, String materialName, double curvature, double tiling, double distance, boolean drawFirst, com.earthview.world.spatial.math.Quaternion orientation, int xsegments, int ysegments, int ysegments_keep, String groupName)
	{
		super.setSkyDome_NoVirtual(enable, materialName, curvature, tiling, distance, drawFirst, orientation, xsegments, ysegments, ysegments_keep, groupName);
	}
	public void setSkyDome(boolean enable, String materialName, double curvature, double tiling, double distance, boolean drawFirst, com.earthview.world.spatial.math.Quaternion orientation, int xsegments, int ysegments, int ysegments_keep)
	{
		super.setSkyDome_NoVirtual(enable, materialName, curvature, tiling, distance, drawFirst, orientation, xsegments, ysegments, ysegments_keep);
	}
	public void setSkyDome(boolean enable, String materialName, double curvature, double tiling, double distance, boolean drawFirst, com.earthview.world.spatial.math.Quaternion orientation, int xsegments, int ysegments)
	{
		super.setSkyDome_NoVirtual(enable, materialName, curvature, tiling, distance, drawFirst, orientation, xsegments, ysegments);
	}
	public void setSkyDome(boolean enable, String materialName, double curvature, double tiling, double distance, boolean drawFirst, com.earthview.world.spatial.math.Quaternion orientation, int xsegments)
	{
		super.setSkyDome_NoVirtual(enable, materialName, curvature, tiling, distance, drawFirst, orientation, xsegments);
	}
	public void setSkyDome(boolean enable, String materialName, double curvature, double tiling, double distance, boolean drawFirst, com.earthview.world.spatial.math.Quaternion orientation)
	{
		super.setSkyDome_NoVirtual(enable, materialName, curvature, tiling, distance, drawFirst, orientation);
	}
	public void setSkyDome(boolean enable, String materialName, double curvature, double tiling, double distance, boolean drawFirst)
	{
		super.setSkyDome_NoVirtual(enable, materialName, curvature, tiling, distance, drawFirst);
	}
	public void setSkyDome(boolean enable, String materialName, double curvature, double tiling, double distance)
	{
		super.setSkyDome_NoVirtual(enable, materialName, curvature, tiling, distance);
	}
	public void setSkyDome(boolean enable, String materialName, double curvature, double tiling)
	{
		super.setSkyDome_NoVirtual(enable, materialName, curvature, tiling);
	}
	public void setSkyDome(boolean enable, String materialName, double curvature)
	{
		super.setSkyDome_NoVirtual(enable, materialName, curvature);
	}
	public void setSkyDome(boolean enable, String materialName)
	{
		super.setSkyDome_NoVirtual(enable, materialName);
	}
	///     virtual void _setSkyDome(ev_bool enable, const EVString& materialName,
	///Real curvature = 10,
	///         Real tiling = 8, Real distance = 4000, ev_uint8 renderQueue = RENDER_QUEUE_SKIES_EARLY,
	///         const EarthView::World::Spatial::Math::CQuaternion& orientation = EarthView::World::Spatial::Math::CQuaternion::IDENTITY,
	///         ev_int32 xsegments = 16, ev_int32 ysegments = 16, ev_int32 ysegments_keep = -1,
	///         const EVString& groupName = CResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);
	public void _setSkyDome(boolean enable, String materialName, double curvature, double tiling, double distance, short renderQueue, com.earthview.world.spatial.math.Quaternion orientation, int xsegments, int ysegments, int ysegments_keep, String groupName)
	{
		super._setSkyDome_NoVirtual(enable, materialName, curvature, tiling, distance, renderQueue, orientation, xsegments, ysegments, ysegments_keep, groupName);
	}
	public void _setSkyDome(boolean enable, String materialName, double curvature, double tiling, double distance, short renderQueue, com.earthview.world.spatial.math.Quaternion orientation, int xsegments, int ysegments, int ysegments_keep)
	{
		super._setSkyDome_NoVirtual(enable, materialName, curvature, tiling, distance, renderQueue, orientation, xsegments, ysegments, ysegments_keep);
	}
	public void _setSkyDome(boolean enable, String materialName, double curvature, double tiling, double distance, short renderQueue, com.earthview.world.spatial.math.Quaternion orientation, int xsegments, int ysegments)
	{
		super._setSkyDome_NoVirtual(enable, materialName, curvature, tiling, distance, renderQueue, orientation, xsegments, ysegments);
	}
	public void _setSkyDome(boolean enable, String materialName, double curvature, double tiling, double distance, short renderQueue, com.earthview.world.spatial.math.Quaternion orientation, int xsegments)
	{
		super._setSkyDome_NoVirtual(enable, materialName, curvature, tiling, distance, renderQueue, orientation, xsegments);
	}
	public void _setSkyDome(boolean enable, String materialName, double curvature, double tiling, double distance, short renderQueue, com.earthview.world.spatial.math.Quaternion orientation)
	{
		super._setSkyDome_NoVirtual(enable, materialName, curvature, tiling, distance, renderQueue, orientation);
	}
	public void _setSkyDome(boolean enable, String materialName, double curvature, double tiling, double distance, short renderQueue)
	{
		super._setSkyDome_NoVirtual(enable, materialName, curvature, tiling, distance, renderQueue);
	}
	public void _setSkyDome(boolean enable, String materialName, double curvature, double tiling, double distance)
	{
		super._setSkyDome_NoVirtual(enable, materialName, curvature, tiling, distance);
	}
	public void _setSkyDome(boolean enable, String materialName, double curvature, double tiling)
	{
		super._setSkyDome_NoVirtual(enable, materialName, curvature, tiling);
	}
	public void _setSkyDome(boolean enable, String materialName, double curvature)
	{
		super._setSkyDome_NoVirtual(enable, materialName, curvature);
	}
	public void _setSkyDome(boolean enable, String materialName)
	{
		super._setSkyDome_NoVirtual(enable, materialName);
	}
	public void setSkyDomeEnabled(boolean enable)
	{
		super.setSkyDomeEnabled_NoVirtual(enable);
	}
	public boolean isSkyDomeEnabled()
	{
		return super.isSkyDomeEnabled_NoVirtual();
	}
	public com.earthview.world.graphic.SceneNode getSkyDomeNode()
	{
		return super.getSkyDomeNode_NoVirtual();
	}
	public com.earthview.world.graphic.SceneManager.SkyDomeGenParameters getSkyDomeGenParameters()
	{
		return super.getSkyDomeGenParameters_NoVirtual();
	}
	public com.earthview.world.graphic.FogMode getFogMode()
	{
		return super.getFogMode_NoVirtual();
	}
	public com.earthview.world.graphic.ColourValue getFogColour()
	{
		return super.getFogColour_NoVirtual();
	}
	public double getFogStart()
	{
		return super.getFogStart_NoVirtual();
	}
	public double getFogEnd()
	{
		return super.getFogEnd_NoVirtual();
	}
	public double getFogDensity()
	{
		return super.getFogDensity_NoVirtual();
	}
	public com.earthview.world.graphic.BillboardSet createBillboardSet(String name, long poolSize)
	{
		return super.createBillboardSet_NoVirtual(name, poolSize);
	}
	public com.earthview.world.graphic.BillboardSet createBillboardSet(String name)
	{
		return super.createBillboardSet_NoVirtual(name);
	}
	public com.earthview.world.graphic.BillboardSet createBillboardSet(long poolSize)
	{
		return super.createBillboardSet_NoVirtual(poolSize);
	}
	public com.earthview.world.graphic.BillboardSet createBillboardSet()
	{
		return super.createBillboardSet_NoVirtual();
	}
	public com.earthview.world.graphic.BillboardSet getBillboardSet(String name)
	{
		return super.getBillboardSet_NoVirtual(name);
	}
	public boolean hasBillboardSet(String name)
	{
		return super.hasBillboardSet_NoVirtual(name);
	}
	public void destroyBillboardSet(com.earthview.world.graphic.BillboardSet set)
	{
		super.destroyBillboardSet_NoVirtual(set);
	}
	public void destroyBillboardSet(String name)
	{
		super.destroyBillboardSet_NoVirtual(name);
	}
	public void destroyAllBillboardSets()
	{
		super.destroyAllBillboardSets_NoVirtual();
	}
	/**
	 * 设置是否显示场景节点的坐标轴
	 */
	public void setDisplaySceneNodes(boolean display)
	{
		super.setDisplaySceneNodes_NoVirtual(display);
	}
	/**
	 * 设置是否显示场景节点的坐标轴			
	 */
	public boolean getDisplaySceneNodes()
	{
		return super.getDisplaySceneNodes_NoVirtual();
	}
	/**
	 * 创建场景节点动画
	 * @param name 动画名称
	 * @param length 动画时长:单位为秒
	 */
	public com.earthview.world.graphic.Animation createAnimation(String name, double length)
	{
		return super.createAnimation_NoVirtual(name, length);
	}
	/**
	 * 获取给定名称的场景节点动画
	 * @param name 动画名称
	 */
	public com.earthview.world.graphic.Animation getAnimation(String name)
	{
		return super.getAnimation_NoVirtual(name);
	}
	/**
	 * 判断给定名称的场景节点动画是否存在
	 * @param name 动画名称
	 */
	public boolean hasAnimation(String name)
	{
		return super.hasAnimation_NoVirtual(name);
	}
	/**
	 * 销毁给定名称的场景节点动画
	 * @param name 动画名称
	 */
	public void destroyAnimation(String name)
	{
		super.destroyAnimation_NoVirtual(name);
	}
	/**
	 * 销毁所有场景节点动画
	 * @param name 动画名称
	 */
	public void destroyAllAnimations()
	{
		super.destroyAllAnimations_NoVirtual();
	}
	/**
	 * 为给定名称的场景节点动画创建一个动画状态类(播放控制类)
	 * @param animName 动画名称
	 */
	public com.earthview.world.graphic.AnimationState createAnimationState(String animName)
	{
		return super.createAnimationState_NoVirtual(animName);
	}
	/**
	 * 获取给定名称的场景节点动画对应的动画状态类(播放控制类)
	 * @param animName 动画名称
	 */
	public com.earthview.world.graphic.AnimationState getAnimationState(String animName)
	{
		return super.getAnimationState_NoVirtual(animName);
	}
	/**
	 * 判断给定名称的场景节点动画状态类是否存在
	 * @param name 动画名称
	 */
	public boolean hasAnimationState(String name)
	{
		return super.hasAnimationState_NoVirtual(name);
	}
	/**
	 * 销毁给定名称的场景节点动画状态类(播放控制类)
	 * @param name 动画名称
	 */
	public void destroyAnimationState(String name)
	{
		super.destroyAnimationState_NoVirtual(name);
	}
	/**
	 * 销毁所有场景节点动画状态类(播放控制类)
	 * @param  
	 */
	public void destroyAllAnimationStates()
	{
		super.destroyAllAnimationStates_NoVirtual();
	}
	public void manualRender(com.earthview.world.graphic.RenderOperation rend, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.Viewport vp, com.earthview.world.spatial.math.Matrix4 worldMatrix, com.earthview.world.spatial.math.Matrix4 viewMatrix, com.earthview.world.spatial.math.Matrix4 projMatrix, boolean doBeginEndFrame)
	{
		super.manualRender_NoVirtual(rend, pass, vp, worldMatrix, viewMatrix, projMatrix, doBeginEndFrame);
	}
	///virtual void manualRender(EarthView::World::Graphic::CRenderOperation* rend, EarthView::World::Graphic::CPass* pass, EarthView::World::Graphic::CViewport* vp,
	///	const EarthView::World::Spatial::Math::CMatrix4& worldMatrix, const EarthView::World::Spatial::Math::CMatrix4& viewMatrix, const EarthView::World::Spatial::Math::CMatrix4& projMatrix,
	///	ev_bool doBeginEndFrame = false) ;
	public void manualRender(com.earthview.world.graphic.RenderOperation rend, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.Viewport vp, com.earthview.world.spatial.math.Matrix4 worldMatrix, com.earthview.world.spatial.math.Matrix4 viewMatrix, com.earthview.world.spatial.math.Matrix4 projMatrix)
	{
		super.manualRender_NoVirtual(rend, pass, vp, worldMatrix, viewMatrix, projMatrix);
	}
	public void manualRender(com.earthview.world.graphic.Renderable rend, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.Viewport vp, com.earthview.world.spatial.math.Matrix4 viewMatrix, com.earthview.world.spatial.math.Matrix4 projMatrix, boolean doBeginEndFrame, boolean lightScissoringClipping, boolean doLightIteration, com.earthview.world.graphic.LightList manualLightList)
	{
		super.manualRender_NoVirtual(rend, pass, vp, viewMatrix, projMatrix, doBeginEndFrame, lightScissoringClipping, doLightIteration, manualLightList);
	}
	///virtual void manualRender(EarthView::World::Graphic::CRenderable* rend, const EarthView::World::Graphic::CPass* pass, EarthView::World::Graphic::CViewport* vp, const EarthView::World::Spatial::Math::CMatrix4& viewMatrix, const EarthView::World::Spatial::Math::CMatrix4& projMatrix,
	///	ev_bool doBeginEndFrame = false, ev_bool lightScissoringClipping = true,
	///	ev_bool doLightIteration = true, const EarthView::World::Graphic::LightList* manualLightList = 0);
	public void manualRender(com.earthview.world.graphic.Renderable rend, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.Viewport vp, com.earthview.world.spatial.math.Matrix4 viewMatrix, com.earthview.world.spatial.math.Matrix4 projMatrix, boolean doBeginEndFrame, boolean lightScissoringClipping, boolean doLightIteration)
	{
		super.manualRender_NoVirtual(rend, pass, vp, viewMatrix, projMatrix, doBeginEndFrame, lightScissoringClipping, doLightIteration);
	}
	public void manualRender(com.earthview.world.graphic.Renderable rend, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.Viewport vp, com.earthview.world.spatial.math.Matrix4 viewMatrix, com.earthview.world.spatial.math.Matrix4 projMatrix, boolean doBeginEndFrame, boolean lightScissoringClipping)
	{
		super.manualRender_NoVirtual(rend, pass, vp, viewMatrix, projMatrix, doBeginEndFrame, lightScissoringClipping);
	}
	public void manualRender(com.earthview.world.graphic.Renderable rend, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.Viewport vp, com.earthview.world.spatial.math.Matrix4 viewMatrix, com.earthview.world.spatial.math.Matrix4 projMatrix, boolean doBeginEndFrame)
	{
		super.manualRender_NoVirtual(rend, pass, vp, viewMatrix, projMatrix, doBeginEndFrame);
	}
	public void manualRender(com.earthview.world.graphic.Renderable rend, com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.Viewport vp, com.earthview.world.spatial.math.Matrix4 viewMatrix, com.earthview.world.spatial.math.Matrix4 projMatrix)
	{
		super.manualRender_NoVirtual(rend, pass, vp, viewMatrix, projMatrix);
	}
	/**
	 * 获得渲染队列
	 * @param  
	 */
	public com.earthview.world.graphic.RenderQueue getRenderQueue()
	{
		return super.getRenderQueue_NoVirtual();
	}
	/**
	 * 添加渲染队列监听者
	 * @param  
	 */
	public void addRenderQueueListener(com.earthview.world.graphic.RenderQueueListener ref_newListener)
	{
		super.addRenderQueueListener_NoVirtual(ref_newListener);
	}
	/**
	 * 移除渲染队列监听者
	 * @param  
	 */
	public void removeRenderQueueListener(com.earthview.world.graphic.RenderQueueListener delListener)
	{
		super.removeRenderQueueListener_NoVirtual(delListener);
	}
	/**
	 * 添加渲染对象监听者
	 * @param  
	 */
	public void addRenderObjectListener(com.earthview.world.graphic.RenderObjectListener ref_newListener)
	{
		super.addRenderObjectListener_NoVirtual(ref_newListener);
	}
	/**
	 * 移除渲染对象监听者
	 * @param  
	 */
	public void removeRenderObjectListener(com.earthview.world.graphic.RenderObjectListener delListener)
	{
		super.removeRenderObjectListener_NoVirtual(delListener);
	}
	public void addSpecialCaseRenderQueue(short qid)
	{
		super.addSpecialCaseRenderQueue_NoVirtual(qid);
	}
	public void removeSpecialCaseRenderQueue(short qid)
	{
		super.removeSpecialCaseRenderQueue_NoVirtual(qid);
	}
	public void clearSpecialCaseRenderQueues()
	{
		super.clearSpecialCaseRenderQueues_NoVirtual();
	}
	public void setSpecialCaseRenderQueueMode(com.earthview.world.graphic.SceneManager.SpecialCaseRenderQueueMode mode)
	{
		super.setSpecialCaseRenderQueueMode_NoVirtual(mode);
	}
	public com.earthview.world.graphic.SceneManager.SpecialCaseRenderQueueMode getSpecialCaseRenderQueueMode()
	{
		return super.getSpecialCaseRenderQueueMode_NoVirtual();
	}
	public boolean isRenderQueueToBeProcessed(short qid)
	{
		return super.isRenderQueueToBeProcessed_NoVirtual(qid);
	}
	public void setWorldGeometryRenderQueue(short qid)
	{
		super.setWorldGeometryRenderQueue_NoVirtual(qid);
	}
	public short getWorldGeometryRenderQueue()
	{
		return super.getWorldGeometryRenderQueue_NoVirtual();
	}
	/**
	 * 设置是否显示节点的包围盒
	 * @param  
	 */
	public void showBoundingBoxes(boolean bShow)
	{
		super.showBoundingBoxes_NoVirtual(bShow);
	}
	/**
	 * 获取是否显示节点的包围盒
	 * @param  
	 */
	public boolean getShowBoundingBoxes()
	{
		return super.getShowBoundingBoxes_NoVirtual();
	}
	/**
	 * 通知场景管理器存在某个节点正被跟踪
	 * @param  
	 */
	public void _notifyAutotrackingSceneNode(com.earthview.world.graphic.SceneNode node, boolean autoTrack)
	{
		super._notifyAutotrackingSceneNode_NoVirtual(node, autoTrack);
	}
	/**
	 * 创建包围盒查询对象
	 * @param  
	 */
	public com.earthview.world.graphic.AxisAlignedBoxSceneQuery createAABBQuery(com.earthview.world.spatial.math.AxisAlignedBox box, long mask)
	{
		return super.createAABBQuery_NoVirtual(box, mask);
	}
	public com.earthview.world.graphic.AxisAlignedBoxSceneQuery createAABBQuery(com.earthview.world.spatial.math.AxisAlignedBox box)
	{
		return super.createAABBQuery_NoVirtual(box);
	}
	/**
	 * 创建球查询对象
	 * @param  
	 */
	public com.earthview.world.graphic.SphereSceneQuery createSphereQuery(com.earthview.world.spatial.math.Sphere sphere, long mask)
	{
		return super.createSphereQuery_NoVirtual(sphere, mask);
	}
	public com.earthview.world.graphic.SphereSceneQuery createSphereQuery(com.earthview.world.spatial.math.Sphere sphere)
	{
		return super.createSphereQuery_NoVirtual(sphere);
	}
	/**
	 * 创建平面包围体查询对象
	 * @param  
	 */
	public com.earthview.world.graphic.PlaneBoundedVolumeListSceneQuery createPlaneBoundedVolumeQuery(com.earthview.world.spatial.math.PlaneBoundedVolumeList volumes, long mask)
	{
		return super.createPlaneBoundedVolumeQuery_NoVirtual(volumes, mask);
	}
	public com.earthview.world.graphic.PlaneBoundedVolumeListSceneQuery createPlaneBoundedVolumeQuery(com.earthview.world.spatial.math.PlaneBoundedVolumeList volumes)
	{
		return super.createPlaneBoundedVolumeQuery_NoVirtual(volumes);
	}
	/**
	 * 创建射线查询对象
	 * @param  
	 */
	public com.earthview.world.graphic.RaySceneQuery createRayQuery(com.earthview.world.spatial.math.Ray ray, long mask)
	{
		return super.createRayQuery_NoVirtual(ray, mask);
	}
	public com.earthview.world.graphic.RaySceneQuery createRayQuery(com.earthview.world.spatial.math.Ray ray)
	{
		return super.createRayQuery_NoVirtual(ray);
	}
	/**
	 * 创建相交查询对象
	 * @param  
	 */
	public com.earthview.world.graphic.IntersectionSceneQuery createIntersectionQuery(long mask)
	{
		return super.createIntersectionQuery_NoVirtual(mask);
	}
	public com.earthview.world.graphic.IntersectionSceneQuery createIntersectionQuery()
	{
		return super.createIntersectionQuery_NoVirtual();
	}
	/**
	 * 销毁查询对象
	 * @param  
	 */
	public void destroyQuery(com.earthview.world.graphic.SceneQuery query)
	{
		super.destroyQuery_NoVirtual(query);
	}
	/**
	 * 设置阴影技术
	 * @param  
	 */
	public void setShadowTechnique(com.earthview.world.graphic.ShadowTechnique technique)
	{
		super.setShadowTechnique_NoVirtual(technique);
	}
	/**
	 * 获得阴影技术
	 * @param  
	 */
	public com.earthview.world.graphic.ShadowTechnique getShadowTechnique()
	{
		return super.getShadowTechnique_NoVirtual();
	}
	public void setShowDebugShadows(boolean debug)
	{
		super.setShowDebugShadows_NoVirtual(debug);
	}
	public boolean getShowDebugShadows()
	{
		return super.getShowDebugShadows_NoVirtual();
	}
	/**
	 * 设置阴影颜色
	 * @param  
	 */
	public void setShadowColour(com.earthview.world.graphic.ColourValue colour)
	{
		super.setShadowColour_NoVirtual(colour);
	}
	/**
	 * 获得阴影颜色
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getShadowColour()
	{
		return super.getShadowColour_NoVirtual();
	}
	/**
	 * 获得方向光能够产生阴影的最大距离(离相机的距离)
	 * @param  
	 */
	public void setShadowDirectionalLightExtrusionDistance(double dist)
	{
		super.setShadowDirectionalLightExtrusionDistance_NoVirtual(dist);
	}
	/**
	 * 获得方向光能够产生阴影的最大距离(离相机的距离)
	 * @param  
	 */
	public double getShadowDirectionalLightExtrusionDistance()
	{
		return super.getShadowDirectionalLightExtrusionDistance_NoVirtual();
	}
	/**
	 * 设置阴影颜色增益(shadowcolor.r*rRatio,shadowcolor.g*gRatio,shadowcolor.b*bRatio)
	 * @param rRatio 设置r通道增益
	 * @param gRatio 设置g通道增益
	 * @param bRatio 设置b通道增益
	 */
	public void setShadowColorRRatio(double rRatio)
	{
		super.setShadowColorRRatio_NoVirtual(rRatio);
	}
	public void setShadowColorGRatio(double gRatio)
	{
		super.setShadowColorGRatio_NoVirtual(gRatio);
	}
	public void setShadowColorBRatio(double bRatio)
	{
		super.setShadowColorBRatio_NoVirtual(bRatio);
	}
	/**
	 * 获取阴影颜色增益
	 */
	public double getShadowColorRRatio()
	{
		return super.getShadowColorRRatio_NoVirtual();
	}
	public double getShadowColorGRatio()
	{
		return super.getShadowColorGRatio_NoVirtual();
	}
	public double getShadowColorBRatio()
	{
		return super.getShadowColorBRatio_NoVirtual();
	}
	/**
	 * 设置阴影的最大距离(离相机的距离)
	 * @param  
	 */
	public void setShadowFarDistance(double distance)
	{
		super.setShadowFarDistance_NoVirtual(distance);
	}
	/**
	 * 获得阴影的最大距离(离相机的距离)
	 * @param  
	 */
	public double getShadowFarDistance()
	{
		return super.getShadowFarDistance_NoVirtual();
	}
	/**
	 * 获得阴影的最大距离(离相机的距离)的平方
	 * @param  
	 */
	public double getShadowFarDistanceSquared()
	{
		return super.getShadowFarDistanceSquared_NoVirtual();
	}
	/**
	 * 设置阴影锥的索引buffer的长度
	 * @param  
	 */
	public void setShadowIndexBufferSize(long size)
	{
		super.setShadowIndexBufferSize_NoVirtual(size);
	}
	/**
	 * 获得阴影锥的索引buffer的长度
	 * @param  
	 */
	public long getShadowIndexBufferSize()
	{
		return super.getShadowIndexBufferSize_NoVirtual();
	}
	/**
	 * 设置阴影纹理图片的尺寸
	 * @param  
	 */
	public void setShadowTextureSize(int size)
	{
		super.setShadowTextureSize_NoVirtual(size);
	}
	/**
	 * 设置阴影纹理的相关参数
	 * @param  
	 */
	public void setShadowTextureConfig(long shadowIndex, int width, int height, com.earthview.world.graphic.PixelFormat format)
	{
		super.setShadowTextureConfig_NoVirtual(shadowIndex, width, height, format);
	}
	public void setShadowTextureConfig(long shadowIndex, int width, int height, com.earthview.world.graphic.PixelFormat format, int fsaa)
	{
		super.setShadowTextureConfig_NoVirtual(shadowIndex, width, height, format, fsaa);
	}
	public void setShadowTextureConfig(long shadowIndex, int width, int height, com.earthview.world.graphic.PixelFormat format, int fsaa, int depthBufferPoolId)
	{
		super.setShadowTextureConfig_NoVirtual(shadowIndex, width, height, format, fsaa, depthBufferPoolId);
	}
	public void setShadowTextureConfig(long shadowIndex, com.earthview.world.graphic.ShadowTextureConfig config)
	{
		super.setShadowTextureConfig_NoVirtual(shadowIndex, config);
	}
	/**
	 * 设置阴影纹理的像素格式
	 * @param  
	 */
	public void setShadowTexturePixelFormat(com.earthview.world.graphic.PixelFormat fmt)
	{
		super.setShadowTexturePixelFormat_NoVirtual(fmt);
	}
	/**
	 * 设置阴影纹理的FSAA
	 * @param  
	 */
	public void setShadowTextureFSAA(int fsaa)
	{
		super.setShadowTextureFSAA_NoVirtual(fsaa);
	}
	/**
	 * 设置阴影纹理的数量
	 * @param  
	 */
	public void setShadowTextureCount(long count)
	{
		super.setShadowTextureCount_NoVirtual(count);
	}
	/**
	 * 设置阴影纹理的相关参数
	 * @param  
	 */
	public void setShadowTextureSettings(int size, int count)
	{
		super.setShadowTextureSettings_NoVirtual(size, count);
	}
	public void setShadowTextureSettings(int size, int count, com.earthview.world.graphic.PixelFormat fmt)
	{
		super.setShadowTextureSettings_NoVirtual(size, count, fmt);
	}
	public void setShadowTextureSettings(int size, int count, com.earthview.world.graphic.PixelFormat fmt, int fsaa)
	{
		super.setShadowTextureSettings_NoVirtual(size, count, fmt, fsaa);
	}
	public void setShadowTextureSettings(int size, int count, com.earthview.world.graphic.PixelFormat fmt, int fsaa, int depthBufferPoolId)
	{
		super.setShadowTextureSettings_NoVirtual(size, count, fmt, fsaa, depthBufferPoolId);
	}
	/**
	 * 获得阴影纹理
	 * @param  
	 */
	public com.earthview.world.graphic.TexturePtr getShadowTexture(long shadowIndex)
	{
		return super.getShadowTexture_NoVirtual(shadowIndex);
	}
	/**
	 * 设置平行光对应的阴影纹理的偏移量
	 * @param  
	 */
	public void setShadowDirLightTextureOffset(double offset)
	{
		super.setShadowDirLightTextureOffset_NoVirtual(offset);
	}
	/**
	 * 获得平行光对应的阴影纹理的偏移量
	 * @param  
	 */
	public double getShadowDirLightTextureOffset()
	{
		return super.getShadowDirLightTextureOffset_NoVirtual();
	}
	/**
	 * 设置阴影纹理消退的起始点
	 * @param  
	 */
	public void setShadowTextureFadeStart(double fadeStart)
	{
		super.setShadowTextureFadeStart_NoVirtual(fadeStart);
	}
	/**
	 * 设置阴影纹理消退的截止点
	 * @param  
	 */
	public void setShadowTextureFadeEnd(double fadeEnd)
	{
		super.setShadowTextureFadeEnd_NoVirtual(fadeEnd);
	}
	/**
	 * 设置纹理阴影是否启用自投影
	 * @param  
	 */
	public void setShadowTextureSelfShadow(boolean selfShadow)
	{
		super.setShadowTextureSelfShadow_NoVirtual(selfShadow);
	}
	/**
	 * 获得纹理阴影是否启用自投影
	 * @param  
	 */
	public boolean getShadowTextureSelfShadow()
	{
		return super.getShadowTextureSelfShadow_NoVirtual();
	}
	/**
	 * 设置纹理阴影技术下的投射阴影的材质
	 * @param  
	 */
	public void setShadowTextureCasterMaterial(String name)
	{
		super.setShadowTextureCasterMaterial_NoVirtual(name);
	}
	/**
	 * 设置纹理阴影技术下的接收阴影的材质
	 * @param  
	 */
	public void setShadowTextureReceiverMaterial(String name)
	{
		super.setShadowTextureReceiverMaterial_NoVirtual(name);
	}
	/**
	 * 设置是否渲染阴影投射者的背面
	 * @param  
	 */
	public void setShadowCasterRenderBackFaces(boolean bf)
	{
		super.setShadowCasterRenderBackFaces_NoVirtual(bf);
	}
	/**
	 * 获取是否渲染阴影投射者的背面
	 * @param  
	 */
	public boolean getShadowCasterRenderBackFaces()
	{
		return super.getShadowCasterRenderBackFaces_NoVirtual();
	}
	/**
	 * 设置阴影相机
	 * @param  
	 */
	public void setShadowCameraSetup(com.earthview.world.graphic.ShadowCameraSetupPtr shadowSetup)
	{
		super.setShadowCameraSetup_NoVirtual(shadowSetup);
	}
	/**
	 * 获得阴影相机
	 * @param  
	 */
	public com.earthview.world.graphic.ShadowCameraSetupPtr getShadowCameraSetup()
	{
		return super.getShadowCameraSetup_NoVirtual();
	}
	public void setShadowUseInfiniteFarPlane(boolean enable)
	{
		super.setShadowUseInfiniteFarPlane_NoVirtual(enable);
	}
	public boolean isShadowTechniqueStencilBased()
	{
		return super.isShadowTechniqueStencilBased_NoVirtual();
	}
	public boolean isShadowTechniqueTextureBased()
	{
		return super.isShadowTechniqueTextureBased_NoVirtual();
	}
	public boolean isShadowTechniqueModulative()
	{
		return super.isShadowTechniqueModulative_NoVirtual();
	}
	public boolean isShadowTechniqueAdditive()
	{
		return super.isShadowTechniqueAdditive_NoVirtual();
	}
	public boolean isShadowTechniqueIntegrated()
	{
		return super.isShadowTechniqueIntegrated_NoVirtual();
	}
	public boolean isShadowTechniqueInUse()
	{
		return super.isShadowTechniqueInUse_NoVirtual();
	}
	public void setShadowUseLightClipPlanes(boolean enabled)
	{
		super.setShadowUseLightClipPlanes_NoVirtual(enabled);
	}
	public boolean getShadowUseLightClipPlanes()
	{
		return super.getShadowUseLightClipPlanes_NoVirtual();
	}
	public void _setActiveCompositorChain(com.earthview.world.graphic.CompositorChain chain)
	{
		super._setActiveCompositorChain_NoVirtual(chain);
	}
	public void setLateMaterialResolving(boolean isLate)
	{
		super.setLateMaterialResolving_NoVirtual(isLate);
	}
	public boolean isLateMaterialResolving()
	{
		return super.isLateMaterialResolving_NoVirtual();
	}
	public com.earthview.world.graphic.CompositorChain _getActiveCompositorChain()
	{
		return super._getActiveCompositorChain_NoVirtual();
	}
	public void addListener(com.earthview.world.graphic.SceneManager.SceneManagerListener ref_s)
	{
		super.addListener_NoVirtual(ref_s);
	}
	public void removeListener(com.earthview.world.graphic.SceneManager.SceneManagerListener s)
	{
		super.removeListener_NoVirtual(s);
	}
	public boolean existListener(com.earthview.world.graphic.SceneManager.SceneManagerListener s)
	{
		return super.existListener_NoVirtual(s);
	}
	public com.earthview.world.graphic.StaticGeometry createStaticGeometry(String name)
	{
		return super.createStaticGeometry_NoVirtual(name);
	}
	public com.earthview.world.graphic.StaticGeometry getStaticGeometry(String name)
	{
		return super.getStaticGeometry_NoVirtual(name);
	}
	public boolean hasStaticGeometry(String name)
	{
		return super.hasStaticGeometry_NoVirtual(name);
	}
	public void destroyStaticGeometry(com.earthview.world.graphic.StaticGeometry geom)
	{
		super.destroyStaticGeometry_NoVirtual(geom);
	}
	public void destroyStaticGeometry(String name)
	{
		super.destroyStaticGeometry_NoVirtual(name);
	}
	public void destroyAllStaticGeometry()
	{
		super.destroyAllStaticGeometry_NoVirtual();
	}
	public com.earthview.world.graphic.InstancedGeometry createInstancedGeometry(String name)
	{
		return super.createInstancedGeometry_NoVirtual(name);
	}
	public com.earthview.world.graphic.InstancedGeometry getInstancedGeometry(String name)
	{
		return super.getInstancedGeometry_NoVirtual(name);
	}
	public void destroyInstancedGeometry(com.earthview.world.graphic.InstancedGeometry geom)
	{
		super.destroyInstancedGeometry_NoVirtual(geom);
	}
	public void destroyInstancedGeometry(String name)
	{
		super.destroyInstancedGeometry_NoVirtual(name);
	}
	public void destroyAllInstancedGeometry()
	{
		super.destroyAllInstancedGeometry_NoVirtual();
	}
	/**
	 * 创建Instance管理器每个submesh对应一个instance管理器
	 * @param  
	 */
	public com.earthview.world.graphic.InstanceManager createInstanceManager(String customName, String meshName, String groupName, com.earthview.world.graphic.InstanceManager.InstancingTechnique technique, long numInstancesPerBatch, int flags, int subMeshIdx)
	{
		return super.createInstanceManager_NoVirtual(customName, meshName, groupName, technique, numInstancesPerBatch, flags, subMeshIdx);
	}
	public com.earthview.world.graphic.InstanceManager createInstanceManager(String customName, String meshName, String groupName, com.earthview.world.graphic.InstanceManager.InstancingTechnique technique, long numInstancesPerBatch, int flags)
	{
		return super.createInstanceManager_NoVirtual(customName, meshName, groupName, technique, numInstancesPerBatch, flags);
	}
	public com.earthview.world.graphic.InstanceManager createInstanceManager(String customName, String meshName, String groupName, com.earthview.world.graphic.InstanceManager.InstancingTechnique technique, long numInstancesPerBatch)
	{
		return super.createInstanceManager_NoVirtual(customName, meshName, groupName, technique, numInstancesPerBatch);
	}
	/**
	 * 获得Instance管理器
	 * @param  
	 */
	public com.earthview.world.graphic.InstanceManager getInstanceManager(String managerName)
	{
		return super.getInstanceManager_NoVirtual(managerName);
	}
	/**
	 * 判断是否存在给定名称的Instance管理器
	 * @param  
	 */
	public boolean hasInstanceManager(String managerName)
	{
		return super.hasInstanceManager_NoVirtual(managerName);
	}
	/**
	 * 销毁给定的Instance管理器
	 * @param  
	 */
	public void destroyInstanceManager(String name)
	{
		super.destroyInstanceManager_NoVirtual(name);
	}
	public void destroyInstanceManager(com.earthview.world.graphic.InstanceManager instanceManager)
	{
		super.destroyInstanceManager_NoVirtual(instanceManager);
	}
	public void destroyInstanceManagerWithThreadSafe(String name)
	{
		super.destroyInstanceManagerWithThreadSafe_NoVirtual(name);
	}
	public void destroyInstanceManagerWithThreadSafe(com.earthview.world.graphic.InstanceManager instanceManager)
	{
		super.destroyInstanceManagerWithThreadSafe_NoVirtual(instanceManager);
	}
	/**
	 * 销毁所有Instance管理器
	 * @param  
	 */
	public void destroyAllInstanceManagers()
	{
		super.destroyAllInstanceManagers_NoVirtual();
	}
	/**
	 * 获得每个批次支持的最多instance数量
	 * @param  
	 */
	public long getNumInstancesPerBatch(String meshName, String groupName, String materialName, com.earthview.world.graphic.InstanceManager.InstancingTechnique technique, long numInstancesPerBatch)
	{
		return super.getNumInstancesPerBatch_NoVirtual(meshName, groupName, materialName, technique, numInstancesPerBatch);
	}
	public long getNumInstancesPerBatch(String meshName, String groupName, String materialName, com.earthview.world.graphic.InstanceManager.InstancingTechnique technique, long numInstancesPerBatch, int flags)
	{
		return super.getNumInstancesPerBatch_NoVirtual(meshName, groupName, materialName, technique, numInstancesPerBatch, flags);
	}
	public long getNumInstancesPerBatch(String meshName, String groupName, String materialName, com.earthview.world.graphic.InstanceManager.InstancingTechnique technique, long numInstancesPerBatch, int flags, int subMeshIdx)
	{
		return super.getNumInstancesPerBatch_NoVirtual(meshName, groupName, materialName, technique, numInstancesPerBatch, flags, subMeshIdx);
	}
	/**
	 * 创建Instance实体每个实体对应一个SubMesh
	 * @param  
	 */
	public com.earthview.world.graphic.InstancedEntity createInstancedEntity(String materialName, String managerName)
	{
		return super.createInstancedEntity_NoVirtual(materialName, managerName);
	}
	/**
	 * 销毁Instance实体				
	 * @param  
	 */
	public void destroyInstancedEntity(com.earthview.world.graphic.InstancedEntity instancedEntity)
	{
		super.destroyInstancedEntity_NoVirtual(instancedEntity);
	}
	public com.earthview.world.graphic.MovableObject createMovableObject(String name, String typeName, com.earthview.world.core.CommonStringPairList params)
	{
		return super.createMovableObject_NoVirtual(name, typeName, params);
	}
	public com.earthview.world.graphic.MovableObject createMovableObject(String name, String typeName)
	{
		return super.createMovableObject_NoVirtual(name, typeName);
	}
	public com.earthview.world.graphic.MovableObject createMovableObject(String typeName, com.earthview.world.core.CommonStringPairList params)
	{
		return super.createMovableObject_NoVirtual(typeName, params);
	}
	public com.earthview.world.graphic.MovableObject createMovableObject(String typeName)
	{
		return super.createMovableObject_NoVirtual(typeName);
	}
	public void destroyMovableObject(String name, String typeName)
	{
		super.destroyMovableObject_NoVirtual(name, typeName);
	}
	public void destroyMovableObject(com.earthview.world.graphic.MovableObject m)
	{
		super.destroyMovableObject_NoVirtual(m);
	}
	public void destroyAllMovableObjectsByType(String typeName)
	{
		super.destroyAllMovableObjectsByType_NoVirtual(typeName);
	}
	public void destroyAllMovableObjects()
	{
		super.destroyAllMovableObjects_NoVirtual();
	}
	public com.earthview.world.graphic.MovableObject getMovableObject(String name, String typeName)
	{
		return super.getMovableObject_NoVirtual(name, typeName);
	}
	public boolean hasMovableObject(String name, String typeName)
	{
		return super.hasMovableObject_NoVirtual(name, typeName);
	}
	public com.earthview.world.graphic.SceneManager.MovableObjectIterator getMovableObjectIterator(String typeName)
	{
		return super.getMovableObjectIterator_NoVirtual(typeName);
	}
	public void injectMovableObject(com.earthview.world.graphic.MovableObject m)
	{
		super.injectMovableObject_NoVirtual(m);
	}
	public void extractMovableObject(String name, String typeName)
	{
		super.extractMovableObject_NoVirtual(name, typeName);
	}
	public void extractMovableObject(com.earthview.world.graphic.MovableObject m)
	{
		super.extractMovableObject_NoVirtual(m);
	}
	public void extractAllMovableObjectsByType(String typeName)
	{
		super.extractAllMovableObjectsByType_NoVirtual(typeName);
	}
	public void setVisibilityMask(long vmask)
	{
		super.setVisibilityMask_NoVirtual(vmask);
	}
	public long getVisibilityMask()
	{
		return super.getVisibilityMask_NoVirtual();
	}
	public void setFindVisibleObjects(boolean find)
	{
		super.setFindVisibleObjects_NoVirtual(find);
	}
	public boolean getFindVisibleObjects()
	{
		return super.getFindVisibleObjects_NoVirtual();
	}
	public void setNormaliseNormalsOnScale(boolean n)
	{
		super.setNormaliseNormalsOnScale_NoVirtual(n);
	}
	public boolean getNormaliseNormalsOnScale()
	{
		return super.getNormaliseNormalsOnScale_NoVirtual();
	}
	public void setFlipCullingOnNegativeScale(boolean n)
	{
		super.setFlipCullingOnNegativeScale_NoVirtual(n);
	}
	public boolean getFlipCullingOnNegativeScale()
	{
		return super.getFlipCullingOnNegativeScale_NoVirtual();
	}
	public void _injectRenderWithPass(com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.Renderable rend, boolean shadowDerivation, boolean doLightIteration, com.earthview.world.graphic.LightList manualLightList)
	{
		super._injectRenderWithPass_NoVirtual(pass, rend, shadowDerivation, doLightIteration, manualLightList);
	}
	///virtual void _injectRenderWithPass(EarthView::World::Graphic::CPass *pass, EarthView::World::Graphic::CRenderable *rend, ev_bool shadowDerivation = true,
	///	ev_bool doLightIteration = false, const EarthView::World::Graphic::LightList* manualLightList = 0);
	public void _injectRenderWithPass(com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.Renderable rend, boolean shadowDerivation, boolean doLightIteration)
	{
		super._injectRenderWithPass_NoVirtual(pass, rend, shadowDerivation, doLightIteration);
	}
	public void _injectRenderWithPass(com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.Renderable rend, boolean shadowDerivation)
	{
		super._injectRenderWithPass_NoVirtual(pass, rend, shadowDerivation);
	}
	public void _injectRenderWithPass(com.earthview.world.graphic.Pass pass, com.earthview.world.graphic.Renderable rend)
	{
		super._injectRenderWithPass_NoVirtual(pass, rend);
	}
	public void _suppressRenderStateChanges(boolean suppress)
	{
		super._suppressRenderStateChanges_NoVirtual(suppress);
	}
	public boolean _areRenderStateChangesSuppressed()
	{
		return super._areRenderStateChangesSuppressed_NoVirtual();
	}
	public com.earthview.world.graphic.Pass _setPass(com.earthview.world.graphic.Pass pass, boolean evenIfSuppressed, boolean shadowDerivation)
	{
		return super._setPass_NoVirtual(pass, evenIfSuppressed, shadowDerivation);
	}
	public com.earthview.world.graphic.Pass _setPass(com.earthview.world.graphic.Pass pass, boolean evenIfSuppressed)
	{
		return super._setPass_NoVirtual(pass, evenIfSuppressed);
	}
	public com.earthview.world.graphic.Pass _setPass(com.earthview.world.graphic.Pass pass)
	{
		return super._setPass_NoVirtual(pass);
	}
	public void _markGpuParamsDirty(int mask)
	{
		super._markGpuParamsDirty_NoVirtual(mask);
	}
	public void _suppressShadows(boolean suppress)
	{
		super._suppressShadows_NoVirtual(suppress);
	}
	public boolean _areShadowsSuppressed()
	{
		return super._areShadowsSuppressed_NoVirtual();
	}
	public void _renderQueueGroupObjects(com.earthview.world.graphic.RenderQueueGroup group, com.earthview.world.graphic.QueuedRenderableCollection.OrganisationMode om)
	{
		super._renderQueueGroupObjects_NoVirtual(group, om);
	}
	public void setCameraRelativeRendering(boolean rel)
	{
		super.setCameraRelativeRendering_NoVirtual(rel);
	}
	public boolean getCameraRelativeRendering()
	{
		return super.getCameraRelativeRendering_NoVirtual();
	}
	public double getHeightAt(double latitude, double lontitude, float targetSamplesPerDegrees)
	{
		return super.getHeightAt_NoVirtual(latitude, lontitude, targetSamplesPerDegrees);
	}
	public double getBestHeightAt(double latitude, double lontitude)
	{
		return super.getBestHeightAt_NoVirtual(latitude, lontitude);
	}
	public double getHeightAtTile(double latitude, double lontitude)
	{
		return super.getHeightAtTile_NoVirtual(latitude, lontitude);
	}
	/// 获取瓦片经纬度包围盒
	/// </summary>
	/// <param name="level">级别</param>
	/// <param name="row">行号</param>
	/// <param name="col">列号</param>
	/// <param name="minX">最小经度</param>
	/// <param name="maxX">最大经度</param>
	/// <param name="minY">最小纬度</param>
	/// <param name="maxY">最大纬度</param>
	/// <returns>是否成功</returns>
	public boolean getTileEnvelope(int level, long row, long col, DoublePointer minX, DoublePointer maxX, DoublePointer minY, DoublePointer maxY)
	{
		return super.getTileEnvelope_NoVirtual(level, row, col, minX, maxX, minY, maxY);
	}
	/**
	 * 添加临时图层
	 * @param layer 图层
	 * @return 是否成功
	 */
	public boolean addTempLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		return super.addTempLayer_NoVirtual(layer);
	}
	/**
	 * 删除临时图层
	 * @param layer 图层
	 * @return 是否成功
	 */
	public boolean removeTempLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		return super.removeTempLayer_NoVirtual(layer);
	}
	/**
	 * 刷新瓦片纹理
	 * @param updateImageGroup 是否更新影像层
	 * @param updateFeatureGroup 是否更新特征层
	 * @param updateKmlGroup 是否更新kml层
	 */
	public void updateQuadImage(boolean updateImageGroup, boolean updateFeatureGroup, boolean updateKmlGroup)
	{
		super.updateQuadImage_NoVirtual(updateImageGroup, updateFeatureGroup, updateKmlGroup);
	}
	/// <summary>
	/// 刷新瓦片纹理<只刷新指定范围内的瓦片>
	/// </summary>
	/// <param name="updateImageGroup">是否更新影像层</param>  
	/// <param name="updateFeatureGroup">是否更新特征层</param> 
	/// <param name="updateKmlGroup">是否更新kml层</param> 
	/// <param name="minX">最小经度</param>
	/// <param name="maxX">最大经度</param>
	/// <param name="minY">最小纬度</param>
	/// <param name="maxY">最大纬度</param>
	/// <returns></returns>
	public void updateQuadImage(boolean updateImageGroup, boolean updateFeatureGroup, boolean updateKmlGroup, double minX, double maxX, double minY, double maxY)
	{
		super.updateQuadImage_NoVirtual(updateImageGroup, updateFeatureGroup, updateKmlGroup, minX, maxX, minY, maxY);
	}
	/**
	 * 刷新摄影测量纹理
	 */
	public void updateOBQ(boolean bUpdateVectorTexture, boolean bUpdateKmlTexture, boolean bUpdateTemporaryTexture, boolean bUpdateTerrain)
	{
		super.updateOBQ_NoVirtual(bUpdateVectorTexture, bUpdateKmlTexture, bUpdateTemporaryTexture, bUpdateTerrain);
	}
	/**
	 * 允许碰撞
	 * @param enable 
	 */
	public void setCollisionDetectionEnable(boolean enable)
	{
		super.setCollisionDetectionEnable_NoVirtual(enable);
	}
	
	native protected void register__alertVisibleObjects_void(long pNativeObject, String method);
	native protected void register_createSceneNodeImpl_void(long pNativeObject, String method);
	native protected void register_createSceneNodeImpl_EVString(long pNativeObject, String method);
	native protected void register_initRenderQueue_void(long pNativeObject, String method);
	native protected void register_deriveShadowCasterPass_CPass(long pNativeObject, String method);
	native protected void register_deriveShadowReceiverPass_CPass(long pNativeObject, String method);
	native protected void register_validatePassForRendering_CPass(long pNativeObject, String method);
	native protected void register_validateRenderableForRendering_CPass_CRenderable(long pNativeObject, String method);
	native protected void register_createSkyboxPlane_BoxPlane_Real_CQuaternion_EVString(long pNativeObject, String method);
	native protected void register_createSkydomePlane_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString(long pNativeObject, String method);
	native protected void register_useRenderableViewProjMode_CRenderable_ev_bool(long pNativeObject, String method);
	native protected void register_resetViewProjMode_ev_bool(long pNativeObject, String method);
	native protected void register_firePreRenderQueues_void(long pNativeObject, String method);
	native protected void register_firePostRenderQueues_void(long pNativeObject, String method);
	native protected void register_fireRenderQueueStarted_ev_uint8_EVString(long pNativeObject, String method);
	native protected void register_fireRenderQueueEnded_ev_uint8_EVString(long pNativeObject, String method);
	native protected void register_fireRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(long pNativeObject, String method);
	native protected void register_fireRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(long pNativeObject, String method);
	native protected void register_fireShadowTexturesUpdated_ev_size_t(long pNativeObject, String method);
	native protected void register_fireShadowTexturesPreCaster_CLight_CCamera_ev_size_t(long pNativeObject, String method);
	native protected void register_fireShadowTexturesPreReceiver_CLight_CFrustum(long pNativeObject, String method);
	native protected void register_firePreUpdateSceneGraph_CCamera(long pNativeObject, String method);
	native protected void register_firePostUpdateSceneGraph_CCamera(long pNativeObject, String method);
	native protected void register_firePreFindVisibleObjects_CViewport(long pNativeObject, String method);
	native protected void register_firePostFindVisibleObjects_CViewport(long pNativeObject, String method);
	native protected void register_fireSceneManagerDestroyed_void(long pNativeObject, String method);
	native protected void register_setViewport_CViewport(long pNativeObject, String method);
	native protected void register_renderVisibleObjectsDefaultSequence_void(long pNativeObject, String method);
	native protected void register_renderVisibleObjectsCustomSequence_CRenderQueueInvocationSequence(long pNativeObject, String method);
	native protected void register_prepareRenderQueue_void(long pNativeObject, String method);
	native protected void register_renderSingleObject_CRenderable_CPass_ev_bool_ev_bool_LightList(long pNativeObject, String method);
	native protected void register_renderSingleObject_CRenderable_CPass_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_createAutoParamDataSource_void(long pNativeObject, String method);
	native protected void register_findLightsAffectingFrustum_CCamera(long pNativeObject, String method);
	native protected void register_initShadowVolumeMaterials_void(long pNativeObject, String method);
	native protected void register_ensureShadowTexturesCreated_void(long pNativeObject, String method);
	native protected void register_destroyShadowTextures_void(long pNativeObject, String method);
	native protected void register_prepareShadowTextures_CCamera_CViewport_LightList(long pNativeObject, String method);
	native protected void register_prepareShadowTextures_CCamera_CViewport(long pNativeObject, String method);
	native protected void register_setImageDefaultMaterial_CMaterialPtr(long pNativeObject, String method);
	native protected void register_setImageUseDefaultMaterial_ev_bool(long pNativeObject, String method);
	native protected void register_getSunPosition_void(long pNativeObject, String method);
	native protected void register_setAtmosphereVisible_ev_bool(long pNativeObject, String method);
	native protected void register_storeAtmosphereVisibleState_void(long pNativeObject, String method);
	native protected void register_restoreAtmosphereVisibleState_void(long pNativeObject, String method);
	native protected void register_setSunVisible_ev_bool(long pNativeObject, String method);
	native protected void register__pauseRendering_void(long pNativeObject, String method);
	native protected void register__resumeRendering_RenderContext(long pNativeObject, String method);
	native protected void register_renderShadowVolumesToStencil_CLight_CCamera_ev_bool(long pNativeObject, String method);
	native protected void register_setShadowVolumeStencilState_ev_bool_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_findShadowCastersForLight_CLight_CCamera(long pNativeObject, String method);
	native protected void register_renderBasicQueueGroupObjects_CRenderQueueGroup_OrganisationMode(long pNativeObject, String method);
	native protected void register_renderAdditiveStencilShadowedQueueGroupObjects_CRenderQueueGroup_OrganisationMode(long pNativeObject, String method);
	native protected void register_renderModulativeStencilShadowedQueueGroupObjects_CRenderQueueGroup_OrganisationMode(long pNativeObject, String method);
	native protected void register_renderTextureShadowCasterQueueGroupObjects_CRenderQueueGroup_OrganisationMode(long pNativeObject, String method);
	native protected void register_renderTextureShadowReceiverQueueGroupObjects_CRenderQueueGroup_OrganisationMode(long pNativeObject, String method);
	native protected void register_renderModulativeTextureShadowedQueueGroupObjects_CRenderQueueGroup_OrganisationMode(long pNativeObject, String method);
	native protected void register_renderAdditiveTextureShadowedQueueGroupObjects_CRenderQueueGroup_OrganisationMode(long pNativeObject, String method);
	native protected void register_renderObjects_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList(long pNativeObject, String method);
	native protected void register_renderObjects_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_renderTransparentShadowCasterObjects_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList(long pNativeObject, String method);
	native protected void register_renderTransparentShadowCasterObjects_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_updateRenderQueueSplitOptions_void(long pNativeObject, String method);
	native protected void register_updateRenderQueueGroupSplitOptions_CRenderQueueGroup_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_buildAndSetScissor_LightList_CCamera(long pNativeObject, String method);
	native protected void register_buildScissor_CLight_CCamera_RealRect(long pNativeObject, String method);
	native protected void register_resetScissor_void(long pNativeObject, String method);
	native protected void register_buildAndSetLightClip_LightList(long pNativeObject, String method);
	native protected void register_buildLightClip_CLight_PlaneList(long pNativeObject, String method);
	native protected void register_resetLightClip_void(long pNativeObject, String method);
	native protected void register_checkCachedLightClippingInfo_void(long pNativeObject, String method);
	native protected void register_useLights_LightList_ev_uint16(long pNativeObject, String method);
	native protected void register_setViewMatrix_CMatrix4(long pNativeObject, String method);
	native protected void register_useLightsGpuProgram_CPass_LightList(long pNativeObject, String method);
	native protected void register_bindGpuProgram_CGpuProgram(long pNativeObject, String method);
	native protected void register_updateGpuProgramParameters_CPass(long pNativeObject, String method);
	native protected void register_getTypeName_void(long pNativeObject, String method);
	native protected void register_createCamera_EVString(long pNativeObject, String method);
	native protected void register_getCamera_EVString(long pNativeObject, String method);
	native protected void register_hasCamera_EVString(long pNativeObject, String method);
	native protected void register_destroyCamera_CCamera(long pNativeObject, String method);
	native protected void register_destroyCamera_EVString(long pNativeObject, String method);
	native protected void register_destroyAllCameras_void(long pNativeObject, String method);
	native protected void register_createLight_EVString(long pNativeObject, String method);
	native protected void register_createLight_void(long pNativeObject, String method);
	native protected void register_getLightCount_void(long pNativeObject, String method);
	native protected void register_getLight_ev_uint16(long pNativeObject, String method);
	native protected void register_getLight_EVString(long pNativeObject, String method);
	native protected void register_hasLight_EVString(long pNativeObject, String method);
	native protected void register_getLightClippingPlanes_CLight(long pNativeObject, String method);
	native protected void register_getLightScissorRect_CLight_CCamera(long pNativeObject, String method);
	native protected void register_destroyLight_EVString(long pNativeObject, String method);
	native protected void register_destroyLight_CLight(long pNativeObject, String method);
	native protected void register_destroyAllLights_void(long pNativeObject, String method);
	native protected void register_getSoftShadowTexName_void(long pNativeObject, String method);
	native protected void register_getShadowTexCam_void(long pNativeObject, String method);
	native protected void register_getSoftShadowProjMatrix_ev_uint16(long pNativeObject, String method);
	native protected void register_getCascadeEyeSpaceDepthArray_void(long pNativeObject, String method);
	native protected void register_getSoftShadowNearClip_ev_uint8(long pNativeObject, String method);
	native protected void register_getSoftShadowFarClip_ev_uint8(long pNativeObject, String method);
	native protected void register_getIsUseSoftShadowFitToCascadesMode_void(long pNativeObject, String method);
	native protected void register_setIsUseSoftShadowFitToCascadesMode_bool(long pNativeObject, String method);
	native protected void register_getCurrentClipIndex_void(long pNativeObject, String method);
	native protected void register_getIsUseSoftShadowTechnique_void(long pNativeObject, String method);
	native protected void register_setIsUseSoftShadowTechnique_bool(long pNativeObject, String method);
	native protected void register_getCascadePartitionsPercent_void(long pNativeObject, String method);
	native protected void register_setCascadePartitionsPercent_float(long pNativeObject, String method);
	native protected void register_getCascadePartitionsDistance_ev_uint8(long pNativeObject, String method);
	native protected void register_setCascadePartitionsDistance_ev_uint8_ev_uint8(long pNativeObject, String method);
	native protected void register_getSoftShadowOffsetFormat_void(long pNativeObject, String method);
	native protected void register_checkShadowCasterInFrustum_CCamera(long pNativeObject, String method);
	native protected void register_hasShadowCasterInFrustum_void(long pNativeObject, String method);
	native protected void register_getSoftShadowLightBleedPower_void(long pNativeObject, String method);
	native protected void register_setSoftShadowLightBleedPower_Real(long pNativeObject, String method);
	native protected void register_getSoftShadowDepthOffset_void(long pNativeObject, String method);
	native protected void register_setSoftShadowDepthOffset_Real(long pNativeObject, String method);
	native protected void register_getSoftShadowNormalFactor_void(long pNativeObject, String method);
	native protected void register_setSoftShadowNormalFactor_float(long pNativeObject, String method);
	native protected void register__notifyLightsDirty_void(long pNativeObject, String method);
	native protected void register__getLightsAffectingFrustum_void(long pNativeObject, String method);
	native protected void register__populateLightList_CVector3_Real_LightList_ev_uint32(long pNativeObject, String method);
	native protected void register__populateLightList_CVector3_Real_LightList(long pNativeObject, String method);
	native protected void register_showImage_ev_bool(long pNativeObject, String method);
	native protected void register_getImageVisible_void(long pNativeObject, String method);
	native protected void register_showOcean_ev_bool(long pNativeObject, String method);
	native protected void register_getOceanVisible_void(long pNativeObject, String method);
	native protected void register__populateLightList_CSceneNode_Real_LightList_ev_uint32(long pNativeObject, String method);
	native protected void register__populateLightList_CSceneNode_Real_LightList(long pNativeObject, String method);
	native protected void register_createSceneNode_void(long pNativeObject, String method);
	native protected void register_createSceneNode_EVString(long pNativeObject, String method);
	native protected void register_destroySceneNode_EVString(long pNativeObject, String method);
	native protected void register_destroySceneNode_CSceneNode(long pNativeObject, String method);
	native protected void register_getRootSceneNode_void(long pNativeObject, String method);
	native protected void register_getSceneNode_EVString(long pNativeObject, String method);
	native protected void register_hasSceneNode_EVString(long pNativeObject, String method);
	native protected void register_createEntity_EVString_EVString_IntVector_EVString(long pNativeObject, String method);
	native protected void register_createEntity_EVString_EVString_EVString(long pNativeObject, String method);
	native protected void register_createEntity_EVString_EVString_IntVector(long pNativeObject, String method);
	native protected void register_createEntity_EVString_EVString(long pNativeObject, String method);
	native protected void register_createEntity_EVString_CMeshPtr_IntVector(long pNativeObject, String method);
	native protected void register_createEntity_EVString_CMeshPtr(long pNativeObject, String method);
	native protected void register_createEntity_CMeshPtr_IntVector(long pNativeObject, String method);
	native protected void register_createEntity_CMeshPtr(long pNativeObject, String method);
	native protected void register_createEntity_EVString_IntVector(long pNativeObject, String method);
	native protected void register_createEntity_EVString(long pNativeObject, String method);
	native protected void register_createEntity_EVString_PrefabType(long pNativeObject, String method);
	native protected void register_createEntity_PrefabType(long pNativeObject, String method);
	native protected void register_getEntity_EVString(long pNativeObject, String method);
	native protected void register_hasEntity_EVString(long pNativeObject, String method);
	native protected void register_destroyEntity_CEntity(long pNativeObject, String method);
	native protected void register_destroyEntity_EVString(long pNativeObject, String method);
	native protected void register_destroyAllEntities_void(long pNativeObject, String method);
	native protected void register_createManualObject_EVString(long pNativeObject, String method);
	native protected void register_createManualObject_void(long pNativeObject, String method);
	native protected void register_getManualObject_EVString(long pNativeObject, String method);
	native protected void register_hasManualObject_EVString(long pNativeObject, String method);
	native protected void register_destroyManualObject_CManualObject(long pNativeObject, String method);
	native protected void register_destroyManualObject_EVString(long pNativeObject, String method);
	native protected void register_destroyAllManualObjects_void(long pNativeObject, String method);
	native protected void register_usingWebMercator_void(long pNativeObject, String method);
	native protected void register_createBillboardChain_EVString(long pNativeObject, String method);
	native protected void register_createBillboardChain_void(long pNativeObject, String method);
	native protected void register_getBillboardChain_EVString(long pNativeObject, String method);
	native protected void register_hasBillboardChain_EVString(long pNativeObject, String method);
	native protected void register_destroyBillboardChain_CBillboardChain(long pNativeObject, String method);
	native protected void register_destroyBillboardChain_EVString(long pNativeObject, String method);
	native protected void register_destroyAllBillboardChains_void(long pNativeObject, String method);
	native protected void register_createRibbonTrail_EVString(long pNativeObject, String method);
	native protected void register_createRibbonTrail_void(long pNativeObject, String method);
	native protected void register_getRibbonTrail_EVString(long pNativeObject, String method);
	native protected void register_hasRibbonTrail_EVString(long pNativeObject, String method);
	native protected void register_destroyRibbonTrail_CRibbonTrail(long pNativeObject, String method);
	native protected void register_destroyRibbonTrail_EVString(long pNativeObject, String method);
	native protected void register_destroyAllRibbonTrails_void(long pNativeObject, String method);
	native protected void register_createParticleSystem_EVString_EVString(long pNativeObject, String method);
	native protected void register_createParticleSystem_EVString_ev_size_t_EVString(long pNativeObject, String method);
	native protected void register_createParticleSystem_EVString_ev_size_t(long pNativeObject, String method);
	native protected void register_createParticleSystem_EVString(long pNativeObject, String method);
	native protected void register_createParticleSystem_ev_size_t_EVString(long pNativeObject, String method);
	native protected void register_createParticleSystem_ev_size_t(long pNativeObject, String method);
	native protected void register_createParticleSystem_void(long pNativeObject, String method);
	native protected void register_getParticleSystem_EVString(long pNativeObject, String method);
	native protected void register_hasParticleSystem_EVString(long pNativeObject, String method);
	native protected void register_destroyParticleSystem_CParticleSystem(long pNativeObject, String method);
	native protected void register_destroyParticleSystem_EVString(long pNativeObject, String method);
	native protected void register_destroyAllParticleSystems_void(long pNativeObject, String method);
	native protected void register_clearScene_void(long pNativeObject, String method);
	native protected void register_prepareWorldGeometry_EVString(long pNativeObject, String method);
	native protected void register_prepareWorldGeometry_DataStreamPtr_EVString(long pNativeObject, String method);
	native protected void register_prepareWorldGeometry_DataStreamPtr(long pNativeObject, String method);
	native protected void register_setWorldGeometry_EVString(long pNativeObject, String method);
	native protected void register_setWorldGeometry_DataStreamPtr_EVString(long pNativeObject, String method);
	native protected void register_setWorldGeometry_DataStreamPtr(long pNativeObject, String method);
	native protected void register_estimateWorldGeometry_EVString(long pNativeObject, String method);
	native protected void register_estimateWorldGeometry_DataStreamPtr_EVString(long pNativeObject, String method);
	native protected void register_estimateWorldGeometry_DataStreamPtr(long pNativeObject, String method);
	native protected void register_getSuggestedViewpoint_ev_bool(long pNativeObject, String method);
	native protected void register_getSuggestedViewpoint_void(long pNativeObject, String method);
	native protected void register_setOption_EVString_void(long pNativeObject, String method);
	native protected void register_getOption_EVString_void(long pNativeObject, String method);
	native protected void register_hasOption_EVString(long pNativeObject, String method);
	native protected void register_getOptionValues_EVString_StringVector(long pNativeObject, String method);
	native protected void register_getOptionKeys_StringVector(long pNativeObject, String method);
	native protected void register__updateSceneGraph_CCamera(long pNativeObject, String method);
	native protected void register__findVisibleObjects_CCamera_VisibleObjectsBoundsInfo_ev_bool(long pNativeObject, String method);
	native protected void register__applySceneAnimations_void(long pNativeObject, String method);
	native protected void register__renderVisibleObjects_void(long pNativeObject, String method);
	native protected void register__renderScene_CCamera_CViewport_ev_bool(long pNativeObject, String method);
	native protected void register__queueSkiesForRendering_CCamera(long pNativeObject, String method);
	native protected void register__setDestinationRenderSystem_CRenderSystem(long pNativeObject, String method);
	native protected void register_setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString(long pNativeObject, String method);
	native protected void register_setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32(long pNativeObject, String method);
	native protected void register_setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real(long pNativeObject, String method);
	native protected void register_setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_bool(long pNativeObject, String method);
	native protected void register_setSkyPlane_ev_bool_CPlane_EVString_Real_Real(long pNativeObject, String method);
	native protected void register_setSkyPlane_ev_bool_CPlane_EVString_Real(long pNativeObject, String method);
	native protected void register_setSkyPlane_ev_bool_CPlane_EVString(long pNativeObject, String method);
	native protected void register__setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString(long pNativeObject, String method);
	native protected void register__setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register__setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32(long pNativeObject, String method);
	native protected void register__setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real(long pNativeObject, String method);
	native protected void register__setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_uint8(long pNativeObject, String method);
	native protected void register__setSkyPlane_ev_bool_CPlane_EVString_Real_Real(long pNativeObject, String method);
	native protected void register__setSkyPlane_ev_bool_CPlane_EVString_Real(long pNativeObject, String method);
	native protected void register__setSkyPlane_ev_bool_CPlane_EVString(long pNativeObject, String method);
	native protected void register_setSkyPlaneEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_isSkyPlaneEnabled_void(long pNativeObject, String method);
	native protected void register_getSkyPlaneNode_void(long pNativeObject, String method);
	native protected void register_getSkyPlaneGenParameters_void(long pNativeObject, String method);
	native protected void register_setSkyBox_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString(long pNativeObject, String method);
	native protected void register_setSkyBox_ev_bool_EVString_Real_ev_bool_CQuaternion(long pNativeObject, String method);
	native protected void register_setSkyBox_ev_bool_EVString_Real_ev_bool(long pNativeObject, String method);
	native protected void register_setSkyBox_ev_bool_EVString_Real(long pNativeObject, String method);
	native protected void register_setSkyBox_ev_bool_EVString(long pNativeObject, String method);
	native protected void register__setSkyBox_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString(long pNativeObject, String method);
	native protected void register__setSkyBox_ev_bool_EVString_Real_ev_uint8_CQuaternion(long pNativeObject, String method);
	native protected void register__setSkyBox_ev_bool_EVString_Real_ev_uint8(long pNativeObject, String method);
	native protected void register__setSkyBox_ev_bool_EVString_Real(long pNativeObject, String method);
	native protected void register__setSkyBox_ev_bool_EVString(long pNativeObject, String method);
	native protected void register_setSkyBoxEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_isSkyBoxEnabled_void(long pNativeObject, String method);
	native protected void register_getSkyBoxNode_void(long pNativeObject, String method);
	native protected void register_getSkyBoxGenParameters_void(long pNativeObject, String method);
	native protected void register_setSkyDome_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString(long pNativeObject, String method);
	native protected void register_setSkyDome_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_setSkyDome_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_setSkyDome_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32(long pNativeObject, String method);
	native protected void register_setSkyDome_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion(long pNativeObject, String method);
	native protected void register_setSkyDome_ev_bool_EVString_Real_Real_Real_ev_bool(long pNativeObject, String method);
	native protected void register_setSkyDome_ev_bool_EVString_Real_Real_Real(long pNativeObject, String method);
	native protected void register_setSkyDome_ev_bool_EVString_Real_Real(long pNativeObject, String method);
	native protected void register_setSkyDome_ev_bool_EVString_Real(long pNativeObject, String method);
	native protected void register_setSkyDome_ev_bool_EVString(long pNativeObject, String method);
	native protected void register__setSkyDome_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString(long pNativeObject, String method);
	native protected void register__setSkyDome_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register__setSkyDome_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register__setSkyDome_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32(long pNativeObject, String method);
	native protected void register__setSkyDome_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion(long pNativeObject, String method);
	native protected void register__setSkyDome_ev_bool_EVString_Real_Real_Real_ev_uint8(long pNativeObject, String method);
	native protected void register__setSkyDome_ev_bool_EVString_Real_Real_Real(long pNativeObject, String method);
	native protected void register__setSkyDome_ev_bool_EVString_Real_Real(long pNativeObject, String method);
	native protected void register__setSkyDome_ev_bool_EVString_Real(long pNativeObject, String method);
	native protected void register__setSkyDome_ev_bool_EVString(long pNativeObject, String method);
	native protected void register_setSkyDomeEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_isSkyDomeEnabled_void(long pNativeObject, String method);
	native protected void register_getSkyDomeNode_void(long pNativeObject, String method);
	native protected void register_getSkyDomeGenParameters_void(long pNativeObject, String method);
	native protected void register_getFogMode_void(long pNativeObject, String method);
	native protected void register_getFogColour_void(long pNativeObject, String method);
	native protected void register_getFogStart_void(long pNativeObject, String method);
	native protected void register_getFogEnd_void(long pNativeObject, String method);
	native protected void register_getFogDensity_void(long pNativeObject, String method);
	native protected void register_createBillboardSet_EVString_ev_uint32(long pNativeObject, String method);
	native protected void register_createBillboardSet_EVString(long pNativeObject, String method);
	native protected void register_createBillboardSet_ev_uint32(long pNativeObject, String method);
	native protected void register_createBillboardSet_void(long pNativeObject, String method);
	native protected void register_getBillboardSet_EVString(long pNativeObject, String method);
	native protected void register_hasBillboardSet_EVString(long pNativeObject, String method);
	native protected void register_destroyBillboardSet_CBillboardSet(long pNativeObject, String method);
	native protected void register_destroyBillboardSet_EVString(long pNativeObject, String method);
	native protected void register_destroyAllBillboardSets_void(long pNativeObject, String method);
	native protected void register_setDisplaySceneNodes_ev_bool(long pNativeObject, String method);
	native protected void register_getDisplaySceneNodes_void(long pNativeObject, String method);
	native protected void register_createAnimation_EVString_Real(long pNativeObject, String method);
	native protected void register_getAnimation_EVString(long pNativeObject, String method);
	native protected void register_hasAnimation_EVString(long pNativeObject, String method);
	native protected void register_destroyAnimation_EVString(long pNativeObject, String method);
	native protected void register_destroyAllAnimations_void(long pNativeObject, String method);
	native protected void register_createAnimationState_EVString(long pNativeObject, String method);
	native protected void register_getAnimationState_EVString(long pNativeObject, String method);
	native protected void register_hasAnimationState_EVString(long pNativeObject, String method);
	native protected void register_destroyAnimationState_EVString(long pNativeObject, String method);
	native protected void register_destroyAllAnimationStates_void(long pNativeObject, String method);
	native protected void register_manualRender_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool(long pNativeObject, String method);
	native protected void register_manualRender_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4(long pNativeObject, String method);
	native protected void register_manualRender_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList(long pNativeObject, String method);
	native protected void register_manualRender_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_manualRender_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_manualRender_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool(long pNativeObject, String method);
	native protected void register_manualRender_CRenderable_CPass_CViewport_CMatrix4_CMatrix4(long pNativeObject, String method);
	native protected void register_getRenderQueue_void(long pNativeObject, String method);
	native protected void register_addRenderQueueListener_CRenderQueueListener(long pNativeObject, String method);
	native protected void register_removeRenderQueueListener_CRenderQueueListener(long pNativeObject, String method);
	native protected void register_addRenderObjectListener_CRenderObjectListener(long pNativeObject, String method);
	native protected void register_removeRenderObjectListener_CRenderObjectListener(long pNativeObject, String method);
	native protected void register_addSpecialCaseRenderQueue_ev_uint8(long pNativeObject, String method);
	native protected void register_removeSpecialCaseRenderQueue_ev_uint8(long pNativeObject, String method);
	native protected void register_clearSpecialCaseRenderQueues_void(long pNativeObject, String method);
	native protected void register_setSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode(long pNativeObject, String method);
	native protected void register_getSpecialCaseRenderQueueMode_void(long pNativeObject, String method);
	native protected void register_isRenderQueueToBeProcessed_ev_uint8(long pNativeObject, String method);
	native protected void register_setWorldGeometryRenderQueue_ev_uint8(long pNativeObject, String method);
	native protected void register_getWorldGeometryRenderQueue_void(long pNativeObject, String method);
	native protected void register_showBoundingBoxes_ev_bool(long pNativeObject, String method);
	native protected void register_getShowBoundingBoxes_void(long pNativeObject, String method);
	native protected void register__notifyAutotrackingSceneNode_CSceneNode_ev_bool(long pNativeObject, String method);
	native protected void register_createAABBQuery_CAxisAlignedBox_ev_uint32(long pNativeObject, String method);
	native protected void register_createAABBQuery_CAxisAlignedBox(long pNativeObject, String method);
	native protected void register_createSphereQuery_CSphere_ev_uint32(long pNativeObject, String method);
	native protected void register_createSphereQuery_CSphere(long pNativeObject, String method);
	native protected void register_createPlaneBoundedVolumeQuery_PlaneBoundedVolumeList_ev_uint32(long pNativeObject, String method);
	native protected void register_createPlaneBoundedVolumeQuery_PlaneBoundedVolumeList(long pNativeObject, String method);
	native protected void register_createRayQuery_CRay_ev_uint32(long pNativeObject, String method);
	native protected void register_createRayQuery_CRay(long pNativeObject, String method);
	native protected void register_createIntersectionQuery_ev_uint32(long pNativeObject, String method);
	native protected void register_createIntersectionQuery_void(long pNativeObject, String method);
	native protected void register_destroyQuery_CSceneQuery(long pNativeObject, String method);
	native protected void register_setShadowTechnique_ShadowTechnique(long pNativeObject, String method);
	native protected void register_getShadowTechnique_void(long pNativeObject, String method);
	native protected void register_setShowDebugShadows_ev_bool(long pNativeObject, String method);
	native protected void register_getShowDebugShadows_void(long pNativeObject, String method);
	native protected void register_setShadowColour_CColourValue(long pNativeObject, String method);
	native protected void register_getShadowColour_void(long pNativeObject, String method);
	native protected void register_setShadowDirectionalLightExtrusionDistance_Real(long pNativeObject, String method);
	native protected void register_getShadowDirectionalLightExtrusionDistance_void(long pNativeObject, String method);
	native protected void register_setShadowColorRRatio_Real(long pNativeObject, String method);
	native protected void register_setShadowColorGRatio_Real(long pNativeObject, String method);
	native protected void register_setShadowColorBRatio_Real(long pNativeObject, String method);
	native protected void register_getShadowColorRRatio_void(long pNativeObject, String method);
	native protected void register_getShadowColorGRatio_void(long pNativeObject, String method);
	native protected void register_getShadowColorBRatio_void(long pNativeObject, String method);
	native protected void register_setShadowFarDistance_Real(long pNativeObject, String method);
	native protected void register_getShadowFarDistance_void(long pNativeObject, String method);
	native protected void register_getShadowFarDistanceSquared_void(long pNativeObject, String method);
	native protected void register_setShadowIndexBufferSize_ev_size_t(long pNativeObject, String method);
	native protected void register_getShadowIndexBufferSize_void(long pNativeObject, String method);
	native protected void register_setShadowTextureSize_ev_uint16(long pNativeObject, String method);
	native protected void register_setShadowTextureConfig_ev_size_t_ev_uint16_ev_uint16_PixelFormat(long pNativeObject, String method);
	native protected void register_setShadowTextureConfig_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16(long pNativeObject, String method);
	native protected void register_setShadowTextureConfig_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16(long pNativeObject, String method);
	native protected void register_setShadowTextureConfig_ev_size_t_ShadowTextureConfig(long pNativeObject, String method);
	native protected void register_setShadowTexturePixelFormat_PixelFormat(long pNativeObject, String method);
	native protected void register_setShadowTextureFSAA_ev_uint16(long pNativeObject, String method);
	native protected void register_setShadowTextureCount_ev_size_t(long pNativeObject, String method);
	native protected void register_setShadowTextureSettings_ev_uint16_ev_uint16(long pNativeObject, String method);
	native protected void register_setShadowTextureSettings_ev_uint16_ev_uint16_PixelFormat(long pNativeObject, String method);
	native protected void register_setShadowTextureSettings_ev_uint16_ev_uint16_PixelFormat_ev_uint16(long pNativeObject, String method);
	native protected void register_setShadowTextureSettings_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16(long pNativeObject, String method);
	native protected void register_getShadowTexture_ev_size_t(long pNativeObject, String method);
	native protected void register_setShadowDirLightTextureOffset_Real(long pNativeObject, String method);
	native protected void register_getShadowDirLightTextureOffset_void(long pNativeObject, String method);
	native protected void register_setShadowTextureFadeStart_Real(long pNativeObject, String method);
	native protected void register_setShadowTextureFadeEnd_Real(long pNativeObject, String method);
	native protected void register_setShadowTextureSelfShadow_ev_bool(long pNativeObject, String method);
	native protected void register_getShadowTextureSelfShadow_void(long pNativeObject, String method);
	native protected void register_setShadowTextureCasterMaterial_EVString(long pNativeObject, String method);
	native protected void register_setShadowTextureReceiverMaterial_EVString(long pNativeObject, String method);
	native protected void register_setShadowCasterRenderBackFaces_ev_bool(long pNativeObject, String method);
	native protected void register_getShadowCasterRenderBackFaces_void(long pNativeObject, String method);
	native protected void register_setShadowCameraSetup_ShadowCameraSetupPtr(long pNativeObject, String method);
	native protected void register_getShadowCameraSetup_void(long pNativeObject, String method);
	native protected void register_setShadowUseInfiniteFarPlane_ev_bool(long pNativeObject, String method);
	native protected void register_isShadowTechniqueStencilBased_void(long pNativeObject, String method);
	native protected void register_isShadowTechniqueTextureBased_void(long pNativeObject, String method);
	native protected void register_isShadowTechniqueModulative_void(long pNativeObject, String method);
	native protected void register_isShadowTechniqueAdditive_void(long pNativeObject, String method);
	native protected void register_isShadowTechniqueIntegrated_void(long pNativeObject, String method);
	native protected void register_isShadowTechniqueInUse_void(long pNativeObject, String method);
	native protected void register_setShadowUseLightClipPlanes_ev_bool(long pNativeObject, String method);
	native protected void register_getShadowUseLightClipPlanes_void(long pNativeObject, String method);
	native protected void register__setActiveCompositorChain_CCompositorChain(long pNativeObject, String method);
	native protected void register_setLateMaterialResolving_ev_bool(long pNativeObject, String method);
	native protected void register_isLateMaterialResolving_void(long pNativeObject, String method);
	native protected void register__getActiveCompositorChain_void(long pNativeObject, String method);
	native protected void register_addListener_CSceneManagerListener(long pNativeObject, String method);
	native protected void register_removeListener_CSceneManagerListener(long pNativeObject, String method);
	native protected void register_existListener_CSceneManagerListener(long pNativeObject, String method);
	native protected void register_createStaticGeometry_EVString(long pNativeObject, String method);
	native protected void register_getStaticGeometry_EVString(long pNativeObject, String method);
	native protected void register_hasStaticGeometry_EVString(long pNativeObject, String method);
	native protected void register_destroyStaticGeometry_CStaticGeometry(long pNativeObject, String method);
	native protected void register_destroyStaticGeometry_EVString(long pNativeObject, String method);
	native protected void register_destroyAllStaticGeometry_void(long pNativeObject, String method);
	native protected void register_createInstancedGeometry_EVString(long pNativeObject, String method);
	native protected void register_getInstancedGeometry_EVString(long pNativeObject, String method);
	native protected void register_destroyInstancedGeometry_CInstancedGeometry(long pNativeObject, String method);
	native protected void register_destroyInstancedGeometry_EVString(long pNativeObject, String method);
	native protected void register_destroyAllInstancedGeometry_void(long pNativeObject, String method);
	native protected void register_createInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16(long pNativeObject, String method);
	native protected void register_createInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16(long pNativeObject, String method);
	native protected void register_createInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t(long pNativeObject, String method);
	native protected void register_getInstanceManager_EVString(long pNativeObject, String method);
	native protected void register_hasInstanceManager_EVString(long pNativeObject, String method);
	native protected void register_destroyInstanceManager_EVString(long pNativeObject, String method);
	native protected void register_destroyInstanceManager_CInstanceManager(long pNativeObject, String method);
	native protected void register_destroyInstanceManagerWithThreadSafe_EVString(long pNativeObject, String method);
	native protected void register_destroyInstanceManagerWithThreadSafe_CInstanceManager(long pNativeObject, String method);
	native protected void register_destroyAllInstanceManagers_void(long pNativeObject, String method);
	native protected void register_getNumInstancesPerBatch_EVString_EVString_EVString_InstancingTechnique_ev_size_t(long pNativeObject, String method);
	native protected void register_getNumInstancesPerBatch_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16(long pNativeObject, String method);
	native protected void register_getNumInstancesPerBatch_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16(long pNativeObject, String method);
	native protected void register_createInstancedEntity_EVString_EVString(long pNativeObject, String method);
	native protected void register_destroyInstancedEntity_CInstancedEntity(long pNativeObject, String method);
	native protected void register_createMovableObject_EVString_EVString_CommonStringPairList(long pNativeObject, String method);
	native protected void register_createMovableObject_EVString_EVString(long pNativeObject, String method);
	native protected void register_createMovableObject_EVString_CommonStringPairList(long pNativeObject, String method);
	native protected void register_createMovableObject_EVString(long pNativeObject, String method);
	native protected void register_destroyMovableObject_EVString_EVString(long pNativeObject, String method);
	native protected void register_destroyMovableObject_CMovableObject(long pNativeObject, String method);
	native protected void register_destroyAllMovableObjectsByType_EVString(long pNativeObject, String method);
	native protected void register_destroyAllMovableObjects_void(long pNativeObject, String method);
	native protected void register_getMovableObject_EVString_EVString(long pNativeObject, String method);
	native protected void register_hasMovableObject_EVString_EVString(long pNativeObject, String method);
	native protected void register_getMovableObjectIterator_EVString(long pNativeObject, String method);
	native protected void register_injectMovableObject_CMovableObject(long pNativeObject, String method);
	native protected void register_extractMovableObject_EVString_EVString(long pNativeObject, String method);
	native protected void register_extractMovableObject_CMovableObject(long pNativeObject, String method);
	native protected void register_extractAllMovableObjectsByType_EVString(long pNativeObject, String method);
	native protected void register_setVisibilityMask_ev_uint32(long pNativeObject, String method);
	native protected void register_getVisibilityMask_void(long pNativeObject, String method);
	native protected void register_setFindVisibleObjects_ev_bool(long pNativeObject, String method);
	native protected void register_getFindVisibleObjects_void(long pNativeObject, String method);
	native protected void register_setNormaliseNormalsOnScale_ev_bool(long pNativeObject, String method);
	native protected void register_getNormaliseNormalsOnScale_void(long pNativeObject, String method);
	native protected void register_setFlipCullingOnNegativeScale_ev_bool(long pNativeObject, String method);
	native protected void register_getFlipCullingOnNegativeScale_void(long pNativeObject, String method);
	native protected void register__injectRenderWithPass_CPass_CRenderable_ev_bool_ev_bool_LightList(long pNativeObject, String method);
	native protected void register__injectRenderWithPass_CPass_CRenderable_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register__injectRenderWithPass_CPass_CRenderable_ev_bool(long pNativeObject, String method);
	native protected void register__injectRenderWithPass_CPass_CRenderable(long pNativeObject, String method);
	native protected void register__suppressRenderStateChanges_ev_bool(long pNativeObject, String method);
	native protected void register__areRenderStateChangesSuppressed_void(long pNativeObject, String method);
	native protected void register__setPass_CPass_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register__setPass_CPass_ev_bool(long pNativeObject, String method);
	native protected void register__setPass_CPass(long pNativeObject, String method);
	native protected void register__markGpuParamsDirty_ev_uint16(long pNativeObject, String method);
	native protected void register__suppressShadows_ev_bool(long pNativeObject, String method);
	native protected void register__areShadowsSuppressed_void(long pNativeObject, String method);
	native protected void register__renderQueueGroupObjects_CRenderQueueGroup_OrganisationMode(long pNativeObject, String method);
	native protected void register_setCameraRelativeRendering_ev_bool(long pNativeObject, String method);
	native protected void register_getCameraRelativeRendering_void(long pNativeObject, String method);
	native protected void register_getHeightAt_Real_Real_ev_real32(long pNativeObject, String method);
	native protected void register_getBestHeightAt_Real_Real(long pNativeObject, String method);
	native protected void register_getHeightAtTile_Real_Real(long pNativeObject, String method);
	native protected void register_getTileEnvelope_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real(long pNativeObject, String method);
	native protected void register_addTempLayer_ILayer(long pNativeObject, String method);
	native protected void register_removeTempLayer_ILayer(long pNativeObject, String method);
	native protected void register_updateQuadImage_bool_bool_bool(long pNativeObject, String method);
	native protected void register_updateQuadImage_bool_bool_bool_Real_Real_Real_Real(long pNativeObject, String method);
	native protected void register_updateOBQ_ev_bool_ev_bool_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_setCollisionDetectionEnable_ev_bool(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register__alertVisibleObjects_void(this.nativeObject.pointer, "_alertVisibleObjects_void_callback");
			this.register_createSceneNodeImpl_void(this.nativeObject.pointer, "createSceneNodeImpl_void_callback");
			this.register_createSceneNodeImpl_EVString(this.nativeObject.pointer, "createSceneNodeImpl_EVString_callback");
			this.register_initRenderQueue_void(this.nativeObject.pointer, "initRenderQueue_void_callback");
			this.register_deriveShadowCasterPass_CPass(this.nativeObject.pointer, "deriveShadowCasterPass_CPass_callback");
			this.register_deriveShadowReceiverPass_CPass(this.nativeObject.pointer, "deriveShadowReceiverPass_CPass_callback");
			this.register_validatePassForRendering_CPass(this.nativeObject.pointer, "validatePassForRendering_CPass_callback");
			this.register_validateRenderableForRendering_CPass_CRenderable(this.nativeObject.pointer, "validateRenderableForRendering_CPass_CRenderable_callback");
			this.register_createSkyboxPlane_BoxPlane_Real_CQuaternion_EVString(this.nativeObject.pointer, "createSkyboxPlane_BoxPlane_Real_CQuaternion_EVString_callback");
			this.register_createSkydomePlane_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString(this.nativeObject.pointer, "createSkydomePlane_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_callback");
			this.register_useRenderableViewProjMode_CRenderable_ev_bool(this.nativeObject.pointer, "useRenderableViewProjMode_CRenderable_ev_bool_callback");
			this.register_resetViewProjMode_ev_bool(this.nativeObject.pointer, "resetViewProjMode_ev_bool_callback");
			this.register_firePreRenderQueues_void(this.nativeObject.pointer, "firePreRenderQueues_void_callback");
			this.register_firePostRenderQueues_void(this.nativeObject.pointer, "firePostRenderQueues_void_callback");
			this.register_fireRenderQueueStarted_ev_uint8_EVString(this.nativeObject.pointer, "fireRenderQueueStarted_ev_uint8_EVString_callback");
			this.register_fireRenderQueueEnded_ev_uint8_EVString(this.nativeObject.pointer, "fireRenderQueueEnded_ev_uint8_EVString_callback");
			this.register_fireRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(this.nativeObject.pointer, "fireRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback");
			this.register_fireRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(this.nativeObject.pointer, "fireRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback");
			this.register_fireShadowTexturesUpdated_ev_size_t(this.nativeObject.pointer, "fireShadowTexturesUpdated_ev_size_t_callback");
			this.register_fireShadowTexturesPreCaster_CLight_CCamera_ev_size_t(this.nativeObject.pointer, "fireShadowTexturesPreCaster_CLight_CCamera_ev_size_t_callback");
			this.register_fireShadowTexturesPreReceiver_CLight_CFrustum(this.nativeObject.pointer, "fireShadowTexturesPreReceiver_CLight_CFrustum_callback");
			this.register_firePreUpdateSceneGraph_CCamera(this.nativeObject.pointer, "firePreUpdateSceneGraph_CCamera_callback");
			this.register_firePostUpdateSceneGraph_CCamera(this.nativeObject.pointer, "firePostUpdateSceneGraph_CCamera_callback");
			this.register_firePreFindVisibleObjects_CViewport(this.nativeObject.pointer, "firePreFindVisibleObjects_CViewport_callback");
			this.register_firePostFindVisibleObjects_CViewport(this.nativeObject.pointer, "firePostFindVisibleObjects_CViewport_callback");
			this.register_fireSceneManagerDestroyed_void(this.nativeObject.pointer, "fireSceneManagerDestroyed_void_callback");
			this.register_setViewport_CViewport(this.nativeObject.pointer, "setViewport_CViewport_callback");
			this.register_renderVisibleObjectsDefaultSequence_void(this.nativeObject.pointer, "renderVisibleObjectsDefaultSequence_void_callback");
			this.register_renderVisibleObjectsCustomSequence_CRenderQueueInvocationSequence(this.nativeObject.pointer, "renderVisibleObjectsCustomSequence_CRenderQueueInvocationSequence_callback");
			this.register_prepareRenderQueue_void(this.nativeObject.pointer, "prepareRenderQueue_void_callback");
			this.register_renderSingleObject_CRenderable_CPass_ev_bool_ev_bool_LightList(this.nativeObject.pointer, "renderSingleObject_CRenderable_CPass_ev_bool_ev_bool_LightList_callback");
			this.register_renderSingleObject_CRenderable_CPass_ev_bool_ev_bool(this.nativeObject.pointer, "renderSingleObject_CRenderable_CPass_ev_bool_ev_bool_callback");
			this.register_createAutoParamDataSource_void(this.nativeObject.pointer, "createAutoParamDataSource_void_callback");
			this.register_findLightsAffectingFrustum_CCamera(this.nativeObject.pointer, "findLightsAffectingFrustum_CCamera_callback");
			this.register_initShadowVolumeMaterials_void(this.nativeObject.pointer, "initShadowVolumeMaterials_void_callback");
			this.register_ensureShadowTexturesCreated_void(this.nativeObject.pointer, "ensureShadowTexturesCreated_void_callback");
			this.register_destroyShadowTextures_void(this.nativeObject.pointer, "destroyShadowTextures_void_callback");
			this.register_prepareShadowTextures_CCamera_CViewport_LightList(this.nativeObject.pointer, "prepareShadowTextures_CCamera_CViewport_LightList_callback");
			this.register_prepareShadowTextures_CCamera_CViewport(this.nativeObject.pointer, "prepareShadowTextures_CCamera_CViewport_callback");
			this.register_setImageDefaultMaterial_CMaterialPtr(this.nativeObject.pointer, "setImageDefaultMaterial_CMaterialPtr_callback");
			this.register_setImageUseDefaultMaterial_ev_bool(this.nativeObject.pointer, "setImageUseDefaultMaterial_ev_bool_callback");
			this.register_getSunPosition_void(this.nativeObject.pointer, "getSunPosition_void_callback");
			this.register_setAtmosphereVisible_ev_bool(this.nativeObject.pointer, "setAtmosphereVisible_ev_bool_callback");
			this.register_storeAtmosphereVisibleState_void(this.nativeObject.pointer, "storeAtmosphereVisibleState_void_callback");
			this.register_restoreAtmosphereVisibleState_void(this.nativeObject.pointer, "restoreAtmosphereVisibleState_void_callback");
			this.register_setSunVisible_ev_bool(this.nativeObject.pointer, "setSunVisible_ev_bool_callback");
			this.register__pauseRendering_void(this.nativeObject.pointer, "_pauseRendering_void_callback");
			this.register__resumeRendering_RenderContext(this.nativeObject.pointer, "_resumeRendering_RenderContext_callback");
			this.register_renderShadowVolumesToStencil_CLight_CCamera_ev_bool(this.nativeObject.pointer, "renderShadowVolumesToStencil_CLight_CCamera_ev_bool_callback");
			this.register_setShadowVolumeStencilState_ev_bool_ev_bool_ev_bool(this.nativeObject.pointer, "setShadowVolumeStencilState_ev_bool_ev_bool_ev_bool_callback");
			this.register_findShadowCastersForLight_CLight_CCamera(this.nativeObject.pointer, "findShadowCastersForLight_CLight_CCamera_callback");
			this.register_renderBasicQueueGroupObjects_CRenderQueueGroup_OrganisationMode(this.nativeObject.pointer, "renderBasicQueueGroupObjects_CRenderQueueGroup_OrganisationMode_callback");
			this.register_renderAdditiveStencilShadowedQueueGroupObjects_CRenderQueueGroup_OrganisationMode(this.nativeObject.pointer, "renderAdditiveStencilShadowedQueueGroupObjects_CRenderQueueGroup_OrganisationMode_callback");
			this.register_renderModulativeStencilShadowedQueueGroupObjects_CRenderQueueGroup_OrganisationMode(this.nativeObject.pointer, "renderModulativeStencilShadowedQueueGroupObjects_CRenderQueueGroup_OrganisationMode_callback");
			this.register_renderTextureShadowCasterQueueGroupObjects_CRenderQueueGroup_OrganisationMode(this.nativeObject.pointer, "renderTextureShadowCasterQueueGroupObjects_CRenderQueueGroup_OrganisationMode_callback");
			this.register_renderTextureShadowReceiverQueueGroupObjects_CRenderQueueGroup_OrganisationMode(this.nativeObject.pointer, "renderTextureShadowReceiverQueueGroupObjects_CRenderQueueGroup_OrganisationMode_callback");
			this.register_renderModulativeTextureShadowedQueueGroupObjects_CRenderQueueGroup_OrganisationMode(this.nativeObject.pointer, "renderModulativeTextureShadowedQueueGroupObjects_CRenderQueueGroup_OrganisationMode_callback");
			this.register_renderAdditiveTextureShadowedQueueGroupObjects_CRenderQueueGroup_OrganisationMode(this.nativeObject.pointer, "renderAdditiveTextureShadowedQueueGroupObjects_CRenderQueueGroup_OrganisationMode_callback");
			this.register_renderObjects_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList(this.nativeObject.pointer, "renderObjects_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_callback");
			this.register_renderObjects_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool(this.nativeObject.pointer, "renderObjects_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_callback");
			this.register_renderTransparentShadowCasterObjects_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList(this.nativeObject.pointer, "renderTransparentShadowCasterObjects_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_callback");
			this.register_renderTransparentShadowCasterObjects_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool(this.nativeObject.pointer, "renderTransparentShadowCasterObjects_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_callback");
			this.register_updateRenderQueueSplitOptions_void(this.nativeObject.pointer, "updateRenderQueueSplitOptions_void_callback");
			this.register_updateRenderQueueGroupSplitOptions_CRenderQueueGroup_ev_bool_ev_bool(this.nativeObject.pointer, "updateRenderQueueGroupSplitOptions_CRenderQueueGroup_ev_bool_ev_bool_callback");
			this.register_buildAndSetScissor_LightList_CCamera(this.nativeObject.pointer, "buildAndSetScissor_LightList_CCamera_callback");
			this.register_buildScissor_CLight_CCamera_RealRect(this.nativeObject.pointer, "buildScissor_CLight_CCamera_RealRect_callback");
			this.register_resetScissor_void(this.nativeObject.pointer, "resetScissor_void_callback");
			this.register_buildAndSetLightClip_LightList(this.nativeObject.pointer, "buildAndSetLightClip_LightList_callback");
			this.register_buildLightClip_CLight_PlaneList(this.nativeObject.pointer, "buildLightClip_CLight_PlaneList_callback");
			this.register_resetLightClip_void(this.nativeObject.pointer, "resetLightClip_void_callback");
			this.register_checkCachedLightClippingInfo_void(this.nativeObject.pointer, "checkCachedLightClippingInfo_void_callback");
			this.register_useLights_LightList_ev_uint16(this.nativeObject.pointer, "useLights_LightList_ev_uint16_callback");
			this.register_setViewMatrix_CMatrix4(this.nativeObject.pointer, "setViewMatrix_CMatrix4_callback");
			this.register_useLightsGpuProgram_CPass_LightList(this.nativeObject.pointer, "useLightsGpuProgram_CPass_LightList_callback");
			this.register_bindGpuProgram_CGpuProgram(this.nativeObject.pointer, "bindGpuProgram_CGpuProgram_callback");
			this.register_updateGpuProgramParameters_CPass(this.nativeObject.pointer, "updateGpuProgramParameters_CPass_callback");
			this.register_getTypeName_void(this.nativeObject.pointer, "getTypeName_void_callback");
			this.register_createCamera_EVString(this.nativeObject.pointer, "createCamera_EVString_callback");
			this.register_getCamera_EVString(this.nativeObject.pointer, "getCamera_EVString_callback");
			this.register_hasCamera_EVString(this.nativeObject.pointer, "hasCamera_EVString_callback");
			this.register_destroyCamera_CCamera(this.nativeObject.pointer, "destroyCamera_CCamera_callback");
			this.register_destroyCamera_EVString(this.nativeObject.pointer, "destroyCamera_EVString_callback");
			this.register_destroyAllCameras_void(this.nativeObject.pointer, "destroyAllCameras_void_callback");
			this.register_createLight_EVString(this.nativeObject.pointer, "createLight_EVString_callback");
			this.register_createLight_void(this.nativeObject.pointer, "createLight_void_callback");
			this.register_getLightCount_void(this.nativeObject.pointer, "getLightCount_void_callback");
			this.register_getLight_ev_uint16(this.nativeObject.pointer, "getLight_ev_uint16_callback");
			this.register_getLight_EVString(this.nativeObject.pointer, "getLight_EVString_callback");
			this.register_hasLight_EVString(this.nativeObject.pointer, "hasLight_EVString_callback");
			this.register_getLightClippingPlanes_CLight(this.nativeObject.pointer, "getLightClippingPlanes_CLight_callback");
			this.register_getLightScissorRect_CLight_CCamera(this.nativeObject.pointer, "getLightScissorRect_CLight_CCamera_callback");
			this.register_destroyLight_EVString(this.nativeObject.pointer, "destroyLight_EVString_callback");
			this.register_destroyLight_CLight(this.nativeObject.pointer, "destroyLight_CLight_callback");
			this.register_destroyAllLights_void(this.nativeObject.pointer, "destroyAllLights_void_callback");
			this.register_getSoftShadowTexName_void(this.nativeObject.pointer, "getSoftShadowTexName_void_callback");
			this.register_getShadowTexCam_void(this.nativeObject.pointer, "getShadowTexCam_void_callback");
			this.register_getSoftShadowProjMatrix_ev_uint16(this.nativeObject.pointer, "getSoftShadowProjMatrix_ev_uint16_callback");
			this.register_getCascadeEyeSpaceDepthArray_void(this.nativeObject.pointer, "getCascadeEyeSpaceDepthArray_void_callback");
			this.register_getSoftShadowNearClip_ev_uint8(this.nativeObject.pointer, "getSoftShadowNearClip_ev_uint8_callback");
			this.register_getSoftShadowFarClip_ev_uint8(this.nativeObject.pointer, "getSoftShadowFarClip_ev_uint8_callback");
			this.register_getIsUseSoftShadowFitToCascadesMode_void(this.nativeObject.pointer, "getIsUseSoftShadowFitToCascadesMode_void_callback");
			this.register_setIsUseSoftShadowFitToCascadesMode_bool(this.nativeObject.pointer, "setIsUseSoftShadowFitToCascadesMode_bool_callback");
			this.register_getCurrentClipIndex_void(this.nativeObject.pointer, "getCurrentClipIndex_void_callback");
			this.register_getIsUseSoftShadowTechnique_void(this.nativeObject.pointer, "getIsUseSoftShadowTechnique_void_callback");
			this.register_setIsUseSoftShadowTechnique_bool(this.nativeObject.pointer, "setIsUseSoftShadowTechnique_bool_callback");
			this.register_getCascadePartitionsPercent_void(this.nativeObject.pointer, "getCascadePartitionsPercent_void_callback");
			this.register_setCascadePartitionsPercent_float(this.nativeObject.pointer, "setCascadePartitionsPercent_float_callback");
			this.register_getCascadePartitionsDistance_ev_uint8(this.nativeObject.pointer, "getCascadePartitionsDistance_ev_uint8_callback");
			this.register_setCascadePartitionsDistance_ev_uint8_ev_uint8(this.nativeObject.pointer, "setCascadePartitionsDistance_ev_uint8_ev_uint8_callback");
			this.register_getSoftShadowOffsetFormat_void(this.nativeObject.pointer, "getSoftShadowOffsetFormat_void_callback");
			this.register_checkShadowCasterInFrustum_CCamera(this.nativeObject.pointer, "checkShadowCasterInFrustum_CCamera_callback");
			this.register_hasShadowCasterInFrustum_void(this.nativeObject.pointer, "hasShadowCasterInFrustum_void_callback");
			this.register_getSoftShadowLightBleedPower_void(this.nativeObject.pointer, "getSoftShadowLightBleedPower_void_callback");
			this.register_setSoftShadowLightBleedPower_Real(this.nativeObject.pointer, "setSoftShadowLightBleedPower_Real_callback");
			this.register_getSoftShadowDepthOffset_void(this.nativeObject.pointer, "getSoftShadowDepthOffset_void_callback");
			this.register_setSoftShadowDepthOffset_Real(this.nativeObject.pointer, "setSoftShadowDepthOffset_Real_callback");
			this.register_getSoftShadowNormalFactor_void(this.nativeObject.pointer, "getSoftShadowNormalFactor_void_callback");
			this.register_setSoftShadowNormalFactor_float(this.nativeObject.pointer, "setSoftShadowNormalFactor_float_callback");
			this.register__notifyLightsDirty_void(this.nativeObject.pointer, "_notifyLightsDirty_void_callback");
			this.register__getLightsAffectingFrustum_void(this.nativeObject.pointer, "_getLightsAffectingFrustum_void_callback");
			this.register__populateLightList_CVector3_Real_LightList_ev_uint32(this.nativeObject.pointer, "_populateLightList_CVector3_Real_LightList_ev_uint32_callback");
			this.register__populateLightList_CVector3_Real_LightList(this.nativeObject.pointer, "_populateLightList_CVector3_Real_LightList_callback");
			this.register_showImage_ev_bool(this.nativeObject.pointer, "showImage_ev_bool_callback");
			this.register_getImageVisible_void(this.nativeObject.pointer, "getImageVisible_void_callback");
			this.register_showOcean_ev_bool(this.nativeObject.pointer, "showOcean_ev_bool_callback");
			this.register_getOceanVisible_void(this.nativeObject.pointer, "getOceanVisible_void_callback");
			this.register__populateLightList_CSceneNode_Real_LightList_ev_uint32(this.nativeObject.pointer, "_populateLightList_CSceneNode_Real_LightList_ev_uint32_callback");
			this.register__populateLightList_CSceneNode_Real_LightList(this.nativeObject.pointer, "_populateLightList_CSceneNode_Real_LightList_callback");
			this.register_createSceneNode_void(this.nativeObject.pointer, "createSceneNode_void_callback");
			this.register_createSceneNode_EVString(this.nativeObject.pointer, "createSceneNode_EVString_callback");
			this.register_destroySceneNode_EVString(this.nativeObject.pointer, "destroySceneNode_EVString_callback");
			this.register_destroySceneNode_CSceneNode(this.nativeObject.pointer, "destroySceneNode_CSceneNode_callback");
			this.register_getRootSceneNode_void(this.nativeObject.pointer, "getRootSceneNode_void_callback");
			this.register_getSceneNode_EVString(this.nativeObject.pointer, "getSceneNode_EVString_callback");
			this.register_hasSceneNode_EVString(this.nativeObject.pointer, "hasSceneNode_EVString_callback");
			this.register_createEntity_EVString_EVString_IntVector_EVString(this.nativeObject.pointer, "createEntity_EVString_EVString_IntVector_EVString_callback");
			this.register_createEntity_EVString_EVString_EVString(this.nativeObject.pointer, "createEntity_EVString_EVString_EVString_callback");
			this.register_createEntity_EVString_EVString_IntVector(this.nativeObject.pointer, "createEntity_EVString_EVString_IntVector_callback");
			this.register_createEntity_EVString_EVString(this.nativeObject.pointer, "createEntity_EVString_EVString_callback");
			this.register_createEntity_EVString_CMeshPtr_IntVector(this.nativeObject.pointer, "createEntity_EVString_CMeshPtr_IntVector_callback");
			this.register_createEntity_EVString_CMeshPtr(this.nativeObject.pointer, "createEntity_EVString_CMeshPtr_callback");
			this.register_createEntity_CMeshPtr_IntVector(this.nativeObject.pointer, "createEntity_CMeshPtr_IntVector_callback");
			this.register_createEntity_CMeshPtr(this.nativeObject.pointer, "createEntity_CMeshPtr_callback");
			this.register_createEntity_EVString_IntVector(this.nativeObject.pointer, "createEntity_EVString_IntVector_callback");
			this.register_createEntity_EVString(this.nativeObject.pointer, "createEntity_EVString_callback");
			this.register_createEntity_EVString_PrefabType(this.nativeObject.pointer, "createEntity_EVString_PrefabType_callback");
			this.register_createEntity_PrefabType(this.nativeObject.pointer, "createEntity_PrefabType_callback");
			this.register_getEntity_EVString(this.nativeObject.pointer, "getEntity_EVString_callback");
			this.register_hasEntity_EVString(this.nativeObject.pointer, "hasEntity_EVString_callback");
			this.register_destroyEntity_CEntity(this.nativeObject.pointer, "destroyEntity_CEntity_callback");
			this.register_destroyEntity_EVString(this.nativeObject.pointer, "destroyEntity_EVString_callback");
			this.register_destroyAllEntities_void(this.nativeObject.pointer, "destroyAllEntities_void_callback");
			this.register_createManualObject_EVString(this.nativeObject.pointer, "createManualObject_EVString_callback");
			this.register_createManualObject_void(this.nativeObject.pointer, "createManualObject_void_callback");
			this.register_getManualObject_EVString(this.nativeObject.pointer, "getManualObject_EVString_callback");
			this.register_hasManualObject_EVString(this.nativeObject.pointer, "hasManualObject_EVString_callback");
			this.register_destroyManualObject_CManualObject(this.nativeObject.pointer, "destroyManualObject_CManualObject_callback");
			this.register_destroyManualObject_EVString(this.nativeObject.pointer, "destroyManualObject_EVString_callback");
			this.register_destroyAllManualObjects_void(this.nativeObject.pointer, "destroyAllManualObjects_void_callback");
			this.register_usingWebMercator_void(this.nativeObject.pointer, "usingWebMercator_void_callback");
			this.register_createBillboardChain_EVString(this.nativeObject.pointer, "createBillboardChain_EVString_callback");
			this.register_createBillboardChain_void(this.nativeObject.pointer, "createBillboardChain_void_callback");
			this.register_getBillboardChain_EVString(this.nativeObject.pointer, "getBillboardChain_EVString_callback");
			this.register_hasBillboardChain_EVString(this.nativeObject.pointer, "hasBillboardChain_EVString_callback");
			this.register_destroyBillboardChain_CBillboardChain(this.nativeObject.pointer, "destroyBillboardChain_CBillboardChain_callback");
			this.register_destroyBillboardChain_EVString(this.nativeObject.pointer, "destroyBillboardChain_EVString_callback");
			this.register_destroyAllBillboardChains_void(this.nativeObject.pointer, "destroyAllBillboardChains_void_callback");
			this.register_createRibbonTrail_EVString(this.nativeObject.pointer, "createRibbonTrail_EVString_callback");
			this.register_createRibbonTrail_void(this.nativeObject.pointer, "createRibbonTrail_void_callback");
			this.register_getRibbonTrail_EVString(this.nativeObject.pointer, "getRibbonTrail_EVString_callback");
			this.register_hasRibbonTrail_EVString(this.nativeObject.pointer, "hasRibbonTrail_EVString_callback");
			this.register_destroyRibbonTrail_CRibbonTrail(this.nativeObject.pointer, "destroyRibbonTrail_CRibbonTrail_callback");
			this.register_destroyRibbonTrail_EVString(this.nativeObject.pointer, "destroyRibbonTrail_EVString_callback");
			this.register_destroyAllRibbonTrails_void(this.nativeObject.pointer, "destroyAllRibbonTrails_void_callback");
			this.register_createParticleSystem_EVString_EVString(this.nativeObject.pointer, "createParticleSystem_EVString_EVString_callback");
			this.register_createParticleSystem_EVString_ev_size_t_EVString(this.nativeObject.pointer, "createParticleSystem_EVString_ev_size_t_EVString_callback");
			this.register_createParticleSystem_EVString_ev_size_t(this.nativeObject.pointer, "createParticleSystem_EVString_ev_size_t_callback");
			this.register_createParticleSystem_EVString(this.nativeObject.pointer, "createParticleSystem_EVString_callback");
			this.register_createParticleSystem_ev_size_t_EVString(this.nativeObject.pointer, "createParticleSystem_ev_size_t_EVString_callback");
			this.register_createParticleSystem_ev_size_t(this.nativeObject.pointer, "createParticleSystem_ev_size_t_callback");
			this.register_createParticleSystem_void(this.nativeObject.pointer, "createParticleSystem_void_callback");
			this.register_getParticleSystem_EVString(this.nativeObject.pointer, "getParticleSystem_EVString_callback");
			this.register_hasParticleSystem_EVString(this.nativeObject.pointer, "hasParticleSystem_EVString_callback");
			this.register_destroyParticleSystem_CParticleSystem(this.nativeObject.pointer, "destroyParticleSystem_CParticleSystem_callback");
			this.register_destroyParticleSystem_EVString(this.nativeObject.pointer, "destroyParticleSystem_EVString_callback");
			this.register_destroyAllParticleSystems_void(this.nativeObject.pointer, "destroyAllParticleSystems_void_callback");
			this.register_clearScene_void(this.nativeObject.pointer, "clearScene_void_callback");
			this.register_prepareWorldGeometry_EVString(this.nativeObject.pointer, "prepareWorldGeometry_EVString_callback");
			this.register_prepareWorldGeometry_DataStreamPtr_EVString(this.nativeObject.pointer, "prepareWorldGeometry_DataStreamPtr_EVString_callback");
			this.register_prepareWorldGeometry_DataStreamPtr(this.nativeObject.pointer, "prepareWorldGeometry_DataStreamPtr_callback");
			this.register_setWorldGeometry_EVString(this.nativeObject.pointer, "setWorldGeometry_EVString_callback");
			this.register_setWorldGeometry_DataStreamPtr_EVString(this.nativeObject.pointer, "setWorldGeometry_DataStreamPtr_EVString_callback");
			this.register_setWorldGeometry_DataStreamPtr(this.nativeObject.pointer, "setWorldGeometry_DataStreamPtr_callback");
			this.register_estimateWorldGeometry_EVString(this.nativeObject.pointer, "estimateWorldGeometry_EVString_callback");
			this.register_estimateWorldGeometry_DataStreamPtr_EVString(this.nativeObject.pointer, "estimateWorldGeometry_DataStreamPtr_EVString_callback");
			this.register_estimateWorldGeometry_DataStreamPtr(this.nativeObject.pointer, "estimateWorldGeometry_DataStreamPtr_callback");
			this.register_getSuggestedViewpoint_ev_bool(this.nativeObject.pointer, "getSuggestedViewpoint_ev_bool_callback");
			this.register_getSuggestedViewpoint_void(this.nativeObject.pointer, "getSuggestedViewpoint_void_callback");
			this.register_setOption_EVString_void(this.nativeObject.pointer, "setOption_EVString_void_callback");
			this.register_getOption_EVString_void(this.nativeObject.pointer, "getOption_EVString_void_callback");
			this.register_hasOption_EVString(this.nativeObject.pointer, "hasOption_EVString_callback");
			this.register_getOptionValues_EVString_StringVector(this.nativeObject.pointer, "getOptionValues_EVString_StringVector_callback");
			this.register_getOptionKeys_StringVector(this.nativeObject.pointer, "getOptionKeys_StringVector_callback");
			this.register__updateSceneGraph_CCamera(this.nativeObject.pointer, "_updateSceneGraph_CCamera_callback");
			this.register__findVisibleObjects_CCamera_VisibleObjectsBoundsInfo_ev_bool(this.nativeObject.pointer, "_findVisibleObjects_CCamera_VisibleObjectsBoundsInfo_ev_bool_callback");
			this.register__applySceneAnimations_void(this.nativeObject.pointer, "_applySceneAnimations_void_callback");
			this.register__renderVisibleObjects_void(this.nativeObject.pointer, "_renderVisibleObjects_void_callback");
			this.register__renderScene_CCamera_CViewport_ev_bool(this.nativeObject.pointer, "_renderScene_CCamera_CViewport_ev_bool_callback");
			this.register__queueSkiesForRendering_CCamera(this.nativeObject.pointer, "_queueSkiesForRendering_CCamera_callback");
			this.register__setDestinationRenderSystem_CRenderSystem(this.nativeObject.pointer, "_setDestinationRenderSystem_CRenderSystem_callback");
			this.register_setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString(this.nativeObject.pointer, "setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString_callback");
			this.register_setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32(this.nativeObject.pointer, "setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_callback");
			this.register_setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32(this.nativeObject.pointer, "setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_callback");
			this.register_setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real(this.nativeObject.pointer, "setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_callback");
			this.register_setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_bool(this.nativeObject.pointer, "setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_bool_callback");
			this.register_setSkyPlane_ev_bool_CPlane_EVString_Real_Real(this.nativeObject.pointer, "setSkyPlane_ev_bool_CPlane_EVString_Real_Real_callback");
			this.register_setSkyPlane_ev_bool_CPlane_EVString_Real(this.nativeObject.pointer, "setSkyPlane_ev_bool_CPlane_EVString_Real_callback");
			this.register_setSkyPlane_ev_bool_CPlane_EVString(this.nativeObject.pointer, "setSkyPlane_ev_bool_CPlane_EVString_callback");
			this.register__setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString(this.nativeObject.pointer, "_setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString_callback");
			this.register__setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32(this.nativeObject.pointer, "_setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_callback");
			this.register__setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32(this.nativeObject.pointer, "_setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_callback");
			this.register__setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real(this.nativeObject.pointer, "_setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_callback");
			this.register__setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_uint8(this.nativeObject.pointer, "_setSkyPlane_ev_bool_CPlane_EVString_Real_Real_ev_uint8_callback");
			this.register__setSkyPlane_ev_bool_CPlane_EVString_Real_Real(this.nativeObject.pointer, "_setSkyPlane_ev_bool_CPlane_EVString_Real_Real_callback");
			this.register__setSkyPlane_ev_bool_CPlane_EVString_Real(this.nativeObject.pointer, "_setSkyPlane_ev_bool_CPlane_EVString_Real_callback");
			this.register__setSkyPlane_ev_bool_CPlane_EVString(this.nativeObject.pointer, "_setSkyPlane_ev_bool_CPlane_EVString_callback");
			this.register_setSkyPlaneEnabled_ev_bool(this.nativeObject.pointer, "setSkyPlaneEnabled_ev_bool_callback");
			this.register_isSkyPlaneEnabled_void(this.nativeObject.pointer, "isSkyPlaneEnabled_void_callback");
			this.register_getSkyPlaneNode_void(this.nativeObject.pointer, "getSkyPlaneNode_void_callback");
			this.register_getSkyPlaneGenParameters_void(this.nativeObject.pointer, "getSkyPlaneGenParameters_void_callback");
			this.register_setSkyBox_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString(this.nativeObject.pointer, "setSkyBox_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString_callback");
			this.register_setSkyBox_ev_bool_EVString_Real_ev_bool_CQuaternion(this.nativeObject.pointer, "setSkyBox_ev_bool_EVString_Real_ev_bool_CQuaternion_callback");
			this.register_setSkyBox_ev_bool_EVString_Real_ev_bool(this.nativeObject.pointer, "setSkyBox_ev_bool_EVString_Real_ev_bool_callback");
			this.register_setSkyBox_ev_bool_EVString_Real(this.nativeObject.pointer, "setSkyBox_ev_bool_EVString_Real_callback");
			this.register_setSkyBox_ev_bool_EVString(this.nativeObject.pointer, "setSkyBox_ev_bool_EVString_callback");
			this.register__setSkyBox_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString(this.nativeObject.pointer, "_setSkyBox_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString_callback");
			this.register__setSkyBox_ev_bool_EVString_Real_ev_uint8_CQuaternion(this.nativeObject.pointer, "_setSkyBox_ev_bool_EVString_Real_ev_uint8_CQuaternion_callback");
			this.register__setSkyBox_ev_bool_EVString_Real_ev_uint8(this.nativeObject.pointer, "_setSkyBox_ev_bool_EVString_Real_ev_uint8_callback");
			this.register__setSkyBox_ev_bool_EVString_Real(this.nativeObject.pointer, "_setSkyBox_ev_bool_EVString_Real_callback");
			this.register__setSkyBox_ev_bool_EVString(this.nativeObject.pointer, "_setSkyBox_ev_bool_EVString_callback");
			this.register_setSkyBoxEnabled_ev_bool(this.nativeObject.pointer, "setSkyBoxEnabled_ev_bool_callback");
			this.register_isSkyBoxEnabled_void(this.nativeObject.pointer, "isSkyBoxEnabled_void_callback");
			this.register_getSkyBoxNode_void(this.nativeObject.pointer, "getSkyBoxNode_void_callback");
			this.register_getSkyBoxGenParameters_void(this.nativeObject.pointer, "getSkyBoxGenParameters_void_callback");
			this.register_setSkyDome_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString(this.nativeObject.pointer, "setSkyDome_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_callback");
			this.register_setSkyDome_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "setSkyDome_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_callback");
			this.register_setSkyDome_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32(this.nativeObject.pointer, "setSkyDome_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_callback");
			this.register_setSkyDome_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32(this.nativeObject.pointer, "setSkyDome_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_callback");
			this.register_setSkyDome_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion(this.nativeObject.pointer, "setSkyDome_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_callback");
			this.register_setSkyDome_ev_bool_EVString_Real_Real_Real_ev_bool(this.nativeObject.pointer, "setSkyDome_ev_bool_EVString_Real_Real_Real_ev_bool_callback");
			this.register_setSkyDome_ev_bool_EVString_Real_Real_Real(this.nativeObject.pointer, "setSkyDome_ev_bool_EVString_Real_Real_Real_callback");
			this.register_setSkyDome_ev_bool_EVString_Real_Real(this.nativeObject.pointer, "setSkyDome_ev_bool_EVString_Real_Real_callback");
			this.register_setSkyDome_ev_bool_EVString_Real(this.nativeObject.pointer, "setSkyDome_ev_bool_EVString_Real_callback");
			this.register_setSkyDome_ev_bool_EVString(this.nativeObject.pointer, "setSkyDome_ev_bool_EVString_callback");
			this.register__setSkyDome_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString(this.nativeObject.pointer, "_setSkyDome_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_callback");
			this.register__setSkyDome_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "_setSkyDome_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_callback");
			this.register__setSkyDome_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32(this.nativeObject.pointer, "_setSkyDome_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_callback");
			this.register__setSkyDome_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32(this.nativeObject.pointer, "_setSkyDome_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_callback");
			this.register__setSkyDome_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion(this.nativeObject.pointer, "_setSkyDome_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_callback");
			this.register__setSkyDome_ev_bool_EVString_Real_Real_Real_ev_uint8(this.nativeObject.pointer, "_setSkyDome_ev_bool_EVString_Real_Real_Real_ev_uint8_callback");
			this.register__setSkyDome_ev_bool_EVString_Real_Real_Real(this.nativeObject.pointer, "_setSkyDome_ev_bool_EVString_Real_Real_Real_callback");
			this.register__setSkyDome_ev_bool_EVString_Real_Real(this.nativeObject.pointer, "_setSkyDome_ev_bool_EVString_Real_Real_callback");
			this.register__setSkyDome_ev_bool_EVString_Real(this.nativeObject.pointer, "_setSkyDome_ev_bool_EVString_Real_callback");
			this.register__setSkyDome_ev_bool_EVString(this.nativeObject.pointer, "_setSkyDome_ev_bool_EVString_callback");
			this.register_setSkyDomeEnabled_ev_bool(this.nativeObject.pointer, "setSkyDomeEnabled_ev_bool_callback");
			this.register_isSkyDomeEnabled_void(this.nativeObject.pointer, "isSkyDomeEnabled_void_callback");
			this.register_getSkyDomeNode_void(this.nativeObject.pointer, "getSkyDomeNode_void_callback");
			this.register_getSkyDomeGenParameters_void(this.nativeObject.pointer, "getSkyDomeGenParameters_void_callback");
			this.register_getFogMode_void(this.nativeObject.pointer, "getFogMode_void_callback");
			this.register_getFogColour_void(this.nativeObject.pointer, "getFogColour_void_callback");
			this.register_getFogStart_void(this.nativeObject.pointer, "getFogStart_void_callback");
			this.register_getFogEnd_void(this.nativeObject.pointer, "getFogEnd_void_callback");
			this.register_getFogDensity_void(this.nativeObject.pointer, "getFogDensity_void_callback");
			this.register_createBillboardSet_EVString_ev_uint32(this.nativeObject.pointer, "createBillboardSet_EVString_ev_uint32_callback");
			this.register_createBillboardSet_EVString(this.nativeObject.pointer, "createBillboardSet_EVString_callback");
			this.register_createBillboardSet_ev_uint32(this.nativeObject.pointer, "createBillboardSet_ev_uint32_callback");
			this.register_createBillboardSet_void(this.nativeObject.pointer, "createBillboardSet_void_callback");
			this.register_getBillboardSet_EVString(this.nativeObject.pointer, "getBillboardSet_EVString_callback");
			this.register_hasBillboardSet_EVString(this.nativeObject.pointer, "hasBillboardSet_EVString_callback");
			this.register_destroyBillboardSet_CBillboardSet(this.nativeObject.pointer, "destroyBillboardSet_CBillboardSet_callback");
			this.register_destroyBillboardSet_EVString(this.nativeObject.pointer, "destroyBillboardSet_EVString_callback");
			this.register_destroyAllBillboardSets_void(this.nativeObject.pointer, "destroyAllBillboardSets_void_callback");
			this.register_setDisplaySceneNodes_ev_bool(this.nativeObject.pointer, "setDisplaySceneNodes_ev_bool_callback");
			this.register_getDisplaySceneNodes_void(this.nativeObject.pointer, "getDisplaySceneNodes_void_callback");
			this.register_createAnimation_EVString_Real(this.nativeObject.pointer, "createAnimation_EVString_Real_callback");
			this.register_getAnimation_EVString(this.nativeObject.pointer, "getAnimation_EVString_callback");
			this.register_hasAnimation_EVString(this.nativeObject.pointer, "hasAnimation_EVString_callback");
			this.register_destroyAnimation_EVString(this.nativeObject.pointer, "destroyAnimation_EVString_callback");
			this.register_destroyAllAnimations_void(this.nativeObject.pointer, "destroyAllAnimations_void_callback");
			this.register_createAnimationState_EVString(this.nativeObject.pointer, "createAnimationState_EVString_callback");
			this.register_getAnimationState_EVString(this.nativeObject.pointer, "getAnimationState_EVString_callback");
			this.register_hasAnimationState_EVString(this.nativeObject.pointer, "hasAnimationState_EVString_callback");
			this.register_destroyAnimationState_EVString(this.nativeObject.pointer, "destroyAnimationState_EVString_callback");
			this.register_destroyAllAnimationStates_void(this.nativeObject.pointer, "destroyAllAnimationStates_void_callback");
			this.register_manualRender_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool(this.nativeObject.pointer, "manualRender_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool_callback");
			this.register_manualRender_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4(this.nativeObject.pointer, "manualRender_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_callback");
			this.register_manualRender_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList(this.nativeObject.pointer, "manualRender_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList_callback");
			this.register_manualRender_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool(this.nativeObject.pointer, "manualRender_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_callback");
			this.register_manualRender_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool(this.nativeObject.pointer, "manualRender_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_callback");
			this.register_manualRender_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool(this.nativeObject.pointer, "manualRender_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_callback");
			this.register_manualRender_CRenderable_CPass_CViewport_CMatrix4_CMatrix4(this.nativeObject.pointer, "manualRender_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_callback");
			this.register_getRenderQueue_void(this.nativeObject.pointer, "getRenderQueue_void_callback");
			this.register_addRenderQueueListener_CRenderQueueListener(this.nativeObject.pointer, "addRenderQueueListener_CRenderQueueListener_callback");
			this.register_removeRenderQueueListener_CRenderQueueListener(this.nativeObject.pointer, "removeRenderQueueListener_CRenderQueueListener_callback");
			this.register_addRenderObjectListener_CRenderObjectListener(this.nativeObject.pointer, "addRenderObjectListener_CRenderObjectListener_callback");
			this.register_removeRenderObjectListener_CRenderObjectListener(this.nativeObject.pointer, "removeRenderObjectListener_CRenderObjectListener_callback");
			this.register_addSpecialCaseRenderQueue_ev_uint8(this.nativeObject.pointer, "addSpecialCaseRenderQueue_ev_uint8_callback");
			this.register_removeSpecialCaseRenderQueue_ev_uint8(this.nativeObject.pointer, "removeSpecialCaseRenderQueue_ev_uint8_callback");
			this.register_clearSpecialCaseRenderQueues_void(this.nativeObject.pointer, "clearSpecialCaseRenderQueues_void_callback");
			this.register_setSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode(this.nativeObject.pointer, "setSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode_callback");
			this.register_getSpecialCaseRenderQueueMode_void(this.nativeObject.pointer, "getSpecialCaseRenderQueueMode_void_callback");
			this.register_isRenderQueueToBeProcessed_ev_uint8(this.nativeObject.pointer, "isRenderQueueToBeProcessed_ev_uint8_callback");
			this.register_setWorldGeometryRenderQueue_ev_uint8(this.nativeObject.pointer, "setWorldGeometryRenderQueue_ev_uint8_callback");
			this.register_getWorldGeometryRenderQueue_void(this.nativeObject.pointer, "getWorldGeometryRenderQueue_void_callback");
			this.register_showBoundingBoxes_ev_bool(this.nativeObject.pointer, "showBoundingBoxes_ev_bool_callback");
			this.register_getShowBoundingBoxes_void(this.nativeObject.pointer, "getShowBoundingBoxes_void_callback");
			this.register__notifyAutotrackingSceneNode_CSceneNode_ev_bool(this.nativeObject.pointer, "_notifyAutotrackingSceneNode_CSceneNode_ev_bool_callback");
			this.register_createAABBQuery_CAxisAlignedBox_ev_uint32(this.nativeObject.pointer, "createAABBQuery_CAxisAlignedBox_ev_uint32_callback");
			this.register_createAABBQuery_CAxisAlignedBox(this.nativeObject.pointer, "createAABBQuery_CAxisAlignedBox_callback");
			this.register_createSphereQuery_CSphere_ev_uint32(this.nativeObject.pointer, "createSphereQuery_CSphere_ev_uint32_callback");
			this.register_createSphereQuery_CSphere(this.nativeObject.pointer, "createSphereQuery_CSphere_callback");
			this.register_createPlaneBoundedVolumeQuery_PlaneBoundedVolumeList_ev_uint32(this.nativeObject.pointer, "createPlaneBoundedVolumeQuery_PlaneBoundedVolumeList_ev_uint32_callback");
			this.register_createPlaneBoundedVolumeQuery_PlaneBoundedVolumeList(this.nativeObject.pointer, "createPlaneBoundedVolumeQuery_PlaneBoundedVolumeList_callback");
			this.register_createRayQuery_CRay_ev_uint32(this.nativeObject.pointer, "createRayQuery_CRay_ev_uint32_callback");
			this.register_createRayQuery_CRay(this.nativeObject.pointer, "createRayQuery_CRay_callback");
			this.register_createIntersectionQuery_ev_uint32(this.nativeObject.pointer, "createIntersectionQuery_ev_uint32_callback");
			this.register_createIntersectionQuery_void(this.nativeObject.pointer, "createIntersectionQuery_void_callback");
			this.register_destroyQuery_CSceneQuery(this.nativeObject.pointer, "destroyQuery_CSceneQuery_callback");
			this.register_setShadowTechnique_ShadowTechnique(this.nativeObject.pointer, "setShadowTechnique_ShadowTechnique_callback");
			this.register_getShadowTechnique_void(this.nativeObject.pointer, "getShadowTechnique_void_callback");
			this.register_setShowDebugShadows_ev_bool(this.nativeObject.pointer, "setShowDebugShadows_ev_bool_callback");
			this.register_getShowDebugShadows_void(this.nativeObject.pointer, "getShowDebugShadows_void_callback");
			this.register_setShadowColour_CColourValue(this.nativeObject.pointer, "setShadowColour_CColourValue_callback");
			this.register_getShadowColour_void(this.nativeObject.pointer, "getShadowColour_void_callback");
			this.register_setShadowDirectionalLightExtrusionDistance_Real(this.nativeObject.pointer, "setShadowDirectionalLightExtrusionDistance_Real_callback");
			this.register_getShadowDirectionalLightExtrusionDistance_void(this.nativeObject.pointer, "getShadowDirectionalLightExtrusionDistance_void_callback");
			this.register_setShadowColorRRatio_Real(this.nativeObject.pointer, "setShadowColorRRatio_Real_callback");
			this.register_setShadowColorGRatio_Real(this.nativeObject.pointer, "setShadowColorGRatio_Real_callback");
			this.register_setShadowColorBRatio_Real(this.nativeObject.pointer, "setShadowColorBRatio_Real_callback");
			this.register_getShadowColorRRatio_void(this.nativeObject.pointer, "getShadowColorRRatio_void_callback");
			this.register_getShadowColorGRatio_void(this.nativeObject.pointer, "getShadowColorGRatio_void_callback");
			this.register_getShadowColorBRatio_void(this.nativeObject.pointer, "getShadowColorBRatio_void_callback");
			this.register_setShadowFarDistance_Real(this.nativeObject.pointer, "setShadowFarDistance_Real_callback");
			this.register_getShadowFarDistance_void(this.nativeObject.pointer, "getShadowFarDistance_void_callback");
			this.register_getShadowFarDistanceSquared_void(this.nativeObject.pointer, "getShadowFarDistanceSquared_void_callback");
			this.register_setShadowIndexBufferSize_ev_size_t(this.nativeObject.pointer, "setShadowIndexBufferSize_ev_size_t_callback");
			this.register_getShadowIndexBufferSize_void(this.nativeObject.pointer, "getShadowIndexBufferSize_void_callback");
			this.register_setShadowTextureSize_ev_uint16(this.nativeObject.pointer, "setShadowTextureSize_ev_uint16_callback");
			this.register_setShadowTextureConfig_ev_size_t_ev_uint16_ev_uint16_PixelFormat(this.nativeObject.pointer, "setShadowTextureConfig_ev_size_t_ev_uint16_ev_uint16_PixelFormat_callback");
			this.register_setShadowTextureConfig_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16(this.nativeObject.pointer, "setShadowTextureConfig_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_callback");
			this.register_setShadowTextureConfig_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16(this.nativeObject.pointer, "setShadowTextureConfig_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_callback");
			this.register_setShadowTextureConfig_ev_size_t_ShadowTextureConfig(this.nativeObject.pointer, "setShadowTextureConfig_ev_size_t_ShadowTextureConfig_callback");
			this.register_setShadowTexturePixelFormat_PixelFormat(this.nativeObject.pointer, "setShadowTexturePixelFormat_PixelFormat_callback");
			this.register_setShadowTextureFSAA_ev_uint16(this.nativeObject.pointer, "setShadowTextureFSAA_ev_uint16_callback");
			this.register_setShadowTextureCount_ev_size_t(this.nativeObject.pointer, "setShadowTextureCount_ev_size_t_callback");
			this.register_setShadowTextureSettings_ev_uint16_ev_uint16(this.nativeObject.pointer, "setShadowTextureSettings_ev_uint16_ev_uint16_callback");
			this.register_setShadowTextureSettings_ev_uint16_ev_uint16_PixelFormat(this.nativeObject.pointer, "setShadowTextureSettings_ev_uint16_ev_uint16_PixelFormat_callback");
			this.register_setShadowTextureSettings_ev_uint16_ev_uint16_PixelFormat_ev_uint16(this.nativeObject.pointer, "setShadowTextureSettings_ev_uint16_ev_uint16_PixelFormat_ev_uint16_callback");
			this.register_setShadowTextureSettings_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16(this.nativeObject.pointer, "setShadowTextureSettings_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_callback");
			this.register_getShadowTexture_ev_size_t(this.nativeObject.pointer, "getShadowTexture_ev_size_t_callback");
			this.register_setShadowDirLightTextureOffset_Real(this.nativeObject.pointer, "setShadowDirLightTextureOffset_Real_callback");
			this.register_getShadowDirLightTextureOffset_void(this.nativeObject.pointer, "getShadowDirLightTextureOffset_void_callback");
			this.register_setShadowTextureFadeStart_Real(this.nativeObject.pointer, "setShadowTextureFadeStart_Real_callback");
			this.register_setShadowTextureFadeEnd_Real(this.nativeObject.pointer, "setShadowTextureFadeEnd_Real_callback");
			this.register_setShadowTextureSelfShadow_ev_bool(this.nativeObject.pointer, "setShadowTextureSelfShadow_ev_bool_callback");
			this.register_getShadowTextureSelfShadow_void(this.nativeObject.pointer, "getShadowTextureSelfShadow_void_callback");
			this.register_setShadowTextureCasterMaterial_EVString(this.nativeObject.pointer, "setShadowTextureCasterMaterial_EVString_callback");
			this.register_setShadowTextureReceiverMaterial_EVString(this.nativeObject.pointer, "setShadowTextureReceiverMaterial_EVString_callback");
			this.register_setShadowCasterRenderBackFaces_ev_bool(this.nativeObject.pointer, "setShadowCasterRenderBackFaces_ev_bool_callback");
			this.register_getShadowCasterRenderBackFaces_void(this.nativeObject.pointer, "getShadowCasterRenderBackFaces_void_callback");
			this.register_setShadowCameraSetup_ShadowCameraSetupPtr(this.nativeObject.pointer, "setShadowCameraSetup_ShadowCameraSetupPtr_callback");
			this.register_getShadowCameraSetup_void(this.nativeObject.pointer, "getShadowCameraSetup_void_callback");
			this.register_setShadowUseInfiniteFarPlane_ev_bool(this.nativeObject.pointer, "setShadowUseInfiniteFarPlane_ev_bool_callback");
			this.register_isShadowTechniqueStencilBased_void(this.nativeObject.pointer, "isShadowTechniqueStencilBased_void_callback");
			this.register_isShadowTechniqueTextureBased_void(this.nativeObject.pointer, "isShadowTechniqueTextureBased_void_callback");
			this.register_isShadowTechniqueModulative_void(this.nativeObject.pointer, "isShadowTechniqueModulative_void_callback");
			this.register_isShadowTechniqueAdditive_void(this.nativeObject.pointer, "isShadowTechniqueAdditive_void_callback");
			this.register_isShadowTechniqueIntegrated_void(this.nativeObject.pointer, "isShadowTechniqueIntegrated_void_callback");
			this.register_isShadowTechniqueInUse_void(this.nativeObject.pointer, "isShadowTechniqueInUse_void_callback");
			this.register_setShadowUseLightClipPlanes_ev_bool(this.nativeObject.pointer, "setShadowUseLightClipPlanes_ev_bool_callback");
			this.register_getShadowUseLightClipPlanes_void(this.nativeObject.pointer, "getShadowUseLightClipPlanes_void_callback");
			this.register__setActiveCompositorChain_CCompositorChain(this.nativeObject.pointer, "_setActiveCompositorChain_CCompositorChain_callback");
			this.register_setLateMaterialResolving_ev_bool(this.nativeObject.pointer, "setLateMaterialResolving_ev_bool_callback");
			this.register_isLateMaterialResolving_void(this.nativeObject.pointer, "isLateMaterialResolving_void_callback");
			this.register__getActiveCompositorChain_void(this.nativeObject.pointer, "_getActiveCompositorChain_void_callback");
			this.register_addListener_CSceneManagerListener(this.nativeObject.pointer, "addListener_CSceneManagerListener_callback");
			this.register_removeListener_CSceneManagerListener(this.nativeObject.pointer, "removeListener_CSceneManagerListener_callback");
			this.register_existListener_CSceneManagerListener(this.nativeObject.pointer, "existListener_CSceneManagerListener_callback");
			this.register_createStaticGeometry_EVString(this.nativeObject.pointer, "createStaticGeometry_EVString_callback");
			this.register_getStaticGeometry_EVString(this.nativeObject.pointer, "getStaticGeometry_EVString_callback");
			this.register_hasStaticGeometry_EVString(this.nativeObject.pointer, "hasStaticGeometry_EVString_callback");
			this.register_destroyStaticGeometry_CStaticGeometry(this.nativeObject.pointer, "destroyStaticGeometry_CStaticGeometry_callback");
			this.register_destroyStaticGeometry_EVString(this.nativeObject.pointer, "destroyStaticGeometry_EVString_callback");
			this.register_destroyAllStaticGeometry_void(this.nativeObject.pointer, "destroyAllStaticGeometry_void_callback");
			this.register_createInstancedGeometry_EVString(this.nativeObject.pointer, "createInstancedGeometry_EVString_callback");
			this.register_getInstancedGeometry_EVString(this.nativeObject.pointer, "getInstancedGeometry_EVString_callback");
			this.register_destroyInstancedGeometry_CInstancedGeometry(this.nativeObject.pointer, "destroyInstancedGeometry_CInstancedGeometry_callback");
			this.register_destroyInstancedGeometry_EVString(this.nativeObject.pointer, "destroyInstancedGeometry_EVString_callback");
			this.register_destroyAllInstancedGeometry_void(this.nativeObject.pointer, "destroyAllInstancedGeometry_void_callback");
			this.register_createInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16(this.nativeObject.pointer, "createInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_callback");
			this.register_createInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16(this.nativeObject.pointer, "createInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_callback");
			this.register_createInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t(this.nativeObject.pointer, "createInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_callback");
			this.register_getInstanceManager_EVString(this.nativeObject.pointer, "getInstanceManager_EVString_callback");
			this.register_hasInstanceManager_EVString(this.nativeObject.pointer, "hasInstanceManager_EVString_callback");
			this.register_destroyInstanceManager_EVString(this.nativeObject.pointer, "destroyInstanceManager_EVString_callback");
			this.register_destroyInstanceManager_CInstanceManager(this.nativeObject.pointer, "destroyInstanceManager_CInstanceManager_callback");
			this.register_destroyInstanceManagerWithThreadSafe_EVString(this.nativeObject.pointer, "destroyInstanceManagerWithThreadSafe_EVString_callback");
			this.register_destroyInstanceManagerWithThreadSafe_CInstanceManager(this.nativeObject.pointer, "destroyInstanceManagerWithThreadSafe_CInstanceManager_callback");
			this.register_destroyAllInstanceManagers_void(this.nativeObject.pointer, "destroyAllInstanceManagers_void_callback");
			this.register_getNumInstancesPerBatch_EVString_EVString_EVString_InstancingTechnique_ev_size_t(this.nativeObject.pointer, "getNumInstancesPerBatch_EVString_EVString_EVString_InstancingTechnique_ev_size_t_callback");
			this.register_getNumInstancesPerBatch_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16(this.nativeObject.pointer, "getNumInstancesPerBatch_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_callback");
			this.register_getNumInstancesPerBatch_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16(this.nativeObject.pointer, "getNumInstancesPerBatch_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_callback");
			this.register_createInstancedEntity_EVString_EVString(this.nativeObject.pointer, "createInstancedEntity_EVString_EVString_callback");
			this.register_destroyInstancedEntity_CInstancedEntity(this.nativeObject.pointer, "destroyInstancedEntity_CInstancedEntity_callback");
			this.register_createMovableObject_EVString_EVString_CommonStringPairList(this.nativeObject.pointer, "createMovableObject_EVString_EVString_CommonStringPairList_callback");
			this.register_createMovableObject_EVString_EVString(this.nativeObject.pointer, "createMovableObject_EVString_EVString_callback");
			this.register_createMovableObject_EVString_CommonStringPairList(this.nativeObject.pointer, "createMovableObject_EVString_CommonStringPairList_callback");
			this.register_createMovableObject_EVString(this.nativeObject.pointer, "createMovableObject_EVString_callback");
			this.register_destroyMovableObject_EVString_EVString(this.nativeObject.pointer, "destroyMovableObject_EVString_EVString_callback");
			this.register_destroyMovableObject_CMovableObject(this.nativeObject.pointer, "destroyMovableObject_CMovableObject_callback");
			this.register_destroyAllMovableObjectsByType_EVString(this.nativeObject.pointer, "destroyAllMovableObjectsByType_EVString_callback");
			this.register_destroyAllMovableObjects_void(this.nativeObject.pointer, "destroyAllMovableObjects_void_callback");
			this.register_getMovableObject_EVString_EVString(this.nativeObject.pointer, "getMovableObject_EVString_EVString_callback");
			this.register_hasMovableObject_EVString_EVString(this.nativeObject.pointer, "hasMovableObject_EVString_EVString_callback");
			this.register_getMovableObjectIterator_EVString(this.nativeObject.pointer, "getMovableObjectIterator_EVString_callback");
			this.register_injectMovableObject_CMovableObject(this.nativeObject.pointer, "injectMovableObject_CMovableObject_callback");
			this.register_extractMovableObject_EVString_EVString(this.nativeObject.pointer, "extractMovableObject_EVString_EVString_callback");
			this.register_extractMovableObject_CMovableObject(this.nativeObject.pointer, "extractMovableObject_CMovableObject_callback");
			this.register_extractAllMovableObjectsByType_EVString(this.nativeObject.pointer, "extractAllMovableObjectsByType_EVString_callback");
			this.register_setVisibilityMask_ev_uint32(this.nativeObject.pointer, "setVisibilityMask_ev_uint32_callback");
			this.register_getVisibilityMask_void(this.nativeObject.pointer, "getVisibilityMask_void_callback");
			this.register_setFindVisibleObjects_ev_bool(this.nativeObject.pointer, "setFindVisibleObjects_ev_bool_callback");
			this.register_getFindVisibleObjects_void(this.nativeObject.pointer, "getFindVisibleObjects_void_callback");
			this.register_setNormaliseNormalsOnScale_ev_bool(this.nativeObject.pointer, "setNormaliseNormalsOnScale_ev_bool_callback");
			this.register_getNormaliseNormalsOnScale_void(this.nativeObject.pointer, "getNormaliseNormalsOnScale_void_callback");
			this.register_setFlipCullingOnNegativeScale_ev_bool(this.nativeObject.pointer, "setFlipCullingOnNegativeScale_ev_bool_callback");
			this.register_getFlipCullingOnNegativeScale_void(this.nativeObject.pointer, "getFlipCullingOnNegativeScale_void_callback");
			this.register__injectRenderWithPass_CPass_CRenderable_ev_bool_ev_bool_LightList(this.nativeObject.pointer, "_injectRenderWithPass_CPass_CRenderable_ev_bool_ev_bool_LightList_callback");
			this.register__injectRenderWithPass_CPass_CRenderable_ev_bool_ev_bool(this.nativeObject.pointer, "_injectRenderWithPass_CPass_CRenderable_ev_bool_ev_bool_callback");
			this.register__injectRenderWithPass_CPass_CRenderable_ev_bool(this.nativeObject.pointer, "_injectRenderWithPass_CPass_CRenderable_ev_bool_callback");
			this.register__injectRenderWithPass_CPass_CRenderable(this.nativeObject.pointer, "_injectRenderWithPass_CPass_CRenderable_callback");
			this.register__suppressRenderStateChanges_ev_bool(this.nativeObject.pointer, "_suppressRenderStateChanges_ev_bool_callback");
			this.register__areRenderStateChangesSuppressed_void(this.nativeObject.pointer, "_areRenderStateChangesSuppressed_void_callback");
			this.register__setPass_CPass_ev_bool_ev_bool(this.nativeObject.pointer, "_setPass_CPass_ev_bool_ev_bool_callback");
			this.register__setPass_CPass_ev_bool(this.nativeObject.pointer, "_setPass_CPass_ev_bool_callback");
			this.register__setPass_CPass(this.nativeObject.pointer, "_setPass_CPass_callback");
			this.register__markGpuParamsDirty_ev_uint16(this.nativeObject.pointer, "_markGpuParamsDirty_ev_uint16_callback");
			this.register__suppressShadows_ev_bool(this.nativeObject.pointer, "_suppressShadows_ev_bool_callback");
			this.register__areShadowsSuppressed_void(this.nativeObject.pointer, "_areShadowsSuppressed_void_callback");
			this.register__renderQueueGroupObjects_CRenderQueueGroup_OrganisationMode(this.nativeObject.pointer, "_renderQueueGroupObjects_CRenderQueueGroup_OrganisationMode_callback");
			this.register_setCameraRelativeRendering_ev_bool(this.nativeObject.pointer, "setCameraRelativeRendering_ev_bool_callback");
			this.register_getCameraRelativeRendering_void(this.nativeObject.pointer, "getCameraRelativeRendering_void_callback");
			this.register_getHeightAt_Real_Real_ev_real32(this.nativeObject.pointer, "getHeightAt_Real_Real_ev_real32_callback");
			this.register_getBestHeightAt_Real_Real(this.nativeObject.pointer, "getBestHeightAt_Real_Real_callback");
			this.register_getHeightAtTile_Real_Real(this.nativeObject.pointer, "getHeightAtTile_Real_Real_callback");
			this.register_getTileEnvelope_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real(this.nativeObject.pointer, "getTileEnvelope_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real_callback");
			this.register_addTempLayer_ILayer(this.nativeObject.pointer, "addTempLayer_ILayer_callback");
			this.register_removeTempLayer_ILayer(this.nativeObject.pointer, "removeTempLayer_ILayer_callback");
			this.register_updateQuadImage_bool_bool_bool(this.nativeObject.pointer, "updateQuadImage_bool_bool_bool_callback");
			this.register_updateQuadImage_bool_bool_bool_Real_Real_Real_Real(this.nativeObject.pointer, "updateQuadImage_bool_bool_bool_Real_Real_Real_Real_callback");
			this.register_updateOBQ_ev_bool_ev_bool_ev_bool_ev_bool(this.nativeObject.pointer, "updateOBQ_ev_bool_ev_bool_ev_bool_ev_bool_callback");
			this.register_setCollisionDetectionEnable_ev_bool(this.nativeObject.pointer, "setCollisionDetectionEnable_ev_bool_callback");
		}
	}
	
	public static CommonSceneManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CommonSceneManager obj = null;
 		if(baseObj instanceof CommonSceneManager)
		{
			obj = (CommonSceneManager)baseObj;
		} else {
			obj = new CommonSceneManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCommonSceneManager");
			obj.increaseCast();
		}

		return obj;
	}
}
