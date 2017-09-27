package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 硬件像素缓存类定义内存中像素缓存的相关操作
 */
public class HardwarePixelBuffer extends com.earthview.world.graphic.HardwareBuffer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CHardwarePixelBuffer", new HardwarePixelBufferClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCHardwarePixelBufferProxy", new HardwarePixelBufferClassFactory());
	}

	protected  long lockImpl_Box_LockOptions_callback(long lockBox, int options)
	{
		com.earthview.world.graphic.Box lockBoxParamValue = new com.earthview.world.graphic.Box(CreatedWhenConstruct.CWC_NotToCreate);
		lockBoxParamValue.setDelegate(true);
		lockBoxParamValue.setInstancePointer(new InstancePointer(lockBox));
		IClassFactory lockBoxParamValueClassFactory = GlobalClassFactoryMap.get(lockBoxParamValue.getCppInstanceTypeName());
		if (lockBoxParamValueClassFactory != null)
		{
			lockBoxParamValue.setDelegate(true);
			lockBoxParamValue = (com.earthview.world.graphic.Box)lockBoxParamValueClassFactory.create();
			lockBoxParamValue.setDelegate(true);
			lockBoxParamValue.setInstancePointer(new InstancePointer(lockBox));
		}
		com.earthview.world.graphic.HardwareBuffer.LockOptions optionsParamValue = com.earthview.world.graphic.HardwareBuffer.LockOptions.toEnum(options);
		com.earthview.world.graphic.PixelBox returnValue = lockImpl(lockBoxParamValue, optionsParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long lockImpl_Box_LockOptions(long pNativeObject, long lockBox, int options);
	/**
	 * 锁Impl函数
	 * @param lockBox 像素
	 * @param options 选项
	 * @return 像素盒
	 */
	public com.earthview.world.graphic.PixelBox lockImpl(com.earthview.world.graphic.Box lockBox, com.earthview.world.graphic.HardwareBuffer.LockOptions options)
	{
		long lockBoxParamValue = lockBox.nativeObject.pointer;
		int optionsParamValue = options.getValue();
		long returnValue = lockImpl_Box_LockOptions(this.nativeObject.pointer, lockBoxParamValue, optionsParamValue);
		com.earthview.world.graphic.PixelBox __returnValue = new com.earthview.world.graphic.PixelBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPixelBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.PixelBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPixelBox");
		}
		return __returnValue;
	}
	native private long lockImpl_Box_LockOptions_NoVirtual(long pNativeObject, long lockBox, int options);
	protected com.earthview.world.graphic.PixelBox lockImpl_NoVirtual(com.earthview.world.graphic.Box lockBox, com.earthview.world.graphic.HardwareBuffer.LockOptions options)
	{
		long lockBoxParamValue = lockBox.nativeObject.pointer;
		int optionsParamValue = options.getValue();
		long returnValue = lockImpl_Box_LockOptions_NoVirtual(this.nativeObject.pointer, lockBoxParamValue, optionsParamValue);
		com.earthview.world.graphic.PixelBox __returnValue = new com.earthview.world.graphic.PixelBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPixelBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.PixelBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPixelBox");
		}
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

	protected  void _clearSliceRTT_ev_size_t_callback(long zoffset)
	{
		long zoffsetParamValue = zoffset;
		_clearSliceRTT(zoffsetParamValue);
	}

	native private void _clearSliceRTT_ev_size_t(long pNativeObject, long zoffset);
	/**
	 * 清空片段RTT函数
	 * @param zoffset 偏移量
	 */
	public void _clearSliceRTT(long zoffset)
	{
		long zoffsetParamValue = zoffset;
		_clearSliceRTT_ev_size_t(this.nativeObject.pointer, zoffsetParamValue);
	}
	native private void _clearSliceRTT_ev_size_t_NoVirtual(long pNativeObject, long zoffset);
	protected void _clearSliceRTT_NoVirtual(long zoffset)
	{
		long zoffsetParamValue = zoffset;
		_clearSliceRTT_ev_size_t_NoVirtual(this.nativeObject.pointer, zoffsetParamValue);
	}

	/**
	 * 构造函数
	 * @param mWidth 宽度
	 * @param mHeight 高度
	 * @param mDepth 深度
	 * @param mFormat 格式
	 * @param usage 缓存方法
	 * @param systemMemory 是否使用系统内存
	 * @param useShadowBuffer 是否使用阴影缓存
	 */
	public HardwarePixelBuffer(long width, long height, long depth, com.earthview.world.graphic.PixelFormat format, com.earthview.world.graphic.HardwareBuffer.Usage usage, boolean useSystemMemory, boolean useShadowBuffer) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer widthPtr = new BasePointer(width);
		list.add("width", widthPtr.get());
		BasePointer heightPtr = new BasePointer(height);
		list.add("height", heightPtr.get());
		BasePointer depthPtr = new BasePointer(depth);
		list.add("depth", depthPtr.get());
		BasePointer formatPtr = new BasePointer(format);
		list.add("format", formatPtr.get());
		BasePointer usagePtr = new BasePointer(usage);
		list.add("usage", usagePtr.get());
		BasePointer useSystemMemoryPtr = new BasePointer(useSystemMemory);
		list.add("useSystemMemory", useSystemMemoryPtr.get());
		BasePointer useShadowBufferPtr = new BasePointer(useShadowBuffer);
		list.add("useShadowBuffer", useShadowBufferPtr.get());
		Create("JCHardwarePixelBufferProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.HardwarePixelBuffer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long lock_Box_LockOptions_callback(long lockBox, int options)
	{
		com.earthview.world.graphic.Box lockBoxParamValue = new com.earthview.world.graphic.Box(CreatedWhenConstruct.CWC_NotToCreate);
		lockBoxParamValue.setDelegate(true);
		lockBoxParamValue.setInstancePointer(new InstancePointer(lockBox));
		IClassFactory lockBoxParamValueClassFactory = GlobalClassFactoryMap.get(lockBoxParamValue.getCppInstanceTypeName());
		if (lockBoxParamValueClassFactory != null)
		{
			lockBoxParamValue.setDelegate(true);
			lockBoxParamValue = (com.earthview.world.graphic.Box)lockBoxParamValueClassFactory.create();
			lockBoxParamValue.setDelegate(true);
			lockBoxParamValue.setInstancePointer(new InstancePointer(lockBox));
		}
		com.earthview.world.graphic.HardwareBuffer.LockOptions optionsParamValue = com.earthview.world.graphic.HardwareBuffer.LockOptions.toEnum(options);
		com.earthview.world.graphic.PixelBox returnValue = lock(lockBoxParamValue, optionsParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long lock_Box_LockOptions(long pNativeObject, long lockBox, int options);
	/**
	 * 锁Impl函数
	 * @param lockBox 像素
	 * @param options 选项
	 * @return 像素盒
	 */
	public com.earthview.world.graphic.PixelBox lock(com.earthview.world.graphic.Box lockBox, com.earthview.world.graphic.HardwareBuffer.LockOptions options)
	{
		long lockBoxParamValue = lockBox.nativeObject.pointer;
		int optionsParamValue = options.getValue();
		long returnValue = lock_Box_LockOptions(this.nativeObject.pointer, lockBoxParamValue, optionsParamValue);
		com.earthview.world.graphic.PixelBox __returnValue = new com.earthview.world.graphic.PixelBox(CreatedWhenConstruct.CWC_NotToCreate, "CPixelBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.PixelBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPixelBox");
		}
		return __returnValue;
	}
	native private long lock_Box_LockOptions_NoVirtual(long pNativeObject, long lockBox, int options);
	protected com.earthview.world.graphic.PixelBox lock_NoVirtual(com.earthview.world.graphic.Box lockBox, com.earthview.world.graphic.HardwareBuffer.LockOptions options)
	{
		long lockBoxParamValue = lockBox.nativeObject.pointer;
		int optionsParamValue = options.getValue();
		long returnValue = lock_Box_LockOptions_NoVirtual(this.nativeObject.pointer, lockBoxParamValue, optionsParamValue);
		com.earthview.world.graphic.PixelBox __returnValue = new com.earthview.world.graphic.PixelBox(CreatedWhenConstruct.CWC_NotToCreate, "CPixelBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.PixelBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPixelBox");
		}
		return __returnValue;
	}

	native private long lock_ev_size_t_ev_size_t_LockOptions(long pNativeObject, long offset, long length, int options);
	/**
	 * 锁Impl函数
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

	native private long getCurrentLock_void(long pNativeObject);
	/**
	 * 获取当前锁
	 * @param  
	 * @return 像素盒
	 */
	public com.earthview.world.graphic.PixelBox getCurrentLock()
	{
		long returnValue = getCurrentLock_void(this.nativeObject.pointer);
		com.earthview.world.graphic.PixelBox __returnValue = new com.earthview.world.graphic.PixelBox(CreatedWhenConstruct.CWC_NotToCreate, "CPixelBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.PixelBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPixelBox");
		}
		return __returnValue;
	}
	native private void readData_ev_size_t_ev_size_t_void(long pNativeObject, long offset, long length, long pDest);
	//// @copydoc CHardwareBuffer::readData
	/// 读数据
	/// </summary>
	/// <param name="offset">偏移量</param>
	/// <param name="length">长度</param>
	/// <param name="pDest">内存大小</param>
	/// <returns></returns>
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

	protected  void blit_CHardwarePixelBufferSharedPtr_Box_Box_callback(long src, long srcBox, long dstBox)
	{
		com.earthview.world.graphic.HardwarePixelBufferSharedPtr srcParamValue = new com.earthview.world.graphic.HardwarePixelBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		srcParamValue.setDelegate(true);
		srcParamValue.setInstancePointer(new InstancePointer(src));
		IClassFactory srcParamValueClassFactory = GlobalClassFactoryMap.get(srcParamValue.getCppInstanceTypeName());
		if (srcParamValueClassFactory != null)
		{
			srcParamValue.setDelegate(true);
			srcParamValue = (com.earthview.world.graphic.HardwarePixelBufferSharedPtr)srcParamValueClassFactory.create();
			srcParamValue.setDelegate(true);
			srcParamValue.setInstancePointer(new InstancePointer(src));
		}
		com.earthview.world.graphic.Box srcBoxParamValue = new com.earthview.world.graphic.Box(CreatedWhenConstruct.CWC_NotToCreate);
		srcBoxParamValue.setDelegate(true);
		srcBoxParamValue.setInstancePointer(new InstancePointer(srcBox));
		IClassFactory srcBoxParamValueClassFactory = GlobalClassFactoryMap.get(srcBoxParamValue.getCppInstanceTypeName());
		if (srcBoxParamValueClassFactory != null)
		{
			srcBoxParamValue.setDelegate(true);
			srcBoxParamValue = (com.earthview.world.graphic.Box)srcBoxParamValueClassFactory.create();
			srcBoxParamValue.setDelegate(true);
			srcBoxParamValue.setInstancePointer(new InstancePointer(srcBox));
		}
		com.earthview.world.graphic.Box dstBoxParamValue = new com.earthview.world.graphic.Box(CreatedWhenConstruct.CWC_NotToCreate);
		dstBoxParamValue.setDelegate(true);
		dstBoxParamValue.setInstancePointer(new InstancePointer(dstBox));
		IClassFactory dstBoxParamValueClassFactory = GlobalClassFactoryMap.get(dstBoxParamValue.getCppInstanceTypeName());
		if (dstBoxParamValueClassFactory != null)
		{
			dstBoxParamValue.setDelegate(true);
			dstBoxParamValue = (com.earthview.world.graphic.Box)dstBoxParamValueClassFactory.create();
			dstBoxParamValue.setDelegate(true);
			dstBoxParamValue.setInstancePointer(new InstancePointer(dstBox));
		}
		blit(srcParamValue, srcBoxParamValue, dstBoxParamValue);
	}

	native private void blit_CHardwarePixelBufferSharedPtr_Box_Box(long pNativeObject, long src, long srcBox, long dstBox);
	/**
	 * 将另一个像素缓存复制到这个像素缓存区域中
	 * @param src 标准要求代码
	 * @param srcBox 描述资源在src中的位置
	 * @param dstBox 资源像素缓存
	 */
	public void blit(com.earthview.world.graphic.HardwarePixelBufferSharedPtr src, com.earthview.world.graphic.Box srcBox, com.earthview.world.graphic.Box dstBox)
	{
		long srcParamValue = src.nativeObject.pointer;
		long srcBoxParamValue = srcBox.nativeObject.pointer;
		long dstBoxParamValue = dstBox.nativeObject.pointer;
		blit_CHardwarePixelBufferSharedPtr_Box_Box(this.nativeObject.pointer, srcParamValue, srcBoxParamValue, dstBoxParamValue);
	}
	native private void blit_CHardwarePixelBufferSharedPtr_Box_Box_NoVirtual(long pNativeObject, long src, long srcBox, long dstBox);
	protected void blit_NoVirtual(com.earthview.world.graphic.HardwarePixelBufferSharedPtr src, com.earthview.world.graphic.Box srcBox, com.earthview.world.graphic.Box dstBox)
	{
		long srcParamValue = src.nativeObject.pointer;
		long srcBoxParamValue = srcBox.nativeObject.pointer;
		long dstBoxParamValue = dstBox.nativeObject.pointer;
		blit_CHardwarePixelBufferSharedPtr_Box_Box_NoVirtual(this.nativeObject.pointer, srcParamValue, srcBoxParamValue, dstBoxParamValue);
	}

	native private void blit_CHardwarePixelBufferSharedPtr(long pNativeObject, long src);
	/**
	 * 将另一个像素缓存复制到这个像素缓存区域中
	 * @param src 标准要求代码
	 */
	public void blit(com.earthview.world.graphic.HardwarePixelBufferSharedPtr src)
	{
		long srcParamValue = src.nativeObject.pointer;
		blit_CHardwarePixelBufferSharedPtr(this.nativeObject.pointer, srcParamValue);
	}
	protected  void blitFromMemory_CPixelBox_Box_callback(long src, long dstBox)
	{
		com.earthview.world.graphic.PixelBox srcParamValue = new com.earthview.world.graphic.PixelBox(CreatedWhenConstruct.CWC_NotToCreate);
		srcParamValue.setDelegate(true);
		srcParamValue.setInstancePointer(new InstancePointer(src));
		IClassFactory srcParamValueClassFactory = GlobalClassFactoryMap.get(srcParamValue.getCppInstanceTypeName());
		if (srcParamValueClassFactory != null)
		{
			srcParamValue.setDelegate(true);
			srcParamValue = (com.earthview.world.graphic.PixelBox)srcParamValueClassFactory.create();
			srcParamValue.setDelegate(true);
			srcParamValue.setInstancePointer(new InstancePointer(src));
		}
		com.earthview.world.graphic.Box dstBoxParamValue = new com.earthview.world.graphic.Box(CreatedWhenConstruct.CWC_NotToCreate);
		dstBoxParamValue.setDelegate(true);
		dstBoxParamValue.setInstancePointer(new InstancePointer(dstBox));
		IClassFactory dstBoxParamValueClassFactory = GlobalClassFactoryMap.get(dstBoxParamValue.getCppInstanceTypeName());
		if (dstBoxParamValueClassFactory != null)
		{
			dstBoxParamValue.setDelegate(true);
			dstBoxParamValue = (com.earthview.world.graphic.Box)dstBoxParamValueClassFactory.create();
			dstBoxParamValue.setDelegate(true);
			dstBoxParamValue.setInstancePointer(new InstancePointer(dstBox));
		}
		blitFromMemory(srcParamValue, dstBoxParamValue);
	}

	native private void blitFromMemory_CPixelBox_Box(long pNativeObject, long src, long dstBox);
	/**
	 * 从内存的像素缓存复制到这个像素缓存区域中
	 * @param src 标准要求代码
	 * @param dstBox 资源像素缓存
	 */
	public void blitFromMemory(com.earthview.world.graphic.PixelBox src, com.earthview.world.graphic.Box dstBox)
	{
		long srcParamValue = src.nativeObject.pointer;
		long dstBoxParamValue = dstBox.nativeObject.pointer;
		blitFromMemory_CPixelBox_Box(this.nativeObject.pointer, srcParamValue, dstBoxParamValue);
	}
	native private void blitFromMemory_CPixelBox_Box_NoVirtual(long pNativeObject, long src, long dstBox);
	protected void blitFromMemory_NoVirtual(com.earthview.world.graphic.PixelBox src, com.earthview.world.graphic.Box dstBox)
	{
		long srcParamValue = src.nativeObject.pointer;
		long dstBoxParamValue = dstBox.nativeObject.pointer;
		blitFromMemory_CPixelBox_Box_NoVirtual(this.nativeObject.pointer, srcParamValue, dstBoxParamValue);
	}

	native private void blitFromMemory_CPixelBox(long pNativeObject, long src);
	/**
	 * 从内存的像素缓存复制到这个像素缓存区域中
	 * @param src 标准要求代码
	 */
	public void blitFromMemory(com.earthview.world.graphic.PixelBox src)
	{
		long srcParamValue = src.nativeObject.pointer;
		blitFromMemory_CPixelBox(this.nativeObject.pointer, srcParamValue);
	}
	protected  void blitToMemory_Box_CPixelBox_callback(long srcBox, long dst)
	{
		com.earthview.world.graphic.Box srcBoxParamValue = new com.earthview.world.graphic.Box(CreatedWhenConstruct.CWC_NotToCreate);
		srcBoxParamValue.setDelegate(true);
		srcBoxParamValue.setInstancePointer(new InstancePointer(srcBox));
		IClassFactory srcBoxParamValueClassFactory = GlobalClassFactoryMap.get(srcBoxParamValue.getCppInstanceTypeName());
		if (srcBoxParamValueClassFactory != null)
		{
			srcBoxParamValue.setDelegate(true);
			srcBoxParamValue = (com.earthview.world.graphic.Box)srcBoxParamValueClassFactory.create();
			srcBoxParamValue.setDelegate(true);
			srcBoxParamValue.setInstancePointer(new InstancePointer(srcBox));
		}
		com.earthview.world.graphic.PixelBox dstParamValue = new com.earthview.world.graphic.PixelBox(CreatedWhenConstruct.CWC_NotToCreate);
		dstParamValue.setDelegate(true);
		dstParamValue.setInstancePointer(new InstancePointer(dst));
		IClassFactory dstParamValueClassFactory = GlobalClassFactoryMap.get(dstParamValue.getCppInstanceTypeName());
		if (dstParamValueClassFactory != null)
		{
			dstParamValue.setDelegate(true);
			dstParamValue = (com.earthview.world.graphic.PixelBox)dstParamValueClassFactory.create();
			dstParamValue.setDelegate(true);
			dstParamValue.setInstancePointer(new InstancePointer(dst));
		}
		blitToMemory(srcBoxParamValue, dstParamValue);
	}

	native private void blitToMemory_Box_CPixelBox(long pNativeObject, long srcBox, long dst);
	/**
	 * 从这个像素缓存复制到内存的像素缓存中
	 * @param srcBox 标准要求代码盒
	 * @param dst 资源像素缓存
	 */
	public void blitToMemory(com.earthview.world.graphic.Box srcBox, com.earthview.world.graphic.PixelBox dst)
	{
		long srcBoxParamValue = srcBox.nativeObject.pointer;
		long dstParamValue = dst.nativeObject.pointer;
		blitToMemory_Box_CPixelBox(this.nativeObject.pointer, srcBoxParamValue, dstParamValue);
	}
	native private void blitToMemory_Box_CPixelBox_NoVirtual(long pNativeObject, long srcBox, long dst);
	protected void blitToMemory_NoVirtual(com.earthview.world.graphic.Box srcBox, com.earthview.world.graphic.PixelBox dst)
	{
		long srcBoxParamValue = srcBox.nativeObject.pointer;
		long dstParamValue = dst.nativeObject.pointer;
		blitToMemory_Box_CPixelBox_NoVirtual(this.nativeObject.pointer, srcBoxParamValue, dstParamValue);
	}

	native private void blitToMemory_CPixelBox(long pNativeObject, long dst);
	/**
	 * 从这个像素缓存复制到内存的像素缓存中
	 * @param dst 资源像素缓存
	 */
	public void blitToMemory(com.earthview.world.graphic.PixelBox dst)
	{
		long dstParamValue = dst.nativeObject.pointer;
		blitToMemory_CPixelBox(this.nativeObject.pointer, dstParamValue);
	}
	protected  long getRenderTarget_ev_size_t_callback(long slice)
	{
		long sliceParamValue = slice;
		com.earthview.world.graphic.RenderTexture returnValue = getRenderTarget(sliceParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRenderTarget_ev_size_t(long pNativeObject, long slice);
	/**
	 * 从像素缓存中获取渲染目标
	 * @param slice 片段
	 * @return 渲染纹理
	 */
	public com.earthview.world.graphic.RenderTexture getRenderTarget(long slice)
	{
		long sliceParamValue = slice;
		long returnValue = getRenderTarget_ev_size_t(this.nativeObject.pointer, sliceParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderTexture __returnValue = new com.earthview.world.graphic.RenderTexture(CreatedWhenConstruct.CWC_NotToCreate, "CRenderTexture");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderTexture)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderTexture");
		}
		return __returnValue;
	}
	native private long getRenderTarget_ev_size_t_NoVirtual(long pNativeObject, long slice);
	protected com.earthview.world.graphic.RenderTexture getRenderTarget_NoVirtual(long slice)
	{
		long sliceParamValue = slice;
		long returnValue = getRenderTarget_ev_size_t_NoVirtual(this.nativeObject.pointer, sliceParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderTexture __returnValue = new com.earthview.world.graphic.RenderTexture(CreatedWhenConstruct.CWC_NotToCreate, "CRenderTexture");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderTexture)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderTexture");
		}
		return __returnValue;
	}

	native private long getRenderTarget_void(long pNativeObject);
	/// <summary>
	/// 从像素缓存中获取渲染目标
	/// </summary>
	/// <param name=""></param>
	/// <returns>渲染纹理</returns
	public com.earthview.world.graphic.RenderTexture getRenderTarget()
	{
		long returnValue = getRenderTarget_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderTexture __returnValue = new com.earthview.world.graphic.RenderTexture(CreatedWhenConstruct.CWC_NotToCreate, "CRenderTexture");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderTexture)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderTexture");
		}
		return __returnValue;
	}
	native private long getWidth_void(long pNativeObject);
	/**
	 * 获取缓存宽度
	 * @param  
	 * @return 缓存宽度
	 */
	public long getWidth()
	{
		long returnValue = getWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getHeight_void(long pNativeObject);
	/**
	 * 获取缓存高度
	 * @param  
	 * @return 缓存高度
	 */
	public long getHeight()
	{
		long returnValue = getHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getDepth_void(long pNativeObject);
	/**
	 * 获取缓存深度
	 * @param  
	 * @return 缓存深度
	 */
	public long getDepth()
	{
		long returnValue = getDepth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getFormat_void(long pNativeObject);
	/**
	 * 获取缓存方式
	 * @param  
	 * @return 像素缓存方式
	 */
	public com.earthview.world.graphic.PixelFormat getFormat()
	{
		int returnValue = getFormat_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.PixelFormat.toEnum(returnValue);
	}
	public HardwarePixelBuffer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public HardwarePixelBuffer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 解锁Impl函数
	 * @param  
	 */
	public void unlockImpl()
	{
		super.unlockImpl_NoVirtual();
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
	
	native protected void register_lockImpl_Box_LockOptions(long pNativeObject, String method);
	native protected void register__clearSliceRTT_ev_size_t(long pNativeObject, String method);
	native protected void register_lock_Box_LockOptions(long pNativeObject, String method);
	native protected void register_blit_CHardwarePixelBufferSharedPtr_Box_Box(long pNativeObject, String method);
	native protected void register_blitFromMemory_CPixelBox_Box(long pNativeObject, String method);
	native protected void register_blitToMemory_Box_CPixelBox(long pNativeObject, String method);
	native protected void register_getRenderTarget_ev_size_t(long pNativeObject, String method);
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
			this.register_lockImpl_Box_LockOptions(this.nativeObject.pointer, "lockImpl_Box_LockOptions_callback");
			this.register__clearSliceRTT_ev_size_t(this.nativeObject.pointer, "_clearSliceRTT_ev_size_t_callback");
			this.register_lock_Box_LockOptions(this.nativeObject.pointer, "lock_Box_LockOptions_callback");
			this.register_blit_CHardwarePixelBufferSharedPtr_Box_Box(this.nativeObject.pointer, "blit_CHardwarePixelBufferSharedPtr_Box_Box_callback");
			this.register_blitFromMemory_CPixelBox_Box(this.nativeObject.pointer, "blitFromMemory_CPixelBox_Box_callback");
			this.register_blitToMemory_Box_CPixelBox(this.nativeObject.pointer, "blitToMemory_Box_CPixelBox_callback");
			this.register_getRenderTarget_ev_size_t(this.nativeObject.pointer, "getRenderTarget_ev_size_t_callback");
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
	
	public static HardwarePixelBuffer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		HardwarePixelBuffer obj = null;
 		if(baseObj instanceof HardwarePixelBuffer)
		{
			obj = (HardwarePixelBuffer)baseObj;
		} else {
			obj = new HardwarePixelBuffer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CHardwarePixelBuffer");
			obj.increaseCast();
		}

		return obj;
	}
}
