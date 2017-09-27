package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 硬件缓存类定义内存中缓存的相关操作
 */
public class HardwareBuffer extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CHardwareBuffer", new HardwareBufferClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCHardwareBufferProxy", new HardwareBufferClassFactory());
	}

	//// Enums describing buffer usage; not mutually exclusive
	public enum Usage implements INativeEnum<Usage> {
		HBU_STATIC(UsageHelper.ENUM_VALUES[0]),
		HBU_DYNAMIC(UsageHelper.ENUM_VALUES[1]),
		HBU_WRITE_ONLY(UsageHelper.ENUM_VALUES[2]),
		HBU_DISCARDABLE(UsageHelper.ENUM_VALUES[3]),
		HBU_STATIC_WRITE_ONLY(UsageHelper.ENUM_VALUES[4]),
		HBU_DYNAMIC_WRITE_ONLY(UsageHelper.ENUM_VALUES[5]),
		HBU_DYNAMIC_WRITE_ONLY_DISCARDABLE(UsageHelper.ENUM_VALUES[6]);
		private int value;
		Usage(int i) {
			this.value = i;
		}
		public Usage getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final Usage toEnum(int retval) {
			if(retval == HBU_STATIC.value){
				return HBU_STATIC;
			}
			else if(retval == HBU_DYNAMIC.value){
				return HBU_DYNAMIC;
			}
			else if(retval == HBU_WRITE_ONLY.value){
				return HBU_WRITE_ONLY;
			}
			else if(retval == HBU_DISCARDABLE.value){
				return HBU_DISCARDABLE;
			}
			else if(retval == HBU_STATIC_WRITE_ONLY.value){
				return HBU_STATIC_WRITE_ONLY;
			}
			else if(retval == HBU_DYNAMIC_WRITE_ONLY.value){
				return HBU_DYNAMIC_WRITE_ONLY;
			}
			else if(retval == HBU_DYNAMIC_WRITE_ONLY_DISCARDABLE.value){
				return HBU_DYNAMIC_WRITE_ONLY_DISCARDABLE;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class UsageHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	//// Locking options
	public enum LockOptions implements INativeEnum<LockOptions> {
		HBL_NORMAL(LockOptionsHelper.ENUM_VALUES[0]),
		HBL_DISCARD(LockOptionsHelper.ENUM_VALUES[1]),
		HBL_READ_ONLY(LockOptionsHelper.ENUM_VALUES[2]),
		HBL_NO_OVERWRITE(LockOptionsHelper.ENUM_VALUES[3]);
		private int value;
		LockOptions(int i) {
			this.value = i;
		}
		public LockOptions getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final LockOptions toEnum(int retval) {
			if(retval == HBL_NORMAL.value){
				return HBL_NORMAL;
			}
			else if(retval == HBL_DISCARD.value){
				return HBL_DISCARD;
			}
			else if(retval == HBL_READ_ONLY.value){
				return HBL_READ_ONLY;
			}
			else if(retval == HBL_NO_OVERWRITE.value){
				return HBL_NO_OVERWRITE;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class LockOptionsHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	protected  long lockImpl_ev_size_t_ev_size_t_LockOptions_callback(long offset, long length, int options)
	{
		long offsetParamValue = offset;
		long lengthParamValue = length;
		com.earthview.world.graphic.HardwareBuffer.LockOptions optionsParamValue = com.earthview.world.graphic.HardwareBuffer.LockOptions.toEnum(options);
		VoidPointer returnValue = lockImpl(offsetParamValue, lengthParamValue, optionsParamValue);
		if(returnValue == null) {
			return 0L;
		}
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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

	protected  void unlockImpl_void_callback()
	{
		unlockImpl();
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

	/**
	 * 构造函数
	 * @param usage 缓存方法
	 * @param systemMemory 是否使用系统内存
	 * @param useShadowBuffer 是否使用阴影缓存
	 */
	public HardwareBuffer(com.earthview.world.graphic.HardwareBuffer.Usage usage, boolean systemMemory, boolean useShadowBuffer) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer usagePtr = new BasePointer(usage);
		list.add("usage", usagePtr.get());
		BasePointer systemMemoryPtr = new BasePointer(systemMemory);
		list.add("systemMemory", systemMemoryPtr.get());
		BasePointer useShadowBufferPtr = new BasePointer(useShadowBuffer);
		list.add("useShadowBuffer", useShadowBufferPtr.get());
		Create("JCHardwareBufferProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.HardwareBuffer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long lock_ev_size_t_ev_size_t_LockOptions_callback(long offset, long length, int options)
	{
		long offsetParamValue = offset;
		long lengthParamValue = length;
		com.earthview.world.graphic.HardwareBuffer.LockOptions optionsParamValue = com.earthview.world.graphic.HardwareBuffer.LockOptions.toEnum(options);
		VoidPointer returnValue = lock(offsetParamValue, lengthParamValue, optionsParamValue);
		if(returnValue == null) {
			return 0L;
		}
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long lock_ev_size_t_ev_size_t_LockOptions(long pNativeObject, long offset, long length, int options);
	/**
	 * 写锁
	 * @param offset 偏移量
	 * @param length 长度
	 * @param options 选项
	 */
	public VoidPointer lock(long offset, long length, com.earthview.world.graphic.HardwareBuffer.LockOptions options)
	{
		long offsetParamValue = offset;
		long lengthParamValue = length;
		int optionsParamValue = options.getValue();
		long returnValue = lock_ev_size_t_ev_size_t_LockOptions(this.nativeObject.pointer, offsetParamValue, lengthParamValue, optionsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long lock_ev_size_t_ev_size_t_LockOptions_NoVirtual(long pNativeObject, long offset, long length, int options);
	protected VoidPointer lock_NoVirtual(long offset, long length, com.earthview.world.graphic.HardwareBuffer.LockOptions options)
	{
		long offsetParamValue = offset;
		long lengthParamValue = length;
		int optionsParamValue = options.getValue();
		long returnValue = lock_ev_size_t_ev_size_t_LockOptions_NoVirtual(this.nativeObject.pointer, offsetParamValue, lengthParamValue, optionsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}

	native private long lock_LockOptions(long pNativeObject, int options);
	/**
	 * 写锁
	 * @param options 选项
	 */
	public VoidPointer lock(com.earthview.world.graphic.HardwareBuffer.LockOptions options)
	{
		int optionsParamValue = options.getValue();
		long returnValue = lock_LockOptions(this.nativeObject.pointer, optionsParamValue);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	protected  void unlock_void_callback()
	{
		unlock();
	}

	native private void unlock_void(long pNativeObject);
	/**
	 * 解锁
	 * @param  
	 */
	public void unlock()
	{
		unlock_void(this.nativeObject.pointer);
	}
	native private void unlock_void_NoVirtual(long pNativeObject);
	protected void unlock_NoVirtual()
	{
		unlock_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void readData_ev_size_t_ev_size_t_void_callback(long offset, long length, long pDest)
	{
		long offsetParamValue = offset;
		long lengthParamValue = length;
		VoidPointer pDestParamValue = (pDest == 0L ? null : new VoidPointer(new InstancePointer(pDest)));
		readData(offsetParamValue, lengthParamValue, pDestParamValue);
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

	protected  void writeData_ev_size_t_ev_size_t_void_ev_bool_callback(long offset, long length, long pSource, boolean discardWholeBuffer)
	{
		long offsetParamValue = offset;
		long lengthParamValue = length;
		VoidPointer pSourceParamValue = (pSource == 0L ? null : new VoidPointer(new InstancePointer(pSource)));
		boolean discardWholeBufferParamValue = discardWholeBuffer;
		writeData(offsetParamValue, lengthParamValue, pSourceParamValue, discardWholeBufferParamValue);
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

	protected  void writeData_ev_size_t_ev_size_t_void_callback(long offset, long length, long pSource)
	{
		long offsetParamValue = offset;
		long lengthParamValue = length;
		VoidPointer pSourceParamValue = (pSource == 0L ? null : new VoidPointer(new InstancePointer(pSource)));
		writeData(offsetParamValue, lengthParamValue, pSourceParamValue);
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

	protected  void copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_callback(long srcBuffer, long srcOffset, long dstOffset, long length, boolean discardWholeBuffer)
	{
		com.earthview.world.graphic.HardwareBuffer srcBufferParamValue = new com.earthview.world.graphic.HardwareBuffer(CreatedWhenConstruct.CWC_NotToCreate);
		srcBufferParamValue.setDelegate(true);
		srcBufferParamValue.setInstancePointer(new InstancePointer(srcBuffer));
		IClassFactory srcBufferParamValueClassFactory = GlobalClassFactoryMap.get(srcBufferParamValue.getCppInstanceTypeName());
		if (srcBufferParamValueClassFactory != null)
		{
			srcBufferParamValue.setDelegate(true);
			srcBufferParamValue = (com.earthview.world.graphic.HardwareBuffer)srcBufferParamValueClassFactory.create();
			srcBufferParamValue.setDelegate(true);
			srcBufferParamValue.setInstancePointer(new InstancePointer(srcBuffer));
		}
		long srcOffsetParamValue = srcOffset;
		long dstOffsetParamValue = dstOffset;
		long lengthParamValue = length;
		boolean discardWholeBufferParamValue = discardWholeBuffer;
		copyData(srcBufferParamValue, srcOffsetParamValue, dstOffsetParamValue, lengthParamValue, discardWholeBufferParamValue);
	}

	native private void copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(long pNativeObject, long srcBuffer, long srcOffset, long dstOffset, long length, boolean discardWholeBuffer);
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
		long srcBufferParamValue = srcBuffer.nativeObject.pointer;
		long srcOffsetParamValue = srcOffset;
		long dstOffsetParamValue = dstOffset;
		long lengthParamValue = length;
		boolean discardWholeBufferParamValue = discardWholeBuffer;
		copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(this.nativeObject.pointer, srcBufferParamValue, srcOffsetParamValue, dstOffsetParamValue, lengthParamValue, discardWholeBufferParamValue);
	}
	native private void copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_NoVirtual(long pNativeObject, long srcBuffer, long srcOffset, long dstOffset, long length, boolean discardWholeBuffer);
	protected void copyData_NoVirtual(com.earthview.world.graphic.HardwareBuffer srcBuffer, long srcOffset, long dstOffset, long length, boolean discardWholeBuffer)
	{
		long srcBufferParamValue = srcBuffer.nativeObject.pointer;
		long srcOffsetParamValue = srcOffset;
		long dstOffsetParamValue = dstOffset;
		long lengthParamValue = length;
		boolean discardWholeBufferParamValue = discardWholeBuffer;
		copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_NoVirtual(this.nativeObject.pointer, srcBufferParamValue, srcOffsetParamValue, dstOffsetParamValue, lengthParamValue, discardWholeBufferParamValue);
	}

	protected  void copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_callback(long srcBuffer, long srcOffset, long dstOffset, long length)
	{
		com.earthview.world.graphic.HardwareBuffer srcBufferParamValue = new com.earthview.world.graphic.HardwareBuffer(CreatedWhenConstruct.CWC_NotToCreate);
		srcBufferParamValue.setDelegate(true);
		srcBufferParamValue.setInstancePointer(new InstancePointer(srcBuffer));
		IClassFactory srcBufferParamValueClassFactory = GlobalClassFactoryMap.get(srcBufferParamValue.getCppInstanceTypeName());
		if (srcBufferParamValueClassFactory != null)
		{
			srcBufferParamValue.setDelegate(true);
			srcBufferParamValue = (com.earthview.world.graphic.HardwareBuffer)srcBufferParamValueClassFactory.create();
			srcBufferParamValue.setDelegate(true);
			srcBufferParamValue.setInstancePointer(new InstancePointer(srcBuffer));
		}
		long srcOffsetParamValue = srcOffset;
		long dstOffsetParamValue = dstOffset;
		long lengthParamValue = length;
		copyData(srcBufferParamValue, srcOffsetParamValue, dstOffsetParamValue, lengthParamValue);
	}

	native private void copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(long pNativeObject, long srcBuffer, long srcOffset, long dstOffset, long length);
	/**
	 * 复制数据
	 * @param srcBuffer 资源缓存
	 * @param srcOffset 资源偏移量
	 * @param dstOffset 指令操作缓存
	 * @param length 长度
	 */
	public void copyData(com.earthview.world.graphic.HardwareBuffer srcBuffer, long srcOffset, long dstOffset, long length)
	{
		long srcBufferParamValue = srcBuffer.nativeObject.pointer;
		long srcOffsetParamValue = srcOffset;
		long dstOffsetParamValue = dstOffset;
		long lengthParamValue = length;
		copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(this.nativeObject.pointer, srcBufferParamValue, srcOffsetParamValue, dstOffsetParamValue, lengthParamValue);
	}
	native private void copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_NoVirtual(long pNativeObject, long srcBuffer, long srcOffset, long dstOffset, long length);
	protected void copyData_NoVirtual(com.earthview.world.graphic.HardwareBuffer srcBuffer, long srcOffset, long dstOffset, long length)
	{
		long srcBufferParamValue = srcBuffer.nativeObject.pointer;
		long srcOffsetParamValue = srcOffset;
		long dstOffsetParamValue = dstOffset;
		long lengthParamValue = length;
		copyData_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_NoVirtual(this.nativeObject.pointer, srcBufferParamValue, srcOffsetParamValue, dstOffsetParamValue, lengthParamValue);
	}

	protected  void copyData_CHardwareBuffer_callback(long srcBuffer)
	{
		com.earthview.world.graphic.HardwareBuffer srcBufferParamValue = new com.earthview.world.graphic.HardwareBuffer(CreatedWhenConstruct.CWC_NotToCreate);
		srcBufferParamValue.setDelegate(true);
		srcBufferParamValue.setInstancePointer(new InstancePointer(srcBuffer));
		IClassFactory srcBufferParamValueClassFactory = GlobalClassFactoryMap.get(srcBufferParamValue.getCppInstanceTypeName());
		if (srcBufferParamValueClassFactory != null)
		{
			srcBufferParamValue.setDelegate(true);
			srcBufferParamValue = (com.earthview.world.graphic.HardwareBuffer)srcBufferParamValueClassFactory.create();
			srcBufferParamValue.setDelegate(true);
			srcBufferParamValue.setInstancePointer(new InstancePointer(srcBuffer));
		}
		copyData(srcBufferParamValue);
	}

	native private void copyData_CHardwareBuffer(long pNativeObject, long srcBuffer);
	/**
	 * 复制数据
	 * @param srcBuffer 资源缓存
	 */
	public void copyData(com.earthview.world.graphic.HardwareBuffer srcBuffer)
	{
		long srcBufferParamValue = srcBuffer.nativeObject.pointer;
		copyData_CHardwareBuffer(this.nativeObject.pointer, srcBufferParamValue);
	}
	native private void copyData_CHardwareBuffer_NoVirtual(long pNativeObject, long srcBuffer);
	protected void copyData_NoVirtual(com.earthview.world.graphic.HardwareBuffer srcBuffer)
	{
		long srcBufferParamValue = srcBuffer.nativeObject.pointer;
		copyData_CHardwareBuffer_NoVirtual(this.nativeObject.pointer, srcBufferParamValue);
	}

	protected  void _updateFromShadow_void_callback()
	{
		_updateFromShadow();
	}

	native private void _updateFromShadow_void(long pNativeObject);
	/**
	 * 从阴影缓存中更新
	 * @param  
	 */
	public void _updateFromShadow()
	{
		_updateFromShadow_void(this.nativeObject.pointer);
	}
	native private void _updateFromShadow_void_NoVirtual(long pNativeObject);
	protected void _updateFromShadow_NoVirtual()
	{
		_updateFromShadow_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long getSizeInBytes_void(long pNativeObject);
	/**
	 * 获得缓存的字节大小
	 * @param  
	 * @return 字节大小
	 */
	public long getSizeInBytes()
	{
		long returnValue = getSizeInBytes_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getUsage_void(long pNativeObject);
	/**
	 * 获得缓存的方法
	 * @param  
	 * @return EarthView::World::Graphic::CHardwareBuffer::Usage方法
	 */
	public com.earthview.world.graphic.HardwareBuffer.Usage getUsage()
	{
		int returnValue = getUsage_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.HardwareBuffer.Usage.toEnum(returnValue);
	}
	native private boolean isSystemMemory_void(long pNativeObject);
	/**
	 * 是否是系统内存
	 * @param  
	 * @return 是系统内存返回true，否则返回false
	 */
	public boolean isSystemMemory()
	{
		boolean returnValue = isSystemMemory_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasShadowBuffer_void(long pNativeObject);
	/**
	 * 是否有阴影缓存
	 * @param  
	 * @return 有阴影缓存返回true，否则返回false
	 */
	public boolean hasShadowBuffer()
	{
		boolean returnValue = hasShadowBuffer_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isLocked_void(long pNativeObject);
	/**
	 * 是否上锁
	 * @param  
	 * @return 上锁返回true，否则返回false
	 */
	public boolean isLocked()
	{
		boolean returnValue = isLocked_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void suppressHardwareUpdate_ev_bool(long pNativeObject, boolean suppress);
	/**
	 * 禁止硬件更新
	 * @param suppress 是否禁止
	 */
	public void suppressHardwareUpdate(boolean suppress)
	{
		boolean suppressParamValue = suppress;
		suppressHardwareUpdate_ev_bool(this.nativeObject.pointer, suppressParamValue);
	}
	public HardwareBuffer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public HardwareBuffer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static HardwareBuffer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		HardwareBuffer obj = null;
 		if(baseObj instanceof HardwareBuffer)
		{
			obj = (HardwareBuffer)baseObj;
		} else {
			obj = new HardwareBuffer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CHardwareBuffer");
			obj.increaseCast();
		}

		return obj;
	}
}
