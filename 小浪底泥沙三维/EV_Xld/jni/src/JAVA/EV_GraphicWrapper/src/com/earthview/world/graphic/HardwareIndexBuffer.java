package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 硬件索引缓存类定义内存中索引缓存的相关操作
 */
public class HardwareIndexBuffer extends com.earthview.world.graphic.HardwareBuffer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CHardwareIndexBuffer", new HardwareIndexBufferClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCHardwareIndexBufferProxy", new HardwareIndexBufferClassFactory());
	}

	public enum IndexType implements INativeEnum<IndexType> {
		IT_16BIT(IndexTypeHelper.ENUM_VALUES[0]),
		IT_32BIT(IndexTypeHelper.ENUM_VALUES[1]);
		private int value;
		IndexType(int i) {
			this.value = i;
		}
		public IndexType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final IndexType toEnum(int retval) {
			if(retval == IT_16BIT.value){
				return IT_16BIT;
			}
			else if(retval == IT_32BIT.value){
				return IT_32BIT;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class IndexTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 构造函数
	 * @param mgr 缓存管理基类的指针
	 * @param idxType 索引类型
	 * @param numIndexes 索引编号
	 * @param usage 缓存方法
	 * @param systemMemory 是否使用系统内存
	 * @param useShadowBuffer 是否使用阴影缓存
	 */
	public HardwareIndexBuffer(com.earthview.world.graphic.HardwareBufferManagerBase ref_mgr, com.earthview.world.graphic.HardwareIndexBuffer.IndexType idxType, long numIndexes, com.earthview.world.graphic.HardwareBuffer.Usage usage, boolean useSystemMemory, boolean useShadowBuffer) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_mgrPtr = new BasePointer(ref_mgr);
		list.add("ref_mgr", ref_mgrPtr.get());
		BasePointer idxTypePtr = new BasePointer(idxType);
		list.add("idxType", idxTypePtr.get());
		BasePointer numIndexesPtr = new BasePointer(numIndexes);
		list.add("numIndexes", numIndexesPtr.get());
		BasePointer usagePtr = new BasePointer(usage);
		list.add("usage", usagePtr.get());
		BasePointer useSystemMemoryPtr = new BasePointer(useSystemMemory);
		list.add("useSystemMemory", useSystemMemoryPtr.get());
		BasePointer useShadowBufferPtr = new BasePointer(useShadowBuffer);
		list.add("useShadowBuffer", useShadowBufferPtr.get());
		Create("JCHardwareIndexBufferProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.HardwareIndexBuffer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long lockImpl_ev_size_t_ev_size_t_LockOptions(long pNativeObject, long offset, long length, int options);
	/**
	 * 锁Impl函数
	 * @param offset 偏移量
	 * @param length 长度
	 * @param options 选项
	 */
	public VoidPointer lockImpl(long offset, long length, com.earthview.world.graphic.HardwareBuffer.LockOptions options)
	{
		long offsetParamValue = offset;
		long lengthParamValue = length;
		int optionsParamValue = options.getValue();
		long returnValue = lockImpl_ev_size_t_ev_size_t_LockOptions(this.nativeObject.pointer, offsetParamValue, lengthParamValue, optionsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long lockImpl_ev_size_t_ev_size_t_LockOptions_NoVirtual(long pNativeObject, long offset, long length, int options);
	protected VoidPointer lockImpl_NoVirtual(long offset, long length, com.earthview.world.graphic.HardwareBuffer.LockOptions options)
	{
		long offsetParamValue = offset;
		long lengthParamValue = length;
		int optionsParamValue = options.getValue();
		long returnValue = lockImpl_ev_size_t_ev_size_t_LockOptions_NoVirtual(this.nativeObject.pointer, offsetParamValue, lengthParamValue, optionsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}

	native private void unlockImpl_void(long pNativeObject);
	/**
	 * 解锁Impl函数
	 * @param  
	 */
	public void unlockImpl()
	{
		unlockImpl_void(this.nativeObject.pointer);
	}
	native private void unlockImpl_void_NoVirtual(long pNativeObject);
	protected void unlockImpl_NoVirtual()
	{
		unlockImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void readData_ev_size_t_ev_size_t_void(long pNativeObject, long offset, long length, long pDest);
	/**
	 * 读数据
	 * @param offset 偏移量
	 * @param length 长度
	 * @param pDest 内存大小
	 */
	public void readData(long offset, long length, VoidPointer pDest)
	{
		long offsetParamValue = offset;
		long lengthParamValue = length;
		long pDestParamValue = (pDest == null ? 0L : pDest.nativeObject.pointer);
		readData_ev_size_t_ev_size_t_void(this.nativeObject.pointer, offsetParamValue, lengthParamValue, pDestParamValue);
	}
	native private void readData_ev_size_t_ev_size_t_void_NoVirtual(long pNativeObject, long offset, long length, long pDest);
	protected void readData_NoVirtual(long offset, long length, VoidPointer pDest)
	{
		long offsetParamValue = offset;
		long lengthParamValue = length;
		long pDestParamValue = (pDest == null ? 0L : pDest.nativeObject.pointer);
		readData_ev_size_t_ev_size_t_void_NoVirtual(this.nativeObject.pointer, offsetParamValue, lengthParamValue, pDestParamValue);
	}

	native private void writeData_ev_size_t_ev_size_t_void_ev_bool(long pNativeObject, long offset, long length, long pSource, boolean discardWholeBuffer);
	/**
	 * 写数据
	 * @param offset 偏移量
	 * @param length 长度
	 * @param pSource 资源
	 * @param discardWholeBuffer 是否放弃整个缓存
	 */
	public void writeData(long offset, long length, VoidPointer pSource, boolean discardWholeBuffer)
	{
		long offsetParamValue = offset;
		long lengthParamValue = length;
		long pSourceParamValue = (pSource == null ? 0L : pSource.nativeObject.pointer);
		boolean discardWholeBufferParamValue = discardWholeBuffer;
		writeData_ev_size_t_ev_size_t_void_ev_bool(this.nativeObject.pointer, offsetParamValue, lengthParamValue, pSourceParamValue, discardWholeBufferParamValue);
	}
	native private void writeData_ev_size_t_ev_size_t_void_ev_bool_NoVirtual(long pNativeObject, long offset, long length, long pSource, boolean discardWholeBuffer);
	protected void writeData_NoVirtual(long offset, long length, VoidPointer pSource, boolean discardWholeBuffer)
	{
		long offsetParamValue = offset;
		long lengthParamValue = length;
		long pSourceParamValue = (pSource == null ? 0L : pSource.nativeObject.pointer);
		boolean discardWholeBufferParamValue = discardWholeBuffer;
		writeData_ev_size_t_ev_size_t_void_ev_bool_NoVirtual(this.nativeObject.pointer, offsetParamValue, lengthParamValue, pSourceParamValue, discardWholeBufferParamValue);
	}

	native private void writeData_ev_size_t_ev_size_t_void(long pNativeObject, long offset, long length, long pSource);
	/// 写数据
	/// </summary>
	/// <param name="offset">偏移量</param>
	/// <param name="length">长度</param>
	/// <param name="pSource">资源</param>
	/// <returns></returns>
	public void writeData(long offset, long length, VoidPointer pSource)
	{
		long offsetParamValue = offset;
		long lengthParamValue = length;
		long pSourceParamValue = (pSource == null ? 0L : pSource.nativeObject.pointer);
		writeData_ev_size_t_ev_size_t_void(this.nativeObject.pointer, offsetParamValue, lengthParamValue, pSourceParamValue);
	}
	native private void writeData_ev_size_t_ev_size_t_void_NoVirtual(long pNativeObject, long offset, long length, long pSource);
	protected void writeData_NoVirtual(long offset, long length, VoidPointer pSource)
	{
		long offsetParamValue = offset;
		long lengthParamValue = length;
		long pSourceParamValue = (pSource == null ? 0L : pSource.nativeObject.pointer);
		writeData_ev_size_t_ev_size_t_void_NoVirtual(this.nativeObject.pointer, offsetParamValue, lengthParamValue, pSourceParamValue);
	}

	native private long getManager_void(long pNativeObject);
	/**
	 * 获得硬件缓存管理方式
	 * @param  
	 * @return 缓存管理方式
	 */
	public com.earthview.world.graphic.HardwareBufferManagerBase getManager()
	{
		long returnValue = getManager_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.HardwareBufferManagerBase __returnValue = new com.earthview.world.graphic.HardwareBufferManagerBase(CreatedWhenConstruct.CWC_NotToCreate, "CHardwareBufferManagerBase");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwareBufferManagerBase)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CHardwareBufferManagerBase");
		}
		return __returnValue;
	}
	native private int getType_void(long pNativeObject);
	/**
	 * 获得索引类型
	 * @param  
	 * @return 索引类型
	 */
	public com.earthview.world.graphic.HardwareIndexBuffer.IndexType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.HardwareIndexBuffer.IndexType.toEnum(returnValue);
	}
	native private long getNumIndexes_void(long pNativeObject);
	/**
	 * 获得索引编号
	 * @param  
	 * @return 索引编号
	 */
	public long getNumIndexes()
	{
		long returnValue = getNumIndexes_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getIndexSize_void(long pNativeObject);
	/**
	 * 获得每一个索引字节大小
	 * @param  
	 * @return 索引字节大小
	 */
	public long getIndexSize()
	{
		long returnValue = getIndexSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	public HardwareIndexBuffer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public HardwareIndexBuffer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 写锁
	 * @param offset 偏移量
	 * @param length 长度
	 * @param options 选项
	 */
	public VoidPointer lock(long offset, long length, com.earthview.world.graphic.HardwareBuffer.LockOptions options)
	{
		return super.lock_NoVirtual(offset, length, options);
	}
	/**
	 * 解锁
	 * @param  
	 */
	public void unlock()
	{
		super.unlock_NoVirtual();
	}
	/**
	 * 复制数据
	 * @param srcBuffer 资源缓存
	 * @param srcOffset 资源偏移量
	 * @param dstOffset 指令操作缓存
	 * @param length 长度
	 * @param discardWholeBuffer 是否放弃整个缓存
	 */
	public void copyData(com.earthview.world.graphic.HardwareBuffer srcBuffer, long srcOffset, long dstOffset, long length, boolean discardWholeBuffer)
	{
		super.copyData_NoVirtual(srcBuffer, srcOffset, dstOffset, length, discardWholeBuffer);
	}
	/**
	 * 复制数据
	 * @param srcBuffer 资源缓存
	 * @param srcOffset 资源偏移量
	 * @param dstOffset 指令操作缓存
	 * @param length 长度
	 */
	public void copyData(com.earthview.world.graphic.HardwareBuffer srcBuffer, long srcOffset, long dstOffset, long length)
	{
		super.copyData_NoVirtual(srcBuffer, srcOffset, dstOffset, length);
	}
	/**
	 * 复制数据
	 * @param srcBuffer 资源缓存
	 */
	public void copyData(com.earthview.world.graphic.HardwareBuffer srcBuffer)
	{
		super.copyData_NoVirtual(srcBuffer);
	}
	/**
	 * 从阴影缓存中更新
	 * @param  
	 */
	public void _updateFromShadow()
	{
		super._updateFromShadow_NoVirtual();
	}
	
	native protected void register_lockImpl_ev_size_t_ev_size_t_LockOptions(long pNativeObject, String method);
	native protected void register_unlockImpl_void(long pNativeObject, String method);
	native protected void register_lock_ev_size_t_ev_size_t_LockOptions(long pNativeObject, String method);
	native protected void register_unlock_void(long pNativeObject, String method);
	native protected void register_readData_ev_size_t_ev_size_t_void(long pNativeObject, String method);
	native protected void register_writeData_ev_size_t_ev_size_t_void_ev_bool(long pNativeObject, String method);
	native protected void register_writeData_ev_size_t_ev_size_t_void(long pNativeObject, String method);
	native protected void register_copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(long pNativeObject, String method);
	native protected void register_copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(long pNativeObject, String method);
	native protected void register_copyData_CHardwareBuffer(long pNativeObject, String method);
	native protected void register__updateFromShadow_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_lockImpl_ev_size_t_ev_size_t_LockOptions(this.nativeObject.pointer, "lockImpl_ev_size_t_ev_size_t_LockOptions_callback");
			this.register_unlockImpl_void(this.nativeObject.pointer, "unlockImpl_void_callback");
			this.register_lock_ev_size_t_ev_size_t_LockOptions(this.nativeObject.pointer, "lock_ev_size_t_ev_size_t_LockOptions_callback");
			this.register_unlock_void(this.nativeObject.pointer, "unlock_void_callback");
			this.register_readData_ev_size_t_ev_size_t_void(this.nativeObject.pointer, "readData_ev_size_t_ev_size_t_void_callback");
			this.register_writeData_ev_size_t_ev_size_t_void_ev_bool(this.nativeObject.pointer, "writeData_ev_size_t_ev_size_t_void_ev_bool_callback");
			this.register_writeData_ev_size_t_ev_size_t_void(this.nativeObject.pointer, "writeData_ev_size_t_ev_size_t_void_callback");
			this.register_copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(this.nativeObject.pointer, "copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_callback");
			this.register_copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(this.nativeObject.pointer, "copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_callback");
			this.register_copyData_CHardwareBuffer(this.nativeObject.pointer, "copyData_CHardwareBuffer_callback");
			this.register__updateFromShadow_void(this.nativeObject.pointer, "_updateFromShadow_void_callback");
		}
	}
	
	public static HardwareIndexBuffer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		HardwareIndexBuffer obj = null;
 		if(baseObj instanceof HardwareIndexBuffer)
		{
			obj = (HardwareIndexBuffer)baseObj;
		} else {
			obj = new HardwareIndexBuffer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CHardwareIndexBuffer");
			obj.increaseCast();
		}

		return obj;
	}
}
