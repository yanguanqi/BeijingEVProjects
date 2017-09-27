package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 自动参数数据源类此类是为了给GPU提供一些参数。
 */
public class AutoParamDataSource extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CAutoParamDataSource", new AutoParamDataSourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCAutoParamDataSourceProxy", new AutoParamDataSourceClassFactory());
	}

	/**
	 * 构造函数定义一个节点名称
	 * @param  
	 */
	public AutoParamDataSource() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCAutoParamDataSourceProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.AutoParamDataSource".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void setCurrentRenderable_CRenderable_callback(long ref_rend)
	{
		com.earthview.world.graphic.Renderable ref_rendParamValue = (ref_rend == 0L ? null : new com.earthview.world.graphic.Renderable(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_rendParamValue != null)
		{
		ref_rendParamValue.setDelegate(true);
		ref_rendParamValue.setInstancePointer(new InstancePointer(ref_rend));
		IClassFactory ref_rendParamValueClassFactory = GlobalClassFactoryMap.get(ref_rendParamValue.getCppInstanceTypeName());
		if (ref_rendParamValueClassFactory != null)
		{
			ref_rendParamValue.setDelegate(true);
			ref_rendParamValue = (com.earthview.world.graphic.Renderable)ref_rendParamValueClassFactory.create();
			ref_rendParamValue.setDelegate(true);
			ref_rendParamValue.setInstancePointer(new InstancePointer(ref_rend));
		}
		}
		setCurrentRenderable(ref_rendParamValue);
	}

	native private void setCurrentRenderable_CRenderable(long pNativeObject, long ref_rend);
	/**
	 * 设置当前渲染对象
	 * @param rend 渲染
	 */
	public void setCurrentRenderable(com.earthview.world.graphic.Renderable ref_rend)
	{
		long ref_rendParamValue = (ref_rend == null ? 0L : ref_rend.nativeObject.pointer);
		setCurrentRenderable_CRenderable(this.nativeObject.pointer, ref_rendParamValue);
	}
	native private void setCurrentRenderable_CRenderable_NoVirtual(long pNativeObject, long ref_rend);
	protected void setCurrentRenderable_NoVirtual(com.earthview.world.graphic.Renderable ref_rend)
	{
		long ref_rendParamValue = (ref_rend == null ? 0L : ref_rend.nativeObject.pointer);
		setCurrentRenderable_CRenderable_NoVirtual(this.nativeObject.pointer, ref_rendParamValue);
	}

	protected  void setWorldMatrices_CMatrix4_ev_size_t_callback(long ref_m, long count)
	{
		com.earthview.world.spatial.math.Matrix4 ref_mParamValue = (ref_m == 0L ? null : new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_mParamValue != null)
		{
		ref_mParamValue.setDelegate(true);
		ref_mParamValue.setInstancePointer(new InstancePointer(ref_m));
		IClassFactory ref_mParamValueClassFactory = GlobalClassFactoryMap.get(ref_mParamValue.getCppInstanceTypeName());
		if (ref_mParamValueClassFactory != null)
		{
			ref_mParamValue.setDelegate(true);
			ref_mParamValue = (com.earthview.world.spatial.math.Matrix4)ref_mParamValueClassFactory.create();
			ref_mParamValue.setDelegate(true);
			ref_mParamValue.setInstancePointer(new InstancePointer(ref_m));
		}
		}
		long countParamValue = count;
		setWorldMatrices(ref_mParamValue, countParamValue);
	}

	native private void setWorldMatrices_CMatrix4_ev_size_t(long pNativeObject, long ref_m, long count);
	/**
	 * 设置世界矩阵
	 * @param m 
	 * @param count 
	 */
	public void setWorldMatrices(com.earthview.world.spatial.math.Matrix4 ref_m, long count)
	{
		long ref_mParamValue = (ref_m == null ? 0L : ref_m.nativeObject.pointer);
		long countParamValue = count;
		setWorldMatrices_CMatrix4_ev_size_t(this.nativeObject.pointer, ref_mParamValue, countParamValue);
	}
	native private void setWorldMatrices_CMatrix4_ev_size_t_NoVirtual(long pNativeObject, long ref_m, long count);
	protected void setWorldMatrices_NoVirtual(com.earthview.world.spatial.math.Matrix4 ref_m, long count)
	{
		long ref_mParamValue = (ref_m == null ? 0L : ref_m.nativeObject.pointer);
		long countParamValue = count;
		setWorldMatrices_CMatrix4_ev_size_t_NoVirtual(this.nativeObject.pointer, ref_mParamValue, countParamValue);
	}

	protected  void setCurrentCamera_CCamera_ev_bool_callback(long ref_cam, boolean useCameraRelative)
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
		boolean useCameraRelativeParamValue = useCameraRelative;
		setCurrentCamera(ref_camParamValue, useCameraRelativeParamValue);
	}

	native private void setCurrentCamera_CCamera_ev_bool(long pNativeObject, long ref_cam, boolean useCameraRelative);
	/**
	 * 设置当前摄像机
	 * @param cam 
	 * @param useCameraRelative 
	 */
	public void setCurrentCamera(com.earthview.world.graphic.Camera ref_cam, boolean useCameraRelative)
	{
		long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
		boolean useCameraRelativeParamValue = useCameraRelative;
		setCurrentCamera_CCamera_ev_bool(this.nativeObject.pointer, ref_camParamValue, useCameraRelativeParamValue);
	}
	native private void setCurrentCamera_CCamera_ev_bool_NoVirtual(long pNativeObject, long ref_cam, boolean useCameraRelative);
	protected void setCurrentCamera_NoVirtual(com.earthview.world.graphic.Camera ref_cam, boolean useCameraRelative)
	{
		long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
		boolean useCameraRelativeParamValue = useCameraRelative;
		setCurrentCamera_CCamera_ev_bool_NoVirtual(this.nativeObject.pointer, ref_camParamValue, useCameraRelativeParamValue);
	}

	protected  void setCurrentLightList_LightList_callback(long ref_ll)
	{
		com.earthview.world.graphic.LightList ref_llParamValue = (ref_ll == 0L ? null : new com.earthview.world.graphic.LightList(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_llParamValue != null)
		{
		ref_llParamValue.setDelegate(true);
		ref_llParamValue.setInstancePointer(new InstancePointer(ref_ll));
		IClassFactory ref_llParamValueClassFactory = GlobalClassFactoryMap.get(ref_llParamValue.getCppInstanceTypeName());
		if (ref_llParamValueClassFactory != null)
		{
			ref_llParamValue.setDelegate(true);
			ref_llParamValue = (com.earthview.world.graphic.LightList)ref_llParamValueClassFactory.create();
			ref_llParamValue.setDelegate(true);
			ref_llParamValue.setInstancePointer(new InstancePointer(ref_ll));
		}
		}
		setCurrentLightList(ref_llParamValue);
	}

	native private void setCurrentLightList_LightList(long pNativeObject, long ref_ll);
	/**
	 * 设置当前光线列表
	 * @param ll 
	 */
	public void setCurrentLightList(com.earthview.world.graphic.LightList ref_ll)
	{
		long ref_llParamValue = (ref_ll == null ? 0L : ref_ll.nativeObject.pointer);
		setCurrentLightList_LightList(this.nativeObject.pointer, ref_llParamValue);
	}
	native private void setCurrentLightList_LightList_NoVirtual(long pNativeObject, long ref_ll);
	protected void setCurrentLightList_NoVirtual(com.earthview.world.graphic.LightList ref_ll)
	{
		long ref_llParamValue = (ref_ll == null ? 0L : ref_ll.nativeObject.pointer);
		setCurrentLightList_LightList_NoVirtual(this.nativeObject.pointer, ref_llParamValue);
	}

	protected  void setTextureProjector_CFrustum_ev_size_t_callback(long ref_frust, long index)
	{
		com.earthview.world.graphic.Frustum ref_frustParamValue = (ref_frust == 0L ? null : new com.earthview.world.graphic.Frustum(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_frustParamValue != null)
		{
		ref_frustParamValue.setDelegate(true);
		ref_frustParamValue.setInstancePointer(new InstancePointer(ref_frust));
		IClassFactory ref_frustParamValueClassFactory = GlobalClassFactoryMap.get(ref_frustParamValue.getCppInstanceTypeName());
		if (ref_frustParamValueClassFactory != null)
		{
			ref_frustParamValue.setDelegate(true);
			ref_frustParamValue = (com.earthview.world.graphic.Frustum)ref_frustParamValueClassFactory.create();
			ref_frustParamValue.setDelegate(true);
			ref_frustParamValue.setInstancePointer(new InstancePointer(ref_frust));
		}
		}
		long indexParamValue = index;
		setTextureProjector(ref_frustParamValue, indexParamValue);
	}

	native private void setTextureProjector_CFrustum_ev_size_t(long pNativeObject, long ref_frust, long index);
	/**
	 * 设置当前对象投影对象纹理为方便索引
	 * @param frust 
	 * @param index 
	 */
	public void setTextureProjector(com.earthview.world.graphic.Frustum ref_frust, long index)
	{
		long ref_frustParamValue = (ref_frust == null ? 0L : ref_frust.nativeObject.pointer);
		long indexParamValue = index;
		setTextureProjector_CFrustum_ev_size_t(this.nativeObject.pointer, ref_frustParamValue, indexParamValue);
	}
	native private void setTextureProjector_CFrustum_ev_size_t_NoVirtual(long pNativeObject, long ref_frust, long index);
	protected void setTextureProjector_NoVirtual(com.earthview.world.graphic.Frustum ref_frust, long index)
	{
		long ref_frustParamValue = (ref_frust == null ? 0L : ref_frust.nativeObject.pointer);
		long indexParamValue = index;
		setTextureProjector_CFrustum_ev_size_t_NoVirtual(this.nativeObject.pointer, ref_frustParamValue, indexParamValue);
	}

	protected  void setCurrentRenderTarget_CRenderTarget_callback(long ref_target)
	{
		com.earthview.world.graphic.RenderTarget ref_targetParamValue = (ref_target == 0L ? null : new com.earthview.world.graphic.RenderTarget(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_targetParamValue != null)
		{
		ref_targetParamValue.setDelegate(true);
		ref_targetParamValue.setInstancePointer(new InstancePointer(ref_target));
		IClassFactory ref_targetParamValueClassFactory = GlobalClassFactoryMap.get(ref_targetParamValue.getCppInstanceTypeName());
		if (ref_targetParamValueClassFactory != null)
		{
			ref_targetParamValue.setDelegate(true);
			ref_targetParamValue = (com.earthview.world.graphic.RenderTarget)ref_targetParamValueClassFactory.create();
			ref_targetParamValue.setDelegate(true);
			ref_targetParamValue.setInstancePointer(new InstancePointer(ref_target));
		}
		}
		setCurrentRenderTarget(ref_targetParamValue);
	}

	native private void setCurrentRenderTarget_CRenderTarget(long pNativeObject, long ref_target);
	/**
	 * 设置当前渲染目标
	 * @param target 
	 */
	public void setCurrentRenderTarget(com.earthview.world.graphic.RenderTarget ref_target)
	{
		long ref_targetParamValue = (ref_target == null ? 0L : ref_target.nativeObject.pointer);
		setCurrentRenderTarget_CRenderTarget(this.nativeObject.pointer, ref_targetParamValue);
	}
	native private void setCurrentRenderTarget_CRenderTarget_NoVirtual(long pNativeObject, long ref_target);
	protected void setCurrentRenderTarget_NoVirtual(com.earthview.world.graphic.RenderTarget ref_target)
	{
		long ref_targetParamValue = (ref_target == null ? 0L : ref_target.nativeObject.pointer);
		setCurrentRenderTarget_CRenderTarget_NoVirtual(this.nativeObject.pointer, ref_targetParamValue);
	}

	protected  void setCurrentViewport_CViewport_callback(long ref_viewport)
	{
		com.earthview.world.graphic.Viewport ref_viewportParamValue = (ref_viewport == 0L ? null : new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_viewportParamValue != null)
		{
		ref_viewportParamValue.setDelegate(true);
		ref_viewportParamValue.setInstancePointer(new InstancePointer(ref_viewport));
		IClassFactory ref_viewportParamValueClassFactory = GlobalClassFactoryMap.get(ref_viewportParamValue.getCppInstanceTypeName());
		if (ref_viewportParamValueClassFactory != null)
		{
			ref_viewportParamValue.setDelegate(true);
			ref_viewportParamValue = (com.earthview.world.graphic.Viewport)ref_viewportParamValueClassFactory.create();
			ref_viewportParamValue.setDelegate(true);
			ref_viewportParamValue.setInstancePointer(new InstancePointer(ref_viewport));
		}
		}
		setCurrentViewport(ref_viewportParamValue);
	}

	native private void setCurrentViewport_CViewport(long pNativeObject, long ref_viewport);
	/**
	 * 设置当前视口
	 * @param viewport 视口
	 */
	public void setCurrentViewport(com.earthview.world.graphic.Viewport ref_viewport)
	{
		long ref_viewportParamValue = (ref_viewport == null ? 0L : ref_viewport.nativeObject.pointer);
		setCurrentViewport_CViewport(this.nativeObject.pointer, ref_viewportParamValue);
	}
	native private void setCurrentViewport_CViewport_NoVirtual(long pNativeObject, long ref_viewport);
	protected void setCurrentViewport_NoVirtual(com.earthview.world.graphic.Viewport ref_viewport)
	{
		long ref_viewportParamValue = (ref_viewport == null ? 0L : ref_viewport.nativeObject.pointer);
		setCurrentViewport_CViewport_NoVirtual(this.nativeObject.pointer, ref_viewportParamValue);
	}

	protected  void setShadowDirLightExtrusionDistance_Real_callback(double dist)
	{
		double distParamValue = dist;
		setShadowDirLightExtrusionDistance(distParamValue);
	}

	native private void setShadowDirLightExtrusionDistance_Real(long pNativeObject, double dist);
	/**
	 * 设置方向光产生阴影的延伸距离
	 * @param dist 
	 */
	public void setShadowDirLightExtrusionDistance(double dist)
	{
		double distParamValue = dist;
		setShadowDirLightExtrusionDistance_Real(this.nativeObject.pointer, distParamValue);
	}
	native private void setShadowDirLightExtrusionDistance_Real_NoVirtual(long pNativeObject, double dist);
	protected void setShadowDirLightExtrusionDistance_NoVirtual(double dist)
	{
		double distParamValue = dist;
		setShadowDirLightExtrusionDistance_Real_NoVirtual(this.nativeObject.pointer, distParamValue);
	}

	protected  void setMainCamBoundsInfo_VisibleObjectsBoundsInfo_callback(long ref_info)
	{
		com.earthview.world.graphic.VisibleObjectsBoundsInfo ref_infoParamValue = (ref_info == 0L ? null : new com.earthview.world.graphic.VisibleObjectsBoundsInfo(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_infoParamValue != null)
		{
		ref_infoParamValue.setDelegate(true);
		ref_infoParamValue.setInstancePointer(new InstancePointer(ref_info));
		IClassFactory ref_infoParamValueClassFactory = GlobalClassFactoryMap.get(ref_infoParamValue.getCppInstanceTypeName());
		if (ref_infoParamValueClassFactory != null)
		{
			ref_infoParamValue.setDelegate(true);
			ref_infoParamValue = (com.earthview.world.graphic.VisibleObjectsBoundsInfo)ref_infoParamValueClassFactory.create();
			ref_infoParamValue.setDelegate(true);
			ref_infoParamValue.setInstancePointer(new InstancePointer(ref_info));
		}
		}
		setMainCamBoundsInfo(ref_infoParamValue);
	}

	native private void setMainCamBoundsInfo_VisibleObjectsBoundsInfo(long pNativeObject, long ref_info);
	/**
	 * 设置主摄像机的场景边界信息
	 * @param info 可见对象信息
	 */
	public void setMainCamBoundsInfo(com.earthview.world.graphic.VisibleObjectsBoundsInfo ref_info)
	{
		long ref_infoParamValue = (ref_info == null ? 0L : ref_info.nativeObject.pointer);
		setMainCamBoundsInfo_VisibleObjectsBoundsInfo(this.nativeObject.pointer, ref_infoParamValue);
	}
	native private void setMainCamBoundsInfo_VisibleObjectsBoundsInfo_NoVirtual(long pNativeObject, long ref_info);
	protected void setMainCamBoundsInfo_NoVirtual(com.earthview.world.graphic.VisibleObjectsBoundsInfo ref_info)
	{
		long ref_infoParamValue = (ref_info == null ? 0L : ref_info.nativeObject.pointer);
		setMainCamBoundsInfo_VisibleObjectsBoundsInfo_NoVirtual(this.nativeObject.pointer, ref_infoParamValue);
	}

	protected  void setCurrentSceneManager_CSceneManager_callback(long ref_sm)
	{
		com.earthview.world.graphic.SceneManager ref_smParamValue = (ref_sm == 0L ? null : new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_smParamValue != null)
		{
		ref_smParamValue.setDelegate(true);
		ref_smParamValue.setInstancePointer(new InstancePointer(ref_sm));
		IClassFactory ref_smParamValueClassFactory = GlobalClassFactoryMap.get(ref_smParamValue.getCppInstanceTypeName());
		if (ref_smParamValueClassFactory != null)
		{
			ref_smParamValue.setDelegate(true);
			ref_smParamValue = (com.earthview.world.graphic.SceneManager)ref_smParamValueClassFactory.create();
			ref_smParamValue.setDelegate(true);
			ref_smParamValue.setInstancePointer(new InstancePointer(ref_sm));
		}
		}
		setCurrentSceneManager(ref_smParamValue);
	}

	native private void setCurrentSceneManager_CSceneManager(long pNativeObject, long ref_sm);
	/**
	 * 设置当前场景管理器
	 * @param sm 场景管理器
	 */
	public void setCurrentSceneManager(com.earthview.world.graphic.SceneManager ref_sm)
	{
		long ref_smParamValue = (ref_sm == null ? 0L : ref_sm.nativeObject.pointer);
		setCurrentSceneManager_CSceneManager(this.nativeObject.pointer, ref_smParamValue);
	}
	native private void setCurrentSceneManager_CSceneManager_NoVirtual(long pNativeObject, long ref_sm);
	protected void setCurrentSceneManager_NoVirtual(com.earthview.world.graphic.SceneManager ref_sm)
	{
		long ref_smParamValue = (ref_sm == null ? 0L : ref_sm.nativeObject.pointer);
		setCurrentSceneManager_CSceneManager_NoVirtual(this.nativeObject.pointer, ref_smParamValue);
	}

	protected  void setCurrentPass_CPass_callback(long ref_pass)
	{
		com.earthview.world.graphic.Pass ref_passParamValue = (ref_pass == 0L ? null : new com.earthview.world.graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_passParamValue != null)
		{
		ref_passParamValue.setDelegate(true);
		ref_passParamValue.setInstancePointer(new InstancePointer(ref_pass));
		IClassFactory ref_passParamValueClassFactory = GlobalClassFactoryMap.get(ref_passParamValue.getCppInstanceTypeName());
		if (ref_passParamValueClassFactory != null)
		{
			ref_passParamValue.setDelegate(true);
			ref_passParamValue = (com.earthview.world.graphic.Pass)ref_passParamValueClassFactory.create();
			ref_passParamValue.setDelegate(true);
			ref_passParamValue.setInstancePointer(new InstancePointer(ref_pass));
		}
		}
		setCurrentPass(ref_passParamValue);
	}

	native private void setCurrentPass_CPass(long pNativeObject, long ref_pass);
	/**
	 * 设置当前渲染通路
	 * @param pass 渲染通路
	 */
	public void setCurrentPass(com.earthview.world.graphic.Pass ref_pass)
	{
		long ref_passParamValue = (ref_pass == null ? 0L : ref_pass.nativeObject.pointer);
		setCurrentPass_CPass(this.nativeObject.pointer, ref_passParamValue);
	}
	native private void setCurrentPass_CPass_NoVirtual(long pNativeObject, long ref_pass);
	protected void setCurrentPass_NoVirtual(com.earthview.world.graphic.Pass ref_pass)
	{
		long ref_passParamValue = (ref_pass == null ? 0L : ref_pass.nativeObject.pointer);
		setCurrentPass_CPass_NoVirtual(this.nativeObject.pointer, ref_passParamValue);
	}

	protected  long getWorldMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getWorldMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getWorldMatrix_void(long pNativeObject);
	/**
	 * 获取世界变换矩阵
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 getWorldMatrix()
	{
		long returnValue = getWorldMatrix_void(this.nativeObject.pointer);
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
	native private long getWorldMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getWorldMatrix_NoVirtual()
	{
		long returnValue = getWorldMatrix_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getWorldMatrixArray_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getWorldMatrixArray();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getWorldMatrixArray_void(long pNativeObject);
	/**
	 * 获取世界变换矩阵数组
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 getWorldMatrixArray()
	{
		long returnValue = getWorldMatrixArray_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
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
	native private long getWorldMatrixArray_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getWorldMatrixArray_NoVirtual()
	{
		long returnValue = getWorldMatrixArray_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
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

	protected  long getWorldMatrixCount_void_callback()
	{
		long returnValue = getWorldMatrixCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getWorldMatrixCount_void(long pNativeObject);
	/**
	 * 获取世界变换矩阵数组的长度
	 * @param  
	 */
	public long getWorldMatrixCount()
	{
		long returnValue = getWorldMatrixCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getWorldMatrixCount_void_NoVirtual(long pNativeObject);
	protected long getWorldMatrixCount_NoVirtual()
	{
		long returnValue = getWorldMatrixCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getViewMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getViewMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getViewMatrix_void(long pNativeObject);
	/**
	 * 获取观察矩阵
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

	protected  long getViewProjectionMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getViewProjectionMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getViewProjectionMatrix_void(long pNativeObject);
	/**
	 * 获取观察、投影矩阵(二者相乘的结果)
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 getViewProjectionMatrix()
	{
		long returnValue = getViewProjectionMatrix_void(this.nativeObject.pointer);
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
	native private long getViewProjectionMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getViewProjectionMatrix_NoVirtual()
	{
		long returnValue = getViewProjectionMatrix_void_NoVirtual(this.nativeObject.pointer);
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
	 * 获取投影矩阵
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

	protected  long getWorldViewProjMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getWorldViewProjMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getWorldViewProjMatrix_void(long pNativeObject);
	/**
	 * 获取世界、观察、投影矩阵(三者相乘的结果)
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 getWorldViewProjMatrix()
	{
		long returnValue = getWorldViewProjMatrix_void(this.nativeObject.pointer);
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
	native private long getWorldViewProjMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getWorldViewProjMatrix_NoVirtual()
	{
		long returnValue = getWorldViewProjMatrix_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getWorldViewMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getWorldViewMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getWorldViewMatrix_void(long pNativeObject);
	/**
	 * 获取世界投影矩阵
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 getWorldViewMatrix()
	{
		long returnValue = getWorldViewMatrix_void(this.nativeObject.pointer);
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
	native private long getWorldViewMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getWorldViewMatrix_NoVirtual()
	{
		long returnValue = getWorldViewMatrix_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getInverseWorldMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getInverseWorldMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getInverseWorldMatrix_void(long pNativeObject);
	/**
	 * 世界矩阵的逆矩阵
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 getInverseWorldMatrix()
	{
		long returnValue = getInverseWorldMatrix_void(this.nativeObject.pointer);
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
	native private long getInverseWorldMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getInverseWorldMatrix_NoVirtual()
	{
		long returnValue = getInverseWorldMatrix_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getInverseWorldViewMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getInverseWorldViewMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getInverseWorldViewMatrix_void(long pNativeObject);
	/**
	 * 世界世界、观察矩阵的逆矩阵
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 getInverseWorldViewMatrix()
	{
		long returnValue = getInverseWorldViewMatrix_void(this.nativeObject.pointer);
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
	native private long getInverseWorldViewMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getInverseWorldViewMatrix_NoVirtual()
	{
		long returnValue = getInverseWorldViewMatrix_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getInverseViewMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getInverseViewMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getInverseViewMatrix_void(long pNativeObject);
	/**
	 * 获取观察矩阵的逆矩阵
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 getInverseViewMatrix()
	{
		long returnValue = getInverseViewMatrix_void(this.nativeObject.pointer);
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
	native private long getInverseViewMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getInverseViewMatrix_NoVirtual()
	{
		long returnValue = getInverseViewMatrix_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getInverseTransposeWorldMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getInverseTransposeWorldMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getInverseTransposeWorldMatrix_void(long pNativeObject);
	/**
	 * 世界变换矩阵的逆转置矩阵
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 getInverseTransposeWorldMatrix()
	{
		long returnValue = getInverseTransposeWorldMatrix_void(this.nativeObject.pointer);
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
	native private long getInverseTransposeWorldMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getInverseTransposeWorldMatrix_NoVirtual()
	{
		long returnValue = getInverseTransposeWorldMatrix_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getInverseTransposeWorldViewMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getInverseTransposeWorldViewMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getInverseTransposeWorldViewMatrix_void(long pNativeObject);
	/**
	 * 世界变换、观察矩阵的逆转置矩阵
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 getInverseTransposeWorldViewMatrix()
	{
		long returnValue = getInverseTransposeWorldViewMatrix_void(this.nativeObject.pointer);
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
	native private long getInverseTransposeWorldViewMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getInverseTransposeWorldViewMatrix_NoVirtual()
	{
		long returnValue = getInverseTransposeWorldViewMatrix_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getCameraPosition_void_callback()
	{
		com.earthview.world.spatial.math.Vector4 returnValue = getCameraPosition();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCameraPosition_void(long pNativeObject);
	/**
	 * 获取摄像机坐标
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector4 getCameraPosition()
	{
		long returnValue = getCameraPosition_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private long getCameraPosition_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector4 getCameraPosition_NoVirtual()
	{
		long returnValue = getCameraPosition_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}

	protected  long getCameraRelativePosition_void_callback()
	{
		com.earthview.world.spatial.math.Vector4 returnValue = getCameraRelativePosition();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCameraRelativePosition_void(long pNativeObject);
	/**
	 * 获取摄像机相对坐标
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector4 getCameraRelativePosition()
	{
		long returnValue = getCameraRelativePosition_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private long getCameraRelativePosition_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector4 getCameraRelativePosition_NoVirtual()
	{
		long returnValue = getCameraRelativePosition_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}

	protected  long getCameraPositionObjectSpace_void_callback()
	{
		com.earthview.world.spatial.math.Vector4 returnValue = getCameraPositionObjectSpace();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCameraPositionObjectSpace_void(long pNativeObject);
	/**
	 * 获取对象空间中的摄像机位置坐标
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector4 getCameraPositionObjectSpace()
	{
		long returnValue = getCameraPositionObjectSpace_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private long getCameraPositionObjectSpace_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector4 getCameraPositionObjectSpace_NoVirtual()
	{
		long returnValue = getCameraPositionObjectSpace_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}

	protected  long getLodCameraPosition_void_callback()
	{
		com.earthview.world.spatial.math.Vector4 returnValue = getLodCameraPosition();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLodCameraPosition_void(long pNativeObject);
	/**
	 * 获取多细节层次摄像机位置坐标
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector4 getLodCameraPosition()
	{
		long returnValue = getLodCameraPosition_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private long getLodCameraPosition_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector4 getLodCameraPosition_NoVirtual()
	{
		long returnValue = getLodCameraPosition_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}

	protected  long getLodCameraPositionObjectSpace_void_callback()
	{
		com.earthview.world.spatial.math.Vector4 returnValue = getLodCameraPositionObjectSpace();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLodCameraPositionObjectSpace_void(long pNativeObject);
	/**
	 * 获取对象空间中多细节层次摄像机位置坐标
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector4 getLodCameraPositionObjectSpace()
	{
		long returnValue = getLodCameraPositionObjectSpace_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private long getLodCameraPositionObjectSpace_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector4 getLodCameraPositionObjectSpace_NoVirtual()
	{
		long returnValue = getLodCameraPositionObjectSpace_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}

	protected  boolean hasLightList_void_callback()
	{
		boolean returnValue = hasLightList();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean hasLightList_void(long pNativeObject);
	/**
	 * 是否有光源列表
	 * @param  
	 */
	public boolean hasLightList()
	{
		boolean returnValue = hasLightList_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasLightList_void_NoVirtual(long pNativeObject);
	protected boolean hasLightList_NoVirtual()
	{
		boolean returnValue = hasLightList_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  float getLightNumber_ev_size_t_callback(long index)
	{
		long indexParamValue = index;
		float returnValue = getLightNumber(indexParamValue);
		float __returnValue = returnValue;
		return __returnValue;
	}

	native private float getLightNumber_ev_size_t(long pNativeObject, long index);
	/**
	 * 获得光源的序号
	 * @param index 检索
	 */
	public float getLightNumber(long index)
	{
		long indexParamValue = index;
		float returnValue = getLightNumber_ev_size_t(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private float getLightNumber_ev_size_t_NoVirtual(long pNativeObject, long index);
	protected float getLightNumber_NoVirtual(long index)
	{
		long indexParamValue = index;
		float returnValue = getLightNumber_ev_size_t_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  float getLightCount_void_callback()
	{
		float returnValue = getLightCount();
		float __returnValue = returnValue;
		return __returnValue;
	}

	native private float getLightCount_void(long pNativeObject);
	/**
	 * 获取光源数量
	 * @param  
	 */
	public float getLightCount()
	{
		float returnValue = getLightCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getLightCount_void_NoVirtual(long pNativeObject);
	protected float getLightCount_NoVirtual()
	{
		float returnValue = getLightCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  float getLightingEnabled_void_callback()
	{
		float returnValue = getLightingEnabled();
		float __returnValue = returnValue;
		return __returnValue;
	}

	native private float getLightingEnabled_void(long pNativeObject);
	/**
	 * 获取光照是否启用
	 * @param  
	 */
	public float getLightingEnabled()
	{
		float returnValue = getLightingEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getLightingEnabled_void_NoVirtual(long pNativeObject);
	protected float getLightingEnabled_NoVirtual()
	{
		float returnValue = getLightingEnabled_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  float getLightCastsShadows_ev_size_t_callback(long index)
	{
		long indexParamValue = index;
		float returnValue = getLightCastsShadows(indexParamValue);
		float __returnValue = returnValue;
		return __returnValue;
	}

	native private float getLightCastsShadows_ev_size_t(long pNativeObject, long index);
	/**
	 * 询问指定光源是否投射阴影
	 * @param index 
	 */
	public float getLightCastsShadows(long index)
	{
		long indexParamValue = index;
		float returnValue = getLightCastsShadows_ev_size_t(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private float getLightCastsShadows_ev_size_t_NoVirtual(long pNativeObject, long index);
	protected float getLightCastsShadows_NoVirtual(long index)
	{
		long indexParamValue = index;
		float returnValue = getLightCastsShadows_ev_size_t_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  long getLightDiffuseColour_ev_size_t_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.graphic.ColourValue returnValue = getLightDiffuseColour(indexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLightDiffuseColour_ev_size_t(long pNativeObject, long index);
	/**
	 * 获取指定光源的漫反射颜色
	 * @param index 
	 */
	public com.earthview.world.graphic.ColourValue getLightDiffuseColour(long index)
	{
		long indexParamValue = index;
		long returnValue = getLightDiffuseColour_ev_size_t(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private long getLightDiffuseColour_ev_size_t_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.graphic.ColourValue getLightDiffuseColour_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getLightDiffuseColour_ev_size_t_NoVirtual(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}

	protected  long getLightSpecularColour_ev_size_t_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.graphic.ColourValue returnValue = getLightSpecularColour(indexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLightSpecularColour_ev_size_t(long pNativeObject, long index);
	/**
	 * 获取指定光源的镜面反射颜色
	 * @param index 
	 */
	public com.earthview.world.graphic.ColourValue getLightSpecularColour(long index)
	{
		long indexParamValue = index;
		long returnValue = getLightSpecularColour_ev_size_t(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private long getLightSpecularColour_ev_size_t_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.graphic.ColourValue getLightSpecularColour_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getLightSpecularColour_ev_size_t_NoVirtual(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}

	protected  long getLightDiffuseColourWithPower_ev_size_t_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.graphic.ColourValue returnValue = getLightDiffuseColourWithPower(indexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLightDiffuseColourWithPower_ev_size_t(long pNativeObject, long index);
	/**
	 * 获取指定光源的增强后的漫反射颜色
	 * @param index 
	 */
	public com.earthview.world.graphic.ColourValue getLightDiffuseColourWithPower(long index)
	{
		long indexParamValue = index;
		long returnValue = getLightDiffuseColourWithPower_ev_size_t(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getLightDiffuseColourWithPower_ev_size_t_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.graphic.ColourValue getLightDiffuseColourWithPower_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getLightDiffuseColourWithPower_ev_size_t_NoVirtual(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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

	protected  long getLightSpecularColourWithPower_ev_size_t_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.graphic.ColourValue returnValue = getLightSpecularColourWithPower(indexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLightSpecularColourWithPower_ev_size_t(long pNativeObject, long index);
	/**
	 * 获取指定光源的增强后的镜面反射颜色
	 * @param index 
	 */
	public com.earthview.world.graphic.ColourValue getLightSpecularColourWithPower(long index)
	{
		long indexParamValue = index;
		long returnValue = getLightSpecularColourWithPower_ev_size_t(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getLightSpecularColourWithPower_ev_size_t_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.graphic.ColourValue getLightSpecularColourWithPower_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getLightSpecularColourWithPower_ev_size_t_NoVirtual(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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

	protected  long getLightPosition_ev_size_t_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.math.Vector3 returnValue = getLightPosition(indexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLightPosition_ev_size_t(long pNativeObject, long index);
	/**
	 * 获取指定光源位置
	 * @param index 
	 */
	public com.earthview.world.spatial.math.Vector3 getLightPosition(long index)
	{
		long indexParamValue = index;
		long returnValue = getLightPosition_ev_size_t(this.nativeObject.pointer, indexParamValue);
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
	native private long getLightPosition_ev_size_t_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.math.Vector3 getLightPosition_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getLightPosition_ev_size_t_NoVirtual(this.nativeObject.pointer, indexParamValue);
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

	protected  long getLightAs4DVector_ev_size_t_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.math.Vector4 returnValue = getLightAs4DVector(indexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLightAs4DVector_ev_size_t(long pNativeObject, long index);
	/**
	 * 获取指定光源四维矢量
	 * @param index 
	 */
	public com.earthview.world.spatial.math.Vector4 getLightAs4DVector(long index)
	{
		long indexParamValue = index;
		long returnValue = getLightAs4DVector_ev_size_t(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private long getLightAs4DVector_ev_size_t_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.math.Vector4 getLightAs4DVector_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getLightAs4DVector_ev_size_t_NoVirtual(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}

	protected  long getLightDirection_ev_size_t_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.math.Vector3 returnValue = getLightDirection(indexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLightDirection_ev_size_t(long pNativeObject, long index);
	/**
	 * 获取指定光源方向
	 * @param index 
	 */
	public com.earthview.world.spatial.math.Vector3 getLightDirection(long index)
	{
		long indexParamValue = index;
		long returnValue = getLightDirection_ev_size_t(this.nativeObject.pointer, indexParamValue);
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
	native private long getLightDirection_ev_size_t_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.math.Vector3 getLightDirection_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getLightDirection_ev_size_t_NoVirtual(this.nativeObject.pointer, indexParamValue);
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

	protected  double getLightPowerScale_ev_size_t_callback(long index)
	{
		long indexParamValue = index;
		double returnValue = getLightPowerScale(indexParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getLightPowerScale_ev_size_t(long pNativeObject, long index);
	/**
	 * 获取指定光源强度
	 * @param index 
	 */
	public double getLightPowerScale(long index)
	{
		long indexParamValue = index;
		double returnValue = getLightPowerScale_ev_size_t(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private double getLightPowerScale_ev_size_t_NoVirtual(long pNativeObject, long index);
	protected double getLightPowerScale_NoVirtual(long index)
	{
		long indexParamValue = index;
		double returnValue = getLightPowerScale_ev_size_t_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  long getLightAttenuation_ev_size_t_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.math.Vector4 returnValue = getLightAttenuation(indexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLightAttenuation_ev_size_t(long pNativeObject, long index);
	/**
	 * 获取光源衰减度
	 * @param index 
	 */
	public com.earthview.world.spatial.math.Vector4 getLightAttenuation(long index)
	{
		long indexParamValue = index;
		long returnValue = getLightAttenuation_ev_size_t(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private long getLightAttenuation_ev_size_t_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.math.Vector4 getLightAttenuation_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getLightAttenuation_ev_size_t_NoVirtual(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}

	protected  long getSpotlightParams_ev_size_t_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.math.Vector4 returnValue = getSpotlightParams(indexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSpotlightParams_ev_size_t(long pNativeObject, long index);
	/**
	 * 获取聚光灯光源参数
	 * @param index 
	 */
	public com.earthview.world.spatial.math.Vector4 getSpotlightParams(long index)
	{
		long indexParamValue = index;
		long returnValue = getSpotlightParams_ev_size_t(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private long getSpotlightParams_ev_size_t_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.math.Vector4 getSpotlightParams_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getSpotlightParams_ev_size_t_NoVirtual(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}

	protected  void setAmbientLightColour_CColourValue_callback(long ambient)
	{
		com.earthview.world.graphic.ColourValue ambientParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		ambientParamValue.setDelegate(true);
		ambientParamValue.setInstancePointer(new InstancePointer(ambient));
		IClassFactory ambientParamValueClassFactory = GlobalClassFactoryMap.get(ambientParamValue.getCppInstanceTypeName());
		if (ambientParamValueClassFactory != null)
		{
			ambientParamValue.setDelegate(true);
			ambientParamValue = (com.earthview.world.graphic.ColourValue)ambientParamValueClassFactory.create();
			ambientParamValue.setDelegate(true);
			ambientParamValue.setInstancePointer(new InstancePointer(ambient));
		}
		setAmbientLightColour(ambientParamValue);
	}

	native private void setAmbientLightColour_CColourValue(long pNativeObject, long ambient);
	/**
	 * 设置环境光颜色
	 * @param index 
	 */
	public void setAmbientLightColour(com.earthview.world.graphic.ColourValue ambient)
	{
		long ambientParamValue = ambient.nativeObject.pointer;
		setAmbientLightColour_CColourValue(this.nativeObject.pointer, ambientParamValue);
	}
	native private void setAmbientLightColour_CColourValue_NoVirtual(long pNativeObject, long ambient);
	protected void setAmbientLightColour_NoVirtual(com.earthview.world.graphic.ColourValue ambient)
	{
		long ambientParamValue = ambient.nativeObject.pointer;
		setAmbientLightColour_CColourValue_NoVirtual(this.nativeObject.pointer, ambientParamValue);
	}

	protected  long getAmbientLightColour_void_callback()
	{
		com.earthview.world.graphic.ColourValue returnValue = getAmbientLightColour();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAmbientLightColour_void(long pNativeObject);
	/**
	 * 获取环境光颜色
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getAmbientLightColour()
	{
		long returnValue = getAmbientLightColour_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private long getAmbientLightColour_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ColourValue getAmbientLightColour_NoVirtual()
	{
		long returnValue = getAmbientLightColour_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}

	protected  long getSurfaceAmbientColour_void_callback()
	{
		com.earthview.world.graphic.ColourValue returnValue = getSurfaceAmbientColour();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSurfaceAmbientColour_void(long pNativeObject);
	/**
	 * 获取材质对环境光的反射率
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getSurfaceAmbientColour()
	{
		long returnValue = getSurfaceAmbientColour_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private long getSurfaceAmbientColour_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ColourValue getSurfaceAmbientColour_NoVirtual()
	{
		long returnValue = getSurfaceAmbientColour_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}

	protected  long getSurfaceDiffuseColour_void_callback()
	{
		com.earthview.world.graphic.ColourValue returnValue = getSurfaceDiffuseColour();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSurfaceDiffuseColour_void(long pNativeObject);
	/**
	 * 获取材质对漫反射光的反射率
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getSurfaceDiffuseColour()
	{
		long returnValue = getSurfaceDiffuseColour_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private long getSurfaceDiffuseColour_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ColourValue getSurfaceDiffuseColour_NoVirtual()
	{
		long returnValue = getSurfaceDiffuseColour_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}

	protected  long getSurfaceSpecularColour_void_callback()
	{
		com.earthview.world.graphic.ColourValue returnValue = getSurfaceSpecularColour();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSurfaceSpecularColour_void(long pNativeObject);
	/**
	 * 获取材质对镜面光的反射率
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getSurfaceSpecularColour()
	{
		long returnValue = getSurfaceSpecularColour_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private long getSurfaceSpecularColour_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ColourValue getSurfaceSpecularColour_NoVirtual()
	{
		long returnValue = getSurfaceSpecularColour_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}

	protected  long getSurfaceEmissiveColour_void_callback()
	{
		com.earthview.world.graphic.ColourValue returnValue = getSurfaceEmissiveColour();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSurfaceEmissiveColour_void(long pNativeObject);
	/**
	 * 获取材质对自发光的反射率
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getSurfaceEmissiveColour()
	{
		long returnValue = getSurfaceEmissiveColour_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private long getSurfaceEmissiveColour_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ColourValue getSurfaceEmissiveColour_NoVirtual()
	{
		long returnValue = getSurfaceEmissiveColour_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}

	protected  double getSurfaceShininess_void_callback()
	{
		double returnValue = getSurfaceShininess();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getSurfaceShininess_void(long pNativeObject);
	/**
	 * 获取材质亮度
	 * @param  
	 */
	public double getSurfaceShininess()
	{
		double returnValue = getSurfaceShininess_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSurfaceShininess_void_NoVirtual(long pNativeObject);
	protected double getSurfaceShininess_NoVirtual()
	{
		double returnValue = getSurfaceShininess_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  float getVertexColourTracking_void_callback()
	{
		float returnValue = getVertexColourTracking();
		float __returnValue = returnValue;
		return __returnValue;
	}

	native private float getVertexColourTracking_void(long pNativeObject);
	/**
	 * 获取顶点颜色跟踪类型
	 * @param  
	 */
	public float getVertexColourTracking()
	{
		float returnValue = getVertexColourTracking_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getVertexColourTracking_void_NoVirtual(long pNativeObject);
	protected float getVertexColourTracking_NoVirtual()
	{
		float returnValue = getVertexColourTracking_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getDerivedAmbientLightColour_void_callback()
	{
		com.earthview.world.graphic.ColourValue returnValue = getDerivedAmbientLightColour();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDerivedAmbientLightColour_void(long pNativeObject);
	/**
	 * 获取反射后的环境光颜色
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getDerivedAmbientLightColour()
	{
		long returnValue = getDerivedAmbientLightColour_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getDerivedAmbientLightColour_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ColourValue getDerivedAmbientLightColour_NoVirtual()
	{
		long returnValue = getDerivedAmbientLightColour_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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

	protected  long getDerivedSceneColour_void_callback()
	{
		com.earthview.world.graphic.ColourValue returnValue = getDerivedSceneColour();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDerivedSceneColour_void(long pNativeObject);
	/**
	 * 获取反射后的场景色
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getDerivedSceneColour()
	{
		long returnValue = getDerivedSceneColour_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getDerivedSceneColour_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ColourValue getDerivedSceneColour_NoVirtual()
	{
		long returnValue = getDerivedSceneColour_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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

	protected  void setFog_FogMode_CColourValue_Real_Real_Real_callback(int mode, long colour, double expDensity, double linearStart, double linearEnd)
	{
		com.earthview.world.graphic.FogMode modeParamValue = com.earthview.world.graphic.FogMode.toEnum(mode);
		com.earthview.world.graphic.ColourValue colourParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colourParamValue.setDelegate(true);
		colourParamValue.setInstancePointer(new InstancePointer(colour));
		IClassFactory colourParamValueClassFactory = GlobalClassFactoryMap.get(colourParamValue.getCppInstanceTypeName());
		if (colourParamValueClassFactory != null)
		{
			colourParamValue.setDelegate(true);
			colourParamValue = (com.earthview.world.graphic.ColourValue)colourParamValueClassFactory.create();
			colourParamValue.setDelegate(true);
			colourParamValue.setInstancePointer(new InstancePointer(colour));
		}
		double expDensityParamValue = expDensity;
		double linearStartParamValue = linearStart;
		double linearEndParamValue = linearEnd;
		setFog(modeParamValue, colourParamValue, expDensityParamValue, linearStartParamValue, linearEndParamValue);
	}

	native private void setFog_FogMode_CColourValue_Real_Real_Real(long pNativeObject, int mode, long colour, double expDensity, double linearStart, double linearEnd);
	/**
	 * 设置雾
	 * @param mode 类型
	 * @param colour 
	 * @param expDensity 
	 * @param linearStart 
	 * @param linearEnd 
	 */
	public void setFog(com.earthview.world.graphic.FogMode mode, com.earthview.world.graphic.ColourValue colour, double expDensity, double linearStart, double linearEnd)
	{
		int modeParamValue = mode.getValue();
		long colourParamValue = colour.nativeObject.pointer;
		double expDensityParamValue = expDensity;
		double linearStartParamValue = linearStart;
		double linearEndParamValue = linearEnd;
		setFog_FogMode_CColourValue_Real_Real_Real(this.nativeObject.pointer, modeParamValue, colourParamValue, expDensityParamValue, linearStartParamValue, linearEndParamValue);
	}
	native private void setFog_FogMode_CColourValue_Real_Real_Real_NoVirtual(long pNativeObject, int mode, long colour, double expDensity, double linearStart, double linearEnd);
	protected void setFog_NoVirtual(com.earthview.world.graphic.FogMode mode, com.earthview.world.graphic.ColourValue colour, double expDensity, double linearStart, double linearEnd)
	{
		int modeParamValue = mode.getValue();
		long colourParamValue = colour.nativeObject.pointer;
		double expDensityParamValue = expDensity;
		double linearStartParamValue = linearStart;
		double linearEndParamValue = linearEnd;
		setFog_FogMode_CColourValue_Real_Real_Real_NoVirtual(this.nativeObject.pointer, modeParamValue, colourParamValue, expDensityParamValue, linearStartParamValue, linearEndParamValue);
	}

	protected  long getFogColour_void_callback()
	{
		com.earthview.world.graphic.ColourValue returnValue = getFogColour();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getFogColour_void(long pNativeObject);
	/**
	 * 获取雾的颜色
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getFogColour()
	{
		long returnValue = getFogColour_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private long getFogColour_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ColourValue getFogColour_NoVirtual()
	{
		long returnValue = getFogColour_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}

	protected  long getFogParams_void_callback()
	{
		com.earthview.world.spatial.math.Vector4 returnValue = getFogParams();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getFogParams_void(long pNativeObject);
	/**
	 * 获取雾的参数
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector4 getFogParams()
	{
		long returnValue = getFogParams_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private long getFogParams_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector4 getFogParams_NoVirtual()
	{
		long returnValue = getFogParams_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}

	protected  long getTextureViewProjMatrix_ev_size_t_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.math.Matrix4 returnValue = getTextureViewProjMatrix(indexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTextureViewProjMatrix_ev_size_t(long pNativeObject, long index);
	/**
	 * 获取纹理视图投射矩阵
	 * @param index 
	 */
	public com.earthview.world.spatial.math.Matrix4 getTextureViewProjMatrix(long index)
	{
		long indexParamValue = index;
		long returnValue = getTextureViewProjMatrix_ev_size_t(this.nativeObject.pointer, indexParamValue);
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
	native private long getTextureViewProjMatrix_ev_size_t_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.math.Matrix4 getTextureViewProjMatrix_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getTextureViewProjMatrix_ev_size_t_NoVirtual(this.nativeObject.pointer, indexParamValue);
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

	protected  long getSoftShadowTextureViewProjMatrix_ev_size_t_ev_uint16_callback(long index, int projIndex)
	{
		long indexParamValue = index;
		int projIndexParamValue = projIndex;
		com.earthview.world.spatial.math.Matrix4 returnValue = getSoftShadowTextureViewProjMatrix(indexParamValue, projIndexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSoftShadowTextureViewProjMatrix_ev_size_t_ev_uint16(long pNativeObject, long index, int projIndex);
	/**
	 * 获取柔化阴影纹理视图投射矩阵
	 * @param index 
	 * @param projIndex 
	 */
	public com.earthview.world.spatial.math.Matrix4 getSoftShadowTextureViewProjMatrix(long index, int projIndex)
	{
		long indexParamValue = index;
		int projIndexParamValue = projIndex;
		long returnValue = getSoftShadowTextureViewProjMatrix_ev_size_t_ev_uint16(this.nativeObject.pointer, indexParamValue, projIndexParamValue);
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
	native private long getSoftShadowTextureViewProjMatrix_ev_size_t_ev_uint16_NoVirtual(long pNativeObject, long index, int projIndex);
	protected com.earthview.world.spatial.math.Matrix4 getSoftShadowTextureViewProjMatrix_NoVirtual(long index, int projIndex)
	{
		long indexParamValue = index;
		int projIndexParamValue = projIndex;
		long returnValue = getSoftShadowTextureViewProjMatrix_ev_size_t_ev_uint16_NoVirtual(this.nativeObject.pointer, indexParamValue, projIndexParamValue);
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

	protected  long getSoftShadowViewProjMatrix_ev_size_t_ev_uint16_callback(long index, int projIndex)
	{
		long indexParamValue = index;
		int projIndexParamValue = projIndex;
		com.earthview.world.spatial.math.Matrix4 returnValue = getSoftShadowViewProjMatrix(indexParamValue, projIndexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSoftShadowViewProjMatrix_ev_size_t_ev_uint16(long pNativeObject, long index, int projIndex);
	/**
	 * 获取柔化阴影视图投射矩阵
	 * @param index 
	 * @param projIndex 
	 */
	public com.earthview.world.spatial.math.Matrix4 getSoftShadowViewProjMatrix(long index, int projIndex)
	{
		long indexParamValue = index;
		int projIndexParamValue = projIndex;
		long returnValue = getSoftShadowViewProjMatrix_ev_size_t_ev_uint16(this.nativeObject.pointer, indexParamValue, projIndexParamValue);
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
	native private long getSoftShadowViewProjMatrix_ev_size_t_ev_uint16_NoVirtual(long pNativeObject, long index, int projIndex);
	protected com.earthview.world.spatial.math.Matrix4 getSoftShadowViewProjMatrix_NoVirtual(long index, int projIndex)
	{
		long indexParamValue = index;
		int projIndexParamValue = projIndex;
		long returnValue = getSoftShadowViewProjMatrix_ev_size_t_ev_uint16_NoVirtual(this.nativeObject.pointer, indexParamValue, projIndexParamValue);
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

	protected  long getTextureViewMatrix_ev_size_t_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.math.Matrix4 returnValue = getTextureViewMatrix(indexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTextureViewMatrix_ev_size_t(long pNativeObject, long index);
	/**
	 * 获取纹理变换观察矩阵
	 * @param index 
	 */
	public com.earthview.world.spatial.math.Matrix4 getTextureViewMatrix(long index)
	{
		long indexParamValue = index;
		long returnValue = getTextureViewMatrix_ev_size_t(this.nativeObject.pointer, indexParamValue);
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
	native private long getTextureViewMatrix_ev_size_t_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.math.Matrix4 getTextureViewMatrix_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getTextureViewMatrix_ev_size_t_NoVirtual(this.nativeObject.pointer, indexParamValue);
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

	protected  long getTextureWorldViewProjMatrix_ev_size_t_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.math.Matrix4 returnValue = getTextureWorldViewProjMatrix(indexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTextureWorldViewProjMatrix_ev_size_t(long pNativeObject, long index);
	/**
	 * 获取纹理世界观察投射矩阵
	 * @param index 
	 */
	public com.earthview.world.spatial.math.Matrix4 getTextureWorldViewProjMatrix(long index)
	{
		long indexParamValue = index;
		long returnValue = getTextureWorldViewProjMatrix_ev_size_t(this.nativeObject.pointer, indexParamValue);
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
	native private long getTextureWorldViewProjMatrix_ev_size_t_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.math.Matrix4 getTextureWorldViewProjMatrix_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getTextureWorldViewProjMatrix_ev_size_t_NoVirtual(this.nativeObject.pointer, indexParamValue);
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

	protected  long getSpotlightViewProjMatrix_ev_size_t_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.math.Matrix4 returnValue = getSpotlightViewProjMatrix(indexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSpotlightViewProjMatrix_ev_size_t(long pNativeObject, long index);
	/**
	 * 获取聚光灯观察投射矩阵
	 * @param index 
	 */
	public com.earthview.world.spatial.math.Matrix4 getSpotlightViewProjMatrix(long index)
	{
		long indexParamValue = index;
		long returnValue = getSpotlightViewProjMatrix_ev_size_t(this.nativeObject.pointer, indexParamValue);
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
	native private long getSpotlightViewProjMatrix_ev_size_t_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.math.Matrix4 getSpotlightViewProjMatrix_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getSpotlightViewProjMatrix_ev_size_t_NoVirtual(this.nativeObject.pointer, indexParamValue);
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

	protected  long getSpotlightWorldViewProjMatrix_ev_size_t_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.math.Matrix4 returnValue = getSpotlightWorldViewProjMatrix(indexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSpotlightWorldViewProjMatrix_ev_size_t(long pNativeObject, long index);
	/**
	 * 获取聚光灯世界观察投射矩阵
	 * @param index 
	 */
	public com.earthview.world.spatial.math.Matrix4 getSpotlightWorldViewProjMatrix(long index)
	{
		long indexParamValue = index;
		long returnValue = getSpotlightWorldViewProjMatrix_ev_size_t(this.nativeObject.pointer, indexParamValue);
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
	native private long getSpotlightWorldViewProjMatrix_ev_size_t_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.math.Matrix4 getSpotlightWorldViewProjMatrix_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getSpotlightWorldViewProjMatrix_ev_size_t_NoVirtual(this.nativeObject.pointer, indexParamValue);
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

	protected  long getTextureTransformMatrix_ev_size_t_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.math.Matrix4 returnValue = getTextureTransformMatrix(indexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTextureTransformMatrix_ev_size_t(long pNativeObject, long index);
	/**
	 * 获取纹理变换矩阵
	 * @param index 
	 */
	public com.earthview.world.spatial.math.Matrix4 getTextureTransformMatrix(long index)
	{
		long indexParamValue = index;
		long returnValue = getTextureTransformMatrix_ev_size_t(this.nativeObject.pointer, indexParamValue);
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
	native private long getTextureTransformMatrix_ev_size_t_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.math.Matrix4 getTextureTransformMatrix_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getTextureTransformMatrix_ev_size_t_NoVirtual(this.nativeObject.pointer, indexParamValue);
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

	protected  long getCurrentRenderTarget_void_callback()
	{
		com.earthview.world.graphic.RenderTarget returnValue = getCurrentRenderTarget();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCurrentRenderTarget_void(long pNativeObject);
	/**
	 * 获取当前渲染目标
	 * @param  
	 */
	public com.earthview.world.graphic.RenderTarget getCurrentRenderTarget()
	{
		long returnValue = getCurrentRenderTarget_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderTarget __returnValue = new com.earthview.world.graphic.RenderTarget(CreatedWhenConstruct.CWC_NotToCreate, "CRenderTarget");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderTarget)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderTarget");
		}
		return __returnValue;
	}
	native private long getCurrentRenderTarget_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.RenderTarget getCurrentRenderTarget_NoVirtual()
	{
		long returnValue = getCurrentRenderTarget_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderTarget __returnValue = new com.earthview.world.graphic.RenderTarget(CreatedWhenConstruct.CWC_NotToCreate, "CRenderTarget");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderTarget)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderTarget");
		}
		return __returnValue;
	}

	protected  long getCurrentRenderable_void_callback()
	{
		com.earthview.world.graphic.Renderable returnValue = getCurrentRenderable();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCurrentRenderable_void(long pNativeObject);
	/**
	 * 获取当前渲染对象
	 * @param  
	 */
	public com.earthview.world.graphic.Renderable getCurrentRenderable()
	{
		long returnValue = getCurrentRenderable_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Renderable __returnValue = new com.earthview.world.graphic.Renderable(CreatedWhenConstruct.CWC_NotToCreate, "CRenderable");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Renderable)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderable");
		}
		return __returnValue;
	}
	native private long getCurrentRenderable_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Renderable getCurrentRenderable_NoVirtual()
	{
		long returnValue = getCurrentRenderable_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Renderable __returnValue = new com.earthview.world.graphic.Renderable(CreatedWhenConstruct.CWC_NotToCreate, "CRenderable");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Renderable)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderable");
		}
		return __returnValue;
	}

	protected  long getCurrentPass_void_callback()
	{
		com.earthview.world.graphic.Pass returnValue = getCurrentPass();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCurrentPass_void(long pNativeObject);
	/**
	 * 获取当前渲染通路
	 * @param  
	 */
	public com.earthview.world.graphic.Pass getCurrentPass()
	{
		long returnValue = getCurrentPass_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Pass __returnValue = new com.earthview.world.graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate, "CPass");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Pass)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPass");
		}
		return __returnValue;
	}
	native private long getCurrentPass_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Pass getCurrentPass_NoVirtual()
	{
		long returnValue = getCurrentPass_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Pass __returnValue = new com.earthview.world.graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate, "CPass");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Pass)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPass");
		}
		return __returnValue;
	}

	protected  long getTextureSize_ev_size_t_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.math.Vector4 returnValue = getTextureSize(indexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTextureSize_ev_size_t(long pNativeObject, long index);
	/**
	 * 获取指定纹理的尺寸
	 * @param index 
	 */
	public com.earthview.world.spatial.math.Vector4 getTextureSize(long index)
	{
		long indexParamValue = index;
		long returnValue = getTextureSize_ev_size_t(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private long getTextureSize_ev_size_t_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.math.Vector4 getTextureSize_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getTextureSize_ev_size_t_NoVirtual(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}

	protected  long getInverseTextureSize_ev_size_t_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.math.Vector4 returnValue = getInverseTextureSize(indexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getInverseTextureSize_ev_size_t(long pNativeObject, long index);
	/**
	 * 获取知道纹理尺寸的倒数
	 * @param index 
	 */
	public com.earthview.world.spatial.math.Vector4 getInverseTextureSize(long index)
	{
		long indexParamValue = index;
		long returnValue = getInverseTextureSize_ev_size_t(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private long getInverseTextureSize_ev_size_t_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.math.Vector4 getInverseTextureSize_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getInverseTextureSize_ev_size_t_NoVirtual(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}

	protected  long getPackedTextureSize_ev_size_t_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.math.Vector4 returnValue = getPackedTextureSize(indexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getPackedTextureSize_ev_size_t(long pNativeObject, long index);
	/**
	 * 获取包纹理的尺寸
	 * @param index 
	 */
	public com.earthview.world.spatial.math.Vector4 getPackedTextureSize(long index)
	{
		long indexParamValue = index;
		long returnValue = getPackedTextureSize_ev_size_t(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private long getPackedTextureSize_ev_size_t_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.math.Vector4 getPackedTextureSize_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getPackedTextureSize_ev_size_t_NoVirtual(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}

	protected  double getShadowExtrusionDistance_void_callback()
	{
		double returnValue = getShadowExtrusionDistance();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getShadowExtrusionDistance_void(long pNativeObject);
	/**
	 * 获取阴影延伸距离
	 * @param index 
	 */
	public double getShadowExtrusionDistance()
	{
		double returnValue = getShadowExtrusionDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getShadowExtrusionDistance_void_NoVirtual(long pNativeObject);
	protected double getShadowExtrusionDistance_NoVirtual()
	{
		double returnValue = getShadowExtrusionDistance_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getSceneDepthRange_void_callback()
	{
		com.earthview.world.spatial.math.Vector4 returnValue = getSceneDepthRange();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSceneDepthRange_void(long pNativeObject);
	/**
	 * 获取场景深度范围
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector4 getSceneDepthRange()
	{
		long returnValue = getSceneDepthRange_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private long getSceneDepthRange_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector4 getSceneDepthRange_NoVirtual()
	{
		long returnValue = getSceneDepthRange_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}

	protected  long getShadowSceneDepthRange_ev_size_t_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.math.Vector4 returnValue = getShadowSceneDepthRange(indexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getShadowSceneDepthRange_ev_size_t(long pNativeObject, long index);
	/**
	 * 获取阴影场景深度范围
	 * @param index 
	 */
	public com.earthview.world.spatial.math.Vector4 getShadowSceneDepthRange(long index)
	{
		long indexParamValue = index;
		long returnValue = getShadowSceneDepthRange_ev_size_t(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private long getShadowSceneDepthRange_ev_size_t_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.math.Vector4 getShadowSceneDepthRange_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getShadowSceneDepthRange_ev_size_t_NoVirtual(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}

	protected  long getShadowColour_void_callback()
	{
		com.earthview.world.graphic.ColourValue returnValue = getShadowColour();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getShadowColour_void(long pNativeObject);
	/**
	 * 获取阴影颜色
	 * @param index 
	 */
	public com.earthview.world.graphic.ColourValue getShadowColour()
	{
		long returnValue = getShadowColour_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private long getShadowColour_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ColourValue getShadowColour_NoVirtual()
	{
		long returnValue = getShadowColour_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}

	protected  double getShadowColorRRatio_void_callback()
	{
		double returnValue = getShadowColorRRatio();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getShadowColorRRatio_void(long pNativeObject);
	/**
	 * 获取阴影颜色增益
	 */
	public double getShadowColorRRatio()
	{
		double returnValue = getShadowColorRRatio_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getShadowColorRRatio_void_NoVirtual(long pNativeObject);
	protected double getShadowColorRRatio_NoVirtual()
	{
		double returnValue = getShadowColorRRatio_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getShadowColorGRatio_void_callback()
	{
		double returnValue = getShadowColorGRatio();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getShadowColorGRatio_void(long pNativeObject);
	public double getShadowColorGRatio()
	{
		double returnValue = getShadowColorGRatio_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getShadowColorGRatio_void_NoVirtual(long pNativeObject);
	protected double getShadowColorGRatio_NoVirtual()
	{
		double returnValue = getShadowColorGRatio_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getShadowColorBRatio_void_callback()
	{
		double returnValue = getShadowColorBRatio();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getShadowColorBRatio_void(long pNativeObject);
	public double getShadowColorBRatio()
	{
		double returnValue = getShadowColorBRatio_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getShadowColorBRatio_void_NoVirtual(long pNativeObject);
	protected double getShadowColorBRatio_NoVirtual()
	{
		double returnValue = getShadowColorBRatio_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getInverseViewProjMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getInverseViewProjMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getInverseViewProjMatrix_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 getInverseViewProjMatrix()
	{
		long returnValue = getInverseViewProjMatrix_void(this.nativeObject.pointer);
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
	native private long getInverseViewProjMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getInverseViewProjMatrix_NoVirtual()
	{
		long returnValue = getInverseViewProjMatrix_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getInverseTransposeViewProjMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getInverseTransposeViewProjMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getInverseTransposeViewProjMatrix_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 getInverseTransposeViewProjMatrix()
	{
		long returnValue = getInverseTransposeViewProjMatrix_void(this.nativeObject.pointer);
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
	native private long getInverseTransposeViewProjMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getInverseTransposeViewProjMatrix_NoVirtual()
	{
		long returnValue = getInverseTransposeViewProjMatrix_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getTransposeViewProjMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getTransposeViewProjMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTransposeViewProjMatrix_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 getTransposeViewProjMatrix()
	{
		long returnValue = getTransposeViewProjMatrix_void(this.nativeObject.pointer);
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
	native private long getTransposeViewProjMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getTransposeViewProjMatrix_NoVirtual()
	{
		long returnValue = getTransposeViewProjMatrix_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getTransposeViewMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getTransposeViewMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTransposeViewMatrix_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 getTransposeViewMatrix()
	{
		long returnValue = getTransposeViewMatrix_void(this.nativeObject.pointer);
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
	native private long getTransposeViewMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getTransposeViewMatrix_NoVirtual()
	{
		long returnValue = getTransposeViewMatrix_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getInverseTransposeViewMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getInverseTransposeViewMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getInverseTransposeViewMatrix_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 getInverseTransposeViewMatrix()
	{
		long returnValue = getInverseTransposeViewMatrix_void(this.nativeObject.pointer);
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
	native private long getInverseTransposeViewMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getInverseTransposeViewMatrix_NoVirtual()
	{
		long returnValue = getInverseTransposeViewMatrix_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getTransposeProjectionMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getTransposeProjectionMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTransposeProjectionMatrix_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 getTransposeProjectionMatrix()
	{
		long returnValue = getTransposeProjectionMatrix_void(this.nativeObject.pointer);
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
	native private long getTransposeProjectionMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getTransposeProjectionMatrix_NoVirtual()
	{
		long returnValue = getTransposeProjectionMatrix_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getInverseProjectionMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getInverseProjectionMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getInverseProjectionMatrix_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 getInverseProjectionMatrix()
	{
		long returnValue = getInverseProjectionMatrix_void(this.nativeObject.pointer);
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
	native private long getInverseProjectionMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getInverseProjectionMatrix_NoVirtual()
	{
		long returnValue = getInverseProjectionMatrix_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getInverseTransposeProjectionMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getInverseTransposeProjectionMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getInverseTransposeProjectionMatrix_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 getInverseTransposeProjectionMatrix()
	{
		long returnValue = getInverseTransposeProjectionMatrix_void(this.nativeObject.pointer);
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
	native private long getInverseTransposeProjectionMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getInverseTransposeProjectionMatrix_NoVirtual()
	{
		long returnValue = getInverseTransposeProjectionMatrix_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getTransposeWorldViewProjMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getTransposeWorldViewProjMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTransposeWorldViewProjMatrix_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 getTransposeWorldViewProjMatrix()
	{
		long returnValue = getTransposeWorldViewProjMatrix_void(this.nativeObject.pointer);
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
	native private long getTransposeWorldViewProjMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getTransposeWorldViewProjMatrix_NoVirtual()
	{
		long returnValue = getTransposeWorldViewProjMatrix_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getInverseWorldViewProjMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getInverseWorldViewProjMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getInverseWorldViewProjMatrix_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 getInverseWorldViewProjMatrix()
	{
		long returnValue = getInverseWorldViewProjMatrix_void(this.nativeObject.pointer);
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
	native private long getInverseWorldViewProjMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getInverseWorldViewProjMatrix_NoVirtual()
	{
		long returnValue = getInverseWorldViewProjMatrix_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getInverseTransposeWorldViewProjMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getInverseTransposeWorldViewProjMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getInverseTransposeWorldViewProjMatrix_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 getInverseTransposeWorldViewProjMatrix()
	{
		long returnValue = getInverseTransposeWorldViewProjMatrix_void(this.nativeObject.pointer);
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
	native private long getInverseTransposeWorldViewProjMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getInverseTransposeWorldViewProjMatrix_NoVirtual()
	{
		long returnValue = getInverseTransposeWorldViewProjMatrix_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getTransposeWorldViewMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getTransposeWorldViewMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTransposeWorldViewMatrix_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 getTransposeWorldViewMatrix()
	{
		long returnValue = getTransposeWorldViewMatrix_void(this.nativeObject.pointer);
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
	native private long getTransposeWorldViewMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getTransposeWorldViewMatrix_NoVirtual()
	{
		long returnValue = getTransposeWorldViewMatrix_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getTransposeWorldMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = getTransposeWorldMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTransposeWorldMatrix_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 getTransposeWorldMatrix()
	{
		long returnValue = getTransposeWorldMatrix_void(this.nativeObject.pointer);
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
	native private long getTransposeWorldMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 getTransposeWorldMatrix_NoVirtual()
	{
		long returnValue = getTransposeWorldMatrix_void_NoVirtual(this.nativeObject.pointer);
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

	protected  double getTime_void_callback()
	{
		double returnValue = getTime();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getTime_void(long pNativeObject);
	public double getTime()
	{
		double returnValue = getTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getTime_void_NoVirtual(long pNativeObject);
	protected double getTime_NoVirtual()
	{
		double returnValue = getTime_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getTime_0_X_Real_callback(double x)
	{
		double xParamValue = x;
		double returnValue = getTime_0_X(xParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getTime_0_X_Real(long pNativeObject, double x);
	public double getTime_0_X(double x)
	{
		double xParamValue = x;
		double returnValue = getTime_0_X_Real(this.nativeObject.pointer, xParamValue);
		return returnValue;
	}
	native private double getTime_0_X_Real_NoVirtual(long pNativeObject, double x);
	protected double getTime_0_X_NoVirtual(double x)
	{
		double xParamValue = x;
		double returnValue = getTime_0_X_Real_NoVirtual(this.nativeObject.pointer, xParamValue);
		return returnValue;
	}

	protected  double getCosTime_0_X_Real_callback(double x)
	{
		double xParamValue = x;
		double returnValue = getCosTime_0_X(xParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getCosTime_0_X_Real(long pNativeObject, double x);
	public double getCosTime_0_X(double x)
	{
		double xParamValue = x;
		double returnValue = getCosTime_0_X_Real(this.nativeObject.pointer, xParamValue);
		return returnValue;
	}
	native private double getCosTime_0_X_Real_NoVirtual(long pNativeObject, double x);
	protected double getCosTime_0_X_NoVirtual(double x)
	{
		double xParamValue = x;
		double returnValue = getCosTime_0_X_Real_NoVirtual(this.nativeObject.pointer, xParamValue);
		return returnValue;
	}

	protected  double getSinTime_0_X_Real_callback(double x)
	{
		double xParamValue = x;
		double returnValue = getSinTime_0_X(xParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getSinTime_0_X_Real(long pNativeObject, double x);
	public double getSinTime_0_X(double x)
	{
		double xParamValue = x;
		double returnValue = getSinTime_0_X_Real(this.nativeObject.pointer, xParamValue);
		return returnValue;
	}
	native private double getSinTime_0_X_Real_NoVirtual(long pNativeObject, double x);
	protected double getSinTime_0_X_NoVirtual(double x)
	{
		double xParamValue = x;
		double returnValue = getSinTime_0_X_Real_NoVirtual(this.nativeObject.pointer, xParamValue);
		return returnValue;
	}

	protected  double getTanTime_0_X_Real_callback(double x)
	{
		double xParamValue = x;
		double returnValue = getTanTime_0_X(xParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getTanTime_0_X_Real(long pNativeObject, double x);
	public double getTanTime_0_X(double x)
	{
		double xParamValue = x;
		double returnValue = getTanTime_0_X_Real(this.nativeObject.pointer, xParamValue);
		return returnValue;
	}
	native private double getTanTime_0_X_Real_NoVirtual(long pNativeObject, double x);
	protected double getTanTime_0_X_NoVirtual(double x)
	{
		double xParamValue = x;
		double returnValue = getTanTime_0_X_Real_NoVirtual(this.nativeObject.pointer, xParamValue);
		return returnValue;
	}

	protected  long getTime_0_X_packed_Real_callback(double x)
	{
		double xParamValue = x;
		com.earthview.world.spatial.math.Vector4 returnValue = getTime_0_X_packed(xParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTime_0_X_packed_Real(long pNativeObject, double x);
	public com.earthview.world.spatial.math.Vector4 getTime_0_X_packed(double x)
	{
		double xParamValue = x;
		long returnValue = getTime_0_X_packed_Real(this.nativeObject.pointer, xParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private long getTime_0_X_packed_Real_NoVirtual(long pNativeObject, double x);
	protected com.earthview.world.spatial.math.Vector4 getTime_0_X_packed_NoVirtual(double x)
	{
		double xParamValue = x;
		long returnValue = getTime_0_X_packed_Real_NoVirtual(this.nativeObject.pointer, xParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}

	protected  double getTime_0_1_Real_callback(double x)
	{
		double xParamValue = x;
		double returnValue = getTime_0_1(xParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getTime_0_1_Real(long pNativeObject, double x);
	public double getTime_0_1(double x)
	{
		double xParamValue = x;
		double returnValue = getTime_0_1_Real(this.nativeObject.pointer, xParamValue);
		return returnValue;
	}
	native private double getTime_0_1_Real_NoVirtual(long pNativeObject, double x);
	protected double getTime_0_1_NoVirtual(double x)
	{
		double xParamValue = x;
		double returnValue = getTime_0_1_Real_NoVirtual(this.nativeObject.pointer, xParamValue);
		return returnValue;
	}

	protected  double getCosTime_0_1_Real_callback(double x)
	{
		double xParamValue = x;
		double returnValue = getCosTime_0_1(xParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getCosTime_0_1_Real(long pNativeObject, double x);
	public double getCosTime_0_1(double x)
	{
		double xParamValue = x;
		double returnValue = getCosTime_0_1_Real(this.nativeObject.pointer, xParamValue);
		return returnValue;
	}
	native private double getCosTime_0_1_Real_NoVirtual(long pNativeObject, double x);
	protected double getCosTime_0_1_NoVirtual(double x)
	{
		double xParamValue = x;
		double returnValue = getCosTime_0_1_Real_NoVirtual(this.nativeObject.pointer, xParamValue);
		return returnValue;
	}

	protected  double getSinTime_0_1_Real_callback(double x)
	{
		double xParamValue = x;
		double returnValue = getSinTime_0_1(xParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getSinTime_0_1_Real(long pNativeObject, double x);
	public double getSinTime_0_1(double x)
	{
		double xParamValue = x;
		double returnValue = getSinTime_0_1_Real(this.nativeObject.pointer, xParamValue);
		return returnValue;
	}
	native private double getSinTime_0_1_Real_NoVirtual(long pNativeObject, double x);
	protected double getSinTime_0_1_NoVirtual(double x)
	{
		double xParamValue = x;
		double returnValue = getSinTime_0_1_Real_NoVirtual(this.nativeObject.pointer, xParamValue);
		return returnValue;
	}

	protected  double getTanTime_0_1_Real_callback(double x)
	{
		double xParamValue = x;
		double returnValue = getTanTime_0_1(xParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getTanTime_0_1_Real(long pNativeObject, double x);
	public double getTanTime_0_1(double x)
	{
		double xParamValue = x;
		double returnValue = getTanTime_0_1_Real(this.nativeObject.pointer, xParamValue);
		return returnValue;
	}
	native private double getTanTime_0_1_Real_NoVirtual(long pNativeObject, double x);
	protected double getTanTime_0_1_NoVirtual(double x)
	{
		double xParamValue = x;
		double returnValue = getTanTime_0_1_Real_NoVirtual(this.nativeObject.pointer, xParamValue);
		return returnValue;
	}

	protected  long getTime_0_1_packed_Real_callback(double x)
	{
		double xParamValue = x;
		com.earthview.world.spatial.math.Vector4 returnValue = getTime_0_1_packed(xParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTime_0_1_packed_Real(long pNativeObject, double x);
	public com.earthview.world.spatial.math.Vector4 getTime_0_1_packed(double x)
	{
		double xParamValue = x;
		long returnValue = getTime_0_1_packed_Real(this.nativeObject.pointer, xParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private long getTime_0_1_packed_Real_NoVirtual(long pNativeObject, double x);
	protected com.earthview.world.spatial.math.Vector4 getTime_0_1_packed_NoVirtual(double x)
	{
		double xParamValue = x;
		long returnValue = getTime_0_1_packed_Real_NoVirtual(this.nativeObject.pointer, xParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}

	protected  double getTime_0_2Pi_Real_callback(double x)
	{
		double xParamValue = x;
		double returnValue = getTime_0_2Pi(xParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getTime_0_2Pi_Real(long pNativeObject, double x);
	public double getTime_0_2Pi(double x)
	{
		double xParamValue = x;
		double returnValue = getTime_0_2Pi_Real(this.nativeObject.pointer, xParamValue);
		return returnValue;
	}
	native private double getTime_0_2Pi_Real_NoVirtual(long pNativeObject, double x);
	protected double getTime_0_2Pi_NoVirtual(double x)
	{
		double xParamValue = x;
		double returnValue = getTime_0_2Pi_Real_NoVirtual(this.nativeObject.pointer, xParamValue);
		return returnValue;
	}

	protected  double getCosTime_0_2Pi_Real_callback(double x)
	{
		double xParamValue = x;
		double returnValue = getCosTime_0_2Pi(xParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getCosTime_0_2Pi_Real(long pNativeObject, double x);
	public double getCosTime_0_2Pi(double x)
	{
		double xParamValue = x;
		double returnValue = getCosTime_0_2Pi_Real(this.nativeObject.pointer, xParamValue);
		return returnValue;
	}
	native private double getCosTime_0_2Pi_Real_NoVirtual(long pNativeObject, double x);
	protected double getCosTime_0_2Pi_NoVirtual(double x)
	{
		double xParamValue = x;
		double returnValue = getCosTime_0_2Pi_Real_NoVirtual(this.nativeObject.pointer, xParamValue);
		return returnValue;
	}

	protected  double getSinTime_0_2Pi_Real_callback(double x)
	{
		double xParamValue = x;
		double returnValue = getSinTime_0_2Pi(xParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getSinTime_0_2Pi_Real(long pNativeObject, double x);
	public double getSinTime_0_2Pi(double x)
	{
		double xParamValue = x;
		double returnValue = getSinTime_0_2Pi_Real(this.nativeObject.pointer, xParamValue);
		return returnValue;
	}
	native private double getSinTime_0_2Pi_Real_NoVirtual(long pNativeObject, double x);
	protected double getSinTime_0_2Pi_NoVirtual(double x)
	{
		double xParamValue = x;
		double returnValue = getSinTime_0_2Pi_Real_NoVirtual(this.nativeObject.pointer, xParamValue);
		return returnValue;
	}

	protected  double getTanTime_0_2Pi_Real_callback(double x)
	{
		double xParamValue = x;
		double returnValue = getTanTime_0_2Pi(xParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getTanTime_0_2Pi_Real(long pNativeObject, double x);
	public double getTanTime_0_2Pi(double x)
	{
		double xParamValue = x;
		double returnValue = getTanTime_0_2Pi_Real(this.nativeObject.pointer, xParamValue);
		return returnValue;
	}
	native private double getTanTime_0_2Pi_Real_NoVirtual(long pNativeObject, double x);
	protected double getTanTime_0_2Pi_NoVirtual(double x)
	{
		double xParamValue = x;
		double returnValue = getTanTime_0_2Pi_Real_NoVirtual(this.nativeObject.pointer, xParamValue);
		return returnValue;
	}

	protected  long getTime_0_2Pi_packed_Real_callback(double x)
	{
		double xParamValue = x;
		com.earthview.world.spatial.math.Vector4 returnValue = getTime_0_2Pi_packed(xParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTime_0_2Pi_packed_Real(long pNativeObject, double x);
	public com.earthview.world.spatial.math.Vector4 getTime_0_2Pi_packed(double x)
	{
		double xParamValue = x;
		long returnValue = getTime_0_2Pi_packed_Real(this.nativeObject.pointer, xParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private long getTime_0_2Pi_packed_Real_NoVirtual(long pNativeObject, double x);
	protected com.earthview.world.spatial.math.Vector4 getTime_0_2Pi_packed_NoVirtual(double x)
	{
		double xParamValue = x;
		long returnValue = getTime_0_2Pi_packed_Real_NoVirtual(this.nativeObject.pointer, xParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}

	protected  double getFrameTime_void_callback()
	{
		double returnValue = getFrameTime();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getFrameTime_void(long pNativeObject);
	public double getFrameTime()
	{
		double returnValue = getFrameTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getFrameTime_void_NoVirtual(long pNativeObject);
	protected double getFrameTime_NoVirtual()
	{
		double returnValue = getFrameTime_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getFPS_void_callback()
	{
		double returnValue = getFPS();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getFPS_void(long pNativeObject);
	public double getFPS()
	{
		double returnValue = getFPS_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getFPS_void_NoVirtual(long pNativeObject);
	protected double getFPS_NoVirtual()
	{
		double returnValue = getFPS_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getViewportWidth_void_callback()
	{
		double returnValue = getViewportWidth();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getViewportWidth_void(long pNativeObject);
	public double getViewportWidth()
	{
		double returnValue = getViewportWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getViewportWidth_void_NoVirtual(long pNativeObject);
	protected double getViewportWidth_NoVirtual()
	{
		double returnValue = getViewportWidth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getViewportHeight_void_callback()
	{
		double returnValue = getViewportHeight();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getViewportHeight_void(long pNativeObject);
	public double getViewportHeight()
	{
		double returnValue = getViewportHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getViewportHeight_void_NoVirtual(long pNativeObject);
	protected double getViewportHeight_NoVirtual()
	{
		double returnValue = getViewportHeight_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getInverseViewportWidth_void_callback()
	{
		double returnValue = getInverseViewportWidth();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getInverseViewportWidth_void(long pNativeObject);
	public double getInverseViewportWidth()
	{
		double returnValue = getInverseViewportWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getInverseViewportWidth_void_NoVirtual(long pNativeObject);
	protected double getInverseViewportWidth_NoVirtual()
	{
		double returnValue = getInverseViewportWidth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getInverseViewportHeight_void_callback()
	{
		double returnValue = getInverseViewportHeight();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getInverseViewportHeight_void(long pNativeObject);
	public double getInverseViewportHeight()
	{
		double returnValue = getInverseViewportHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getInverseViewportHeight_void_NoVirtual(long pNativeObject);
	protected double getInverseViewportHeight_NoVirtual()
	{
		double returnValue = getInverseViewportHeight_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getViewDirection_void_callback()
	{
		com.earthview.world.spatial.math.Vector3 returnValue = getViewDirection();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getViewDirection_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 getViewDirection()
	{
		long returnValue = getViewDirection_void(this.nativeObject.pointer);
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
	native private long getViewDirection_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector3 getViewDirection_NoVirtual()
	{
		long returnValue = getViewDirection_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getViewSideVector_void_callback()
	{
		com.earthview.world.spatial.math.Vector3 returnValue = getViewSideVector();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getViewSideVector_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 getViewSideVector()
	{
		long returnValue = getViewSideVector_void(this.nativeObject.pointer);
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
	native private long getViewSideVector_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector3 getViewSideVector_NoVirtual()
	{
		long returnValue = getViewSideVector_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getViewUpVector_void_callback()
	{
		com.earthview.world.spatial.math.Vector3 returnValue = getViewUpVector();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getViewUpVector_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 getViewUpVector()
	{
		long returnValue = getViewUpVector_void(this.nativeObject.pointer);
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
	native private long getViewUpVector_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector3 getViewUpVector_NoVirtual()
	{
		long returnValue = getViewUpVector_void_NoVirtual(this.nativeObject.pointer);
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

	protected  double getFOV_void_callback()
	{
		double returnValue = getFOV();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getFOV_void(long pNativeObject);
	public double getFOV()
	{
		double returnValue = getFOV_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getFOV_void_NoVirtual(long pNativeObject);
	protected double getFOV_NoVirtual()
	{
		double returnValue = getFOV_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getNearClipDistance_void_callback()
	{
		double returnValue = getNearClipDistance();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getNearClipDistance_void(long pNativeObject);
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

	protected  double getFarClipDistance_void_callback()
	{
		double returnValue = getFarClipDistance();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getFarClipDistance_void(long pNativeObject);
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

	protected  int getPassNumber_void_callback()
	{
		int returnValue = getPassNumber();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getPassNumber_void(long pNativeObject);
	public int getPassNumber()
	{
		int returnValue = getPassNumber_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getPassNumber_void_NoVirtual(long pNativeObject);
	protected int getPassNumber_NoVirtual()
	{
		int returnValue = getPassNumber_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setPassNumber_ev_int32_callback(int passNumber)
	{
		int passNumberParamValue = passNumber;
		setPassNumber(passNumberParamValue);
	}

	native private void setPassNumber_ev_int32(long pNativeObject, int passNumber);
	public void setPassNumber(int passNumber)
	{
		int passNumberParamValue = passNumber;
		setPassNumber_ev_int32(this.nativeObject.pointer, passNumberParamValue);
	}
	native private void setPassNumber_ev_int32_NoVirtual(long pNativeObject, int passNumber);
	protected void setPassNumber_NoVirtual(int passNumber)
	{
		int passNumberParamValue = passNumber;
		setPassNumber_ev_int32_NoVirtual(this.nativeObject.pointer, passNumberParamValue);
	}

	protected  void incPassNumber_void_callback()
	{
		incPassNumber();
	}

	native private void incPassNumber_void(long pNativeObject);
	public void incPassNumber()
	{
		incPassNumber_void(this.nativeObject.pointer);
	}
	native private void incPassNumber_void_NoVirtual(long pNativeObject);
	protected void incPassNumber_NoVirtual()
	{
		incPassNumber_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void updateLightCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback(long constantEntry, long params)
	{
		com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry constantEntryParamValue = new com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry(CreatedWhenConstruct.CWC_NotToCreate);
		constantEntryParamValue.setDelegate(true);
		constantEntryParamValue.setInstancePointer(new InstancePointer(constantEntry));
		IClassFactory constantEntryParamValueClassFactory = GlobalClassFactoryMap.get(constantEntryParamValue.getCppInstanceTypeName());
		if (constantEntryParamValueClassFactory != null)
		{
			constantEntryParamValue.setDelegate(true);
			constantEntryParamValue = (com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry)constantEntryParamValueClassFactory.create();
			constantEntryParamValue.setDelegate(true);
			constantEntryParamValue.setInstancePointer(new InstancePointer(constantEntry));
		}
		com.earthview.world.graphic.GpuProgramParameters paramsParamValue = (params == 0L ? null : new com.earthview.world.graphic.GpuProgramParameters(CreatedWhenConstruct.CWC_NotToCreate));
		if(paramsParamValue != null)
		{
		paramsParamValue.setDelegate(true);
		paramsParamValue.setInstancePointer(new InstancePointer(params));
		IClassFactory paramsParamValueClassFactory = GlobalClassFactoryMap.get(paramsParamValue.getCppInstanceTypeName());
		if (paramsParamValueClassFactory != null)
		{
			paramsParamValue.setDelegate(true);
			paramsParamValue = (com.earthview.world.graphic.GpuProgramParameters)paramsParamValueClassFactory.create();
			paramsParamValue.setDelegate(true);
			paramsParamValue.setInstancePointer(new InstancePointer(params));
		}
		}
		updateLightCustomGpuParameter(constantEntryParamValue, paramsParamValue);
	}

	native private void updateLightCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(long pNativeObject, long constantEntry, long params);
	public void updateLightCustomGpuParameter(com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry constantEntry, com.earthview.world.graphic.GpuProgramParameters params)
	{
		long constantEntryParamValue = constantEntry.nativeObject.pointer;
		long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
		updateLightCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(this.nativeObject.pointer, constantEntryParamValue, paramsParamValue);
	}
	native private void updateLightCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_NoVirtual(long pNativeObject, long constantEntry, long params);
	protected void updateLightCustomGpuParameter_NoVirtual(com.earthview.world.graphic.GpuProgramParameters.AutoConstantEntry constantEntry, com.earthview.world.graphic.GpuProgramParameters params)
	{
		long constantEntryParamValue = constantEntry.nativeObject.pointer;
		long paramsParamValue = (params == null ? 0L : params.nativeObject.pointer);
		updateLightCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_NoVirtual(this.nativeObject.pointer, constantEntryParamValue, paramsParamValue);
	}

	protected  double getIsSoftShadowOpen_void_callback()
	{
		double returnValue = getIsSoftShadowOpen();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getIsSoftShadowOpen_void(long pNativeObject);
	public double getIsSoftShadowOpen()
	{
		double returnValue = getIsSoftShadowOpen_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getIsSoftShadowOpen_void_NoVirtual(long pNativeObject);
	protected double getIsSoftShadowOpen_NoVirtual()
	{
		double returnValue = getIsSoftShadowOpen_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getSoftShadowNearCilp_void_callback()
	{
		double returnValue = getSoftShadowNearCilp();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getSoftShadowNearCilp_void(long pNativeObject);
	public double getSoftShadowNearCilp()
	{
		double returnValue = getSoftShadowNearCilp_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSoftShadowNearCilp_void_NoVirtual(long pNativeObject);
	protected double getSoftShadowNearCilp_NoVirtual()
	{
		double returnValue = getSoftShadowNearCilp_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getSoftShadowFarCilp_void_callback()
	{
		double returnValue = getSoftShadowFarCilp();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getSoftShadowFarCilp_void(long pNativeObject);
	public double getSoftShadowFarCilp()
	{
		double returnValue = getSoftShadowFarCilp_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSoftShadowFarCilp_void_NoVirtual(long pNativeObject);
	protected double getSoftShadowFarCilp_NoVirtual()
	{
		double returnValue = getSoftShadowFarCilp_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getSoftShadowNearCilp_ev_uint8_callback(short index)
	{
		short indexParamValue = index;
		double returnValue = getSoftShadowNearCilp(indexParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getSoftShadowNearCilp_ev_uint8(long pNativeObject, short index);
	public double getSoftShadowNearCilp(short index)
	{
		short indexParamValue = index;
		double returnValue = getSoftShadowNearCilp_ev_uint8(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private double getSoftShadowNearCilp_ev_uint8_NoVirtual(long pNativeObject, short index);
	protected double getSoftShadowNearCilp_NoVirtual(short index)
	{
		short indexParamValue = index;
		double returnValue = getSoftShadowNearCilp_ev_uint8_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  double getSoftShadowFarCilp_ev_uint8_callback(short index)
	{
		short indexParamValue = index;
		double returnValue = getSoftShadowFarCilp(indexParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getSoftShadowFarCilp_ev_uint8(long pNativeObject, short index);
	public double getSoftShadowFarCilp(short index)
	{
		short indexParamValue = index;
		double returnValue = getSoftShadowFarCilp_ev_uint8(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private double getSoftShadowFarCilp_ev_uint8_NoVirtual(long pNativeObject, short index);
	protected double getSoftShadowFarCilp_NoVirtual(short index)
	{
		short indexParamValue = index;
		double returnValue = getSoftShadowFarCilp_ev_uint8_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  long getCascadeEyeSpaceDepth_void_callback()
	{
		com.earthview.world.spatial.math.Vector4 returnValue = getCascadeEyeSpaceDepth();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCascadeEyeSpaceDepth_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector4 getCascadeEyeSpaceDepth()
	{
		long returnValue = getCascadeEyeSpaceDepth_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private long getCascadeEyeSpaceDepth_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector4 getCascadeEyeSpaceDepth_NoVirtual()
	{
		long returnValue = getCascadeEyeSpaceDepth_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}

	protected  double getSoftShadowLightBleedPower_void_callback()
	{
		double returnValue = getSoftShadowLightBleedPower();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getSoftShadowLightBleedPower_void(long pNativeObject);
	public double getSoftShadowLightBleedPower()
	{
		double returnValue = getSoftShadowLightBleedPower_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSoftShadowLightBleedPower_void_NoVirtual(long pNativeObject);
	protected double getSoftShadowLightBleedPower_NoVirtual()
	{
		double returnValue = getSoftShadowLightBleedPower_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getSoftShadowDepthOffset_void_callback()
	{
		double returnValue = getSoftShadowDepthOffset();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getSoftShadowDepthOffset_void(long pNativeObject);
	public double getSoftShadowDepthOffset()
	{
		double returnValue = getSoftShadowDepthOffset_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSoftShadowDepthOffset_void_NoVirtual(long pNativeObject);
	protected double getSoftShadowDepthOffset_NoVirtual()
	{
		double returnValue = getSoftShadowDepthOffset_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getSoftShadowNormalFactor_void_callback()
	{
		double returnValue = getSoftShadowNormalFactor();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getSoftShadowNormalFactor_void(long pNativeObject);
	public double getSoftShadowNormalFactor()
	{
		double returnValue = getSoftShadowNormalFactor_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSoftShadowNormalFactor_void_NoVirtual(long pNativeObject);
	protected double getSoftShadowNormalFactor_NoVirtual()
	{
		double returnValue = getSoftShadowNormalFactor_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public AutoParamDataSource(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AutoParamDataSource(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_setCurrentRenderable_CRenderable(long pNativeObject, String method);
	native protected void register_setWorldMatrices_CMatrix4_ev_size_t(long pNativeObject, String method);
	native protected void register_setCurrentCamera_CCamera_ev_bool(long pNativeObject, String method);
	native protected void register_setCurrentLightList_LightList(long pNativeObject, String method);
	native protected void register_setTextureProjector_CFrustum_ev_size_t(long pNativeObject, String method);
	native protected void register_setCurrentRenderTarget_CRenderTarget(long pNativeObject, String method);
	native protected void register_setCurrentViewport_CViewport(long pNativeObject, String method);
	native protected void register_setShadowDirLightExtrusionDistance_Real(long pNativeObject, String method);
	native protected void register_setMainCamBoundsInfo_VisibleObjectsBoundsInfo(long pNativeObject, String method);
	native protected void register_setCurrentSceneManager_CSceneManager(long pNativeObject, String method);
	native protected void register_setCurrentPass_CPass(long pNativeObject, String method);
	native protected void register_getWorldMatrix_void(long pNativeObject, String method);
	native protected void register_getWorldMatrixArray_void(long pNativeObject, String method);
	native protected void register_getWorldMatrixCount_void(long pNativeObject, String method);
	native protected void register_getViewMatrix_void(long pNativeObject, String method);
	native protected void register_getViewProjectionMatrix_void(long pNativeObject, String method);
	native protected void register_getProjectionMatrix_void(long pNativeObject, String method);
	native protected void register_getWorldViewProjMatrix_void(long pNativeObject, String method);
	native protected void register_getWorldViewMatrix_void(long pNativeObject, String method);
	native protected void register_getInverseWorldMatrix_void(long pNativeObject, String method);
	native protected void register_getInverseWorldViewMatrix_void(long pNativeObject, String method);
	native protected void register_getInverseViewMatrix_void(long pNativeObject, String method);
	native protected void register_getInverseTransposeWorldMatrix_void(long pNativeObject, String method);
	native protected void register_getInverseTransposeWorldViewMatrix_void(long pNativeObject, String method);
	native protected void register_getCameraPosition_void(long pNativeObject, String method);
	native protected void register_getCameraRelativePosition_void(long pNativeObject, String method);
	native protected void register_getCameraPositionObjectSpace_void(long pNativeObject, String method);
	native protected void register_getLodCameraPosition_void(long pNativeObject, String method);
	native protected void register_getLodCameraPositionObjectSpace_void(long pNativeObject, String method);
	native protected void register_hasLightList_void(long pNativeObject, String method);
	native protected void register_getLightNumber_ev_size_t(long pNativeObject, String method);
	native protected void register_getLightCount_void(long pNativeObject, String method);
	native protected void register_getLightingEnabled_void(long pNativeObject, String method);
	native protected void register_getLightCastsShadows_ev_size_t(long pNativeObject, String method);
	native protected void register_getLightDiffuseColour_ev_size_t(long pNativeObject, String method);
	native protected void register_getLightSpecularColour_ev_size_t(long pNativeObject, String method);
	native protected void register_getLightDiffuseColourWithPower_ev_size_t(long pNativeObject, String method);
	native protected void register_getLightSpecularColourWithPower_ev_size_t(long pNativeObject, String method);
	native protected void register_getLightPosition_ev_size_t(long pNativeObject, String method);
	native protected void register_getLightAs4DVector_ev_size_t(long pNativeObject, String method);
	native protected void register_getLightDirection_ev_size_t(long pNativeObject, String method);
	native protected void register_getLightPowerScale_ev_size_t(long pNativeObject, String method);
	native protected void register_getLightAttenuation_ev_size_t(long pNativeObject, String method);
	native protected void register_getSpotlightParams_ev_size_t(long pNativeObject, String method);
	native protected void register_setAmbientLightColour_CColourValue(long pNativeObject, String method);
	native protected void register_getAmbientLightColour_void(long pNativeObject, String method);
	native protected void register_getSurfaceAmbientColour_void(long pNativeObject, String method);
	native protected void register_getSurfaceDiffuseColour_void(long pNativeObject, String method);
	native protected void register_getSurfaceSpecularColour_void(long pNativeObject, String method);
	native protected void register_getSurfaceEmissiveColour_void(long pNativeObject, String method);
	native protected void register_getSurfaceShininess_void(long pNativeObject, String method);
	native protected void register_getVertexColourTracking_void(long pNativeObject, String method);
	native protected void register_getDerivedAmbientLightColour_void(long pNativeObject, String method);
	native protected void register_getDerivedSceneColour_void(long pNativeObject, String method);
	native protected void register_setFog_FogMode_CColourValue_Real_Real_Real(long pNativeObject, String method);
	native protected void register_getFogColour_void(long pNativeObject, String method);
	native protected void register_getFogParams_void(long pNativeObject, String method);
	native protected void register_getTextureViewProjMatrix_ev_size_t(long pNativeObject, String method);
	native protected void register_getSoftShadowTextureViewProjMatrix_ev_size_t_ev_uint16(long pNativeObject, String method);
	native protected void register_getSoftShadowViewProjMatrix_ev_size_t_ev_uint16(long pNativeObject, String method);
	native protected void register_getTextureViewMatrix_ev_size_t(long pNativeObject, String method);
	native protected void register_getTextureWorldViewProjMatrix_ev_size_t(long pNativeObject, String method);
	native protected void register_getSpotlightViewProjMatrix_ev_size_t(long pNativeObject, String method);
	native protected void register_getSpotlightWorldViewProjMatrix_ev_size_t(long pNativeObject, String method);
	native protected void register_getTextureTransformMatrix_ev_size_t(long pNativeObject, String method);
	native protected void register_getCurrentRenderTarget_void(long pNativeObject, String method);
	native protected void register_getCurrentRenderable_void(long pNativeObject, String method);
	native protected void register_getCurrentPass_void(long pNativeObject, String method);
	native protected void register_getTextureSize_ev_size_t(long pNativeObject, String method);
	native protected void register_getInverseTextureSize_ev_size_t(long pNativeObject, String method);
	native protected void register_getPackedTextureSize_ev_size_t(long pNativeObject, String method);
	native protected void register_getShadowExtrusionDistance_void(long pNativeObject, String method);
	native protected void register_getSceneDepthRange_void(long pNativeObject, String method);
	native protected void register_getShadowSceneDepthRange_ev_size_t(long pNativeObject, String method);
	native protected void register_getShadowColour_void(long pNativeObject, String method);
	native protected void register_getShadowColorRRatio_void(long pNativeObject, String method);
	native protected void register_getShadowColorGRatio_void(long pNativeObject, String method);
	native protected void register_getShadowColorBRatio_void(long pNativeObject, String method);
	native protected void register_getInverseViewProjMatrix_void(long pNativeObject, String method);
	native protected void register_getInverseTransposeViewProjMatrix_void(long pNativeObject, String method);
	native protected void register_getTransposeViewProjMatrix_void(long pNativeObject, String method);
	native protected void register_getTransposeViewMatrix_void(long pNativeObject, String method);
	native protected void register_getInverseTransposeViewMatrix_void(long pNativeObject, String method);
	native protected void register_getTransposeProjectionMatrix_void(long pNativeObject, String method);
	native protected void register_getInverseProjectionMatrix_void(long pNativeObject, String method);
	native protected void register_getInverseTransposeProjectionMatrix_void(long pNativeObject, String method);
	native protected void register_getTransposeWorldViewProjMatrix_void(long pNativeObject, String method);
	native protected void register_getInverseWorldViewProjMatrix_void(long pNativeObject, String method);
	native protected void register_getInverseTransposeWorldViewProjMatrix_void(long pNativeObject, String method);
	native protected void register_getTransposeWorldViewMatrix_void(long pNativeObject, String method);
	native protected void register_getTransposeWorldMatrix_void(long pNativeObject, String method);
	native protected void register_getTime_void(long pNativeObject, String method);
	native protected void register_getTime_0_X_Real(long pNativeObject, String method);
	native protected void register_getCosTime_0_X_Real(long pNativeObject, String method);
	native protected void register_getSinTime_0_X_Real(long pNativeObject, String method);
	native protected void register_getTanTime_0_X_Real(long pNativeObject, String method);
	native protected void register_getTime_0_X_packed_Real(long pNativeObject, String method);
	native protected void register_getTime_0_1_Real(long pNativeObject, String method);
	native protected void register_getCosTime_0_1_Real(long pNativeObject, String method);
	native protected void register_getSinTime_0_1_Real(long pNativeObject, String method);
	native protected void register_getTanTime_0_1_Real(long pNativeObject, String method);
	native protected void register_getTime_0_1_packed_Real(long pNativeObject, String method);
	native protected void register_getTime_0_2Pi_Real(long pNativeObject, String method);
	native protected void register_getCosTime_0_2Pi_Real(long pNativeObject, String method);
	native protected void register_getSinTime_0_2Pi_Real(long pNativeObject, String method);
	native protected void register_getTanTime_0_2Pi_Real(long pNativeObject, String method);
	native protected void register_getTime_0_2Pi_packed_Real(long pNativeObject, String method);
	native protected void register_getFrameTime_void(long pNativeObject, String method);
	native protected void register_getFPS_void(long pNativeObject, String method);
	native protected void register_getViewportWidth_void(long pNativeObject, String method);
	native protected void register_getViewportHeight_void(long pNativeObject, String method);
	native protected void register_getInverseViewportWidth_void(long pNativeObject, String method);
	native protected void register_getInverseViewportHeight_void(long pNativeObject, String method);
	native protected void register_getViewDirection_void(long pNativeObject, String method);
	native protected void register_getViewSideVector_void(long pNativeObject, String method);
	native protected void register_getViewUpVector_void(long pNativeObject, String method);
	native protected void register_getFOV_void(long pNativeObject, String method);
	native protected void register_getNearClipDistance_void(long pNativeObject, String method);
	native protected void register_getFarClipDistance_void(long pNativeObject, String method);
	native protected void register_getPassNumber_void(long pNativeObject, String method);
	native protected void register_setPassNumber_ev_int32(long pNativeObject, String method);
	native protected void register_incPassNumber_void(long pNativeObject, String method);
	native protected void register_updateLightCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(long pNativeObject, String method);
	native protected void register_getIsSoftShadowOpen_void(long pNativeObject, String method);
	native protected void register_getSoftShadowNearCilp_void(long pNativeObject, String method);
	native protected void register_getSoftShadowFarCilp_void(long pNativeObject, String method);
	native protected void register_getSoftShadowNearCilp_ev_uint8(long pNativeObject, String method);
	native protected void register_getSoftShadowFarCilp_ev_uint8(long pNativeObject, String method);
	native protected void register_getCascadeEyeSpaceDepth_void(long pNativeObject, String method);
	native protected void register_getSoftShadowLightBleedPower_void(long pNativeObject, String method);
	native protected void register_getSoftShadowDepthOffset_void(long pNativeObject, String method);
	native protected void register_getSoftShadowNormalFactor_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setCurrentRenderable_CRenderable(this.nativeObject.pointer, "setCurrentRenderable_CRenderable_callback");
			this.register_setWorldMatrices_CMatrix4_ev_size_t(this.nativeObject.pointer, "setWorldMatrices_CMatrix4_ev_size_t_callback");
			this.register_setCurrentCamera_CCamera_ev_bool(this.nativeObject.pointer, "setCurrentCamera_CCamera_ev_bool_callback");
			this.register_setCurrentLightList_LightList(this.nativeObject.pointer, "setCurrentLightList_LightList_callback");
			this.register_setTextureProjector_CFrustum_ev_size_t(this.nativeObject.pointer, "setTextureProjector_CFrustum_ev_size_t_callback");
			this.register_setCurrentRenderTarget_CRenderTarget(this.nativeObject.pointer, "setCurrentRenderTarget_CRenderTarget_callback");
			this.register_setCurrentViewport_CViewport(this.nativeObject.pointer, "setCurrentViewport_CViewport_callback");
			this.register_setShadowDirLightExtrusionDistance_Real(this.nativeObject.pointer, "setShadowDirLightExtrusionDistance_Real_callback");
			this.register_setMainCamBoundsInfo_VisibleObjectsBoundsInfo(this.nativeObject.pointer, "setMainCamBoundsInfo_VisibleObjectsBoundsInfo_callback");
			this.register_setCurrentSceneManager_CSceneManager(this.nativeObject.pointer, "setCurrentSceneManager_CSceneManager_callback");
			this.register_setCurrentPass_CPass(this.nativeObject.pointer, "setCurrentPass_CPass_callback");
			this.register_getWorldMatrix_void(this.nativeObject.pointer, "getWorldMatrix_void_callback");
			this.register_getWorldMatrixArray_void(this.nativeObject.pointer, "getWorldMatrixArray_void_callback");
			this.register_getWorldMatrixCount_void(this.nativeObject.pointer, "getWorldMatrixCount_void_callback");
			this.register_getViewMatrix_void(this.nativeObject.pointer, "getViewMatrix_void_callback");
			this.register_getViewProjectionMatrix_void(this.nativeObject.pointer, "getViewProjectionMatrix_void_callback");
			this.register_getProjectionMatrix_void(this.nativeObject.pointer, "getProjectionMatrix_void_callback");
			this.register_getWorldViewProjMatrix_void(this.nativeObject.pointer, "getWorldViewProjMatrix_void_callback");
			this.register_getWorldViewMatrix_void(this.nativeObject.pointer, "getWorldViewMatrix_void_callback");
			this.register_getInverseWorldMatrix_void(this.nativeObject.pointer, "getInverseWorldMatrix_void_callback");
			this.register_getInverseWorldViewMatrix_void(this.nativeObject.pointer, "getInverseWorldViewMatrix_void_callback");
			this.register_getInverseViewMatrix_void(this.nativeObject.pointer, "getInverseViewMatrix_void_callback");
			this.register_getInverseTransposeWorldMatrix_void(this.nativeObject.pointer, "getInverseTransposeWorldMatrix_void_callback");
			this.register_getInverseTransposeWorldViewMatrix_void(this.nativeObject.pointer, "getInverseTransposeWorldViewMatrix_void_callback");
			this.register_getCameraPosition_void(this.nativeObject.pointer, "getCameraPosition_void_callback");
			this.register_getCameraRelativePosition_void(this.nativeObject.pointer, "getCameraRelativePosition_void_callback");
			this.register_getCameraPositionObjectSpace_void(this.nativeObject.pointer, "getCameraPositionObjectSpace_void_callback");
			this.register_getLodCameraPosition_void(this.nativeObject.pointer, "getLodCameraPosition_void_callback");
			this.register_getLodCameraPositionObjectSpace_void(this.nativeObject.pointer, "getLodCameraPositionObjectSpace_void_callback");
			this.register_hasLightList_void(this.nativeObject.pointer, "hasLightList_void_callback");
			this.register_getLightNumber_ev_size_t(this.nativeObject.pointer, "getLightNumber_ev_size_t_callback");
			this.register_getLightCount_void(this.nativeObject.pointer, "getLightCount_void_callback");
			this.register_getLightingEnabled_void(this.nativeObject.pointer, "getLightingEnabled_void_callback");
			this.register_getLightCastsShadows_ev_size_t(this.nativeObject.pointer, "getLightCastsShadows_ev_size_t_callback");
			this.register_getLightDiffuseColour_ev_size_t(this.nativeObject.pointer, "getLightDiffuseColour_ev_size_t_callback");
			this.register_getLightSpecularColour_ev_size_t(this.nativeObject.pointer, "getLightSpecularColour_ev_size_t_callback");
			this.register_getLightDiffuseColourWithPower_ev_size_t(this.nativeObject.pointer, "getLightDiffuseColourWithPower_ev_size_t_callback");
			this.register_getLightSpecularColourWithPower_ev_size_t(this.nativeObject.pointer, "getLightSpecularColourWithPower_ev_size_t_callback");
			this.register_getLightPosition_ev_size_t(this.nativeObject.pointer, "getLightPosition_ev_size_t_callback");
			this.register_getLightAs4DVector_ev_size_t(this.nativeObject.pointer, "getLightAs4DVector_ev_size_t_callback");
			this.register_getLightDirection_ev_size_t(this.nativeObject.pointer, "getLightDirection_ev_size_t_callback");
			this.register_getLightPowerScale_ev_size_t(this.nativeObject.pointer, "getLightPowerScale_ev_size_t_callback");
			this.register_getLightAttenuation_ev_size_t(this.nativeObject.pointer, "getLightAttenuation_ev_size_t_callback");
			this.register_getSpotlightParams_ev_size_t(this.nativeObject.pointer, "getSpotlightParams_ev_size_t_callback");
			this.register_setAmbientLightColour_CColourValue(this.nativeObject.pointer, "setAmbientLightColour_CColourValue_callback");
			this.register_getAmbientLightColour_void(this.nativeObject.pointer, "getAmbientLightColour_void_callback");
			this.register_getSurfaceAmbientColour_void(this.nativeObject.pointer, "getSurfaceAmbientColour_void_callback");
			this.register_getSurfaceDiffuseColour_void(this.nativeObject.pointer, "getSurfaceDiffuseColour_void_callback");
			this.register_getSurfaceSpecularColour_void(this.nativeObject.pointer, "getSurfaceSpecularColour_void_callback");
			this.register_getSurfaceEmissiveColour_void(this.nativeObject.pointer, "getSurfaceEmissiveColour_void_callback");
			this.register_getSurfaceShininess_void(this.nativeObject.pointer, "getSurfaceShininess_void_callback");
			this.register_getVertexColourTracking_void(this.nativeObject.pointer, "getVertexColourTracking_void_callback");
			this.register_getDerivedAmbientLightColour_void(this.nativeObject.pointer, "getDerivedAmbientLightColour_void_callback");
			this.register_getDerivedSceneColour_void(this.nativeObject.pointer, "getDerivedSceneColour_void_callback");
			this.register_setFog_FogMode_CColourValue_Real_Real_Real(this.nativeObject.pointer, "setFog_FogMode_CColourValue_Real_Real_Real_callback");
			this.register_getFogColour_void(this.nativeObject.pointer, "getFogColour_void_callback");
			this.register_getFogParams_void(this.nativeObject.pointer, "getFogParams_void_callback");
			this.register_getTextureViewProjMatrix_ev_size_t(this.nativeObject.pointer, "getTextureViewProjMatrix_ev_size_t_callback");
			this.register_getSoftShadowTextureViewProjMatrix_ev_size_t_ev_uint16(this.nativeObject.pointer, "getSoftShadowTextureViewProjMatrix_ev_size_t_ev_uint16_callback");
			this.register_getSoftShadowViewProjMatrix_ev_size_t_ev_uint16(this.nativeObject.pointer, "getSoftShadowViewProjMatrix_ev_size_t_ev_uint16_callback");
			this.register_getTextureViewMatrix_ev_size_t(this.nativeObject.pointer, "getTextureViewMatrix_ev_size_t_callback");
			this.register_getTextureWorldViewProjMatrix_ev_size_t(this.nativeObject.pointer, "getTextureWorldViewProjMatrix_ev_size_t_callback");
			this.register_getSpotlightViewProjMatrix_ev_size_t(this.nativeObject.pointer, "getSpotlightViewProjMatrix_ev_size_t_callback");
			this.register_getSpotlightWorldViewProjMatrix_ev_size_t(this.nativeObject.pointer, "getSpotlightWorldViewProjMatrix_ev_size_t_callback");
			this.register_getTextureTransformMatrix_ev_size_t(this.nativeObject.pointer, "getTextureTransformMatrix_ev_size_t_callback");
			this.register_getCurrentRenderTarget_void(this.nativeObject.pointer, "getCurrentRenderTarget_void_callback");
			this.register_getCurrentRenderable_void(this.nativeObject.pointer, "getCurrentRenderable_void_callback");
			this.register_getCurrentPass_void(this.nativeObject.pointer, "getCurrentPass_void_callback");
			this.register_getTextureSize_ev_size_t(this.nativeObject.pointer, "getTextureSize_ev_size_t_callback");
			this.register_getInverseTextureSize_ev_size_t(this.nativeObject.pointer, "getInverseTextureSize_ev_size_t_callback");
			this.register_getPackedTextureSize_ev_size_t(this.nativeObject.pointer, "getPackedTextureSize_ev_size_t_callback");
			this.register_getShadowExtrusionDistance_void(this.nativeObject.pointer, "getShadowExtrusionDistance_void_callback");
			this.register_getSceneDepthRange_void(this.nativeObject.pointer, "getSceneDepthRange_void_callback");
			this.register_getShadowSceneDepthRange_ev_size_t(this.nativeObject.pointer, "getShadowSceneDepthRange_ev_size_t_callback");
			this.register_getShadowColour_void(this.nativeObject.pointer, "getShadowColour_void_callback");
			this.register_getShadowColorRRatio_void(this.nativeObject.pointer, "getShadowColorRRatio_void_callback");
			this.register_getShadowColorGRatio_void(this.nativeObject.pointer, "getShadowColorGRatio_void_callback");
			this.register_getShadowColorBRatio_void(this.nativeObject.pointer, "getShadowColorBRatio_void_callback");
			this.register_getInverseViewProjMatrix_void(this.nativeObject.pointer, "getInverseViewProjMatrix_void_callback");
			this.register_getInverseTransposeViewProjMatrix_void(this.nativeObject.pointer, "getInverseTransposeViewProjMatrix_void_callback");
			this.register_getTransposeViewProjMatrix_void(this.nativeObject.pointer, "getTransposeViewProjMatrix_void_callback");
			this.register_getTransposeViewMatrix_void(this.nativeObject.pointer, "getTransposeViewMatrix_void_callback");
			this.register_getInverseTransposeViewMatrix_void(this.nativeObject.pointer, "getInverseTransposeViewMatrix_void_callback");
			this.register_getTransposeProjectionMatrix_void(this.nativeObject.pointer, "getTransposeProjectionMatrix_void_callback");
			this.register_getInverseProjectionMatrix_void(this.nativeObject.pointer, "getInverseProjectionMatrix_void_callback");
			this.register_getInverseTransposeProjectionMatrix_void(this.nativeObject.pointer, "getInverseTransposeProjectionMatrix_void_callback");
			this.register_getTransposeWorldViewProjMatrix_void(this.nativeObject.pointer, "getTransposeWorldViewProjMatrix_void_callback");
			this.register_getInverseWorldViewProjMatrix_void(this.nativeObject.pointer, "getInverseWorldViewProjMatrix_void_callback");
			this.register_getInverseTransposeWorldViewProjMatrix_void(this.nativeObject.pointer, "getInverseTransposeWorldViewProjMatrix_void_callback");
			this.register_getTransposeWorldViewMatrix_void(this.nativeObject.pointer, "getTransposeWorldViewMatrix_void_callback");
			this.register_getTransposeWorldMatrix_void(this.nativeObject.pointer, "getTransposeWorldMatrix_void_callback");
			this.register_getTime_void(this.nativeObject.pointer, "getTime_void_callback");
			this.register_getTime_0_X_Real(this.nativeObject.pointer, "getTime_0_X_Real_callback");
			this.register_getCosTime_0_X_Real(this.nativeObject.pointer, "getCosTime_0_X_Real_callback");
			this.register_getSinTime_0_X_Real(this.nativeObject.pointer, "getSinTime_0_X_Real_callback");
			this.register_getTanTime_0_X_Real(this.nativeObject.pointer, "getTanTime_0_X_Real_callback");
			this.register_getTime_0_X_packed_Real(this.nativeObject.pointer, "getTime_0_X_packed_Real_callback");
			this.register_getTime_0_1_Real(this.nativeObject.pointer, "getTime_0_1_Real_callback");
			this.register_getCosTime_0_1_Real(this.nativeObject.pointer, "getCosTime_0_1_Real_callback");
			this.register_getSinTime_0_1_Real(this.nativeObject.pointer, "getSinTime_0_1_Real_callback");
			this.register_getTanTime_0_1_Real(this.nativeObject.pointer, "getTanTime_0_1_Real_callback");
			this.register_getTime_0_1_packed_Real(this.nativeObject.pointer, "getTime_0_1_packed_Real_callback");
			this.register_getTime_0_2Pi_Real(this.nativeObject.pointer, "getTime_0_2Pi_Real_callback");
			this.register_getCosTime_0_2Pi_Real(this.nativeObject.pointer, "getCosTime_0_2Pi_Real_callback");
			this.register_getSinTime_0_2Pi_Real(this.nativeObject.pointer, "getSinTime_0_2Pi_Real_callback");
			this.register_getTanTime_0_2Pi_Real(this.nativeObject.pointer, "getTanTime_0_2Pi_Real_callback");
			this.register_getTime_0_2Pi_packed_Real(this.nativeObject.pointer, "getTime_0_2Pi_packed_Real_callback");
			this.register_getFrameTime_void(this.nativeObject.pointer, "getFrameTime_void_callback");
			this.register_getFPS_void(this.nativeObject.pointer, "getFPS_void_callback");
			this.register_getViewportWidth_void(this.nativeObject.pointer, "getViewportWidth_void_callback");
			this.register_getViewportHeight_void(this.nativeObject.pointer, "getViewportHeight_void_callback");
			this.register_getInverseViewportWidth_void(this.nativeObject.pointer, "getInverseViewportWidth_void_callback");
			this.register_getInverseViewportHeight_void(this.nativeObject.pointer, "getInverseViewportHeight_void_callback");
			this.register_getViewDirection_void(this.nativeObject.pointer, "getViewDirection_void_callback");
			this.register_getViewSideVector_void(this.nativeObject.pointer, "getViewSideVector_void_callback");
			this.register_getViewUpVector_void(this.nativeObject.pointer, "getViewUpVector_void_callback");
			this.register_getFOV_void(this.nativeObject.pointer, "getFOV_void_callback");
			this.register_getNearClipDistance_void(this.nativeObject.pointer, "getNearClipDistance_void_callback");
			this.register_getFarClipDistance_void(this.nativeObject.pointer, "getFarClipDistance_void_callback");
			this.register_getPassNumber_void(this.nativeObject.pointer, "getPassNumber_void_callback");
			this.register_setPassNumber_ev_int32(this.nativeObject.pointer, "setPassNumber_ev_int32_callback");
			this.register_incPassNumber_void(this.nativeObject.pointer, "incPassNumber_void_callback");
			this.register_updateLightCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters(this.nativeObject.pointer, "updateLightCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback");
			this.register_getIsSoftShadowOpen_void(this.nativeObject.pointer, "getIsSoftShadowOpen_void_callback");
			this.register_getSoftShadowNearCilp_void(this.nativeObject.pointer, "getSoftShadowNearCilp_void_callback");
			this.register_getSoftShadowFarCilp_void(this.nativeObject.pointer, "getSoftShadowFarCilp_void_callback");
			this.register_getSoftShadowNearCilp_ev_uint8(this.nativeObject.pointer, "getSoftShadowNearCilp_ev_uint8_callback");
			this.register_getSoftShadowFarCilp_ev_uint8(this.nativeObject.pointer, "getSoftShadowFarCilp_ev_uint8_callback");
			this.register_getCascadeEyeSpaceDepth_void(this.nativeObject.pointer, "getCascadeEyeSpaceDepth_void_callback");
			this.register_getSoftShadowLightBleedPower_void(this.nativeObject.pointer, "getSoftShadowLightBleedPower_void_callback");
			this.register_getSoftShadowDepthOffset_void(this.nativeObject.pointer, "getSoftShadowDepthOffset_void_callback");
			this.register_getSoftShadowNormalFactor_void(this.nativeObject.pointer, "getSoftShadowNormalFactor_void_callback");
		}
	}
	
	public static AutoParamDataSource fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AutoParamDataSource obj = null;
 		if(baseObj instanceof AutoParamDataSource)
		{
			obj = (AutoParamDataSource)baseObj;
		} else {
			obj = new AutoParamDataSource(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAutoParamDataSource");
			obj.increaseCast();
		}

		return obj;
	}
}
