package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class InstanceBatchVTF extends com.earthview.world.graphic.BaseInstanceBatchVTF {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstanceBatchVTF", new InstanceBatchVTFClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCInstanceBatchVTFProxy", new InstanceBatchVTFClassFactory());
	}

	public InstanceBatchVTF(com.earthview.world.graphic.InstanceManager ref_creator, com.earthview.world.graphic.MeshPtr meshReference, com.earthview.world.graphic.MaterialPtr material, long instancesPerBatch, com.earthview.world.graphic.IndexMap ref_indexToBoneMap, String batchName) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_creatorPtr = new BasePointer(ref_creator);
		list.add("ref_creator", ref_creatorPtr.get());
		BasePointer meshReferencePtr = new BasePointer(meshReference);
		list.add("meshReference", meshReferencePtr.get());
		BasePointer materialPtr = new BasePointer(material);
		list.add("material", materialPtr.get());
		BasePointer instancesPerBatchPtr = new BasePointer(instancesPerBatch);
		list.add("instancesPerBatch", instancesPerBatchPtr.get());
		BasePointer ref_indexToBoneMapPtr = new BasePointer(ref_indexToBoneMap);
		list.add("ref_indexToBoneMap", ref_indexToBoneMapPtr.get());
		BasePointer batchNamePtr = new BasePointer(batchName);
		list.add("batchName", batchNamePtr.get());
		Create("JCInstanceBatchVTFProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.InstanceBatchVTF".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long calculateMaxNumInstances_CSubMesh_ev_uint16(long pNativeObject, long baseSubMesh, int flags);
	public long calculateMaxNumInstances(com.earthview.world.graphic.SubMesh baseSubMesh, int flags)
	{
		long baseSubMeshParamValue = (baseSubMesh == null ? 0L : baseSubMesh.nativeObject.pointer);
		int flagsParamValue = flags;
		long returnValue = calculateMaxNumInstances_CSubMesh_ev_uint16(this.nativeObject.pointer, baseSubMeshParamValue, flagsParamValue);
		return returnValue;
	}
	native private long calculateMaxNumInstances_CSubMesh_ev_uint16_NoVirtual(long pNativeObject, long baseSubMesh, int flags);
	protected long calculateMaxNumInstances_NoVirtual(com.earthview.world.graphic.SubMesh baseSubMesh, int flags)
	{
		long baseSubMeshParamValue = (baseSubMesh == null ? 0L : baseSubMesh.nativeObject.pointer);
		int flagsParamValue = flags;
		long returnValue = calculateMaxNumInstances_CSubMesh_ev_uint16_NoVirtual(this.nativeObject.pointer, baseSubMeshParamValue, flagsParamValue);
		return returnValue;
	}

	public InstanceBatchVTF(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public InstanceBatchVTF(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public long getMaxLookupTableInstances()
	{
		return super.getMaxLookupTableInstances_NoVirtual();
	}
	public String getMovableType()
	{
		return super.getMovableType_NoVirtual();
	}
	public void _notifyCurrentCamera(com.earthview.world.graphic.Camera ref_cam)
	{
		super._notifyCurrentCamera_NoVirtual(ref_cam);
	}
	public com.earthview.world.spatial.math.AxisAlignedBox getBoundingBox()
	{
		return super.getBoundingBox_NoVirtual();
	}
	public double getBoundingRadius()
	{
		return super.getBoundingRadius_NoVirtual();
	}
	public void _updateRenderQueue(com.earthview.world.graphic.RenderQueue queue)
	{
		super._updateRenderQueue_NoVirtual(queue);
	}
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor)
	{
		super.visitRenderables_NoVirtual(visitor);
	}
	public void visitRenderables(com.earthview.world.graphic.Renderable.Visitor visitor, boolean debugRenderables)
	{
		super.visitRenderables_NoVirtual(visitor, debugRenderables);
	}
	public void _notifyAttached(com.earthview.world.graphic.Node ref_parent, boolean isTagPoint)
	{
		super._notifyAttached_NoVirtual(ref_parent, isTagPoint);
	}
	public boolean getReceivesShadows()
	{
		return super.getReceivesShadows_NoVirtual();
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
	public void clearSelection()
	{
		super.clearSelection_NoVirtual();
	}
	public boolean startEditing(long objectIndex)
	{
		return super.startEditing_NoVirtual(objectIndex);
	}
	public void endEditing()
	{
		super.endEditing_NoVirtual();
	}
	public com.earthview.world.graphic.EditBoundingBox getEditBoundingBox()
	{
		return super.getEditBoundingBox_NoVirtual();
	}
	public boolean getSelectedObjectWorldMatrix(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		return super.getSelectedObjectWorldMatrix_NoVirtual(objectIndex, matrix);
	}
	public boolean setSelectedObjectWorldMatrix(long objectIndex, com.earthview.world.spatial.math.Matrix4 matrix)
	{
		return super.setSelectedObjectWorldMatrix_NoVirtual(objectIndex, matrix);
	}
	public com.earthview.world.graphic.InstancedEntity getInstanceEntity(long objectIndex)
	{
		return super.getInstanceEntity_NoVirtual(objectIndex);
	}
	/// typedef vector<InstancedEntity*> InstancedEntityVec;
	/// <summary>
	/// 跟踪父节点
	/// 内部instance专用(instanced entity之间相对静止)
	/// </summary>
	/// <param name="pNode"></param>
	/// <returns></returns>
	public boolean trackParentNode(com.earthview.world.graphic.Node pNode)
	{
		return super.trackParentNode_NoVirtual(pNode);
	}
	/**
	 * 获得跟踪的父节点用于判断是否为内部instance
	 * @return 跟踪的父节点
	 */
	public com.earthview.world.graphic.Node getTrackingNode()
	{
		return super.getTrackingNode_NoVirtual();
	}
	/**
	 * instancedentity渲染状态发生变化可见性/自定义颜色发生变化
	 * @param pNode 
	 */
	public void onInstancedEntityStateChanged(com.earthview.world.graphic.InstancedEntity instancedEntity)
	{
		super.onInstancedEntityStateChanged_NoVirtual(instancedEntity);
	}
	public com.earthview.world.graphic.RenderOperation build(com.earthview.world.graphic.SubMesh baseSubMesh)
	{
		return super.build_NoVirtual(baseSubMesh);
	}
	public void buildFrom(com.earthview.world.graphic.SubMesh baseSubMesh, com.earthview.world.graphic.RenderOperation renderOperation)
	{
		super.buildFrom_NoVirtual(baseSubMesh, renderOperation);
	}
	public void _boundsDirty()
	{
		super._boundsDirty_NoVirtual();
	}
	public void setStaticAndUpdate(boolean bStatic)
	{
		super.setStaticAndUpdate_NoVirtual(bStatic);
	}
	public boolean isStatic()
	{
		return super.isStatic_NoVirtual();
	}
	public boolean useBoneWorldMatrices()
	{
		return super.useBoneWorldMatrices_NoVirtual();
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
	 * 获得渲染对象的世界变换矩阵
	 * @param xform 
	 */
	public void getWorldTransforms(com.earthview.world.spatial.math.Matrix4 xform)
	{
		super.getWorldTransforms_NoVirtual(xform);
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
	
	native protected void register_getMaxLookupTableInstances_void(long pNativeObject, String method);
	native protected void register_getMovableType_void(long pNativeObject, String method);
	native protected void register__notifyCurrentCamera_CCamera(long pNativeObject, String method);
	native protected void register_getBoundingBox_void(long pNativeObject, String method);
	native protected void register_getBoundingRadius_void(long pNativeObject, String method);
	native protected void register__updateRenderQueue_CRenderQueue(long pNativeObject, String method);
	native protected void register_visitRenderables_CVisitor(long pNativeObject, String method);
	native protected void register_visitRenderables_CVisitor_ev_bool(long pNativeObject, String method);
	native protected void register__notifyAttached_CNode_ev_bool(long pNativeObject, String method);
	native protected void register_getReceivesShadows_void(long pNativeObject, String method);
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
	native protected void register_getInstanceEntity_ev_uint32(long pNativeObject, String method);
	native protected void register_trackParentNode_CNode(long pNativeObject, String method);
	native protected void register_getTrackingNode_void(long pNativeObject, String method);
	native protected void register_onInstancedEntityStateChanged_CInstancedEntity(long pNativeObject, String method);
	native protected void register_calculateMaxNumInstances_CSubMesh_ev_uint16(long pNativeObject, String method);
	native protected void register_build_CSubMesh(long pNativeObject, String method);
	native protected void register_buildFrom_CSubMesh_CRenderOperation(long pNativeObject, String method);
	native protected void register__boundsDirty_void(long pNativeObject, String method);
	native protected void register_setStaticAndUpdate_ev_bool(long pNativeObject, String method);
	native protected void register_isStatic_void(long pNativeObject, String method);
	native protected void register_useBoneWorldMatrices_void(long pNativeObject, String method);
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
			this.register_getMaxLookupTableInstances_void(this.nativeObject.pointer, "getMaxLookupTableInstances_void_callback");
			this.register_getMovableType_void(this.nativeObject.pointer, "getMovableType_void_callback");
			this.register__notifyCurrentCamera_CCamera(this.nativeObject.pointer, "_notifyCurrentCamera_CCamera_callback");
			this.register_getBoundingBox_void(this.nativeObject.pointer, "getBoundingBox_void_callback");
			this.register_getBoundingRadius_void(this.nativeObject.pointer, "getBoundingRadius_void_callback");
			this.register__updateRenderQueue_CRenderQueue(this.nativeObject.pointer, "_updateRenderQueue_CRenderQueue_callback");
			this.register_visitRenderables_CVisitor(this.nativeObject.pointer, "visitRenderables_CVisitor_callback");
			this.register_visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, "visitRenderables_CVisitor_ev_bool_callback");
			this.register__notifyAttached_CNode_ev_bool(this.nativeObject.pointer, "_notifyAttached_CNode_ev_bool_callback");
			this.register_getReceivesShadows_void(this.nativeObject.pointer, "getReceivesShadows_void_callback");
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
			this.register_getInstanceEntity_ev_uint32(this.nativeObject.pointer, "getInstanceEntity_ev_uint32_callback");
			this.register_trackParentNode_CNode(this.nativeObject.pointer, "trackParentNode_CNode_callback");
			this.register_getTrackingNode_void(this.nativeObject.pointer, "getTrackingNode_void_callback");
			this.register_onInstancedEntityStateChanged_CInstancedEntity(this.nativeObject.pointer, "onInstancedEntityStateChanged_CInstancedEntity_callback");
			this.register_calculateMaxNumInstances_CSubMesh_ev_uint16(this.nativeObject.pointer, "calculateMaxNumInstances_CSubMesh_ev_uint16_callback");
			this.register_build_CSubMesh(this.nativeObject.pointer, "build_CSubMesh_callback");
			this.register_buildFrom_CSubMesh_CRenderOperation(this.nativeObject.pointer, "buildFrom_CSubMesh_CRenderOperation_callback");
			this.register__boundsDirty_void(this.nativeObject.pointer, "_boundsDirty_void_callback");
			this.register_setStaticAndUpdate_ev_bool(this.nativeObject.pointer, "setStaticAndUpdate_ev_bool_callback");
			this.register_isStatic_void(this.nativeObject.pointer, "isStatic_void_callback");
			this.register_useBoneWorldMatrices_void(this.nativeObject.pointer, "useBoneWorldMatrices_void_callback");
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
	
	public static InstanceBatchVTF fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		InstanceBatchVTF obj = null;
 		if(baseObj instanceof InstanceBatchVTF)
		{
			obj = (InstanceBatchVTF)baseObj;
		} else {
			obj = new InstanceBatchVTF(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CInstanceBatchVTF");
			obj.increaseCast();
		}

		return obj;
	}
}
