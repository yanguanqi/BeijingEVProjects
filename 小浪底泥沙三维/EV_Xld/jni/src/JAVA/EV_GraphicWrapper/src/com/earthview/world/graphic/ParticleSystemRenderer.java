package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 抽象类，定义了提供渲染性能到粒子系统实例的接口
 */
public class ParticleSystemRenderer extends com.earthview.world.core.StringInterface {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleSystemRenderer", new ParticleSystemRendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCParticleSystemRendererProxy", new ParticleSystemRendererClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public ParticleSystemRenderer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCParticleSystemRendererProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ParticleSystemRenderer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  String getType_void_callback()
	{
		String returnValue = getType();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getType_void(long pNativeObject);
	/**
	 * 获得渲染的类型，必须被子类执行
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

	protected  void _updateRenderQueue_CRenderQueue_ParticleList_ev_bool_callback(long queue, long currentParticles, boolean cullIndividually)
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
		com.earthview.world.graphic.ParticleList currentParticlesParamValue = new com.earthview.world.graphic.ParticleList(CreatedWhenConstruct.CWC_NotToCreate);
		currentParticlesParamValue.setDelegate(true);
		currentParticlesParamValue.setInstancePointer(new InstancePointer(currentParticles));
		IClassFactory currentParticlesParamValueClassFactory = GlobalClassFactoryMap.get(currentParticlesParamValue.getCppInstanceTypeName());
		if (currentParticlesParamValueClassFactory != null)
		{
			currentParticlesParamValue.setDelegate(true);
			currentParticlesParamValue = (com.earthview.world.graphic.ParticleList)currentParticlesParamValueClassFactory.create();
			currentParticlesParamValue.setDelegate(true);
			currentParticlesParamValue.setInstancePointer(new InstancePointer(currentParticles));
		}
		boolean cullIndividuallyParamValue = cullIndividually;
		_updateRenderQueue(queueParamValue, currentParticlesParamValue, cullIndividuallyParamValue);
	}

	native private void _updateRenderQueue_CRenderQueue_ParticleList_ev_bool(long pNativeObject, long queue, long currentParticles, boolean cullIndividually);
	/**
	 * 更新渲染队列
	 * @param queue 渲染队列
	 * @param currentParticles 
	 * @param cullIndividually 
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

	protected  void _setMaterial_CMaterialPtr_callback(long mat)
	{
		com.earthview.world.graphic.MaterialPtr matParamValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
		matParamValue.setDelegate(true);
		matParamValue.setInstancePointer(new InstancePointer(mat));
		IClassFactory matParamValueClassFactory = GlobalClassFactoryMap.get(matParamValue.getCppInstanceTypeName());
		if (matParamValueClassFactory != null)
		{
			matParamValue.setDelegate(true);
			matParamValue = (com.earthview.world.graphic.MaterialPtr)matParamValueClassFactory.create();
			matParamValue.setDelegate(true);
			matParamValue.setInstancePointer(new InstancePointer(mat));
		}
		_setMaterial(matParamValue);
	}

	native private void _setMaterial_CMaterialPtr(long pNativeObject, long mat);
	/**
	 * 设置渲染用到的材质
	 * @param mat 
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

	protected  void _notifyCurrentCamera_CCamera_callback(long ref_cam)
	{
		com.earthview.world.graphic.Camera ref_camParamValue = (ref_cam == 0L ? null : new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_camParamValue != null)
		{
		ref_camParamValue.setDelegate(true);
		ref_camParamValue.setInstancePointer(new InstancePointer(ref_cam));
		IClassFactory ref_camParamValueClassFactory = GlobalClassFactoryMap.get(ref_camParamValue.getCppInstanceTypeName());
		if (ref_camParamValueClassFactory != null)
		{
			ref_camParamValue.setDelegate(true);
			ref_camParamValue = (com.earthview.world.graphic.Camera)ref_camParamValueClassFactory.create();
			ref_camParamValue.setDelegate(true);
			ref_camParamValue.setInstancePointer(new InstancePointer(ref_cam));
		}
		}
		_notifyCurrentCamera(ref_camParamValue);
	}

	native private void _notifyCurrentCamera_CCamera(long pNativeObject, long ref_cam);
	/**
	 * 通报当前摄像机
	 * @param cam 摄像机指针
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

	protected  void _notifyAttached_CNode_ev_bool_callback(long ref_parent, boolean isTagPoint)
	{
		com.earthview.world.graphic.Node ref_parentParamValue = (ref_parent == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_parentParamValue != null)
		{
		ref_parentParamValue.setDelegate(true);
		ref_parentParamValue.setInstancePointer(new InstancePointer(ref_parent));
		IClassFactory ref_parentParamValueClassFactory = GlobalClassFactoryMap.get(ref_parentParamValue.getCppInstanceTypeName());
		if (ref_parentParamValueClassFactory != null)
		{
			ref_parentParamValue.setDelegate(true);
			ref_parentParamValue = (com.earthview.world.graphic.Node)ref_parentParamValueClassFactory.create();
			ref_parentParamValue.setDelegate(true);
			ref_parentParamValue.setInstancePointer(new InstancePointer(ref_parent));
		}
		}
		boolean isTagPointParamValue = isTagPoint;
		_notifyAttached(ref_parentParamValue, isTagPointParamValue);
	}

	native private void _notifyAttached_CNode_ev_bool(long pNativeObject, long ref_parent, boolean isTagPoint);
	/**
	 * 通报被挂接
	 * @param parent 父节点名称
	 * @param isTagPoint 是否挂接在节点下
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

	protected  void _notifyAttached_CNode_callback(long ref_parent)
	{
		com.earthview.world.graphic.Node ref_parentParamValue = (ref_parent == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_parentParamValue != null)
		{
		ref_parentParamValue.setDelegate(true);
		ref_parentParamValue.setInstancePointer(new InstancePointer(ref_parent));
		IClassFactory ref_parentParamValueClassFactory = GlobalClassFactoryMap.get(ref_parentParamValue.getCppInstanceTypeName());
		if (ref_parentParamValueClassFactory != null)
		{
			ref_parentParamValue.setDelegate(true);
			ref_parentParamValue = (com.earthview.world.graphic.Node)ref_parentParamValueClassFactory.create();
			ref_parentParamValue.setDelegate(true);
			ref_parentParamValue.setInstancePointer(new InstancePointer(ref_parent));
		}
		}
		_notifyAttached(ref_parentParamValue);
	}

	native private void _notifyAttached_CNode(long pNativeObject, long ref_parent);
	/**
	 * 通报被挂接
	 * @param parent 父节点名称
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

	protected  void _notifyParticleRotated_void_callback()
	{
		_notifyParticleRotated();
	}

	native private void _notifyParticleRotated_void(long pNativeObject);
	/**
	 * 当粒子旋转时通知
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

	protected  void _notifyParticleResized_void_callback()
	{
		_notifyParticleResized();
	}

	native private void _notifyParticleResized_void(long pNativeObject);
	/**
	 * 当粒子调整大小时通知
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

	protected  void _notifyParticleQuota_ev_size_t_callback(long quota)
	{
		long quotaParamValue = quota;
		_notifyParticleQuota(quotaParamValue);
	}

	native private void _notifyParticleQuota_ev_size_t(long pNativeObject, long quota);
	/**
	 * 告诉渲染器粒子数目已经改变
	 * @param quota 粒子数目
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

	protected  void _notifyDefaultDimensions_Real_Real_callback(double width, double height)
	{
		double widthParamValue = width;
		double heightParamValue = height;
		_notifyDefaultDimensions(widthParamValue, heightParamValue);
	}

	native private void _notifyDefaultDimensions_Real_Real(long pNativeObject, double width, double height);
	/**
	 * 告诉渲染器粒子默认大小已经改变
	 * @param width 粒子的宽度
	 * @param height 粒子的高度
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

	protected  void _notifyParticleEmitted_CParticle_callback(long particle)
	{
		com.earthview.world.graphic.Particle particleParamValue = (particle == 0L ? null : new com.earthview.world.graphic.Particle(CreatedWhenConstruct.CWC_NotToCreate));
		if(particleParamValue != null)
		{
		particleParamValue.setDelegate(true);
		particleParamValue.setInstancePointer(new InstancePointer(particle));
		IClassFactory particleParamValueClassFactory = GlobalClassFactoryMap.get(particleParamValue.getCppInstanceTypeName());
		if (particleParamValueClassFactory != null)
		{
			particleParamValue.setDelegate(true);
			particleParamValue = (com.earthview.world.graphic.Particle)particleParamValueClassFactory.create();
			particleParamValue.setDelegate(true);
			particleParamValue.setInstancePointer(new InstancePointer(particle));
		}
		}
		_notifyParticleEmitted(particleParamValue);
	}

	native private void _notifyParticleEmitted_CParticle(long pNativeObject, long particle);
	/**
	 * 当粒子发射时通知
	 * @param particle 粒子
	 */
	public void _notifyParticleEmitted(com.earthview.world.graphic.Particle particle)
	{
		long particleParamValue = (particle == null ? 0L : particle.nativeObject.pointer);
		_notifyParticleEmitted_CParticle(this.nativeObject.pointer, particleParamValue);
	}
	native private void _notifyParticleEmitted_CParticle_NoVirtual(long pNativeObject, long particle);
	protected void _notifyParticleEmitted_NoVirtual(com.earthview.world.graphic.Particle particle)
	{
		long particleParamValue = (particle == null ? 0L : particle.nativeObject.pointer);
		_notifyParticleEmitted_CParticle_NoVirtual(this.nativeObject.pointer, particleParamValue);
	}

	protected  void _notifyParticleExpired_CParticle_callback(long particle)
	{
		com.earthview.world.graphic.Particle particleParamValue = (particle == 0L ? null : new com.earthview.world.graphic.Particle(CreatedWhenConstruct.CWC_NotToCreate));
		if(particleParamValue != null)
		{
		particleParamValue.setDelegate(true);
		particleParamValue.setInstancePointer(new InstancePointer(particle));
		IClassFactory particleParamValueClassFactory = GlobalClassFactoryMap.get(particleParamValue.getCppInstanceTypeName());
		if (particleParamValueClassFactory != null)
		{
			particleParamValue.setDelegate(true);
			particleParamValue = (com.earthview.world.graphic.Particle)particleParamValueClassFactory.create();
			particleParamValue.setDelegate(true);
			particleParamValue.setInstancePointer(new InstancePointer(particle));
		}
		}
		_notifyParticleExpired(particleParamValue);
	}

	native private void _notifyParticleExpired_CParticle(long pNativeObject, long particle);
	/**
	 * 当粒子消亡时通知
	 * @param particle 粒子
	 */
	public void _notifyParticleExpired(com.earthview.world.graphic.Particle particle)
	{
		long particleParamValue = (particle == null ? 0L : particle.nativeObject.pointer);
		_notifyParticleExpired_CParticle(this.nativeObject.pointer, particleParamValue);
	}
	native private void _notifyParticleExpired_CParticle_NoVirtual(long pNativeObject, long particle);
	protected void _notifyParticleExpired_NoVirtual(com.earthview.world.graphic.Particle particle)
	{
		long particleParamValue = (particle == null ? 0L : particle.nativeObject.pointer);
		_notifyParticleExpired_CParticle_NoVirtual(this.nativeObject.pointer, particleParamValue);
	}

	protected  void _notifyParticleMoved_ParticleList_callback(long currentParticles)
	{
		com.earthview.world.graphic.ParticleList currentParticlesParamValue = new com.earthview.world.graphic.ParticleList(CreatedWhenConstruct.CWC_NotToCreate);
		currentParticlesParamValue.setDelegate(true);
		currentParticlesParamValue.setInstancePointer(new InstancePointer(currentParticles));
		IClassFactory currentParticlesParamValueClassFactory = GlobalClassFactoryMap.get(currentParticlesParamValue.getCppInstanceTypeName());
		if (currentParticlesParamValueClassFactory != null)
		{
			currentParticlesParamValue.setDelegate(true);
			currentParticlesParamValue = (com.earthview.world.graphic.ParticleList)currentParticlesParamValueClassFactory.create();
			currentParticlesParamValue.setDelegate(true);
			currentParticlesParamValue.setInstancePointer(new InstancePointer(currentParticles));
		}
		_notifyParticleMoved(currentParticlesParamValue);
	}

	native private void _notifyParticleMoved_ParticleList(long pNativeObject, long currentParticles);
	/**
	 * 当粒子移动时通知
	 * @param currentParticles 当前粒子
	 */
	public void _notifyParticleMoved(com.earthview.world.graphic.ParticleList currentParticles)
	{
		long currentParticlesParamValue = currentParticles.nativeObject.pointer;
		_notifyParticleMoved_ParticleList(this.nativeObject.pointer, currentParticlesParamValue);
	}
	native private void _notifyParticleMoved_ParticleList_NoVirtual(long pNativeObject, long currentParticles);
	protected void _notifyParticleMoved_NoVirtual(com.earthview.world.graphic.ParticleList currentParticles)
	{
		long currentParticlesParamValue = currentParticles.nativeObject.pointer;
		_notifyParticleMoved_ParticleList_NoVirtual(this.nativeObject.pointer, currentParticlesParamValue);
	}

	protected  void _notifyParticleCleared_ParticleList_callback(long currentParticles)
	{
		com.earthview.world.graphic.ParticleList currentParticlesParamValue = new com.earthview.world.graphic.ParticleList(CreatedWhenConstruct.CWC_NotToCreate);
		currentParticlesParamValue.setDelegate(true);
		currentParticlesParamValue.setInstancePointer(new InstancePointer(currentParticles));
		IClassFactory currentParticlesParamValueClassFactory = GlobalClassFactoryMap.get(currentParticlesParamValue.getCppInstanceTypeName());
		if (currentParticlesParamValueClassFactory != null)
		{
			currentParticlesParamValue.setDelegate(true);
			currentParticlesParamValue = (com.earthview.world.graphic.ParticleList)currentParticlesParamValueClassFactory.create();
			currentParticlesParamValue.setDelegate(true);
			currentParticlesParamValue.setInstancePointer(new InstancePointer(currentParticles));
		}
		_notifyParticleCleared(currentParticlesParamValue);
	}

	native private void _notifyParticleCleared_ParticleList(long pNativeObject, long currentParticles);
	/**
	 * 当粒子清空时通知
	 * @param currentParticles 当前粒子
	 */
	public void _notifyParticleCleared(com.earthview.world.graphic.ParticleList currentParticles)
	{
		long currentParticlesParamValue = currentParticles.nativeObject.pointer;
		_notifyParticleCleared_ParticleList(this.nativeObject.pointer, currentParticlesParamValue);
	}
	native private void _notifyParticleCleared_ParticleList_NoVirtual(long pNativeObject, long currentParticles);
	protected void _notifyParticleCleared_NoVirtual(com.earthview.world.graphic.ParticleList currentParticles)
	{
		long currentParticlesParamValue = currentParticles.nativeObject.pointer;
		_notifyParticleCleared_ParticleList_NoVirtual(this.nativeObject.pointer, currentParticlesParamValue);
	}

	protected  long _createVisualData_void_callback()
	{
		com.earthview.world.graphic.ParticleVisualData returnValue = _createVisualData();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _createVisualData_void(long pNativeObject);
	/**
	 * 创建一个新的EarthView::World::Graphic::CParticleVisualData实例挂接粒子
	 * @param  
	 */
	public com.earthview.world.graphic.ParticleVisualData _createVisualData()
	{
		long returnValue = _createVisualData_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ParticleVisualData __returnValue = new com.earthview.world.graphic.ParticleVisualData(CreatedWhenConstruct.CWC_NotToCreate, "CParticleVisualData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleVisualData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticleVisualData");
		}
		return __returnValue;
	}
	native private long _createVisualData_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ParticleVisualData _createVisualData_NoVirtual()
	{
		long returnValue = _createVisualData_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ParticleVisualData __returnValue = new com.earthview.world.graphic.ParticleVisualData(CreatedWhenConstruct.CWC_NotToCreate, "CParticleVisualData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ParticleVisualData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticleVisualData");
		}
		return __returnValue;
	}

	protected  void _destroyVisualData_CParticleVisualData_callback(long vis)
	{
		com.earthview.world.graphic.ParticleVisualData visParamValue = (vis == 0L ? null : new com.earthview.world.graphic.ParticleVisualData(CreatedWhenConstruct.CWC_NotToCreate));
		if(visParamValue != null)
		{
		visParamValue.setDelegate(true);
		visParamValue.setInstancePointer(new InstancePointer(vis));
		IClassFactory visParamValueClassFactory = GlobalClassFactoryMap.get(visParamValue.getCppInstanceTypeName());
		if (visParamValueClassFactory != null)
		{
			visParamValue.setDelegate(true);
			visParamValue = (com.earthview.world.graphic.ParticleVisualData)visParamValueClassFactory.create();
			visParamValue.setDelegate(true);
			visParamValue.setInstancePointer(new InstancePointer(vis));
		}
		}
		_destroyVisualData(visParamValue);
	}

	native private void _destroyVisualData_CParticleVisualData(long pNativeObject, long vis);
	/**
	 * 销毁EarthView::World::Graphic::CParticleVisualData实例
	 * @param  
	 */
	public void _destroyVisualData(com.earthview.world.graphic.ParticleVisualData vis)
	{
		long visParamValue = (vis == null ? 0L : vis.nativeObject.pointer);
		_destroyVisualData_CParticleVisualData(this.nativeObject.pointer, visParamValue);
	}
	native private void _destroyVisualData_CParticleVisualData_NoVirtual(long pNativeObject, long vis);
	protected void _destroyVisualData_NoVirtual(com.earthview.world.graphic.ParticleVisualData vis)
	{
		long visParamValue = (vis == null ? 0L : vis.nativeObject.pointer);
		_destroyVisualData_CParticleVisualData_NoVirtual(this.nativeObject.pointer, visParamValue);
	}

	protected  void setRenderQueueGroup_ev_uint8_callback(short queueID)
	{
		short queueIDParamValue = queueID;
		setRenderQueueGroup(queueIDParamValue);
	}

	native private void setRenderQueueGroup_ev_uint8(long pNativeObject, short queueID);
	/**
	 * 设置渲染器定位目标的渲染队列组
	 * @param  
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

	protected  void setKeepParticlesInLocalSpace_ev_bool_callback(boolean keepLocal)
	{
		boolean keepLocalParamValue = keepLocal;
		setKeepParticlesInLocalSpace(keepLocalParamValue);
	}

	native private void setKeepParticlesInLocalSpace_ev_bool(long pNativeObject, boolean keepLocal);
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

	protected  int _getSortMode_void_callback()
	{
		com.earthview.world.graphic.SortMode returnValue = _getSortMode();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int _getSortMode_void(long pNativeObject);
	/**
	 * 从渲染器中获得粒子分类模型
	 * @param  
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

	protected  void visitRenderables_CVisitor_ev_bool_callback(long visitor, boolean debugRenderables)
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
		visitRenderables(visitorParamValue, debugRenderablesParamValue);
	}

	native private void visitRenderables_CVisitor_ev_bool(long pNativeObject, long visitor, boolean debugRenderables);
	/**
	 * 该方法允许渲染器连接可渲染对象
	 * @param visitor 
	 * @param debugRenderables 
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

	protected  void visitRenderables_CVisitor_callback(long visitor)
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
		visitRenderables(visitorParamValue);
	}

	native private void visitRenderables_CVisitor(long pNativeObject, long visitor);
	/**
	 * 该方法允许渲染器连接可渲染对象
	 * @param visitor 
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

	public ParticleSystemRenderer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ParticleSystemRenderer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static ParticleSystemRenderer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ParticleSystemRenderer obj = null;
 		if(baseObj instanceof ParticleSystemRenderer)
		{
			obj = (ParticleSystemRenderer)baseObj;
		} else {
			obj = new ParticleSystemRenderer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CParticleSystemRenderer");
			obj.increaseCast();
		}

		return obj;
	}
}
