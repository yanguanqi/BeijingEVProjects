package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 硬件缓存管理基类定义相关操作
 */
public class HardwareBufferManagerBase extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CHardwareBufferManagerBase", new HardwareBufferManagerBaseClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCHardwareBufferManagerBaseProxy", new HardwareBufferManagerBaseClassFactory());
	}

	protected  void destroyAllDeclarations_void_callback()
	{
		destroyAllDeclarations();
	}

	native private void destroyAllDeclarations_void(long pNativeObject);
	/**
	 * 销毁所有的声明
	 * @param  
	 */
	public void destroyAllDeclarations()
	{
		destroyAllDeclarations_void(this.nativeObject.pointer);
	}
	native private void destroyAllDeclarations_void_NoVirtual(long pNativeObject);
	protected void destroyAllDeclarations_NoVirtual()
	{
		destroyAllDeclarations_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void destroyAllBindings_void_callback()
	{
		destroyAllBindings();
	}

	native private void destroyAllBindings_void(long pNativeObject);
	/**
	 * 销毁所有的绑定
	 * @param  
	 */
	public void destroyAllBindings()
	{
		destroyAllBindings_void(this.nativeObject.pointer);
	}
	native private void destroyAllBindings_void_NoVirtual(long pNativeObject);
	protected void destroyAllBindings_NoVirtual()
	{
		destroyAllBindings_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long createVertexDeclarationImpl_void_callback()
	{
		com.earthview.world.graphic.VertexDeclaration returnValue = createVertexDeclarationImpl();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createVertexDeclarationImpl_void(long pNativeObject);
	/**
	 * 创建一个新的顶点声明内在方法
	 * @param  
	 * @return 顶点声明
	 */
	public com.earthview.world.graphic.VertexDeclaration createVertexDeclarationImpl()
	{
		long returnValue = createVertexDeclarationImpl_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexDeclaration __returnValue = new com.earthview.world.graphic.VertexDeclaration(CreatedWhenConstruct.CWC_NotToCreate, "CVertexDeclaration");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexDeclaration)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVertexDeclaration");
		}
		return __returnValue;
	}
	native private long createVertexDeclarationImpl_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.VertexDeclaration createVertexDeclarationImpl_NoVirtual()
	{
		long returnValue = createVertexDeclarationImpl_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexDeclaration __returnValue = new com.earthview.world.graphic.VertexDeclaration(CreatedWhenConstruct.CWC_NotToCreate, "CVertexDeclaration");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexDeclaration)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVertexDeclaration");
		}
		return __returnValue;
	}

	protected  void destroyVertexDeclarationImpl_CVertexDeclaration_callback(long decl)
	{
		com.earthview.world.graphic.VertexDeclaration declParamValue = (decl == 0L ? null : new com.earthview.world.graphic.VertexDeclaration(CreatedWhenConstruct.CWC_NotToCreate));
		if(declParamValue != null)
		{
		declParamValue.setDelegate(true);
		declParamValue.setInstancePointer(new InstancePointer(decl));
		IClassFactory declParamValueClassFactory = GlobalClassFactoryMap.get(declParamValue.getCppInstanceTypeName());
		if (declParamValueClassFactory != null)
		{
			declParamValue.setDelegate(true);
			declParamValue = (com.earthview.world.graphic.VertexDeclaration)declParamValueClassFactory.create();
			declParamValue.setDelegate(true);
			declParamValue.setInstancePointer(new InstancePointer(decl));
		}
		}
		destroyVertexDeclarationImpl(declParamValue);
	}

	native private void destroyVertexDeclarationImpl_CVertexDeclaration(long pNativeObject, long decl);
	/**
	 * 销毁一个新的顶点声明内在方法
	 * @param decl 顶点声明
	 */
	public void destroyVertexDeclarationImpl(com.earthview.world.graphic.VertexDeclaration decl)
	{
		long declParamValue = (decl == null ? 0L : decl.nativeObject.pointer);
		destroyVertexDeclarationImpl_CVertexDeclaration(this.nativeObject.pointer, declParamValue);
	}
	native private void destroyVertexDeclarationImpl_CVertexDeclaration_NoVirtual(long pNativeObject, long decl);
	protected void destroyVertexDeclarationImpl_NoVirtual(com.earthview.world.graphic.VertexDeclaration decl)
	{
		long declParamValue = (decl == null ? 0L : decl.nativeObject.pointer);
		destroyVertexDeclarationImpl_CVertexDeclaration_NoVirtual(this.nativeObject.pointer, declParamValue);
	}

	protected  long createVertexBufferBindingImpl_void_callback()
	{
		com.earthview.world.graphic.VertexBufferBinding returnValue = createVertexBufferBindingImpl();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createVertexBufferBindingImpl_void(long pNativeObject);
	/**
	 * 创建顶点缓存绑定内在方法
	 * @param  
	 * @return 顶点缓存绑定
	 */
	public com.earthview.world.graphic.VertexBufferBinding createVertexBufferBindingImpl()
	{
		long returnValue = createVertexBufferBindingImpl_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexBufferBinding __returnValue = new com.earthview.world.graphic.VertexBufferBinding(CreatedWhenConstruct.CWC_NotToCreate, "CVertexBufferBinding");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexBufferBinding)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVertexBufferBinding");
		}
		return __returnValue;
	}
	native private long createVertexBufferBindingImpl_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.VertexBufferBinding createVertexBufferBindingImpl_NoVirtual()
	{
		long returnValue = createVertexBufferBindingImpl_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexBufferBinding __returnValue = new com.earthview.world.graphic.VertexBufferBinding(CreatedWhenConstruct.CWC_NotToCreate, "CVertexBufferBinding");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexBufferBinding)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVertexBufferBinding");
		}
		return __returnValue;
	}

	protected  void destroyVertexBufferBindingImpl_CVertexBufferBinding_callback(long binding)
	{
		com.earthview.world.graphic.VertexBufferBinding bindingParamValue = (binding == 0L ? null : new com.earthview.world.graphic.VertexBufferBinding(CreatedWhenConstruct.CWC_NotToCreate));
		if(bindingParamValue != null)
		{
		bindingParamValue.setDelegate(true);
		bindingParamValue.setInstancePointer(new InstancePointer(binding));
		IClassFactory bindingParamValueClassFactory = GlobalClassFactoryMap.get(bindingParamValue.getCppInstanceTypeName());
		if (bindingParamValueClassFactory != null)
		{
			bindingParamValue.setDelegate(true);
			bindingParamValue = (com.earthview.world.graphic.VertexBufferBinding)bindingParamValueClassFactory.create();
			bindingParamValue.setDelegate(true);
			bindingParamValue.setInstancePointer(new InstancePointer(binding));
		}
		}
		destroyVertexBufferBindingImpl(bindingParamValue);
	}

	native private void destroyVertexBufferBindingImpl_CVertexBufferBinding(long pNativeObject, long binding);
	/**
	 * 销毁顶点缓存绑定内在方法
	 * @param binding 顶点缓存绑定
	 */
	public void destroyVertexBufferBindingImpl(com.earthview.world.graphic.VertexBufferBinding binding)
	{
		long bindingParamValue = (binding == null ? 0L : binding.nativeObject.pointer);
		destroyVertexBufferBindingImpl_CVertexBufferBinding(this.nativeObject.pointer, bindingParamValue);
	}
	native private void destroyVertexBufferBindingImpl_CVertexBufferBinding_NoVirtual(long pNativeObject, long binding);
	protected void destroyVertexBufferBindingImpl_NoVirtual(com.earthview.world.graphic.VertexBufferBinding binding)
	{
		long bindingParamValue = (binding == null ? 0L : binding.nativeObject.pointer);
		destroyVertexBufferBindingImpl_CVertexBufferBinding_NoVirtual(this.nativeObject.pointer, bindingParamValue);
	}

	public enum BufferLicenseType implements INativeEnum<BufferLicenseType> {
		BLT_MANUAL_RELEASE(BufferLicenseTypeHelper.ENUM_VALUES[0]),
		BLT_AUTOMATIC_RELEASE(BufferLicenseTypeHelper.ENUM_VALUES[1]);
		private int value;
		BufferLicenseType(int i) {
			this.value = i;
		}
		public BufferLicenseType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final BufferLicenseType toEnum(int retval) {
			if(retval == BLT_MANUAL_RELEASE.value){
				return BLT_MANUAL_RELEASE;
			}
			else if(retval == BLT_AUTOMATIC_RELEASE.value){
				return BLT_AUTOMATIC_RELEASE;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class BufferLicenseTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	protected  long makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback(long source, int usage, boolean useShadowBuffer)
	{
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr sourceParamValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		sourceParamValue.setDelegate(true);
		sourceParamValue.setInstancePointer(new InstancePointer(source));
		IClassFactory sourceParamValueClassFactory = GlobalClassFactoryMap.get(sourceParamValue.getCppInstanceTypeName());
		if (sourceParamValueClassFactory != null)
		{
			sourceParamValue.setDelegate(true);
			sourceParamValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)sourceParamValueClassFactory.create();
			sourceParamValue.setDelegate(true);
			sourceParamValue.setInstancePointer(new InstancePointer(source));
		}
		com.earthview.world.graphic.HardwareBuffer.Usage usageParamValue = com.earthview.world.graphic.HardwareBuffer.Usage.toEnum(usage);
		boolean useShadowBufferParamValue = useShadowBuffer;
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr returnValue = makeBufferCopy(sourceParamValue, usageParamValue, useShadowBufferParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool(long pNativeObject, long source, int usage, boolean useShadowBuffer);
	/**
	 * 创建一个新缓存作为一个资源的复制
	 * @param source 资源
	 * @param usage 缓存用法
	 * @param useShadowBuffer 是否使用阴影缓存
	 * @return 顶点缓存的共享信息
	 */
	public com.earthview.world.graphic.HardwareVertexBufferSharedPtr makeBufferCopy(com.earthview.world.graphic.HardwareVertexBufferSharedPtr source, com.earthview.world.graphic.HardwareBuffer.Usage usage, boolean useShadowBuffer)
	{
		long sourceParamValue = source.nativeObject.pointer;
		int usageParamValue = usage.getValue();
		boolean useShadowBufferParamValue = useShadowBuffer;
		long returnValue = makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool(this.nativeObject.pointer, sourceParamValue, usageParamValue, useShadowBufferParamValue);
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
	native private long makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_NoVirtual(long pNativeObject, long source, int usage, boolean useShadowBuffer);
	protected com.earthview.world.graphic.HardwareVertexBufferSharedPtr makeBufferCopy_NoVirtual(com.earthview.world.graphic.HardwareVertexBufferSharedPtr source, com.earthview.world.graphic.HardwareBuffer.Usage usage, boolean useShadowBuffer)
	{
		long sourceParamValue = source.nativeObject.pointer;
		int usageParamValue = usage.getValue();
		boolean useShadowBufferParamValue = useShadowBuffer;
		long returnValue = makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_NoVirtual(this.nativeObject.pointer, sourceParamValue, usageParamValue, useShadowBufferParamValue);
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

	/**
	 * 构造函数
	 * @param  
	 */
	public HardwareBufferManagerBase() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCHardwareBufferManagerBaseProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.HardwareBufferManagerBase".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback(long vertexSize, long numVerts, int usage, boolean useShadowBuffer)
	{
		long vertexSizeParamValue = vertexSize;
		long numVertsParamValue = numVerts;
		com.earthview.world.graphic.HardwareBuffer.Usage usageParamValue = com.earthview.world.graphic.HardwareBuffer.Usage.toEnum(usage);
		boolean useShadowBufferParamValue = useShadowBuffer;
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr returnValue = createVertexBuffer(vertexSizeParamValue, numVertsParamValue, usageParamValue, useShadowBufferParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool(long pNativeObject, long vertexSize, long numVerts, int usage, boolean useShadowBuffer);
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

	protected  long createVertexBuffer_ev_size_t_ev_size_t_Usage_callback(long vertexSize, long numVerts, int usage)
	{
		long vertexSizeParamValue = vertexSize;
		long numVertsParamValue = numVerts;
		com.earthview.world.graphic.HardwareBuffer.Usage usageParamValue = com.earthview.world.graphic.HardwareBuffer.Usage.toEnum(usage);
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr returnValue = createVertexBuffer(vertexSizeParamValue, numVertsParamValue, usageParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createVertexBuffer_ev_size_t_ev_size_t_Usage(long pNativeObject, long vertexSize, long numVerts, int usage);
	/**
	 * 创建硬件顶点缓存
	 * @param vertexSize 顶点尺寸大小
	 * @param numVerts 顶点编号
	 * @param usage 缓存使用方法
	 * @return 顶点缓存的共享信息
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

	protected  long createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback(int itype, long numIndexes, int usage, boolean useShadowBuffer)
	{
		com.earthview.world.graphic.HardwareIndexBuffer.IndexType itypeParamValue = com.earthview.world.graphic.HardwareIndexBuffer.IndexType.toEnum(itype);
		long numIndexesParamValue = numIndexes;
		com.earthview.world.graphic.HardwareBuffer.Usage usageParamValue = com.earthview.world.graphic.HardwareBuffer.Usage.toEnum(usage);
		boolean useShadowBufferParamValue = useShadowBuffer;
		com.earthview.world.graphic.HardwareIndexBufferSharedPtr returnValue = createIndexBuffer(itypeParamValue, numIndexesParamValue, usageParamValue, useShadowBufferParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool(long pNativeObject, int itype, long numIndexes, int usage, boolean useShadowBuffer);
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

	protected  long createIndexBuffer_IndexType_ev_size_t_Usage_callback(int itype, long numIndexes, int usage)
	{
		com.earthview.world.graphic.HardwareIndexBuffer.IndexType itypeParamValue = com.earthview.world.graphic.HardwareIndexBuffer.IndexType.toEnum(itype);
		long numIndexesParamValue = numIndexes;
		com.earthview.world.graphic.HardwareBuffer.Usage usageParamValue = com.earthview.world.graphic.HardwareBuffer.Usage.toEnum(usage);
		com.earthview.world.graphic.HardwareIndexBufferSharedPtr returnValue = createIndexBuffer(itypeParamValue, numIndexesParamValue, usageParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createIndexBuffer_IndexType_ev_size_t_Usage(long pNativeObject, int itype, long numIndexes, int usage);
	/**
	 * 创建硬件索引缓存
	 * @param itype 索引类型
	 * @param numVerts 索引编号
	 * @param usage 缓冲器使用方法
	 * @return 索引缓存的共享信息
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

	protected  long createRenderToVertexBuffer_void_callback()
	{
		com.earthview.world.graphic.RenderToVertexBufferSharedPtr returnValue = createRenderToVertexBuffer();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createRenderToVertexBuffer_void(long pNativeObject);
	/**
	 * 创建渲染到顶点缓存
	 * @param  
	 * @return 渲染到顶点缓存的共享信息
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

	protected  long createVertexDeclaration_void_callback()
	{
		com.earthview.world.graphic.VertexDeclaration returnValue = createVertexDeclaration();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createVertexDeclaration_void(long pNativeObject);
	/// <summary>
	/// 创建硬件顶点声明
	/// </summary>
	/// <param =""></param>
	/// <returns>顶点声明</returns>
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

	protected  void destroyVertexDeclaration_CVertexDeclaration_callback(long decl)
	{
		com.earthview.world.graphic.VertexDeclaration declParamValue = (decl == 0L ? null : new com.earthview.world.graphic.VertexDeclaration(CreatedWhenConstruct.CWC_NotToCreate));
		if(declParamValue != null)
		{
		declParamValue.setDelegate(true);
		declParamValue.setInstancePointer(new InstancePointer(decl));
		IClassFactory declParamValueClassFactory = GlobalClassFactoryMap.get(declParamValue.getCppInstanceTypeName());
		if (declParamValueClassFactory != null)
		{
			declParamValue.setDelegate(true);
			declParamValue = (com.earthview.world.graphic.VertexDeclaration)declParamValueClassFactory.create();
			declParamValue.setDelegate(true);
			declParamValue.setInstancePointer(new InstancePointer(decl));
		}
		}
		destroyVertexDeclaration(declParamValue);
	}

	native private void destroyVertexDeclaration_CVertexDeclaration(long pNativeObject, long decl);
	/// <summary>
	/// 销毁硬件顶点声明
	/// </summary>
	/// <param ="decl">顶点声明</param>
	/// <returns></returns>
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

	protected  long createVertexBufferBinding_void_callback()
	{
		com.earthview.world.graphic.VertexBufferBinding returnValue = createVertexBufferBinding();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createVertexBufferBinding_void(long pNativeObject);
	/// <summary>
	/// 创建硬件顶点缓存绑定
	/// </summary>
	/// <param =""></param>
	/// <returns>顶点缓存绑定</returns>
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

	protected  void destroyVertexBufferBinding_CVertexBufferBinding_callback(long binding)
	{
		com.earthview.world.graphic.VertexBufferBinding bindingParamValue = (binding == 0L ? null : new com.earthview.world.graphic.VertexBufferBinding(CreatedWhenConstruct.CWC_NotToCreate));
		if(bindingParamValue != null)
		{
		bindingParamValue.setDelegate(true);
		bindingParamValue.setInstancePointer(new InstancePointer(binding));
		IClassFactory bindingParamValueClassFactory = GlobalClassFactoryMap.get(bindingParamValue.getCppInstanceTypeName());
		if (bindingParamValueClassFactory != null)
		{
			bindingParamValue.setDelegate(true);
			bindingParamValue = (com.earthview.world.graphic.VertexBufferBinding)bindingParamValueClassFactory.create();
			bindingParamValue.setDelegate(true);
			bindingParamValue.setInstancePointer(new InstancePointer(binding));
		}
		}
		destroyVertexBufferBinding(bindingParamValue);
	}

	native private void destroyVertexBufferBinding_CVertexBufferBinding(long pNativeObject, long binding);
	/// <summary>
	/// 销毁硬件顶点缓存绑定
	/// </summary>
	/// <param ="binding">顶点缓存绑定</param>
	/// <returns></returns>
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

	protected  void registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback(long sourceBuffer, long copy)
	{
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr sourceBufferParamValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		sourceBufferParamValue.setDelegate(true);
		sourceBufferParamValue.setInstancePointer(new InstancePointer(sourceBuffer));
		IClassFactory sourceBufferParamValueClassFactory = GlobalClassFactoryMap.get(sourceBufferParamValue.getCppInstanceTypeName());
		if (sourceBufferParamValueClassFactory != null)
		{
			sourceBufferParamValue.setDelegate(true);
			sourceBufferParamValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)sourceBufferParamValueClassFactory.create();
			sourceBufferParamValue.setDelegate(true);
			sourceBufferParamValue.setInstancePointer(new InstancePointer(sourceBuffer));
		}
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr copyParamValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		copyParamValue.setDelegate(true);
		copyParamValue.setInstancePointer(new InstancePointer(copy));
		IClassFactory copyParamValueClassFactory = GlobalClassFactoryMap.get(copyParamValue.getCppInstanceTypeName());
		if (copyParamValueClassFactory != null)
		{
			copyParamValue.setDelegate(true);
			copyParamValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)copyParamValueClassFactory.create();
			copyParamValue.setDelegate(true);
			copyParamValue.setInstancePointer(new InstancePointer(copy));
		}
		registerVertexBufferSourceAndCopy(sourceBufferParamValue, copyParamValue);
	}

	native private void registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(long pNativeObject, long sourceBuffer, long copy);
	/// <summary>
	/// 注册顶点缓存作为副本
	/// </summary>
	/// <param ="sourceBuffer">资源缓存</param>
	/// <param ="copy">复制对象</param>
	/// <returns></returns>
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

	protected  long allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback(long sourceBuffer, int licenseType, long licensee, boolean copyData)
	{
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr sourceBufferParamValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		sourceBufferParamValue.setDelegate(true);
		sourceBufferParamValue.setInstancePointer(new InstancePointer(sourceBuffer));
		IClassFactory sourceBufferParamValueClassFactory = GlobalClassFactoryMap.get(sourceBufferParamValue.getCppInstanceTypeName());
		if (sourceBufferParamValueClassFactory != null)
		{
			sourceBufferParamValue.setDelegate(true);
			sourceBufferParamValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)sourceBufferParamValueClassFactory.create();
			sourceBufferParamValue.setDelegate(true);
			sourceBufferParamValue.setInstancePointer(new InstancePointer(sourceBuffer));
		}
		com.earthview.world.graphic.HardwareBufferManagerBase.BufferLicenseType licenseTypeParamValue = com.earthview.world.graphic.HardwareBufferManagerBase.BufferLicenseType.toEnum(licenseType);
		com.earthview.world.graphic.HardwareBufferLicensee licenseeParamValue = (licensee == 0L ? null : new com.earthview.world.graphic.HardwareBufferLicensee(CreatedWhenConstruct.CWC_NotToCreate));
		if(licenseeParamValue != null)
		{
		licenseeParamValue.setDelegate(true);
		licenseeParamValue.setInstancePointer(new InstancePointer(licensee));
		IClassFactory licenseeParamValueClassFactory = GlobalClassFactoryMap.get(licenseeParamValue.getCppInstanceTypeName());
		if (licenseeParamValueClassFactory != null)
		{
			licenseeParamValue.setDelegate(true);
			licenseeParamValue = (com.earthview.world.graphic.HardwareBufferLicensee)licenseeParamValueClassFactory.create();
			licenseeParamValue.setDelegate(true);
			licenseeParamValue.setInstancePointer(new InstancePointer(licensee));
		}
		}
		boolean copyDataParamValue = copyData;
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr returnValue = allocateVertexBufferCopy(sourceBufferParamValue, licenseTypeParamValue, licenseeParamValue, copyDataParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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

	protected  long allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback(long sourceBuffer, int licenseType, long licensee)
	{
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr sourceBufferParamValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		sourceBufferParamValue.setDelegate(true);
		sourceBufferParamValue.setInstancePointer(new InstancePointer(sourceBuffer));
		IClassFactory sourceBufferParamValueClassFactory = GlobalClassFactoryMap.get(sourceBufferParamValue.getCppInstanceTypeName());
		if (sourceBufferParamValueClassFactory != null)
		{
			sourceBufferParamValue.setDelegate(true);
			sourceBufferParamValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)sourceBufferParamValueClassFactory.create();
			sourceBufferParamValue.setDelegate(true);
			sourceBufferParamValue.setInstancePointer(new InstancePointer(sourceBuffer));
		}
		com.earthview.world.graphic.HardwareBufferManagerBase.BufferLicenseType licenseTypeParamValue = com.earthview.world.graphic.HardwareBufferManagerBase.BufferLicenseType.toEnum(licenseType);
		com.earthview.world.graphic.HardwareBufferLicensee licenseeParamValue = (licensee == 0L ? null : new com.earthview.world.graphic.HardwareBufferLicensee(CreatedWhenConstruct.CWC_NotToCreate));
		if(licenseeParamValue != null)
		{
		licenseeParamValue.setDelegate(true);
		licenseeParamValue.setInstancePointer(new InstancePointer(licensee));
		IClassFactory licenseeParamValueClassFactory = GlobalClassFactoryMap.get(licenseeParamValue.getCppInstanceTypeName());
		if (licenseeParamValueClassFactory != null)
		{
			licenseeParamValue.setDelegate(true);
			licenseeParamValue = (com.earthview.world.graphic.HardwareBufferLicensee)licenseeParamValueClassFactory.create();
			licenseeParamValue.setDelegate(true);
			licenseeParamValue.setInstancePointer(new InstancePointer(licensee));
		}
		}
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr returnValue = allocateVertexBufferCopy(sourceBufferParamValue, licenseTypeParamValue, licenseeParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
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

	protected  void releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback(long bufferCopy)
	{
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr bufferCopyParamValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		bufferCopyParamValue.setDelegate(true);
		bufferCopyParamValue.setInstancePointer(new InstancePointer(bufferCopy));
		IClassFactory bufferCopyParamValueClassFactory = GlobalClassFactoryMap.get(bufferCopyParamValue.getCppInstanceTypeName());
		if (bufferCopyParamValueClassFactory != null)
		{
			bufferCopyParamValue.setDelegate(true);
			bufferCopyParamValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)bufferCopyParamValueClassFactory.create();
			bufferCopyParamValue.setDelegate(true);
			bufferCopyParamValue.setInstancePointer(new InstancePointer(bufferCopy));
		}
		releaseVertexBufferCopy(bufferCopyParamValue);
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

	protected  void touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback(long bufferCopy)
	{
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr bufferCopyParamValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		bufferCopyParamValue.setDelegate(true);
		bufferCopyParamValue.setInstancePointer(new InstancePointer(bufferCopy));
		IClassFactory bufferCopyParamValueClassFactory = GlobalClassFactoryMap.get(bufferCopyParamValue.getCppInstanceTypeName());
		if (bufferCopyParamValueClassFactory != null)
		{
			bufferCopyParamValue.setDelegate(true);
			bufferCopyParamValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)bufferCopyParamValueClassFactory.create();
			bufferCopyParamValue.setDelegate(true);
			bufferCopyParamValue.setInstancePointer(new InstancePointer(bufferCopy));
		}
		touchVertexBufferCopy(bufferCopyParamValue);
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

	protected  void _freeUnusedBufferCopies_void_callback()
	{
		_freeUnusedBufferCopies();
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

	protected  void _releaseBufferCopies_ev_bool_callback(boolean forceFreeUnused)
	{
		boolean forceFreeUnusedParamValue = forceFreeUnused;
		_releaseBufferCopies(forceFreeUnusedParamValue);
	}

	native private void _releaseBufferCopies_ev_bool(long pNativeObject, boolean forceFreeUnused);
	///virtual void _releaseBufferCopies(ev_bool forceFreeUnused = false);
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

	protected  void _releaseBufferCopies_void_callback()
	{
		_releaseBufferCopies();
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

	protected  void _forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback(long sourceBuffer)
	{
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr sourceBufferParamValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		sourceBufferParamValue.setDelegate(true);
		sourceBufferParamValue.setInstancePointer(new InstancePointer(sourceBuffer));
		IClassFactory sourceBufferParamValueClassFactory = GlobalClassFactoryMap.get(sourceBufferParamValue.getCppInstanceTypeName());
		if (sourceBufferParamValueClassFactory != null)
		{
			sourceBufferParamValue.setDelegate(true);
			sourceBufferParamValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)sourceBufferParamValueClassFactory.create();
			sourceBufferParamValue.setDelegate(true);
			sourceBufferParamValue.setInstancePointer(new InstancePointer(sourceBuffer));
		}
		_forceReleaseBufferCopies(sourceBufferParamValue);
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

	protected  void _forceReleaseBufferCopies_CHardwareVertexBuffer_callback(long sourceBuffer)
	{
		com.earthview.world.graphic.HardwareVertexBuffer sourceBufferParamValue = (sourceBuffer == 0L ? null : new com.earthview.world.graphic.HardwareVertexBuffer(CreatedWhenConstruct.CWC_NotToCreate));
		if(sourceBufferParamValue != null)
		{
		sourceBufferParamValue.setDelegate(true);
		sourceBufferParamValue.setInstancePointer(new InstancePointer(sourceBuffer));
		IClassFactory sourceBufferParamValueClassFactory = GlobalClassFactoryMap.get(sourceBufferParamValue.getCppInstanceTypeName());
		if (sourceBufferParamValueClassFactory != null)
		{
			sourceBufferParamValue.setDelegate(true);
			sourceBufferParamValue = (com.earthview.world.graphic.HardwareVertexBuffer)sourceBufferParamValueClassFactory.create();
			sourceBufferParamValue.setDelegate(true);
			sourceBufferParamValue.setInstancePointer(new InstancePointer(sourceBuffer));
		}
		}
		_forceReleaseBufferCopies(sourceBufferParamValue);
	}

	native private void _forceReleaseBufferCopies_CHardwareVertexBuffer(long pNativeObject, long sourceBuffer);
	/// <summary>
	/// 强制释放缓存副本
	/// </summary>
	/// <param ="sourceBuffer">资源缓存（顶点缓存）</param>
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
	//// Notification that a hardware vertex buffer has been destroyed
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
	//// Notification that a hardware index buffer has been destroyed
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
	public HardwareBufferManagerBase(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public HardwareBufferManagerBase(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static HardwareBufferManagerBase fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		HardwareBufferManagerBase obj = null;
 		if(baseObj instanceof HardwareBufferManagerBase)
		{
			obj = (HardwareBufferManagerBase)baseObj;
		} else {
			obj = new HardwareBufferManagerBase(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CHardwareBufferManagerBase");
			obj.increaseCast();
		}

		return obj;
	}
}
