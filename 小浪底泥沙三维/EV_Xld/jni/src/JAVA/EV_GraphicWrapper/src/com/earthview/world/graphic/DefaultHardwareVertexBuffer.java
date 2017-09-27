package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 默认硬件顶点缓存类定义内存中缓存的相关操作
 */
public class DefaultHardwareVertexBuffer extends com.earthview.world.graphic.HardwareVertexBuffer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CDefaultHardwareVertexBuffer", new DefaultHardwareVertexBufferClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCDefaultHardwareVertexBufferProxy", new DefaultHardwareVertexBufferClassFactory());
	}

	native private long lockImpl_ev_size_t_ev_size_t_LockOptions(long pNativeObject, long offset, long length, int options);
	/**
	 * 锁的实现函数
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
	 * 解锁的实现函数
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
	 * @param vertexSize 顶点大小
	 * @param numVertices 至高点编号
	 * @param usage 缓存方式
	 */
	public DefaultHardwareVertexBuffer(long vertexSize, long numVertices, com.earthview.world.graphic.HardwareBuffer.Usage usage) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer vertexSizePtr = new BasePointer(vertexSize);
		list.add("vertexSize", vertexSizePtr.get());
		BasePointer numVerticesPtr = new BasePointer(numVertices);
		list.add("numVertices", numVerticesPtr.get());
		BasePointer usagePtr = new BasePointer(usage);
		list.add("usage", usagePtr.get());
		Create("JCDefaultHardwareVertexBufferProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.DefaultHardwareVertexBuffer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param mgr 缓存管理基础
	 * @param vertexSize 顶点大小
	 * @param numVertices 至高点编号
	 * @param usage 缓存方式
	 */
	public DefaultHardwareVertexBuffer(com.earthview.world.graphic.HardwareBufferManagerBase ref_mgr, long vertexSize, long numVertices, com.earthview.world.graphic.HardwareBuffer.Usage usage) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_mgrPtr = new BasePointer(ref_mgr);
		list.add("ref_mgr", ref_mgrPtr.get());
		BasePointer vertexSizePtr = new BasePointer(vertexSize);
		list.add("vertexSize", vertexSizePtr.get());
		BasePointer numVerticesPtr = new BasePointer(numVertices);
		list.add("numVertices", numVerticesPtr.get());
		BasePointer usagePtr = new BasePointer(usage);
		list.add("usage", usagePtr.get());
		Create("JCDefaultHardwareVertexBufferProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.DefaultHardwareVertexBuffer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
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
	/**
	 * 写数据
	 * @param offset 偏移量
	 * @param length 长度
	 * @param pSource 资源
	 */
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

	native private long lock_ev_size_t_ev_size_t_LockOptions(long pNativeObject, long offset, long length, int options);
	/**
	 * 锁
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

	public DefaultHardwareVertexBuffer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DefaultHardwareVertexBuffer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static DefaultHardwareVertexBuffer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DefaultHardwareVertexBuffer obj = null;
 		if(baseObj instanceof DefaultHardwareVertexBuffer)
		{
			obj = (DefaultHardwareVertexBuffer)baseObj;
		} else {
			obj = new DefaultHardwareVertexBuffer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDefaultHardwareVertexBuffer");
			obj.increaseCast();
		}

		return obj;
	}
}
