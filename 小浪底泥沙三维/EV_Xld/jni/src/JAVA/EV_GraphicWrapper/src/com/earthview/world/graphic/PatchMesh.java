package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PatchMesh extends com.earthview.world.graphic.Mesh {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CPatchMesh", new PatchMeshClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCPatchMeshProxy", new PatchMeshClassFactory());
	}

	//// Constructor
	public PatchMesh(com.earthview.world.graphic.ResourceManager ref_creator, String name, ULongPointer handle, String group) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_creatorPtr = new BasePointer(ref_creator);
		list.add("ref_creator", ref_creatorPtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer handlePtr = new BasePointer(handle);
		list.add("handle", handlePtr.get());
		BasePointer groupPtr = new BasePointer(group);
		list.add("group", groupPtr.get());
		Create("JCPatchMeshProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.PatchMesh".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void update_void_size_t_size_t_size_t_size_t_VisibleSide(long pNativeObject, long controlPointBuffer, long width, long height, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel, int visibleSide);
	//// Update the mesh with new control points positions.
	public void update(VoidPointer controlPointBuffer, long width, long height, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel, com.earthview.world.graphic.PatchSurface.VisibleSide visibleSide)
	{
		long controlPointBufferParamValue = (controlPointBuffer == null ? 0L : controlPointBuffer.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		long uMaxSubdivisionLevelParamValue = uMaxSubdivisionLevel;
		long vMaxSubdivisionLevelParamValue = vMaxSubdivisionLevel;
		int visibleSideParamValue = visibleSide.getValue();
		update_void_size_t_size_t_size_t_size_t_VisibleSide(this.nativeObject.pointer, controlPointBufferParamValue, widthParamValue, heightParamValue, uMaxSubdivisionLevelParamValue, vMaxSubdivisionLevelParamValue, visibleSideParamValue);
	}
	native private void define_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage_Usage_ev_bool_ev_bool(long pNativeObject, long controlPointBuffer, long declaration, long width, long height, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel, int visibleSide, int vbUsage, int ibUsage, boolean vbUseShadow, boolean ibUseShadow);
	//// Define the patch, as defined in CMeshManager::createBezierPatch
	public void define(VoidPointer controlPointBuffer, com.earthview.world.graphic.VertexDeclaration declaration, long width, long height, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel, com.earthview.world.graphic.PatchSurface.VisibleSide visibleSide, com.earthview.world.graphic.HardwareBuffer.Usage vbUsage, com.earthview.world.graphic.HardwareBuffer.Usage ibUsage, boolean vbUseShadow, boolean ibUseShadow)
	{
		long controlPointBufferParamValue = (controlPointBuffer == null ? 0L : controlPointBuffer.nativeObject.pointer);
		long declarationParamValue = (declaration == null ? 0L : declaration.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		long uMaxSubdivisionLevelParamValue = uMaxSubdivisionLevel;
		long vMaxSubdivisionLevelParamValue = vMaxSubdivisionLevel;
		int visibleSideParamValue = visibleSide.getValue();
		int vbUsageParamValue = vbUsage.getValue();
		int ibUsageParamValue = ibUsage.getValue();
		boolean vbUseShadowParamValue = vbUseShadow;
		boolean ibUseShadowParamValue = ibUseShadow;
		define_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage_Usage_ev_bool_ev_bool(this.nativeObject.pointer, controlPointBufferParamValue, declarationParamValue, widthParamValue, heightParamValue, uMaxSubdivisionLevelParamValue, vMaxSubdivisionLevelParamValue, visibleSideParamValue, vbUsageParamValue, ibUsageParamValue, vbUseShadowParamValue, ibUseShadowParamValue);
	}
	native private void define_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage_Usage_ev_bool(long pNativeObject, long controlPointBuffer, long declaration, long width, long height, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel, int visibleSide, int vbUsage, int ibUsage, boolean vbUseShadow);
	public void define(VoidPointer controlPointBuffer, com.earthview.world.graphic.VertexDeclaration declaration, long width, long height, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel, com.earthview.world.graphic.PatchSurface.VisibleSide visibleSide, com.earthview.world.graphic.HardwareBuffer.Usage vbUsage, com.earthview.world.graphic.HardwareBuffer.Usage ibUsage, boolean vbUseShadow)
	{
		long controlPointBufferParamValue = (controlPointBuffer == null ? 0L : controlPointBuffer.nativeObject.pointer);
		long declarationParamValue = (declaration == null ? 0L : declaration.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		long uMaxSubdivisionLevelParamValue = uMaxSubdivisionLevel;
		long vMaxSubdivisionLevelParamValue = vMaxSubdivisionLevel;
		int visibleSideParamValue = visibleSide.getValue();
		int vbUsageParamValue = vbUsage.getValue();
		int ibUsageParamValue = ibUsage.getValue();
		boolean vbUseShadowParamValue = vbUseShadow;
		define_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage_Usage_ev_bool(this.nativeObject.pointer, controlPointBufferParamValue, declarationParamValue, widthParamValue, heightParamValue, uMaxSubdivisionLevelParamValue, vMaxSubdivisionLevelParamValue, visibleSideParamValue, vbUsageParamValue, ibUsageParamValue, vbUseShadowParamValue);
	}
	native private void define_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage_Usage(long pNativeObject, long controlPointBuffer, long declaration, long width, long height, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel, int visibleSide, int vbUsage, int ibUsage);
	public void define(VoidPointer controlPointBuffer, com.earthview.world.graphic.VertexDeclaration declaration, long width, long height, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel, com.earthview.world.graphic.PatchSurface.VisibleSide visibleSide, com.earthview.world.graphic.HardwareBuffer.Usage vbUsage, com.earthview.world.graphic.HardwareBuffer.Usage ibUsage)
	{
		long controlPointBufferParamValue = (controlPointBuffer == null ? 0L : controlPointBuffer.nativeObject.pointer);
		long declarationParamValue = (declaration == null ? 0L : declaration.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		long uMaxSubdivisionLevelParamValue = uMaxSubdivisionLevel;
		long vMaxSubdivisionLevelParamValue = vMaxSubdivisionLevel;
		int visibleSideParamValue = visibleSide.getValue();
		int vbUsageParamValue = vbUsage.getValue();
		int ibUsageParamValue = ibUsage.getValue();
		define_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage_Usage(this.nativeObject.pointer, controlPointBufferParamValue, declarationParamValue, widthParamValue, heightParamValue, uMaxSubdivisionLevelParamValue, vMaxSubdivisionLevelParamValue, visibleSideParamValue, vbUsageParamValue, ibUsageParamValue);
	}
	native private void define_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage(long pNativeObject, long controlPointBuffer, long declaration, long width, long height, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel, int visibleSide, int vbUsage);
	public void define(VoidPointer controlPointBuffer, com.earthview.world.graphic.VertexDeclaration declaration, long width, long height, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel, com.earthview.world.graphic.PatchSurface.VisibleSide visibleSide, com.earthview.world.graphic.HardwareBuffer.Usage vbUsage)
	{
		long controlPointBufferParamValue = (controlPointBuffer == null ? 0L : controlPointBuffer.nativeObject.pointer);
		long declarationParamValue = (declaration == null ? 0L : declaration.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		long uMaxSubdivisionLevelParamValue = uMaxSubdivisionLevel;
		long vMaxSubdivisionLevelParamValue = vMaxSubdivisionLevel;
		int visibleSideParamValue = visibleSide.getValue();
		int vbUsageParamValue = vbUsage.getValue();
		define_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage(this.nativeObject.pointer, controlPointBufferParamValue, declarationParamValue, widthParamValue, heightParamValue, uMaxSubdivisionLevelParamValue, vMaxSubdivisionLevelParamValue, visibleSideParamValue, vbUsageParamValue);
	}
	native private void define_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide(long pNativeObject, long controlPointBuffer, long declaration, long width, long height, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel, int visibleSide);
	public void define(VoidPointer controlPointBuffer, com.earthview.world.graphic.VertexDeclaration declaration, long width, long height, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel, com.earthview.world.graphic.PatchSurface.VisibleSide visibleSide)
	{
		long controlPointBufferParamValue = (controlPointBuffer == null ? 0L : controlPointBuffer.nativeObject.pointer);
		long declarationParamValue = (declaration == null ? 0L : declaration.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		long uMaxSubdivisionLevelParamValue = uMaxSubdivisionLevel;
		long vMaxSubdivisionLevelParamValue = vMaxSubdivisionLevel;
		int visibleSideParamValue = visibleSide.getValue();
		define_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide(this.nativeObject.pointer, controlPointBufferParamValue, declarationParamValue, widthParamValue, heightParamValue, uMaxSubdivisionLevelParamValue, vMaxSubdivisionLevelParamValue, visibleSideParamValue);
	}
	native private void define_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t(long pNativeObject, long controlPointBuffer, long declaration, long width, long height, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel);
	public void define(VoidPointer controlPointBuffer, com.earthview.world.graphic.VertexDeclaration declaration, long width, long height, long uMaxSubdivisionLevel, long vMaxSubdivisionLevel)
	{
		long controlPointBufferParamValue = (controlPointBuffer == null ? 0L : controlPointBuffer.nativeObject.pointer);
		long declarationParamValue = (declaration == null ? 0L : declaration.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		long uMaxSubdivisionLevelParamValue = uMaxSubdivisionLevel;
		long vMaxSubdivisionLevelParamValue = vMaxSubdivisionLevel;
		define_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t(this.nativeObject.pointer, controlPointBufferParamValue, declarationParamValue, widthParamValue, heightParamValue, uMaxSubdivisionLevelParamValue, vMaxSubdivisionLevelParamValue);
	}
	native private void define_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t(long pNativeObject, long controlPointBuffer, long declaration, long width, long height, long uMaxSubdivisionLevel);
	public void define(VoidPointer controlPointBuffer, com.earthview.world.graphic.VertexDeclaration declaration, long width, long height, long uMaxSubdivisionLevel)
	{
		long controlPointBufferParamValue = (controlPointBuffer == null ? 0L : controlPointBuffer.nativeObject.pointer);
		long declarationParamValue = (declaration == null ? 0L : declaration.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		long uMaxSubdivisionLevelParamValue = uMaxSubdivisionLevel;
		define_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t(this.nativeObject.pointer, controlPointBufferParamValue, declarationParamValue, widthParamValue, heightParamValue, uMaxSubdivisionLevelParamValue);
	}
	native private void define_void_CVertexDeclaration_ev_size_t_ev_size_t(long pNativeObject, long controlPointBuffer, long declaration, long width, long height);
	public void define(VoidPointer controlPointBuffer, com.earthview.world.graphic.VertexDeclaration declaration, long width, long height)
	{
		long controlPointBufferParamValue = (controlPointBuffer == null ? 0L : controlPointBuffer.nativeObject.pointer);
		long declarationParamValue = (declaration == null ? 0L : declaration.nativeObject.pointer);
		long widthParamValue = width;
		long heightParamValue = height;
		define_void_CVertexDeclaration_ev_size_t_ev_size_t(this.nativeObject.pointer, controlPointBufferParamValue, declarationParamValue, widthParamValue, heightParamValue);
	}
	native private void setSubdivision_Real(long pNativeObject, double factor);
	public void setSubdivision(double factor)
	{
		double factorParamValue = factor;
		setSubdivision_Real(this.nativeObject.pointer, factorParamValue);
	}
	native private void loadImpl_void(long pNativeObject);
	//// Overridden from CResource
	public void loadImpl()
	{
		loadImpl_void(this.nativeObject.pointer);
	}
	native private void loadImpl_void_NoVirtual(long pNativeObject);
	protected void loadImpl_NoVirtual()
	{
		loadImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void prepareImpl_void(long pNativeObject);
	//// Overridden from CResource - do nothing (no disk caching)
	public void prepareImpl()
	{
		prepareImpl_void(this.nativeObject.pointer);
	}
	native private void prepareImpl_void_NoVirtual(long pNativeObject);
	protected void prepareImpl_NoVirtual()
	{
		prepareImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	public PatchMesh(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PatchMesh(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 为该模型的顶点动画创建一个新的动画对象
	 * @param name 动画的名称
	 * @param length 动画的时长
	 */
	public com.earthview.world.graphic.Animation createAnimation(String name, double length)
	{
		return super.createAnimation_NoVirtual(name, length);
	}
	/**
	 * 获得已命名的顶点动画对象
	 * @param name 动画的名称
	 */
	public com.earthview.world.graphic.Animation getAnimation(String name)
	{
		return super.getAnimation_NoVirtual(name);
	}
	/**
	 * 访问已给名称的顶点动画对象，如果不存在返回null
	 * @param name 动画的名称
	 */
	public com.earthview.world.graphic.Animation _getAnimationImpl(String name)
	{
		return super._getAnimationImpl_NoVirtual(name);
	}
	/**
	 * 判断该模型是否包含已命名的顶点动画
	 * @param name 动画的名称
	 */
	public boolean hasAnimation(String name)
	{
		return super.hasAnimation_NoVirtual(name);
	}
	/**
	 * 从该模型中删除顶点动画
	 * @param name 动画的名称
	 */
	public void removeAnimation(String name)
	{
		super.removeAnimation_NoVirtual(name);
	}
	/**
	 * 获得该模型中变形动画的名称
	 * @param  
	 */
	public int getNumAnimations()
	{
		return super.getNumAnimations_NoVirtual();
	}
	/**
	 * 通过索引获得一个单独的变形动画
	 * @param index 索引值
	 */
	public com.earthview.world.graphic.Animation getAnimation(int index)
	{
		return super.getAnimation_NoVirtual(index);
	}
	/**
	 * 从该模型中删除所有的变形动画
	 * @param  
	 */
	public void removeAllAnimations()
	{
		super.removeAllAnimations_NoVirtual();
	}
	/**
	 * 获得该模型支持的顶点动画类型
	 * @param  
	 */
	public com.earthview.world.graphic.VertexAnimationType getSharedVertexDataAnimationType()
	{
		return super.getSharedVertexDataAnimationType_NoVirtual();
	}
	/**
	 * 加载前调用的函数
	 */
	public void preLoadImpl()
	{
		super.preLoadImpl_NoVirtual();
	}
	/**
	 * 加载后调用的函数
	 */
	public void postLoadImpl()
	{
		super.postLoadImpl_NoVirtual();
	}
	/**
	 * 卸载前调用的函数
	 */
	public void preUnloadImpl()
	{
		super.preUnloadImpl_NoVirtual();
	}
	/**
	 * 卸载后调用的函数
	 */
	public void postUnloadImpl()
	{
		super.postUnloadImpl_NoVirtual();
	}
	/**
	 * 准备函数的逆过程的实现
	 */
	public void unprepareImpl()
	{
		super.unprepareImpl_NoVirtual();
	}
	/**
	 * 卸载的实现
	 */
	public void unloadImpl()
	{
		super.unloadImpl_NoVirtual();
	}
	/**
	 * 计算资源所占内存的大小
	 */
	public long calculateSize()
	{
		return super.calculateSize_NoVirtual();
	}
	/**
	 * 准备(读取资源文件)
	 */
	public void prepare(boolean backgroundThread)
	{
		super.prepare_NoVirtual(backgroundThread);
	}
	public void prepare()
	{
		super.prepare_NoVirtual();
	}
	/**
	 * 加载
	 */
	public void load(boolean backgroundThread)
	{
		super.load_NoVirtual(backgroundThread);
	}
	public void load()
	{
		super.load_NoVirtual();
	}
	/**
	 * 重新加载
	 */
	public void reload()
	{
		super.reload_NoVirtual();
	}
	/**
	 * 是否可重新加载
	 */
	public boolean isReloadable()
	{
		return super.isReloadable_NoVirtual();
	}
	/**
	 * 是否手动加载
	 */
	public boolean isManuallyLoaded()
	{
		return super.isManuallyLoaded_NoVirtual();
	}
	/**
	 * 卸载
	 */
	public void unload()
	{
		super.unload_NoVirtual();
	}
	/**
	 * 获得资源大小
	 */
	public long getSize()
	{
		return super.getSize_NoVirtual();
	}
	/**
	 * 确保在使用
	 */
	public void touch()
	{
		super.touch_NoVirtual();
	}
	/**
	 * 获得资源名
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 获得资源句柄
	 */
	public ULongPointer getHandle()
	{
		return super.getHandle_NoVirtual();
	}
	/**
	 * 是否准备就绪
	 */
	public boolean isPrepared()
	{
		return super.isPrepared_NoVirtual();
	}
	/**
	 * 是否已加载
	 */
	public boolean isLoaded()
	{
		return super.isLoaded_NoVirtual();
	}
	/**
	 * 是否正在加载
	 */
	public boolean isLoading()
	{
		return super.isLoading_NoVirtual();
	}
	/**
	 * 获得加载状态
	 */
	public com.earthview.world.graphic.Resource.LoadingState getLoadingState()
	{
		return super.getLoadingState_NoVirtual();
	}
	/**
	 * 是否为后台加载
	 */
	public boolean isBackgroundLoaded()
	{
		return super.isBackgroundLoaded_NoVirtual();
	}
	/**
	 * 设置为后台加载
	 */
	public void setBackgroundLoaded(boolean bl)
	{
		super.setBackgroundLoaded_NoVirtual(bl);
	}
	public void escalateLoading()
	{
		super.escalateLoading_NoVirtual();
	}
	/**
	 * 添加监听
	 */
	public void addListener(com.earthview.world.graphic.Resource.ResourceListener ref_lis)
	{
		super.addListener_NoVirtual(ref_lis);
	}
	/**
	 * 移除监听
	 */
	public void removeListener(com.earthview.world.graphic.Resource.ResourceListener lis)
	{
		super.removeListener_NoVirtual(lis);
	}
	/**
	 * 获得组名
	 */
	public String getGroup()
	{
		return super.getGroup_NoVirtual();
	}
	/**
	 * 更换资源组
	 */
	public void changeGroupOwnership(String newGroup)
	{
		super.changeGroupOwnership_NoVirtual(newGroup);
	}
	/**
	 * 获得创建者(资源管理器)
	 */
	public com.earthview.world.graphic.ResourceManager getCreator()
	{
		return super.getCreator_NoVirtual();
	}
	public String getOrigin()
	{
		return super.getOrigin_NoVirtual();
	}
	//// Notify this resource of it's origin
	public void _notifyOrigin(String origin)
	{
		super._notifyOrigin_NoVirtual(origin);
	}
	public long getStateCount()
	{
		return super.getStateCount_NoVirtual();
	}
	/**
	 * 将状态置为脏
	 */
	public void _dirtyState()
	{
		super._dirtyState_NoVirtual();
	}
	/**
	 * 告知监听者加载完成
	 */
	public void _fireLoadingComplete(boolean wasBackgroundLoaded)
	{
		super._fireLoadingComplete_NoVirtual(wasBackgroundLoaded);
	}
	/**
	 * 告知监听者准备就绪
	 */
	public void _firePreparingComplete(boolean wasBackgroundLoaded)
	{
		super._firePreparingComplete_NoVirtual(wasBackgroundLoaded);
	}
	/**
	 * 告知监听者卸载完成
	 */
	public void _fireUnloadingComplete()
	{
		super._fireUnloadingComplete_NoVirtual();
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
	
	native protected void register_createAnimation_EVString_Real(long pNativeObject, String method);
	native protected void register_getAnimation_EVString(long pNativeObject, String method);
	native protected void register__getAnimationImpl_EVString(long pNativeObject, String method);
	native protected void register_hasAnimation_EVString(long pNativeObject, String method);
	native protected void register_removeAnimation_EVString(long pNativeObject, String method);
	native protected void register_getNumAnimations_void(long pNativeObject, String method);
	native protected void register_getAnimation_ev_uint16(long pNativeObject, String method);
	native protected void register_removeAllAnimations_void(long pNativeObject, String method);
	native protected void register_getSharedVertexDataAnimationType_void(long pNativeObject, String method);
	native protected void register_preLoadImpl_void(long pNativeObject, String method);
	native protected void register_postLoadImpl_void(long pNativeObject, String method);
	native protected void register_preUnloadImpl_void(long pNativeObject, String method);
	native protected void register_postUnloadImpl_void(long pNativeObject, String method);
	native protected void register_prepareImpl_void(long pNativeObject, String method);
	native protected void register_unprepareImpl_void(long pNativeObject, String method);
	native protected void register_loadImpl_void(long pNativeObject, String method);
	native protected void register_unloadImpl_void(long pNativeObject, String method);
	native protected void register_calculateSize_void(long pNativeObject, String method);
	native protected void register_prepare_ev_bool(long pNativeObject, String method);
	native protected void register_prepare_void(long pNativeObject, String method);
	native protected void register_load_ev_bool(long pNativeObject, String method);
	native protected void register_load_void(long pNativeObject, String method);
	native protected void register_reload_void(long pNativeObject, String method);
	native protected void register_isReloadable_void(long pNativeObject, String method);
	native protected void register_isManuallyLoaded_void(long pNativeObject, String method);
	native protected void register_unload_void(long pNativeObject, String method);
	native protected void register_getSize_void(long pNativeObject, String method);
	native protected void register_touch_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getHandle_void(long pNativeObject, String method);
	native protected void register_isPrepared_void(long pNativeObject, String method);
	native protected void register_isLoaded_void(long pNativeObject, String method);
	native protected void register_isLoading_void(long pNativeObject, String method);
	native protected void register_getLoadingState_void(long pNativeObject, String method);
	native protected void register_isBackgroundLoaded_void(long pNativeObject, String method);
	native protected void register_setBackgroundLoaded_ev_bool(long pNativeObject, String method);
	native protected void register_escalateLoading_void(long pNativeObject, String method);
	native protected void register_addListener_CResourceListener(long pNativeObject, String method);
	native protected void register_removeListener_CResourceListener(long pNativeObject, String method);
	native protected void register_getGroup_void(long pNativeObject, String method);
	native protected void register_changeGroupOwnership_EVString(long pNativeObject, String method);
	native protected void register_getCreator_void(long pNativeObject, String method);
	native protected void register_getOrigin_void(long pNativeObject, String method);
	native protected void register__notifyOrigin_EVString(long pNativeObject, String method);
	native protected void register_getStateCount_void(long pNativeObject, String method);
	native protected void register__dirtyState_void(long pNativeObject, String method);
	native protected void register__fireLoadingComplete_ev_bool(long pNativeObject, String method);
	native protected void register__firePreparingComplete_ev_bool(long pNativeObject, String method);
	native protected void register__fireUnloadingComplete_void(long pNativeObject, String method);
	native protected void register_setParameter_EVString_EVString(long pNativeObject, String method);
	native protected void register_setParameter_EVString_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_setParameterList_CommonStringPairList(long pNativeObject, String method);
	native protected void register_getParameter_EVString(long pNativeObject, String method);
	native protected void register_copyParametersTo_CStringInterface(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createAnimation_EVString_Real(this.nativeObject.pointer, "createAnimation_EVString_Real_callback");
			this.register_getAnimation_EVString(this.nativeObject.pointer, "getAnimation_EVString_callback");
			this.register__getAnimationImpl_EVString(this.nativeObject.pointer, "_getAnimationImpl_EVString_callback");
			this.register_hasAnimation_EVString(this.nativeObject.pointer, "hasAnimation_EVString_callback");
			this.register_removeAnimation_EVString(this.nativeObject.pointer, "removeAnimation_EVString_callback");
			this.register_getNumAnimations_void(this.nativeObject.pointer, "getNumAnimations_void_callback");
			this.register_getAnimation_ev_uint16(this.nativeObject.pointer, "getAnimation_ev_uint16_callback");
			this.register_removeAllAnimations_void(this.nativeObject.pointer, "removeAllAnimations_void_callback");
			this.register_getSharedVertexDataAnimationType_void(this.nativeObject.pointer, "getSharedVertexDataAnimationType_void_callback");
			this.register_preLoadImpl_void(this.nativeObject.pointer, "preLoadImpl_void_callback");
			this.register_postLoadImpl_void(this.nativeObject.pointer, "postLoadImpl_void_callback");
			this.register_preUnloadImpl_void(this.nativeObject.pointer, "preUnloadImpl_void_callback");
			this.register_postUnloadImpl_void(this.nativeObject.pointer, "postUnloadImpl_void_callback");
			this.register_prepareImpl_void(this.nativeObject.pointer, "prepareImpl_void_callback");
			this.register_unprepareImpl_void(this.nativeObject.pointer, "unprepareImpl_void_callback");
			this.register_loadImpl_void(this.nativeObject.pointer, "loadImpl_void_callback");
			this.register_unloadImpl_void(this.nativeObject.pointer, "unloadImpl_void_callback");
			this.register_calculateSize_void(this.nativeObject.pointer, "calculateSize_void_callback");
			this.register_prepare_ev_bool(this.nativeObject.pointer, "prepare_ev_bool_callback");
			this.register_prepare_void(this.nativeObject.pointer, "prepare_void_callback");
			this.register_load_ev_bool(this.nativeObject.pointer, "load_ev_bool_callback");
			this.register_load_void(this.nativeObject.pointer, "load_void_callback");
			this.register_reload_void(this.nativeObject.pointer, "reload_void_callback");
			this.register_isReloadable_void(this.nativeObject.pointer, "isReloadable_void_callback");
			this.register_isManuallyLoaded_void(this.nativeObject.pointer, "isManuallyLoaded_void_callback");
			this.register_unload_void(this.nativeObject.pointer, "unload_void_callback");
			this.register_getSize_void(this.nativeObject.pointer, "getSize_void_callback");
			this.register_touch_void(this.nativeObject.pointer, "touch_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getHandle_void(this.nativeObject.pointer, "getHandle_void_callback");
			this.register_isPrepared_void(this.nativeObject.pointer, "isPrepared_void_callback");
			this.register_isLoaded_void(this.nativeObject.pointer, "isLoaded_void_callback");
			this.register_isLoading_void(this.nativeObject.pointer, "isLoading_void_callback");
			this.register_getLoadingState_void(this.nativeObject.pointer, "getLoadingState_void_callback");
			this.register_isBackgroundLoaded_void(this.nativeObject.pointer, "isBackgroundLoaded_void_callback");
			this.register_setBackgroundLoaded_ev_bool(this.nativeObject.pointer, "setBackgroundLoaded_ev_bool_callback");
			this.register_escalateLoading_void(this.nativeObject.pointer, "escalateLoading_void_callback");
			this.register_addListener_CResourceListener(this.nativeObject.pointer, "addListener_CResourceListener_callback");
			this.register_removeListener_CResourceListener(this.nativeObject.pointer, "removeListener_CResourceListener_callback");
			this.register_getGroup_void(this.nativeObject.pointer, "getGroup_void_callback");
			this.register_changeGroupOwnership_EVString(this.nativeObject.pointer, "changeGroupOwnership_EVString_callback");
			this.register_getCreator_void(this.nativeObject.pointer, "getCreator_void_callback");
			this.register_getOrigin_void(this.nativeObject.pointer, "getOrigin_void_callback");
			this.register__notifyOrigin_EVString(this.nativeObject.pointer, "_notifyOrigin_EVString_callback");
			this.register_getStateCount_void(this.nativeObject.pointer, "getStateCount_void_callback");
			this.register__dirtyState_void(this.nativeObject.pointer, "_dirtyState_void_callback");
			this.register__fireLoadingComplete_ev_bool(this.nativeObject.pointer, "_fireLoadingComplete_ev_bool_callback");
			this.register__firePreparingComplete_ev_bool(this.nativeObject.pointer, "_firePreparingComplete_ev_bool_callback");
			this.register__fireUnloadingComplete_void(this.nativeObject.pointer, "_fireUnloadingComplete_void_callback");
			this.register_setParameter_EVString_EVString(this.nativeObject.pointer, "setParameter_EVString_EVString_callback");
			this.register_setParameter_EVString_ev_bool_ev_bool(this.nativeObject.pointer, "setParameter_EVString_ev_bool_ev_bool_callback");
			this.register_setParameterList_CommonStringPairList(this.nativeObject.pointer, "setParameterList_CommonStringPairList_callback");
			this.register_getParameter_EVString(this.nativeObject.pointer, "getParameter_EVString_callback");
			this.register_copyParametersTo_CStringInterface(this.nativeObject.pointer, "copyParametersTo_CStringInterface_callback");
		}
	}
	
	public static PatchMesh fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PatchMesh obj = null;
 		if(baseObj instanceof PatchMesh)
		{
			obj = (PatchMesh)baseObj;
		} else {
			obj = new PatchMesh(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPatchMesh");
			obj.increaseCast();
		}

		return obj;
	}
}
