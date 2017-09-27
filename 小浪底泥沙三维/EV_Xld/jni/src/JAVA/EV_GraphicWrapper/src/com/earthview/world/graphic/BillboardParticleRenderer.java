package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 广告板粒子渲染类定义广告板粒子渲染相关操作
 */
public class BillboardParticleRenderer extends com.earthview.world.graphic.ParticleSystemRenderer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CBillboardParticleRenderer", new BillboardParticleRendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCBillboardParticleRendererProxy", new BillboardParticleRendererClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public BillboardParticleRenderer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCBillboardParticleRendererProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.BillboardParticleRenderer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setBillboardType_BillboardType(long pNativeObject, int bbt);
	/**
	 * 设置广告板类型
	 * @param bbt 广告板类型
	 */
	public void setBillboardType(com.earthview.world.graphic.BillboardType bbt)
	{
		int bbtParamValue = bbt.getValue();
		setBillboardType_BillboardType(this.nativeObject.pointer, bbtParamValue);
	}
	native private int getBillboardType_void(long pNativeObject);
	/**
	 * 获得使用的广告板类型
	 * @param  
	 * @return 广告板类型
	 */
	public com.earthview.world.graphic.BillboardType getBillboardType()
	{
		int returnValue = getBillboardType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.BillboardType.toEnum(returnValue);
	}
	native private void setUseAccurateFacing_ev_bool(long pNativeObject, boolean acc);
	/**
	 * 设置广告板是否精确对准摄像机
	 * @param acc 是否精确
	 */
	public void setUseAccurateFacing(boolean acc)
	{
		boolean accParamValue = acc;
		setUseAccurateFacing_ev_bool(this.nativeObject.pointer, accParamValue);
	}
	native private boolean getUseAccurateFacing_void(long pNativeObject);
	/**
	 * 获得广告板是否精确对准摄像机
	 * @param  
	 * @return 如果精确返回true，否则false
	 */
	public boolean getUseAccurateFacing()
	{
		boolean returnValue = getUseAccurateFacing_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBillboardOrigin_BillboardOrigin(long pNativeObject, int origin);
	/**
	 * 设置广告板原点
	 * @param origin 原点
	 */
	public void setBillboardOrigin(com.earthview.world.graphic.BillboardOrigin origin)
	{
		int originParamValue = origin.getValue();
		setBillboardOrigin_BillboardOrigin(this.nativeObject.pointer, originParamValue);
	}
	native private int getBillboardOrigin_void(long pNativeObject);
	/**
	 * 获得广告板起点
	 * @param  
	 */
	public com.earthview.world.graphic.BillboardOrigin getBillboardOrigin()
	{
		int returnValue = getBillboardOrigin_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.BillboardOrigin.toEnum(returnValue);
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
	native private void setPointRenderingEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置是否启用点渲染
	 * @param enabled 是否使用点渲染
	 */
	public void setPointRenderingEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setPointRenderingEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean isPointRenderingEnabled_void(long pNativeObject);
	/**
	 * 获取是否启用点渲染
	 * @param  
	 * @return 使用点渲染返回true，否则返回false
	 */
	public boolean isPointRenderingEnabled()
	{
		boolean returnValue = isPointRenderingEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getType_void(long pNativeObject);
	/**
	 * 获得类型
	 * @param  
	 */
	public String getType()
	{
		String returnValue = getType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getType_void_NoVirtual(long pNativeObject);
	protected String getType_NoVirtual()
	{
		String returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void _updateRenderQueue_CRenderQueue_ParticleList_ev_bool(long pNativeObject, long queue, long currentParticles, boolean cullIndividually);
	/**
	 * 更新渲染队列
	 * @param queue 渲染队列
	 * @param currentParticles 当前粒子列表
	 * @param cullIndividually 是否是单个
	 */
	public void _updateRenderQueue(com.earthview.world.graphic.RenderQueue queue, com.earthview.world.graphic.ParticleList currentParticles, boolean cullIndividually)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		long currentParticlesParamValue = currentParticles.nativeObject.pointer;
		boolean cullIndividuallyParamValue = cullIndividually;
		_updateRenderQueue_CRenderQueue_ParticleList_ev_bool(this.nativeObject.pointer, queueParamValue, currentParticlesParamValue, cullIndividuallyParamValue);
	}
	native private void _updateRenderQueue_CRenderQueue_ParticleList_ev_bool_NoVirtual(long pNativeObject, long queue, long currentParticles, boolean cullIndividually);
	protected void _updateRenderQueue_NoVirtual(com.earthview.world.graphic.RenderQueue queue, com.earthview.world.graphic.ParticleList currentParticles, boolean cullIndividually)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		long currentParticlesParamValue = currentParticles.nativeObject.pointer;
		boolean cullIndividuallyParamValue = cullIndividually;
		_updateRenderQueue_CRenderQueue_ParticleList_ev_bool_NoVirtual(this.nativeObject.pointer, queueParamValue, currentParticlesParamValue, cullIndividuallyParamValue);
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

	native private void _setMaterial_CMaterialPtr(long pNativeObject, long mat);
	/**
	 * 设置材质
	 * @param mat 相关材质
	 */
	public void _setMaterial(com.earthview.world.graphic.MaterialPtr mat)
	{
		long matParamValue = mat.nativeObject.pointer;
		_setMaterial_CMaterialPtr(this.nativeObject.pointer, matParamValue);
	}
	native private void _setMaterial_CMaterialPtr_NoVirtual(long pNativeObject, long mat);
	protected void _setMaterial_NoVirtual(com.earthview.world.graphic.MaterialPtr mat)
	{
		long matParamValue = mat.nativeObject.pointer;
		_setMaterial_CMaterialPtr_NoVirtual(this.nativeObject.pointer, matParamValue);
	}

	native private void _notifyCurrentCamera_CCamera(long pNativeObject, long ref_cam);
	/**
	 * 通报当前摄像机
	 * @param cam 当前摄像机
	 */
	public void _notifyCurrentCamera(com.earthview.world.graphic.Camera ref_cam)
	{
		long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
		_notifyCurrentCamera_CCamera(this.nativeObject.pointer, ref_camParamValue);
	}
	native private void _notifyCurrentCamera_CCamera_NoVirtual(long pNativeObject, long ref_cam);
	protected void _notifyCurrentCamera_NoVirtual(com.earthview.world.graphic.Camera ref_cam)
	{
		long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
		_notifyCurrentCamera_CCamera_NoVirtual(this.nativeObject.pointer, ref_camParamValue);
	}

	native private void _notifyParticleRotated_void(long pNativeObject);
	/**
	 * 通报粒子旋转信息
	 * @param  
	 */
	public void _notifyParticleRotated()
	{
		_notifyParticleRotated_void(this.nativeObject.pointer);
	}
	native private void _notifyParticleRotated_void_NoVirtual(long pNativeObject);
	protected void _notifyParticleRotated_NoVirtual()
	{
		_notifyParticleRotated_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void _notifyParticleResized_void(long pNativeObject);
	/**
	 * 通报粒子尺寸改变
	 * @param  
	 */
	public void _notifyParticleResized()
	{
		_notifyParticleResized_void(this.nativeObject.pointer);
	}
	native private void _notifyParticleResized_void_NoVirtual(long pNativeObject);
	protected void _notifyParticleResized_NoVirtual()
	{
		_notifyParticleResized_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void _notifyParticleQuota_ev_size_t(long pNativeObject, long quota);
	/**
	 * 通报粒子额度信息
	 * @param quota 额度
	 */
	public void _notifyParticleQuota(long quota)
	{
		long quotaParamValue = quota;
		_notifyParticleQuota_ev_size_t(this.nativeObject.pointer, quotaParamValue);
	}
	native private void _notifyParticleQuota_ev_size_t_NoVirtual(long pNativeObject, long quota);
	protected void _notifyParticleQuota_NoVirtual(long quota)
	{
		long quotaParamValue = quota;
		_notifyParticleQuota_ev_size_t_NoVirtual(this.nativeObject.pointer, quotaParamValue);
	}

	native private void _notifyAttached_CNode_ev_bool(long pNativeObject, long ref_parent, boolean isTagPoint);
	/**
	 * 通报挂接
	 * @param parent 父结点
	 * @param isTagPoint 是否在骨骼下
	 */
	public void _notifyAttached(com.earthview.world.graphic.Node ref_parent, boolean isTagPoint)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		boolean isTagPointParamValue = isTagPoint;
		_notifyAttached_CNode_ev_bool(this.nativeObject.pointer, ref_parentParamValue, isTagPointParamValue);
	}
	native private void _notifyAttached_CNode_ev_bool_NoVirtual(long pNativeObject, long ref_parent, boolean isTagPoint);
	protected void _notifyAttached_NoVirtual(com.earthview.world.graphic.Node ref_parent, boolean isTagPoint)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		boolean isTagPointParamValue = isTagPoint;
		_notifyAttached_CNode_ev_bool_NoVirtual(this.nativeObject.pointer, ref_parentParamValue, isTagPointParamValue);
	}

	native private void _notifyAttached_CNode(long pNativeObject, long ref_parent);
	/**
	 * 通报挂接
	 * @param parent 父结点
	 */
	public void _notifyAttached(com.earthview.world.graphic.Node ref_parent)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		_notifyAttached_CNode(this.nativeObject.pointer, ref_parentParamValue);
	}
	native private void _notifyAttached_CNode_NoVirtual(long pNativeObject, long ref_parent);
	protected void _notifyAttached_NoVirtual(com.earthview.world.graphic.Node ref_parent)
	{
		long ref_parentParamValue = (ref_parent == null ? 0L : ref_parent.nativeObject.pointer);
		_notifyAttached_CNode_NoVirtual(this.nativeObject.pointer, ref_parentParamValue);
	}

	native private void _notifyDefaultDimensions_Real_Real(long pNativeObject, double width, double height);
	/**
	 * 通报默认宽高
	 * @param width 宽度
	 * @param height 高度
	 */
	public void _notifyDefaultDimensions(double width, double height)
	{
		double widthParamValue = width;
		double heightParamValue = height;
		_notifyDefaultDimensions_Real_Real(this.nativeObject.pointer, widthParamValue, heightParamValue);
	}
	native private void _notifyDefaultDimensions_Real_Real_NoVirtual(long pNativeObject, double width, double height);
	protected void _notifyDefaultDimensions_NoVirtual(double width, double height)
	{
		double widthParamValue = width;
		double heightParamValue = height;
		_notifyDefaultDimensions_Real_Real_NoVirtual(this.nativeObject.pointer, widthParamValue, heightParamValue);
	}

	native private void setRenderQueueGroup_ev_uint8(long pNativeObject, short queueID);
	/**
	 * 设置渲染队列组ID
	 * @param queueID 队列ID号
	 */
	public void setRenderQueueGroup(short queueID)
	{
		short queueIDParamValue = queueID;
		setRenderQueueGroup_ev_uint8(this.nativeObject.pointer, queueIDParamValue);
	}
	native private void setRenderQueueGroup_ev_uint8_NoVirtual(long pNativeObject, short queueID);
	protected void setRenderQueueGroup_NoVirtual(short queueID)
	{
		short queueIDParamValue = queueID;
		setRenderQueueGroup_ev_uint8_NoVirtual(this.nativeObject.pointer, queueIDParamValue);
	}

	native private void setKeepParticlesInLocalSpace_ev_bool(long pNativeObject, boolean keepLocal);
	/**
	 * 设置保持粒子本地空间
	 * @param keepLocal 保存空间
	 */
	public void setKeepParticlesInLocalSpace(boolean keepLocal)
	{
		boolean keepLocalParamValue = keepLocal;
		setKeepParticlesInLocalSpace_ev_bool(this.nativeObject.pointer, keepLocalParamValue);
	}
	native private void setKeepParticlesInLocalSpace_ev_bool_NoVirtual(long pNativeObject, boolean keepLocal);
	protected void setKeepParticlesInLocalSpace_NoVirtual(boolean keepLocal)
	{
		boolean keepLocalParamValue = keepLocal;
		setKeepParticlesInLocalSpace_ev_bool_NoVirtual(this.nativeObject.pointer, keepLocalParamValue);
	}

	native private int _getSortMode_void(long pNativeObject);
	/**
	 * 获得分类模式信息
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

	native private long getBillboardSet_void(long pNativeObject);
	/**
	 * 获得广告板集
	 * @param  
	 */
	public com.earthview.world.graphic.BillboardSet getBillboardSet()
	{
		long returnValue = getBillboardSet_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.BillboardSet __returnValue = new com.earthview.world.graphic.BillboardSet(CreatedWhenConstruct.CWC_NotToCreate, "CBillboardSet");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.BillboardSet)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBillboardSet");
		}
		return __returnValue;
	}
	public BillboardParticleRenderer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public BillboardParticleRenderer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 当粒子发射时通知
	 * @param particle 粒子
	 */
	public void _notifyParticleEmitted(com.earthview.world.graphic.Particle particle)
	{
		super._notifyParticleEmitted_NoVirtual(particle);
	}
	/**
	 * 当粒子消亡时通知
	 * @param particle 粒子
	 */
	public void _notifyParticleExpired(com.earthview.world.graphic.Particle particle)
	{
		super._notifyParticleExpired_NoVirtual(particle);
	}
	/**
	 * 当粒子移动时通知
	 * @param currentParticles 当前粒子
	 */
	public void _notifyParticleMoved(com.earthview.world.graphic.ParticleList currentParticles)
	{
		super._notifyParticleMoved_NoVirtual(currentParticles);
	}
	/**
	 * 当粒子清空时通知
	 * @param currentParticles 当前粒子
	 */
	public void _notifyParticleCleared(com.earthview.world.graphic.ParticleList currentParticles)
	{
		super._notifyParticleCleared_NoVirtual(currentParticles);
	}
	/**
	 * 创建一个新的EarthView::World::Graphic::CParticleVisualData实例挂接粒子
	 * @param  
	 */
	public com.earthview.world.graphic.ParticleVisualData _createVisualData()
	{
		return super._createVisualData_NoVirtual();
	}
	/**
	 * 销毁EarthView::World::Graphic::CParticleVisualData实例
	 * @param  
	 */
	public void _destroyVisualData(com.earthview.world.graphic.ParticleVisualData vis)
	{
		super._destroyVisualData_NoVirtual(vis);
	}
	public boolean setParameter(String name, String value)
	{
		return super.setParameter_NoVirtual(name, value);
	}
	public boolean setParameter(String name, boolean readOnly, boolean enable)
	{
		return super.setParameter_NoVirtual(name, readOnly, enable);
	}
	public void setParameterList(com.earthview.world.core.CommonStringPairList paramList)
	{
		super.setParameterList_NoVirtual(paramList);
	}
	public String getParameter(String name)
	{
		return super.getParameter_NoVirtual(name);
	}
	public void copyParametersTo(com.earthview.world.core.StringInterface dest)
	{
		super.copyParametersTo_NoVirtual(dest);
	}
	
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register__updateRenderQueue_CRenderQueue_ParticleList_ev_bool(long pNativeObject, String method);
	native protected void register__setMaterial_CMaterialPtr(long pNativeObject, String method);
	native protected void register__notifyCurrentCamera_CCamera(long pNativeObject, String method);
	native protected void register__notifyAttached_CNode_ev_bool(long pNativeObject, String method);
	native protected void register__notifyAttached_CNode(long pNativeObject, String method);
	native protected void register__notifyParticleRotated_void(long pNativeObject, String method);
	native protected void register__notifyParticleResized_void(long pNativeObject, String method);
	native protected void register__notifyParticleQuota_ev_size_t(long pNativeObject, String method);
	native protected void register__notifyDefaultDimensions_Real_Real(long pNativeObject, String method);
	native protected void register__notifyParticleEmitted_CParticle(long pNativeObject, String method);
	native protected void register__notifyParticleExpired_CParticle(long pNativeObject, String method);
	native protected void register__notifyParticleMoved_ParticleList(long pNativeObject, String method);
	native protected void register__notifyParticleCleared_ParticleList(long pNativeObject, String method);
	native protected void register__createVisualData_void(long pNativeObject, String method);
	native protected void register__destroyVisualData_CParticleVisualData(long pNativeObject, String method);
	native protected void register_setRenderQueueGroup_ev_uint8(long pNativeObject, String method);
	native protected void register_setKeepParticlesInLocalSpace_ev_bool(long pNativeObject, String method);
	native protected void register__getSortMode_void(long pNativeObject, String method);
	native protected void register_visitRenderables_CVisitor_ev_bool(long pNativeObject, String method);
	native protected void register_visitRenderables_CVisitor(long pNativeObject, String method);
	native protected void register_setParameter_EVString_EVString(long pNativeObject, String method);
	native protected void register_setParameter_EVString_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_setParameterList_CommonStringPairList(long pNativeObject, String method);
	native protected void register_getParameter_EVString(long pNativeObject, String method);
	native protected void register_copyParametersTo_CStringInterface(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register__updateRenderQueue_CRenderQueue_ParticleList_ev_bool(this.nativeObject.pointer, "_updateRenderQueue_CRenderQueue_ParticleList_ev_bool_callback");
			this.register__setMaterial_CMaterialPtr(this.nativeObject.pointer, "_setMaterial_CMaterialPtr_callback");
			this.register__notifyCurrentCamera_CCamera(this.nativeObject.pointer, "_notifyCurrentCamera_CCamera_callback");
			this.register__notifyAttached_CNode_ev_bool(this.nativeObject.pointer, "_notifyAttached_CNode_ev_bool_callback");
			this.register__notifyAttached_CNode(this.nativeObject.pointer, "_notifyAttached_CNode_callback");
			this.register__notifyParticleRotated_void(this.nativeObject.pointer, "_notifyParticleRotated_void_callback");
			this.register__notifyParticleResized_void(this.nativeObject.pointer, "_notifyParticleResized_void_callback");
			this.register__notifyParticleQuota_ev_size_t(this.nativeObject.pointer, "_notifyParticleQuota_ev_size_t_callback");
			this.register__notifyDefaultDimensions_Real_Real(this.nativeObject.pointer, "_notifyDefaultDimensions_Real_Real_callback");
			this.register__notifyParticleEmitted_CParticle(this.nativeObject.pointer, "_notifyParticleEmitted_CParticle_callback");
			this.register__notifyParticleExpired_CParticle(this.nativeObject.pointer, "_notifyParticleExpired_CParticle_callback");
			this.register__notifyParticleMoved_ParticleList(this.nativeObject.pointer, "_notifyParticleMoved_ParticleList_callback");
			this.register__notifyParticleCleared_ParticleList(this.nativeObject.pointer, "_notifyParticleCleared_ParticleList_callback");
			this.register__createVisualData_void(this.nativeObject.pointer, "_createVisualData_void_callback");
			this.register__destroyVisualData_CParticleVisualData(this.nativeObject.pointer, "_destroyVisualData_CParticleVisualData_callback");
			this.register_setRenderQueueGroup_ev_uint8(this.nativeObject.pointer, "setRenderQueueGroup_ev_uint8_callback");
			this.register_setKeepParticlesInLocalSpace_ev_bool(this.nativeObject.pointer, "setKeepParticlesInLocalSpace_ev_bool_callback");
			this.register__getSortMode_void(this.nativeObject.pointer, "_getSortMode_void_callback");
			this.register_visitRenderables_CVisitor_ev_bool(this.nativeObject.pointer, "visitRenderables_CVisitor_ev_bool_callback");
			this.register_visitRenderables_CVisitor(this.nativeObject.pointer, "visitRenderables_CVisitor_callback");
			this.register_setParameter_EVString_EVString(this.nativeObject.pointer, "setParameter_EVString_EVString_callback");
			this.register_setParameter_EVString_ev_bool_ev_bool(this.nativeObject.pointer, "setParameter_EVString_ev_bool_ev_bool_callback");
			this.register_setParameterList_CommonStringPairList(this.nativeObject.pointer, "setParameterList_CommonStringPairList_callback");
			this.register_getParameter_EVString(this.nativeObject.pointer, "getParameter_EVString_callback");
			this.register_copyParametersTo_CStringInterface(this.nativeObject.pointer, "copyParametersTo_CStringInterface_callback");
		}
	}
	
	public static BillboardParticleRenderer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		BillboardParticleRenderer obj = null;
 		if(baseObj instanceof BillboardParticleRenderer)
		{
			obj = (BillboardParticleRenderer)baseObj;
		} else {
			obj = new BillboardParticleRenderer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CBillboardParticleRenderer");
			obj.increaseCast();
		}

		return obj;
	}
}
