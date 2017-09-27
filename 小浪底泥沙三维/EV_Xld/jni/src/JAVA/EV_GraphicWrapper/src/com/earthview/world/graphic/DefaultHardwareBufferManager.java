package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// CDefaultHardwareBufferManagerBase as a CSingleton
public class DefaultHardwareBufferManager extends com.earthview.world.graphic.HardwareBufferManager {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CDefaultHardwareBufferManager", new DefaultHardwareBufferManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCDefaultHardwareBufferManagerProxy", new DefaultHardwareBufferManagerClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public DefaultHardwareBufferManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCDefaultHardwareBufferManagerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.DefaultHardwareBufferManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private static long getSingleton_void();
	/// <summary>
	/// 单例（引用）
	/// </summary>
	/// <param =""></param>
	/// <returns>硬件缓存管理信息</returns>
	public static com.earthview.world.graphic.DefaultHardwareBufferManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.DefaultHardwareBufferManager __returnValue = new com.earthview.world.graphic.DefaultHardwareBufferManager(CreatedWhenConstruct.CWC_NotToCreate, "CDefaultHardwareBufferManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.DefaultHardwareBufferManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDefaultHardwareBufferManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	/// <summary>
	/// 单例（指针）
	/// </summary>
	/// <param =""></param>
	/// <returns>硬件缓存管理信息</returns>
	public static com.earthview.world.graphic.DefaultHardwareBufferManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.DefaultHardwareBufferManager __returnValue = new com.earthview.world.graphic.DefaultHardwareBufferManager(CreatedWhenConstruct.CWC_NotToCreate, "CDefaultHardwareBufferManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.DefaultHardwareBufferManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDefaultHardwareBufferManager");
		}
		return __returnValue;
	}
	public DefaultHardwareBufferManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DefaultHardwareBufferManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 销毁所有的声明
	 * @param  
	 */
	public void destroyAllDeclarations()
	{
		super.destroyAllDeclarations_NoVirtual();
	}
	/**
	 * 销毁所有的绑定
	 * @param  
	 */
	public void destroyAllBindings()
	{
		super.destroyAllBindings_NoVirtual();
	}
	/**
	 * 创建一个新的顶点声明内在方法
	 * @param  
	 * @return 顶点声明
	 */
	public com.earthview.world.graphic.VertexDeclaration createVertexDeclarationImpl()
	{
		return super.createVertexDeclarationImpl_NoVirtual();
	}
	/**
	 * 销毁一个新的顶点声明内在方法
	 * @param decl 顶点声明
	 */
	public void destroyVertexDeclarationImpl(com.earthview.world.graphic.VertexDeclaration decl)
	{
		super.destroyVertexDeclarationImpl_NoVirtual(decl);
	}
	/**
	 * 创建顶点缓存绑定内在方法
	 * @param  
	 * @return 顶点缓存绑定
	 */
	public com.earthview.world.graphic.VertexBufferBinding createVertexBufferBindingImpl()
	{
		return super.createVertexBufferBindingImpl_NoVirtual();
	}
	/**
	 * 销毁顶点缓存绑定内在方法
	 * @param binding 顶点缓存绑定
	 */
	public void destroyVertexBufferBindingImpl(com.earthview.world.graphic.VertexBufferBinding binding)
	{
		super.destroyVertexBufferBindingImpl_NoVirtual(binding);
	}
	/**
	 * 创建一个新缓存作为一个资源的复制
	 * @param source 资源
	 * @param usage 缓存用法
	 * @param useShadowBuffer 是否使用阴影缓存
	 * @return 顶点缓存的共享信息
	 */
	public com.earthview.world.graphic.HardwareVertexBufferSharedPtr makeBufferCopy(com.earthview.world.graphic.HardwareVertexBufferSharedPtr source, com.earthview.world.graphic.HardwareBuffer.Usage usage, boolean useShadowBuffer)
	{
		return super.makeBufferCopy_NoVirtual(source, usage, useShadowBuffer);
	}
	/**
	 * 创建硬件顶点缓存
	 * @param vertexSize 顶点尺寸大小
	 * @param numVerts 顶点编号
	 * @param usage 缓存使用方法
	 * @param useShadowBuffer 是否使用阴影缓存
	 * @return 顶点缓存的共享信息
	 */
	public com.earthview.world.graphic.HardwareVertexBufferSharedPtr createVertexBuffer(long vertexSize, long numVerts, com.earthview.world.graphic.HardwareBuffer.Usage usage, boolean useShadowBuffer)
	{
		return super.createVertexBuffer_NoVirtual(vertexSize, numVerts, usage, useShadowBuffer);
	}
	/**
	 * 创建硬件顶点缓存
	 * @param vertexSize 顶点尺寸大小
	 * @param numVerts 顶点编号
	 * @param usage 缓存使用方法
	 * @return 顶点缓存的共享信息
	 */
	public com.earthview.world.graphic.HardwareVertexBufferSharedPtr createVertexBuffer(long vertexSize, long numVerts, com.earthview.world.graphic.HardwareBuffer.Usage usage)
	{
		return super.createVertexBuffer_NoVirtual(vertexSize, numVerts, usage);
	}
	/**
	 * 创建硬件索引缓存
	 * @param itype 索引类型
	 * @param numVerts 索引编号
	 * @param usage 缓存使用方法
	 * @param useShadowBuffer 是否使用阴影缓存
	 * @return 索引缓存的共享信息
	 */
	public com.earthview.world.graphic.HardwareIndexBufferSharedPtr createIndexBuffer(com.earthview.world.graphic.HardwareIndexBuffer.IndexType itype, long numIndexes, com.earthview.world.graphic.HardwareBuffer.Usage usage, boolean useShadowBuffer)
	{
		return super.createIndexBuffer_NoVirtual(itype, numIndexes, usage, useShadowBuffer);
	}
	/**
	 * 创建硬件索引缓存
	 * @param itype 索引类型
	 * @param numVerts 索引编号
	 * @param usage 缓冲器使用方法
	 * @return 索引缓存的共享信息
	 */
	public com.earthview.world.graphic.HardwareIndexBufferSharedPtr createIndexBuffer(com.earthview.world.graphic.HardwareIndexBuffer.IndexType itype, long numIndexes, com.earthview.world.graphic.HardwareBuffer.Usage usage)
	{
		return super.createIndexBuffer_NoVirtual(itype, numIndexes, usage);
	}
	/**
	 * 创建渲染到顶点缓存
	 * @param  
	 * @return 渲染到顶点缓存的共享信息
	 */
	public com.earthview.world.graphic.RenderToVertexBufferSharedPtr createRenderToVertexBuffer()
	{
		return super.createRenderToVertexBuffer_NoVirtual();
	}
	/// <summary>
	/// 创建硬件顶点声明
	/// </summary>
	/// <param =""></param>
	/// <returns>顶点声明</returns>
	public com.earthview.world.graphic.VertexDeclaration createVertexDeclaration()
	{
		return super.createVertexDeclaration_NoVirtual();
	}
	/// <summary>
	/// 销毁硬件顶点声明
	/// </summary>
	/// <param ="decl">顶点声明</param>
	/// <returns></returns>
	public void destroyVertexDeclaration(com.earthview.world.graphic.VertexDeclaration decl)
	{
		super.destroyVertexDeclaration_NoVirtual(decl);
	}
	/// <summary>
	/// 创建硬件顶点缓存绑定
	/// </summary>
	/// <param =""></param>
	/// <returns>顶点缓存绑定</returns>
	public com.earthview.world.graphic.VertexBufferBinding createVertexBufferBinding()
	{
		return super.createVertexBufferBinding_NoVirtual();
	}
	/// <summary>
	/// 销毁硬件顶点缓存绑定
	/// </summary>
	/// <param ="binding">顶点缓存绑定</param>
	/// <returns></returns>
	public void destroyVertexBufferBinding(com.earthview.world.graphic.VertexBufferBinding binding)
	{
		super.destroyVertexBufferBinding_NoVirtual(binding);
	}
	/// <summary>
	/// 注册顶点缓存作为副本
	/// </summary>
	/// <param ="sourceBuffer">资源缓存</param>
	/// <param ="copy">复制对象</param>
	/// <returns></returns>
	public void registerVertexBufferSourceAndCopy(com.earthview.world.graphic.HardwareVertexBufferSharedPtr sourceBuffer, com.earthview.world.graphic.HardwareVertexBufferSharedPtr copy)
	{
		super.registerVertexBufferSourceAndCopy_NoVirtual(sourceBuffer, copy);
	}
	/// <summary>
	/// 分配顶点缓存副本
	/// </summary>
	/// <param ="sourceBuffer">资源缓存</param>
	/// <param ="licenseType">缓存许可类型</param>
	/// <param ="licensee">硬件缓存许可</param>
	/// <param ="copyData">是否有副本数据</param>
	/// <returns>顶点缓存的共享信息</returns>
	public com.earthview.world.graphic.HardwareVertexBufferSharedPtr allocateVertexBufferCopy(com.earthview.world.graphic.HardwareVertexBufferSharedPtr sourceBuffer, com.earthview.world.graphic.HardwareBufferManagerBase.BufferLicenseType licenseType, com.earthview.world.graphic.HardwareBufferLicensee licensee, boolean copyData)
	{
		return super.allocateVertexBufferCopy_NoVirtual(sourceBuffer, licenseType, licensee, copyData);
	}
	/// <summary>
	/// 分配顶点缓存副本
	/// </summary>
	/// <param ="sourceBuffer">资源缓存</param>
	/// <param ="licenseType">缓存许可类型</param>
	/// <param ="licensee">硬件缓存许可</param>
	/// <returns>顶点缓存的共享信息</returns>
	public com.earthview.world.graphic.HardwareVertexBufferSharedPtr allocateVertexBufferCopy(com.earthview.world.graphic.HardwareVertexBufferSharedPtr sourceBuffer, com.earthview.world.graphic.HardwareBufferManagerBase.BufferLicenseType licenseType, com.earthview.world.graphic.HardwareBufferLicensee licensee)
	{
		return super.allocateVertexBufferCopy_NoVirtual(sourceBuffer, licenseType, licensee);
	}
	/// <summary>
	/// 释放顶点缓存副本
	/// </summary>
	/// <param ="bufferCopy">缓存副本</param>
	/// <returns></returns>
	public void releaseVertexBufferCopy(com.earthview.world.graphic.HardwareVertexBufferSharedPtr bufferCopy)
	{
		super.releaseVertexBufferCopy_NoVirtual(bufferCopy);
	}
	public void touchVertexBufferCopy(com.earthview.world.graphic.HardwareVertexBufferSharedPtr bufferCopy)
	{
		super.touchVertexBufferCopy_NoVirtual(bufferCopy);
	}
	/// <summary>
	/// 释放未使用的缓存副本
	/// </summary>
	/// <param =""></param>
	/// <returns></returns>
	public void _freeUnusedBufferCopies()
	{
		super._freeUnusedBufferCopies_NoVirtual();
	}
	///virtual void _releaseBufferCopies(ev_bool forceFreeUnused = false);
	/// <summary>
	/// 释放缓存副本
	/// </summary>
	/// <param ="forceFreeUnused">是否是强制释放未使用的</param>
	/// <returns></returns>
	public void _releaseBufferCopies(boolean forceFreeUnused)
	{
		super._releaseBufferCopies_NoVirtual(forceFreeUnused);
	}
	/// <summary>
	/// 释放缓存副本
	/// </summary>
	/// <param =""></param>
	/// <returns></returns>
	public void _releaseBufferCopies()
	{
		super._releaseBufferCopies_NoVirtual();
	}
	/// <summary>
	/// 强制释放缓存副本
	/// </summary>
	/// <param ="sourceBuffer">资源缓存</param>
	/// <returns></returns>
	public void _forceReleaseBufferCopies(com.earthview.world.graphic.HardwareVertexBufferSharedPtr sourceBuffer)
	{
		super._forceReleaseBufferCopies_NoVirtual(sourceBuffer);
	}
	/// <summary>
	/// 强制释放缓存副本
	/// </summary>
	/// <param ="sourceBuffer">资源缓存（顶点缓存）</param>
	/// <returns></returns>
	public void _forceReleaseBufferCopies(com.earthview.world.graphic.HardwareVertexBuffer sourceBuffer)
	{
		super._forceReleaseBufferCopies_NoVirtual(sourceBuffer);
	}
	
	native protected void register_destroyAllDeclarations_void(long pNativeObject, String method);
	native protected void register_destroyAllBindings_void(long pNativeObject, String method);
	native protected void register_createVertexDeclarationImpl_void(long pNativeObject, String method);
	native protected void register_destroyVertexDeclarationImpl_CVertexDeclaration(long pNativeObject, String method);
	native protected void register_createVertexBufferBindingImpl_void(long pNativeObject, String method);
	native protected void register_destroyVertexBufferBindingImpl_CVertexBufferBinding(long pNativeObject, String method);
	native protected void register_makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool(long pNativeObject, String method);
	native protected void register_createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool(long pNativeObject, String method);
	native protected void register_createVertexBuffer_ev_size_t_ev_size_t_Usage(long pNativeObject, String method);
	native protected void register_createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool(long pNativeObject, String method);
	native protected void register_createIndexBuffer_IndexType_ev_size_t_Usage(long pNativeObject, String method);
	native protected void register_createRenderToVertexBuffer_void(long pNativeObject, String method);
	native protected void register_createVertexDeclaration_void(long pNativeObject, String method);
	native protected void register_destroyVertexDeclaration_CVertexDeclaration(long pNativeObject, String method);
	native protected void register_createVertexBufferBinding_void(long pNativeObject, String method);
	native protected void register_destroyVertexBufferBinding_CVertexBufferBinding(long pNativeObject, String method);
	native protected void register_registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(long pNativeObject, String method);
	native protected void register_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(long pNativeObject, String method);
	native protected void register_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(long pNativeObject, String method);
	native protected void register_releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr(long pNativeObject, String method);
	native protected void register_touchVertexBufferCopy_CHardwareVertexBufferSharedPtr(long pNativeObject, String method);
	native protected void register__freeUnusedBufferCopies_void(long pNativeObject, String method);
	native protected void register__releaseBufferCopies_ev_bool(long pNativeObject, String method);
	native protected void register__releaseBufferCopies_void(long pNativeObject, String method);
	native protected void register__forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr(long pNativeObject, String method);
	native protected void register__forceReleaseBufferCopies_CHardwareVertexBuffer(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_destroyAllDeclarations_void(this.nativeObject.pointer, "destroyAllDeclarations_void_callback");
			this.register_destroyAllBindings_void(this.nativeObject.pointer, "destroyAllBindings_void_callback");
			this.register_createVertexDeclarationImpl_void(this.nativeObject.pointer, "createVertexDeclarationImpl_void_callback");
			this.register_destroyVertexDeclarationImpl_CVertexDeclaration(this.nativeObject.pointer, "destroyVertexDeclarationImpl_CVertexDeclaration_callback");
			this.register_createVertexBufferBindingImpl_void(this.nativeObject.pointer, "createVertexBufferBindingImpl_void_callback");
			this.register_destroyVertexBufferBindingImpl_CVertexBufferBinding(this.nativeObject.pointer, "destroyVertexBufferBindingImpl_CVertexBufferBinding_callback");
			this.register_makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool(this.nativeObject.pointer, "makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback");
			this.register_createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool(this.nativeObject.pointer, "createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback");
			this.register_createVertexBuffer_ev_size_t_ev_size_t_Usage(this.nativeObject.pointer, "createVertexBuffer_ev_size_t_ev_size_t_Usage_callback");
			this.register_createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool(this.nativeObject.pointer, "createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback");
			this.register_createIndexBuffer_IndexType_ev_size_t_Usage(this.nativeObject.pointer, "createIndexBuffer_IndexType_ev_size_t_Usage_callback");
			this.register_createRenderToVertexBuffer_void(this.nativeObject.pointer, "createRenderToVertexBuffer_void_callback");
			this.register_createVertexDeclaration_void(this.nativeObject.pointer, "createVertexDeclaration_void_callback");
			this.register_destroyVertexDeclaration_CVertexDeclaration(this.nativeObject.pointer, "destroyVertexDeclaration_CVertexDeclaration_callback");
			this.register_createVertexBufferBinding_void(this.nativeObject.pointer, "createVertexBufferBinding_void_callback");
			this.register_destroyVertexBufferBinding_CVertexBufferBinding(this.nativeObject.pointer, "destroyVertexBufferBinding_CVertexBufferBinding_callback");
			this.register_registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(this.nativeObject.pointer, "registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback");
			this.register_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(this.nativeObject.pointer, "allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback");
			this.register_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(this.nativeObject.pointer, "allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback");
			this.register_releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr(this.nativeObject.pointer, "releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback");
			this.register_touchVertexBufferCopy_CHardwareVertexBufferSharedPtr(this.nativeObject.pointer, "touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback");
			this.register__freeUnusedBufferCopies_void(this.nativeObject.pointer, "_freeUnusedBufferCopies_void_callback");
			this.register__releaseBufferCopies_ev_bool(this.nativeObject.pointer, "_releaseBufferCopies_ev_bool_callback");
			this.register__releaseBufferCopies_void(this.nativeObject.pointer, "_releaseBufferCopies_void_callback");
			this.register__forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr(this.nativeObject.pointer, "_forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback");
			this.register__forceReleaseBufferCopies_CHardwareVertexBuffer(this.nativeObject.pointer, "_forceReleaseBufferCopies_CHardwareVertexBuffer_callback");
		}
	}
	
	public static DefaultHardwareBufferManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DefaultHardwareBufferManager obj = null;
 		if(baseObj instanceof DefaultHardwareBufferManager)
		{
			obj = (DefaultHardwareBufferManager)baseObj;
		} else {
			obj = new DefaultHardwareBufferManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDefaultHardwareBufferManager");
			obj.increaseCast();
		}

		return obj;
	}
}
