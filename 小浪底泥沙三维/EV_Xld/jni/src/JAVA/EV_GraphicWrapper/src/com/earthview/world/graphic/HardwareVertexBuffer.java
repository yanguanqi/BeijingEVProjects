package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HardwareVertexBuffer extends com.earthview.world.graphic.HardwareBuffer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CHardwareVertexBuffer", new HardwareVertexBufferClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCHardwareVertexBufferProxy", new HardwareVertexBufferClassFactory());
	}

	//// Should be called by CHardwareBufferManager
	public HardwareVertexBuffer(com.earthview.world.graphic.HardwareBufferManagerBase ref_mgr, long vertexSize, long numVertices, com.earthview.world.graphic.HardwareBuffer.Usage usage, boolean useSystemMemory, boolean useShadowBuffer) {
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
		BasePointer useSystemMemoryPtr = new BasePointer(useSystemMemory);
		list.add("useSystemMemory", useSystemMemoryPtr.get());
		BasePointer useShadowBufferPtr = new BasePointer(useShadowBuffer);
		list.add("useShadowBuffer", useShadowBufferPtr.get());
		Create("JCHardwareVertexBufferProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.HardwareVertexBuffer".equals(this.getClass().getName()))
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
	//// Return the manager of this buffer, if any
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
	native private long getVertexSize_void(long pNativeObject);
	//// Gets the size in bytes of a single vertex in this buffer
	public long getVertexSize()
	{
		long returnValue = getVertexSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getNumVertices_void(long pNativeObject);
	//// Get the number of vertices in this buffer
	public long getNumVertices()
	{
		long returnValue = getNumVertices_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getIsInstanceData_void(long pNativeObject);
	/// NB subclasses should override lock, unlock, readData, writeData
	//// Get if this vertex buffer is an "instance data" buffer (per instance)
	public boolean getIsInstanceData()
	{
		boolean returnValue = getIsInstanceData_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIsInstanceData_bool(long pNativeObject, boolean val);
	//// Set if this vertex buffer is an "instance data" buffer (per instance)
	public void setIsInstanceData(boolean val)
	{
		boolean valParamValue = val;
		setIsInstanceData_bool(this.nativeObject.pointer, valParamValue);
	}
	native private long getInstanceDataStepRate_void(long pNativeObject);
	public long getInstanceDataStepRate()
	{
		long returnValue = getInstanceDataStepRate_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setInstanceDataStepRate_size_t(long pNativeObject, long val);
	public void setInstanceDataStepRate(long val)
	{
		long valParamValue = val;
		setInstanceDataStepRate_size_t(this.nativeObject.pointer, valParamValue);
	}
	public HardwareVertexBuffer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public HardwareVertexBuffer(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static HardwareVertexBuffer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		HardwareVertexBuffer obj = null;
 		if(baseObj instanceof HardwareVertexBuffer)
		{
			obj = (HardwareVertexBuffer)baseObj;
		} else {
			obj = new HardwareVertexBuffer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CHardwareVertexBuffer");
			obj.increaseCast();
		}

		return obj;
	}
}
