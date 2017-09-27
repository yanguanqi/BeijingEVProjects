package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HardwareBufferManager extends com.earthview.world.graphic.HardwareBufferManagerBase {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CHardwareBufferManager", new HardwareBufferManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCHardwareBufferManagerProxy", new HardwareBufferManagerClassFactory());
	}

	/**
	 * 构造函数
	 * @param imp 硬件缓存管理基础
	 */
	public HardwareBufferManager(com.earthview.world.graphic.HardwareBufferManagerBase ref_imp) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_impPtr = new BasePointer(ref_imp);
		list.add("ref_imp", ref_impPtr.get());
		Create("JCHardwareBufferManagerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.HardwareBufferManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool(long pNativeObject, long vertexSize, long numVerts, int usage, boolean useShadowBuffer);
	/**
	 * 创建顶点缓存
	 * @param vertexSize 顶点大小
	 * @param numVerts 顶点编号
	 * @param usage 缓存方式
	 * @param useShadowBuffer 是否使用阴影缓存
	 * @return 硬件顶点缓存共享信息
	 */
	public com.earthview.world.graphic.HardwareVertexBufferSharedPtr createVertexBuffer(long vertexSize, long numVerts, com.earthview.world.graphic.HardwareBuffer.Usage usage, boolean useShadowBuffer)
	{
		long vertexSizeParamValue = vertexSize;
		long numVertsParamValue = numVerts;
		int usageParamValue = usage.getValue();
		boolean useShadowBufferParamValue = useShadowBuffer;
		long returnValue = createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool(this.nativeObject.pointer, vertexSizeParamValue, numVertsParamValue, usageParamValue, useShadowBufferParamValue);
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
		}
		return __returnValue;
	}
	native private long createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_NoVirtual(long pNativeObject, long vertexSize, long numVerts, int usage, boolean useShadowBuffer);
	protected com.earthview.world.graphic.HardwareVertexBufferSharedPtr createVertexBuffer_NoVirtual(long vertexSize, long numVerts, com.earthview.world.graphic.HardwareBuffer.Usage usage, boolean useShadowBuffer)
	{
		long vertexSizeParamValue = vertexSize;
		long numVertsParamValue = numVerts;
		int usageParamValue = usage.getValue();
		boolean useShadowBufferParamValue = useShadowBuffer;
		long returnValue = createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_NoVirtual(this.nativeObject.pointer, vertexSizeParamValue, numVertsParamValue, usageParamValue, useShadowBufferParamValue);
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
		}
		return __returnValue;
	}

	native private long createVertexBuffer_ev_size_t_ev_size_t_Usage(long pNativeObject, long vertexSize, long numVerts, int usage);
	/**
	 * 创建顶点缓存
	 * @param vertexSize 顶点大小
	 * @param numVerts 顶点编号
	 * @param usage 缓存方式
	 * @return 硬件顶点缓存共享信息
	 */
	public com.earthview.world.graphic.HardwareVertexBufferSharedPtr createVertexBuffer(long vertexSize, long numVerts, com.earthview.world.graphic.HardwareBuffer.Usage usage)
	{
		long vertexSizeParamValue = vertexSize;
		long numVertsParamValue = numVerts;
		int usageParamValue = usage.getValue();
		long returnValue = createVertexBuffer_ev_size_t_ev_size_t_Usage(this.nativeObject.pointer, vertexSizeParamValue, numVertsParamValue, usageParamValue);
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
		}
		return __returnValue;
	}
	native private long createVertexBuffer_ev_size_t_ev_size_t_Usage_NoVirtual(long pNativeObject, long vertexSize, long numVerts, int usage);
	protected com.earthview.world.graphic.HardwareVertexBufferSharedPtr createVertexBuffer_NoVirtual(long vertexSize, long numVerts, com.earthview.world.graphic.HardwareBuffer.Usage usage)
	{
		long vertexSizeParamValue = vertexSize;
		long numVertsParamValue = numVerts;
		int usageParamValue = usage.getValue();
		long returnValue = createVertexBuffer_ev_size_t_ev_size_t_Usage_NoVirtual(this.nativeObject.pointer, vertexSizeParamValue, numVertsParamValue, usageParamValue);
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
		}
		return __returnValue;
	}

	native private long createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool(long pNativeObject, int itype, long numIndexes, int usage, boolean useShadowBuffer);
	/**
	 * 创建索引6缓存
	 * @param vertexSize 顶点大小
	 * @param numVerts 顶点编号
	 * @param usage 缓存方式
	 * @param useShadowBuffer 是否使用阴影缓存
	 * @return 硬件索引缓存共享信息
	 */
	public com.earthview.world.graphic.HardwareIndexBufferSharedPtr createIndexBuffer(com.earthview.world.graphic.HardwareIndexBuffer.IndexType itype, long numIndexes, com.earthview.world.graphic.HardwareBuffer.Usage usage, boolean useShadowBuffer)
	{
		int itypeParamValue = itype.getValue();
		long numIndexesParamValue = numIndexes;
		int usageParamValue = usage.getValue();
		boolean useShadowBufferParamValue = useShadowBuffer;
		long returnValue = createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool(this.nativeObject.pointer, itypeParamValue, numIndexesParamValue, usageParamValue, useShadowBufferParamValue);
		com.earthview.world.graphic.HardwareIndexBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwareIndexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CHardwareIndexBufferSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwareIndexBufferSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CHardwareIndexBufferSharedPtr");
		}
		return __returnValue;
	}
	native private long createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_NoVirtual(long pNativeObject, int itype, long numIndexes, int usage, boolean useShadowBuffer);
	protected com.earthview.world.graphic.HardwareIndexBufferSharedPtr createIndexBuffer_NoVirtual(com.earthview.world.graphic.HardwareIndexBuffer.IndexType itype, long numIndexes, com.earthview.world.graphic.HardwareBuffer.Usage usage, boolean useShadowBuffer)
	{
		int itypeParamValue = itype.getValue();
		long numIndexesParamValue = numIndexes;
		int usageParamValue = usage.getValue();
		boolean useShadowBufferParamValue = useShadowBuffer;
		long returnValue = createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_NoVirtual(this.nativeObject.pointer, itypeParamValue, numIndexesParamValue, usageParamValue, useShadowBufferParamValue);
		com.earthview.world.graphic.HardwareIndexBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwareIndexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CHardwareIndexBufferSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwareIndexBufferSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CHardwareIndexBufferSharedPtr");
		}
		return __returnValue;
	}

	native private long createIndexBuffer_IndexType_ev_size_t_Usage(long pNativeObject, int itype, long numIndexes, int usage);
	/**
	 * 创建顶点缓存
	 * @param vertexSize 顶点大小
	 * @param numVerts 顶点编号
	 * @param usage 缓存方式
	 * @return 硬件索引缓存共享信息
	 */
	public com.earthview.world.graphic.HardwareIndexBufferSharedPtr createIndexBuffer(com.earthview.world.graphic.HardwareIndexBuffer.IndexType itype, long numIndexes, com.earthview.world.graphic.HardwareBuffer.Usage usage)
	{
		int itypeParamValue = itype.getValue();
		long numIndexesParamValue = numIndexes;
		int usageParamValue = usage.getValue();
		long returnValue = createIndexBuffer_IndexType_ev_size_t_Usage(this.nativeObject.pointer, itypeParamValue, numIndexesParamValue, usageParamValue);
		com.earthview.world.graphic.HardwareIndexBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwareIndexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CHardwareIndexBufferSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwareIndexBufferSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CHardwareIndexBufferSharedPtr");
		}
		return __returnValue;
	}
	native private long createIndexBuffer_IndexType_ev_size_t_Usage_NoVirtual(long pNativeObject, int itype, long numIndexes, int usage);
	protected com.earthview.world.graphic.HardwareIndexBufferSharedPtr createIndexBuffer_NoVirtual(com.earthview.world.graphic.HardwareIndexBuffer.IndexType itype, long numIndexes, com.earthview.world.graphic.HardwareBuffer.Usage usage)
	{
		int itypeParamValue = itype.getValue();
		long numIndexesParamValue = numIndexes;
		int usageParamValue = usage.getValue();
		long returnValue = createIndexBuffer_IndexType_ev_size_t_Usage_NoVirtual(this.nativeObject.pointer, itypeParamValue, numIndexesParamValue, usageParamValue);
		com.earthview.world.graphic.HardwareIndexBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwareIndexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CHardwareIndexBufferSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwareIndexBufferSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CHardwareIndexBufferSharedPtr");
		}
		return __returnValue;
	}

	native private long createRenderToVertexBuffer_void(long pNativeObject);
	/**
	 * 创建渲染到顶点缓存
	 * @param  
	 * @return 渲染到顶点缓存共享信息
	 */
	public com.earthview.world.graphic.RenderToVertexBufferSharedPtr createRenderToVertexBuffer()
	{
		long returnValue = createRenderToVertexBuffer_void(this.nativeObject.pointer);
		com.earthview.world.graphic.RenderToVertexBufferSharedPtr __returnValue = new com.earthview.world.graphic.RenderToVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "RenderToVertexBufferSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderToVertexBufferSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "RenderToVertexBufferSharedPtr");
		}
		return __returnValue;
	}
	native private long createRenderToVertexBuffer_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.RenderToVertexBufferSharedPtr createRenderToVertexBuffer_NoVirtual()
	{
		long returnValue = createRenderToVertexBuffer_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.RenderToVertexBufferSharedPtr __returnValue = new com.earthview.world.graphic.RenderToVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "RenderToVertexBufferSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderToVertexBufferSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "RenderToVertexBufferSharedPtr");
		}
		return __returnValue;
	}

	native private long createVertexDeclaration_void(long pNativeObject);
	/**
	 * 创建顶点声明
	 * @param  
	 * @return 顶点声明信息
	 */
	public com.earthview.world.graphic.VertexDeclaration createVertexDeclaration()
	{
		long returnValue = createVertexDeclaration_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexDeclaration __returnValue = new com.earthview.world.graphic.VertexDeclaration(CreatedWhenConstruct.CWC_NotToCreate, "CVertexDeclaration");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexDeclaration)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexDeclaration");
		}
		return __returnValue;
	}
	native private long createVertexDeclaration_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.VertexDeclaration createVertexDeclaration_NoVirtual()
	{
		long returnValue = createVertexDeclaration_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexDeclaration __returnValue = new com.earthview.world.graphic.VertexDeclaration(CreatedWhenConstruct.CWC_NotToCreate, "CVertexDeclaration");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexDeclaration)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexDeclaration");
		}
		return __returnValue;
	}

	native private void destroyVertexDeclaration_CVertexDeclaration(long pNativeObject, long decl);
	/**
	 * 销毁顶点声明
	 * @param decl 顶点声明
	 */
	public void destroyVertexDeclaration(com.earthview.world.graphic.VertexDeclaration decl)
	{
		long declParamValue = (decl == null ? 0L : decl.nativeObject.pointer);
		destroyVertexDeclaration_CVertexDeclaration(this.nativeObject.pointer, declParamValue);
	}
	native private void destroyVertexDeclaration_CVertexDeclaration_NoVirtual(long pNativeObject, long decl);
	protected void destroyVertexDeclaration_NoVirtual(com.earthview.world.graphic.VertexDeclaration decl)
	{
		long declParamValue = (decl == null ? 0L : decl.nativeObject.pointer);
		destroyVertexDeclaration_CVertexDeclaration_NoVirtual(this.nativeObject.pointer, declParamValue);
	}

	native private long createVertexBufferBinding_void(long pNativeObject);
	/**
	 * 创建顶点缓存绑定
	 * @param  
	 * @return 顶点声明绑定信息
	 */
	public com.earthview.world.graphic.VertexBufferBinding createVertexBufferBinding()
	{
		long returnValue = createVertexBufferBinding_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexBufferBinding __returnValue = new com.earthview.world.graphic.VertexBufferBinding(CreatedWhenConstruct.CWC_NotToCreate, "CVertexBufferBinding");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexBufferBinding)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexBufferBinding");
		}
		return __returnValue;
	}
	native private long createVertexBufferBinding_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.VertexBufferBinding createVertexBufferBinding_NoVirtual()
	{
		long returnValue = createVertexBufferBinding_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexBufferBinding __returnValue = new com.earthview.world.graphic.VertexBufferBinding(CreatedWhenConstruct.CWC_NotToCreate, "CVertexBufferBinding");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexBufferBinding)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexBufferBinding");
		}
		return __returnValue;
	}

	native private void destroyVertexBufferBinding_CVertexBufferBinding(long pNativeObject, long binding);
	/**
	 * 销毁顶点缓存绑定
	 * @param binding 顶点缓存绑定信息
	 */
	public void destroyVertexBufferBinding(com.earthview.world.graphic.VertexBufferBinding binding)
	{
		long bindingParamValue = (binding == null ? 0L : binding.nativeObject.pointer);
		destroyVertexBufferBinding_CVertexBufferBinding(this.nativeObject.pointer, bindingParamValue);
	}
	native private void destroyVertexBufferBinding_CVertexBufferBinding_NoVirtual(long pNativeObject, long binding);
	protected void destroyVertexBufferBinding_NoVirtual(com.earthview.world.graphic.VertexBufferBinding binding)
	{
		long bindingParamValue = (binding == null ? 0L : binding.nativeObject.pointer);
		destroyVertexBufferBinding_CVertexBufferBinding_NoVirtual(this.nativeObject.pointer, bindingParamValue);
	}

	native private void registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(long pNativeObject, long sourceBuffer, long copy);
	/**
	 * 注册顶点缓存资源和副本
	 * @param sourceBuffer 资源缓存
	 * @param copy 副本
	 */
	public void registerVertexBufferSourceAndCopy(com.earthview.world.graphic.HardwareVertexBufferSharedPtr sourceBuffer, com.earthview.world.graphic.HardwareVertexBufferSharedPtr copy)
	{
		long sourceBufferParamValue = sourceBuffer.nativeObject.pointer;
		long copyParamValue = copy.nativeObject.pointer;
		registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(this.nativeObject.pointer, sourceBufferParamValue, copyParamValue);
	}
	native private void registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_NoVirtual(long pNativeObject, long sourceBuffer, long copy);
	protected void registerVertexBufferSourceAndCopy_NoVirtual(com.earthview.world.graphic.HardwareVertexBufferSharedPtr sourceBuffer, com.earthview.world.graphic.HardwareVertexBufferSharedPtr copy)
	{
		long sourceBufferParamValue = sourceBuffer.nativeObject.pointer;
		long copyParamValue = copy.nativeObject.pointer;
		registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_NoVirtual(this.nativeObject.pointer, sourceBufferParamValue, copyParamValue);
	}

	native private long allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(long pNativeObject, long sourceBuffer, int licenseType, long licensee, boolean copyData);
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
		long sourceBufferParamValue = sourceBuffer.nativeObject.pointer;
		int licenseTypeParamValue = licenseType.getValue();
		long licenseeParamValue = (licensee == null ? 0L : licensee.nativeObject.pointer);
		boolean copyDataParamValue = copyData;
		long returnValue = allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(this.nativeObject.pointer, sourceBufferParamValue, licenseTypeParamValue, licenseeParamValue, copyDataParamValue);
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
		}
		return __returnValue;
	}
	native private long allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_NoVirtual(long pNativeObject, long sourceBuffer, int licenseType, long licensee, boolean copyData);
	protected com.earthview.world.graphic.HardwareVertexBufferSharedPtr allocateVertexBufferCopy_NoVirtual(com.earthview.world.graphic.HardwareVertexBufferSharedPtr sourceBuffer, com.earthview.world.graphic.HardwareBufferManagerBase.BufferLicenseType licenseType, com.earthview.world.graphic.HardwareBufferLicensee licensee, boolean copyData)
	{
		long sourceBufferParamValue = sourceBuffer.nativeObject.pointer;
		int licenseTypeParamValue = licenseType.getValue();
		long licenseeParamValue = (licensee == null ? 0L : licensee.nativeObject.pointer);
		boolean copyDataParamValue = copyData;
		long returnValue = allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_NoVirtual(this.nativeObject.pointer, sourceBufferParamValue, licenseTypeParamValue, licenseeParamValue, copyDataParamValue);
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
		}
		return __returnValue;
	}

	native private long allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(long pNativeObject, long sourceBuffer, int licenseType, long licensee);
	/// <summary>
	/// 分配顶点缓存副本
	/// </summary>
	/// <param ="sourceBuffer">资源缓存</param>
	/// <param ="licenseType">缓存许可类型</param>
	/// <param ="licensee">硬件缓存许可</param>
	/// <returns>顶点缓存的共享信息</returns>
	public com.earthview.world.graphic.HardwareVertexBufferSharedPtr allocateVertexBufferCopy(com.earthview.world.graphic.HardwareVertexBufferSharedPtr sourceBuffer, com.earthview.world.graphic.HardwareBufferManagerBase.BufferLicenseType licenseType, com.earthview.world.graphic.HardwareBufferLicensee licensee)
	{
		long sourceBufferParamValue = sourceBuffer.nativeObject.pointer;
		int licenseTypeParamValue = licenseType.getValue();
		long licenseeParamValue = (licensee == null ? 0L : licensee.nativeObject.pointer);
		long returnValue = allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(this.nativeObject.pointer, sourceBufferParamValue, licenseTypeParamValue, licenseeParamValue);
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
		}
		return __returnValue;
	}
	native private long allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_NoVirtual(long pNativeObject, long sourceBuffer, int licenseType, long licensee);
	protected com.earthview.world.graphic.HardwareVertexBufferSharedPtr allocateVertexBufferCopy_NoVirtual(com.earthview.world.graphic.HardwareVertexBufferSharedPtr sourceBuffer, com.earthview.world.graphic.HardwareBufferManagerBase.BufferLicenseType licenseType, com.earthview.world.graphic.HardwareBufferLicensee licensee)
	{
		long sourceBufferParamValue = sourceBuffer.nativeObject.pointer;
		int licenseTypeParamValue = licenseType.getValue();
		long licenseeParamValue = (licensee == null ? 0L : licensee.nativeObject.pointer);
		long returnValue = allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_NoVirtual(this.nativeObject.pointer, sourceBufferParamValue, licenseTypeParamValue, licenseeParamValue);
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
		}
		return __returnValue;
	}

	native private void releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr(long pNativeObject, long bufferCopy);
	/// <summary>
	/// 释放顶点缓存副本
	/// </summary>
	/// <param ="bufferCopy">缓存副本</param>
	/// <returns></returns>
	public void releaseVertexBufferCopy(com.earthview.world.graphic.HardwareVertexBufferSharedPtr bufferCopy)
	{
		long bufferCopyParamValue = bufferCopy.nativeObject.pointer;
		releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr(this.nativeObject.pointer, bufferCopyParamValue);
	}
	native private void releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_NoVirtual(long pNativeObject, long bufferCopy);
	protected void releaseVertexBufferCopy_NoVirtual(com.earthview.world.graphic.HardwareVertexBufferSharedPtr bufferCopy)
	{
		long bufferCopyParamValue = bufferCopy.nativeObject.pointer;
		releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_NoVirtual(this.nativeObject.pointer, bufferCopyParamValue);
	}

	native private void touchVertexBufferCopy_CHardwareVertexBufferSharedPtr(long pNativeObject, long bufferCopy);
	public void touchVertexBufferCopy(com.earthview.world.graphic.HardwareVertexBufferSharedPtr bufferCopy)
	{
		long bufferCopyParamValue = bufferCopy.nativeObject.pointer;
		touchVertexBufferCopy_CHardwareVertexBufferSharedPtr(this.nativeObject.pointer, bufferCopyParamValue);
	}
	native private void touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_NoVirtual(long pNativeObject, long bufferCopy);
	protected void touchVertexBufferCopy_NoVirtual(com.earthview.world.graphic.HardwareVertexBufferSharedPtr bufferCopy)
	{
		long bufferCopyParamValue = bufferCopy.nativeObject.pointer;
		touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_NoVirtual(this.nativeObject.pointer, bufferCopyParamValue);
	}

	native private void _freeUnusedBufferCopies_void(long pNativeObject);
	/// <summary>
	/// 释放未使用的缓存副本
	/// </summary>
	/// <param =""></param>
	/// <returns></returns>
	public void _freeUnusedBufferCopies()
	{
		_freeUnusedBufferCopies_void(this.nativeObject.pointer);
	}
	native private void _freeUnusedBufferCopies_void_NoVirtual(long pNativeObject);
	protected void _freeUnusedBufferCopies_NoVirtual()
	{
		_freeUnusedBufferCopies_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void _releaseBufferCopies_ev_bool(long pNativeObject, boolean forceFreeUnused);
	/// <summary>
	/// 释放缓存副本
	/// </summary>
	/// <param ="forceFreeUnused">是否是强制释放未使用的</param>
	/// <returns></returns>
	public void _releaseBufferCopies(boolean forceFreeUnused)
	{
		boolean forceFreeUnusedParamValue = forceFreeUnused;
		_releaseBufferCopies_ev_bool(this.nativeObject.pointer, forceFreeUnusedParamValue);
	}
	native private void _releaseBufferCopies_ev_bool_NoVirtual(long pNativeObject, boolean forceFreeUnused);
	protected void _releaseBufferCopies_NoVirtual(boolean forceFreeUnused)
	{
		boolean forceFreeUnusedParamValue = forceFreeUnused;
		_releaseBufferCopies_ev_bool_NoVirtual(this.nativeObject.pointer, forceFreeUnusedParamValue);
	}

	native private void _releaseBufferCopies_void(long pNativeObject);
	/// <summary>
	/// 释放缓存副本
	/// </summary>
	/// <param =""></param>
	/// <returns></returns>
	public void _releaseBufferCopies()
	{
		_releaseBufferCopies_void(this.nativeObject.pointer);
	}
	native private void _releaseBufferCopies_void_NoVirtual(long pNativeObject);
	protected void _releaseBufferCopies_NoVirtual()
	{
		_releaseBufferCopies_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void _forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr(long pNativeObject, long sourceBuffer);
	/// <summary>
	/// 强制释放缓存副本
	/// </summary>
	/// <param ="sourceBuffer">资源缓存</param>
	/// <returns></returns>
	public void _forceReleaseBufferCopies(com.earthview.world.graphic.HardwareVertexBufferSharedPtr sourceBuffer)
	{
		long sourceBufferParamValue = sourceBuffer.nativeObject.pointer;
		_forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr(this.nativeObject.pointer, sourceBufferParamValue);
	}
	native private void _forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_NoVirtual(long pNativeObject, long sourceBuffer);
	protected void _forceReleaseBufferCopies_NoVirtual(com.earthview.world.graphic.HardwareVertexBufferSharedPtr sourceBuffer)
	{
		long sourceBufferParamValue = sourceBuffer.nativeObject.pointer;
		_forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_NoVirtual(this.nativeObject.pointer, sourceBufferParamValue);
	}

	native private void _forceReleaseBufferCopies_CHardwareVertexBuffer(long pNativeObject, long sourceBuffer);
	/// <summary>
	/// 强制释放缓存副本
	/// </summary>
	/// <param ="sourceBuffer">资源缓存(顶点缓存)</param>
	/// <returns></returns>
	public void _forceReleaseBufferCopies(com.earthview.world.graphic.HardwareVertexBuffer sourceBuffer)
	{
		long sourceBufferParamValue = (sourceBuffer == null ? 0L : sourceBuffer.nativeObject.pointer);
		_forceReleaseBufferCopies_CHardwareVertexBuffer(this.nativeObject.pointer, sourceBufferParamValue);
	}
	native private void _forceReleaseBufferCopies_CHardwareVertexBuffer_NoVirtual(long pNativeObject, long sourceBuffer);
	protected void _forceReleaseBufferCopies_NoVirtual(com.earthview.world.graphic.HardwareVertexBuffer sourceBuffer)
	{
		long sourceBufferParamValue = (sourceBuffer == null ? 0L : sourceBuffer.nativeObject.pointer);
		_forceReleaseBufferCopies_CHardwareVertexBuffer_NoVirtual(this.nativeObject.pointer, sourceBufferParamValue);
	}

	native private void _notifyVertexBufferDestroyed_CHardwareVertexBuffer(long pNativeObject, long buf);
	/// <summary>
	/// 通知定点缓存销毁
	/// </summary>
	/// <param ="buf">硬件顶点缓存（顶点缓存）</param>
	/// <returns></returns>
	public void _notifyVertexBufferDestroyed(com.earthview.world.graphic.HardwareVertexBuffer buf)
	{
		long bufParamValue = (buf == null ? 0L : buf.nativeObject.pointer);
		_notifyVertexBufferDestroyed_CHardwareVertexBuffer(this.nativeObject.pointer, bufParamValue);
	}
	native private void _notifyIndexBufferDestroyed_CHardwareIndexBuffer(long pNativeObject, long buf);
	/// <summary>
	/// 通知索引缓存销毁
	/// </summary>
	/// <param ="buf">硬件索引缓存</param>
	/// <returns></returns>
	public void _notifyIndexBufferDestroyed(com.earthview.world.graphic.HardwareIndexBuffer buf)
	{
		long bufParamValue = (buf == null ? 0L : buf.nativeObject.pointer);
		_notifyIndexBufferDestroyed_CHardwareIndexBuffer(this.nativeObject.pointer, bufParamValue);
	}
	native private static long getSingleton_void();
	/// <summary>
	/// 单例（引用）
	/// </summary>
	/// <param =""></param>
	/// <returns>硬件缓存管理信息</returns>
	public static com.earthview.world.graphic.HardwareBufferManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.HardwareBufferManager __returnValue = new com.earthview.world.graphic.HardwareBufferManager(CreatedWhenConstruct.CWC_NotToCreate, "CHardwareBufferManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwareBufferManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CHardwareBufferManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	/// <summary>
	/// 单例（指针）
	/// </summary>
	/// <param =""></param>
	/// <returns>硬件缓存管理信息</returns>
	public static com.earthview.world.graphic.HardwareBufferManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.HardwareBufferManager __returnValue = new com.earthview.world.graphic.HardwareBufferManager(CreatedWhenConstruct.CWC_NotToCreate, "CHardwareBufferManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwareBufferManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CHardwareBufferManager");
		}
		return __returnValue;
	}
	public HardwareBufferManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public HardwareBufferManager(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static HardwareBufferManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		HardwareBufferManager obj = null;
 		if(baseObj instanceof HardwareBufferManager)
		{
			obj = (HardwareBufferManager)baseObj;
		} else {
			obj = new HardwareBufferManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CHardwareBufferManager");
			obj.increaseCast();
		}

		return obj;
	}
}
