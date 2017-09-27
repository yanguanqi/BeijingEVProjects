package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 'canvas'可以获得渲染操作的结果这个抽象类定义了渲染操作的所有渲染目标的公共根
 */
public class RenderTarget extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderTarget", new RenderTargetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCRenderTargetProxy", new RenderTargetClassFactory());
	}

	public enum StatFlags implements INativeEnum<StatFlags> {
		SF_NONE(StatFlagsHelper.ENUM_VALUES[0]),
		SF_FPS(StatFlagsHelper.ENUM_VALUES[1]),
		SF_AVG_FPS(StatFlagsHelper.ENUM_VALUES[2]),
		SF_BEST_FPS(StatFlagsHelper.ENUM_VALUES[3]),
		SF_WORST_FPS(StatFlagsHelper.ENUM_VALUES[4]),
		SF_TRIANGLE_COUNT(StatFlagsHelper.ENUM_VALUES[5]),
		SF_ALL(StatFlagsHelper.ENUM_VALUES[6]);
		private int value;
		StatFlags(int i) {
			this.value = i;
		}
		public StatFlags getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final StatFlags toEnum(int retval) {
			if(retval == SF_NONE.value){
				return SF_NONE;
			}
			else if(retval == SF_FPS.value){
				return SF_FPS;
			}
			else if(retval == SF_AVG_FPS.value){
				return SF_AVG_FPS;
			}
			else if(retval == SF_BEST_FPS.value){
				return SF_BEST_FPS;
			}
			else if(retval == SF_WORST_FPS.value){
				return SF_WORST_FPS;
			}
			else if(retval == SF_TRIANGLE_COUNT.value){
				return SF_TRIANGLE_COUNT;
			}
			else if(retval == SF_ALL.value){
				return SF_ALL;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class StatFlagsHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public static final class FrameStats extends RemoteNativeObject {
	
		public FrameStats(InstancePointer pointer, boolean remote) {
			super(pointer, remote);
		}
		
		public FrameStats(InstancePointer pInstance) {
			super(pInstance);
		}
		
		native private static long Create();
		public FrameStats() {
			super(new InstancePointer(Create()),false);
		}
		native private float get_lastFPS_void(long pNativeObject);
		public float get_lastFPS()
		{
			float jniValue = get_lastFPS_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_lastFPS_ev_real32 (long pNativeObject, float value);
		public void set_lastFPS(float lastFPS)
		{
			float lastFPSParamValue = lastFPS;
			
			set_lastFPS_ev_real32(this.nativeObject.pointer, lastFPSParamValue);
		}
		
		native private float get_avgFPS_void(long pNativeObject);
		public float get_avgFPS()
		{
			float jniValue = get_avgFPS_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_avgFPS_ev_real32 (long pNativeObject, float value);
		public void set_avgFPS(float avgFPS)
		{
			float avgFPSParamValue = avgFPS;
			
			set_avgFPS_ev_real32(this.nativeObject.pointer, avgFPSParamValue);
		}
		
		native private float get_bestFPS_void(long pNativeObject);
		public float get_bestFPS()
		{
			float jniValue = get_bestFPS_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_bestFPS_ev_real32 (long pNativeObject, float value);
		public void set_bestFPS(float bestFPS)
		{
			float bestFPSParamValue = bestFPS;
			
			set_bestFPS_ev_real32(this.nativeObject.pointer, bestFPSParamValue);
		}
		
		native private float get_worstFPS_void(long pNativeObject);
		public float get_worstFPS()
		{
			float jniValue = get_worstFPS_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_worstFPS_ev_real32 (long pNativeObject, float value);
		public void set_worstFPS(float worstFPS)
		{
			float worstFPSParamValue = worstFPS;
			
			set_worstFPS_ev_real32(this.nativeObject.pointer, worstFPSParamValue);
		}
		
		native private long get_bestFrameTime_void(long pNativeObject);
		public long get_bestFrameTime()
		{
			long jniValue = get_bestFrameTime_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_bestFrameTime_ev_uint32 (long pNativeObject, long value);
		public void set_bestFrameTime(long bestFrameTime)
		{
			long bestFrameTimeParamValue = bestFrameTime;
			
			set_bestFrameTime_ev_uint32(this.nativeObject.pointer, bestFrameTimeParamValue);
		}
		
		native private long get_worstFrameTime_void(long pNativeObject);
		public long get_worstFrameTime()
		{
			long jniValue = get_worstFrameTime_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_worstFrameTime_ev_uint32 (long pNativeObject, long value);
		public void set_worstFrameTime(long worstFrameTime)
		{
			long worstFrameTimeParamValue = worstFrameTime;
			
			set_worstFrameTime_ev_uint32(this.nativeObject.pointer, worstFrameTimeParamValue);
		}
		
		native private long get_triangleCount_void(long pNativeObject);
		public long get_triangleCount()
		{
			long jniValue = get_triangleCount_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_triangleCount_ev_size_t (long pNativeObject, long value);
		public void set_triangleCount(long triangleCount)
		{
			long triangleCountParamValue = triangleCount;
			
			set_triangleCount_ev_size_t(this.nativeObject.pointer, triangleCountParamValue);
		}
		
		native private long get_batchCount_void(long pNativeObject);
		public long get_batchCount()
		{
			long jniValue = get_batchCount_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_batchCount_ev_size_t (long pNativeObject, long value);
		public void set_batchCount(long batchCount)
		{
			long batchCountParamValue = batchCount;
			
			set_batchCount_ev_size_t(this.nativeObject.pointer, batchCountParamValue);
		}
		
		native private long get_vertexCount_void(long pNativeObject);
		public long get_vertexCount()
		{
			long jniValue = get_vertexCount_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_vertexCount_ev_size_t (long pNativeObject, long value);
		public void set_vertexCount(long vertexCount)
		{
			long vertexCountParamValue = vertexCount;
			
			set_vertexCount_ev_size_t(this.nativeObject.pointer, vertexCountParamValue);
		}
		
		
		native private static void Destroy(long pNativeObject);
		public void destroyNativeObject() {
			Destroy(this.nativeObject.pointer);
		}
	}
	public enum FrameBuffer implements INativeEnum<FrameBuffer> {
		FB_FRONT(FrameBufferHelper.ENUM_VALUES[0]),
		FB_BACK(FrameBufferHelper.ENUM_VALUES[1]),
		FB_AUTO(FrameBufferHelper.ENUM_VALUES[2]);
		private int value;
		FrameBuffer(int i) {
			this.value = i;
		}
		public FrameBuffer getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final FrameBuffer toEnum(int retval) {
			if(retval == FB_FRONT.value){
				return FB_FRONT;
			}
			else if(retval == FB_BACK.value){
				return FB_BACK;
			}
			else if(retval == FB_AUTO.value){
				return FB_AUTO;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class FrameBufferHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public RenderTarget() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCRenderTargetProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.RenderTarget".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long getName_void_callback()
	{
		StringPointer returnValue = getName();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getName_void(long pNativeObject);
	/**
	 * 获得渲染目标的名字
	 * @param  
	 */
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getName_void_NoVirtual(long pNativeObject);
	protected StringPointer getName_NoVirtual()
	{
		long returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}

	protected  void getMetrics_ev_uint32_ev_uint32_ev_uint32_callback(long width, long height, long colourDepth)
	{
		UIntegerPointer widthParamValue = new UIntegerPointer(new InstancePointer(width));
		UIntegerPointer heightParamValue = new UIntegerPointer(new InstancePointer(height));
		UIntegerPointer colourDepthParamValue = new UIntegerPointer(new InstancePointer(colourDepth));
		getMetrics(widthParamValue, heightParamValue, colourDepthParamValue);
	}

	native private void getMetrics_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, long width, long height, long colourDepth);
	/**
	 * 找回渲染目标的信息
	 * @param width 渲染目标的宽
	 * @param height 渲染目标的高
	 * @param colourDepth 渲染目标的颜色深度
	 */
	public void getMetrics(UIntegerPointer width, UIntegerPointer height, UIntegerPointer colourDepth)
	{
		long widthParamValue = width.nativeObject.pointer;
		long heightParamValue = height.nativeObject.pointer;
		long colourDepthParamValue = colourDepth.nativeObject.pointer;
		getMetrics_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, widthParamValue, heightParamValue, colourDepthParamValue);
	}
	native private void getMetrics_ev_uint32_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long width, long height, long colourDepth);
	protected void getMetrics_NoVirtual(UIntegerPointer width, UIntegerPointer height, UIntegerPointer colourDepth)
	{
		long widthParamValue = width.nativeObject.pointer;
		long heightParamValue = height.nativeObject.pointer;
		long colourDepthParamValue = colourDepth.nativeObject.pointer;
		getMetrics_ev_uint32_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, widthParamValue, heightParamValue, colourDepthParamValue);
	}

	protected  long getWidth_void_callback()
	{
		long returnValue = getWidth();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getWidth_void(long pNativeObject);
	/**
	 * 获得渲染目标的宽
	 * @param  
	 */
	public long getWidth()
	{
		long returnValue = getWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getWidth_void_NoVirtual(long pNativeObject);
	protected long getWidth_NoVirtual()
	{
		long returnValue = getWidth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getHeight_void_callback()
	{
		long returnValue = getHeight();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getHeight_void(long pNativeObject);
	/**
	 * 获得渲染目标的高
	 * @param  
	 */
	public long getHeight()
	{
		long returnValue = getHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getHeight_void_NoVirtual(long pNativeObject);
	protected long getHeight_NoVirtual()
	{
		long returnValue = getHeight_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getColourDepth_void_callback()
	{
		long returnValue = getColourDepth();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getColourDepth_void(long pNativeObject);
	/**
	 * 获得渲染目标的颜色深度
	 * @param  
	 */
	public long getColourDepth()
	{
		long returnValue = getColourDepth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getColourDepth_void_NoVirtual(long pNativeObject);
	protected long getColourDepth_NoVirtual()
	{
		long returnValue = getColourDepth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setDepthBufferPool_ev_uint16(long pNativeObject, int poolId);
	public void setDepthBufferPool(int poolId)
	{
		int poolIdParamValue = poolId;
		setDepthBufferPool_ev_uint16(this.nativeObject.pointer, poolIdParamValue);
	}
	native private int getDepthBufferPool_void(long pNativeObject);
	///Returns the pool ID this RenderTarget should query from. @see DepthBuffer
	public int getDepthBufferPool()
	{
		int returnValue = getDepthBufferPool_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getDepthBuffer_void(long pNativeObject);
	public com.earthview.world.graphic.DepthBuffer getDepthBuffer()
	{
		long returnValue = getDepthBuffer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.DepthBuffer __returnValue = new com.earthview.world.graphic.DepthBuffer(CreatedWhenConstruct.CWC_NotToCreate, "CDepthBuffer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.DepthBuffer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDepthBuffer");
		}
		return __returnValue;
	}
	protected  boolean attachDepthBuffer_CDepthBuffer_callback(long ref_depthBuffer)
	{
		com.earthview.world.graphic.DepthBuffer ref_depthBufferParamValue = (ref_depthBuffer == 0L ? null : new com.earthview.world.graphic.DepthBuffer(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_depthBufferParamValue != null)
		{
		ref_depthBufferParamValue.setDelegate(true);
		ref_depthBufferParamValue.setInstancePointer(new InstancePointer(ref_depthBuffer));
		IClassFactory ref_depthBufferParamValueClassFactory = GlobalClassFactoryMap.get(ref_depthBufferParamValue.getCppInstanceTypeName());
		if (ref_depthBufferParamValueClassFactory != null)
		{
			ref_depthBufferParamValue.setDelegate(true);
			ref_depthBufferParamValue = (com.earthview.world.graphic.DepthBuffer)ref_depthBufferParamValueClassFactory.create();
			ref_depthBufferParamValue.setDelegate(true);
			ref_depthBufferParamValue.setInstancePointer(new InstancePointer(ref_depthBuffer));
		}
		}
		boolean returnValue = attachDepthBuffer(ref_depthBufferParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean attachDepthBuffer_CDepthBuffer(long pNativeObject, long ref_depthBuffer);
	///Returns false if couldn't attach
	public boolean attachDepthBuffer(com.earthview.world.graphic.DepthBuffer ref_depthBuffer)
	{
		long ref_depthBufferParamValue = (ref_depthBuffer == null ? 0L : ref_depthBuffer.nativeObject.pointer);
		boolean returnValue = attachDepthBuffer_CDepthBuffer(this.nativeObject.pointer, ref_depthBufferParamValue);
		return returnValue;
	}
	native private boolean attachDepthBuffer_CDepthBuffer_NoVirtual(long pNativeObject, long ref_depthBuffer);
	protected boolean attachDepthBuffer_NoVirtual(com.earthview.world.graphic.DepthBuffer ref_depthBuffer)
	{
		long ref_depthBufferParamValue = (ref_depthBuffer == null ? 0L : ref_depthBuffer.nativeObject.pointer);
		boolean returnValue = attachDepthBuffer_CDepthBuffer_NoVirtual(this.nativeObject.pointer, ref_depthBufferParamValue);
		return returnValue;
	}

	protected  void detachDepthBuffer_void_callback()
	{
		detachDepthBuffer();
	}

	native private void detachDepthBuffer_void(long pNativeObject);
	public void detachDepthBuffer()
	{
		detachDepthBuffer_void(this.nativeObject.pointer);
	}
	native private void detachDepthBuffer_void_NoVirtual(long pNativeObject);
	protected void detachDepthBuffer_NoVirtual()
	{
		detachDepthBuffer_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void _detachDepthBuffer_void_callback()
	{
		_detachDepthBuffer();
	}

	native private void _detachDepthBuffer_void(long pNativeObject);
	public void _detachDepthBuffer()
	{
		_detachDepthBuffer_void(this.nativeObject.pointer);
	}
	native private void _detachDepthBuffer_void_NoVirtual(long pNativeObject);
	protected void _detachDepthBuffer_NoVirtual()
	{
		_detachDepthBuffer_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void update_ev_bool_callback(boolean swapBuffers)
	{
		boolean swapBuffersParamValue = swapBuffers;
		update(swapBuffersParamValue);
	}

	native private void update_ev_bool(long pNativeObject, boolean swapBuffers);
	/**
	 * 渲染目标更新内容
	 * @param swapBuffers 如果为true更新后立刻交换它的缓冲，否则不交换
	 */
	public void update(boolean swapBuffers)
	{
		boolean swapBuffersParamValue = swapBuffers;
		update_ev_bool(this.nativeObject.pointer, swapBuffersParamValue);
	}
	native private void update_ev_bool_NoVirtual(long pNativeObject, boolean swapBuffers);
	protected void update_NoVirtual(boolean swapBuffers)
	{
		boolean swapBuffersParamValue = swapBuffers;
		update_ev_bool_NoVirtual(this.nativeObject.pointer, swapBuffersParamValue);
	}

	protected  void update_void_callback()
	{
		update();
	}

	native private void update_void(long pNativeObject);
	/**
	 * 渲染目标更新内容
	 * @param  
	 */
	public void update()
	{
		update_void(this.nativeObject.pointer);
	}
	native private void update_void_NoVirtual(long pNativeObject);
	protected void update_NoVirtual()
	{
		update_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void swapBuffers_ev_bool_callback(boolean waitForVSync)
	{
		boolean waitForVSyncParamValue = waitForVSync;
		swapBuffers(waitForVSyncParamValue);
	}

	native private void swapBuffers_ev_bool(long pNativeObject, boolean waitForVSync);
	/**
	 * 交换帧缓冲来显示下一个帧
	 * @param waitForVSync 
	 */
	public void swapBuffers(boolean waitForVSync)
	{
		boolean waitForVSyncParamValue = waitForVSync;
		swapBuffers_ev_bool(this.nativeObject.pointer, waitForVSyncParamValue);
	}
	native private void swapBuffers_ev_bool_NoVirtual(long pNativeObject, boolean waitForVSync);
	protected void swapBuffers_NoVirtual(boolean waitForVSync)
	{
		boolean waitForVSyncParamValue = waitForVSync;
		swapBuffers_ev_bool_NoVirtual(this.nativeObject.pointer, waitForVSyncParamValue);
	}

	protected  void swapBuffers_void_callback()
	{
		swapBuffers();
	}

	native private void swapBuffers_void(long pNativeObject);
	/**
	 * 交换帧缓冲来显示下一个帧
	 * @param  
	 */
	public void swapBuffers()
	{
		swapBuffers_void(this.nativeObject.pointer);
	}
	native private void swapBuffers_void_NoVirtual(long pNativeObject);
	protected void swapBuffers_NoVirtual()
	{
		swapBuffers_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_ev_real32_callback(long ref_cam, int ZOrder, float left, float top, float width, float height)
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
		int ZOrderParamValue = ZOrder;
		float leftParamValue = left;
		float topParamValue = top;
		float widthParamValue = width;
		float heightParamValue = height;
		com.earthview.world.graphic.Viewport returnValue = addViewport(ref_camParamValue, ZOrderParamValue, leftParamValue, topParamValue, widthParamValue, heightParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, long ref_cam, int ZOrder, float left, float top, float width, float height);
	/**
	 * 给渲染目标添加一个视口
	 * @param cam 摄像机从视口的哪一项内容开始被渲染
	 * @param ZOrder 在渲染目标上视口的相对顺序
	 * @param left 在渲染目标上视口左侧的相对位置，值的范围0-1之间
	 * @param top 在渲染目标上视口上面的相对位置，值的范围0-1之间
	 * @param width 在渲染目标上视口宽度的相对位置，值的范围0-1之间
	 * @param height 在渲染目标上视口高度的相对位置，值的范围0-1之间
	 */
	public com.earthview.world.graphic.Viewport addViewport(com.earthview.world.graphic.Camera ref_cam, int ZOrder, float left, float top, float width, float height)
	{
		long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
		int ZOrderParamValue = ZOrder;
		float leftParamValue = left;
		float topParamValue = top;
		float widthParamValue = width;
		float heightParamValue = height;
		long returnValue = addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, ref_camParamValue, ZOrderParamValue, leftParamValue, topParamValue, widthParamValue, heightParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Viewport)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewport");
		}
		return __returnValue;
	}
	native private long addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_ev_real32_NoVirtual(long pNativeObject, long ref_cam, int ZOrder, float left, float top, float width, float height);
	protected com.earthview.world.graphic.Viewport addViewport_NoVirtual(com.earthview.world.graphic.Camera ref_cam, int ZOrder, float left, float top, float width, float height)
	{
		long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
		int ZOrderParamValue = ZOrder;
		float leftParamValue = left;
		float topParamValue = top;
		float widthParamValue = width;
		float heightParamValue = height;
		long returnValue = addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_ev_real32_NoVirtual(this.nativeObject.pointer, ref_camParamValue, ZOrderParamValue, leftParamValue, topParamValue, widthParamValue, heightParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Viewport)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewport");
		}
		return __returnValue;
	}

	protected  long addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_callback(long ref_cam, int ZOrder, float left, float top, float width)
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
		int ZOrderParamValue = ZOrder;
		float leftParamValue = left;
		float topParamValue = top;
		float widthParamValue = width;
		com.earthview.world.graphic.Viewport returnValue = addViewport(ref_camParamValue, ZOrderParamValue, leftParamValue, topParamValue, widthParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32(long pNativeObject, long ref_cam, int ZOrder, float left, float top, float width);
	/**
	 * 给渲染目标添加一个视口
	 * @param cam 摄像机从视口的哪一项内容开始被渲染
	 * @param ZOrder 在渲染目标上视口的相对顺序
	 * @param left 在渲染目标上视口左侧的相对位置，值的范围0-1之间
	 * @param top 在渲染目标上视口上面的相对位置，值的范围0-1之间
	 * @param width 在渲染目标上视口宽度的相对位置，值的范围0-1之间
	 */
	public com.earthview.world.graphic.Viewport addViewport(com.earthview.world.graphic.Camera ref_cam, int ZOrder, float left, float top, float width)
	{
		long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
		int ZOrderParamValue = ZOrder;
		float leftParamValue = left;
		float topParamValue = top;
		float widthParamValue = width;
		long returnValue = addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, ref_camParamValue, ZOrderParamValue, leftParamValue, topParamValue, widthParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Viewport)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewport");
		}
		return __returnValue;
	}
	native private long addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_NoVirtual(long pNativeObject, long ref_cam, int ZOrder, float left, float top, float width);
	protected com.earthview.world.graphic.Viewport addViewport_NoVirtual(com.earthview.world.graphic.Camera ref_cam, int ZOrder, float left, float top, float width)
	{
		long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
		int ZOrderParamValue = ZOrder;
		float leftParamValue = left;
		float topParamValue = top;
		float widthParamValue = width;
		long returnValue = addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_NoVirtual(this.nativeObject.pointer, ref_camParamValue, ZOrderParamValue, leftParamValue, topParamValue, widthParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Viewport)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewport");
		}
		return __returnValue;
	}

	protected  long addViewport_CCamera_ev_int32_ev_real32_ev_real32_callback(long ref_cam, int ZOrder, float left, float top)
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
		int ZOrderParamValue = ZOrder;
		float leftParamValue = left;
		float topParamValue = top;
		com.earthview.world.graphic.Viewport returnValue = addViewport(ref_camParamValue, ZOrderParamValue, leftParamValue, topParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long addViewport_CCamera_ev_int32_ev_real32_ev_real32(long pNativeObject, long ref_cam, int ZOrder, float left, float top);
	/**
	 * 给渲染目标添加一个视口
	 * @param cam 摄像机从视口的哪一项内容开始被渲染
	 * @param ZOrder 在渲染目标上视口的相对顺序
	 * @param left 在渲染目标上视口左侧的相对位置，值的范围0-1之间
	 * @param top 在渲染目标上视口上面的相对位置，值的范围0-1之间
	 */
	public com.earthview.world.graphic.Viewport addViewport(com.earthview.world.graphic.Camera ref_cam, int ZOrder, float left, float top)
	{
		long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
		int ZOrderParamValue = ZOrder;
		float leftParamValue = left;
		float topParamValue = top;
		long returnValue = addViewport_CCamera_ev_int32_ev_real32_ev_real32(this.nativeObject.pointer, ref_camParamValue, ZOrderParamValue, leftParamValue, topParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Viewport)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewport");
		}
		return __returnValue;
	}
	native private long addViewport_CCamera_ev_int32_ev_real32_ev_real32_NoVirtual(long pNativeObject, long ref_cam, int ZOrder, float left, float top);
	protected com.earthview.world.graphic.Viewport addViewport_NoVirtual(com.earthview.world.graphic.Camera ref_cam, int ZOrder, float left, float top)
	{
		long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
		int ZOrderParamValue = ZOrder;
		float leftParamValue = left;
		float topParamValue = top;
		long returnValue = addViewport_CCamera_ev_int32_ev_real32_ev_real32_NoVirtual(this.nativeObject.pointer, ref_camParamValue, ZOrderParamValue, leftParamValue, topParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Viewport)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewport");
		}
		return __returnValue;
	}

	protected  long addViewport_CCamera_ev_int32_ev_real32_callback(long ref_cam, int ZOrder, float left)
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
		int ZOrderParamValue = ZOrder;
		float leftParamValue = left;
		com.earthview.world.graphic.Viewport returnValue = addViewport(ref_camParamValue, ZOrderParamValue, leftParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long addViewport_CCamera_ev_int32_ev_real32(long pNativeObject, long ref_cam, int ZOrder, float left);
	/**
	 * 给渲染目标添加一个视口
	 * @param cam 摄像机从视口的哪一项内容开始被渲染
	 * @param ZOrder 在渲染目标上视口的相对顺序
	 * @param left 在渲染目标上视口左侧的相对位置，值的范围0-1之间
	 */
	public com.earthview.world.graphic.Viewport addViewport(com.earthview.world.graphic.Camera ref_cam, int ZOrder, float left)
	{
		long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
		int ZOrderParamValue = ZOrder;
		float leftParamValue = left;
		long returnValue = addViewport_CCamera_ev_int32_ev_real32(this.nativeObject.pointer, ref_camParamValue, ZOrderParamValue, leftParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Viewport)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewport");
		}
		return __returnValue;
	}
	native private long addViewport_CCamera_ev_int32_ev_real32_NoVirtual(long pNativeObject, long ref_cam, int ZOrder, float left);
	protected com.earthview.world.graphic.Viewport addViewport_NoVirtual(com.earthview.world.graphic.Camera ref_cam, int ZOrder, float left)
	{
		long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
		int ZOrderParamValue = ZOrder;
		float leftParamValue = left;
		long returnValue = addViewport_CCamera_ev_int32_ev_real32_NoVirtual(this.nativeObject.pointer, ref_camParamValue, ZOrderParamValue, leftParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Viewport)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewport");
		}
		return __returnValue;
	}

	protected  long addViewport_CCamera_ev_int32_callback(long ref_cam, int ZOrder)
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
		int ZOrderParamValue = ZOrder;
		com.earthview.world.graphic.Viewport returnValue = addViewport(ref_camParamValue, ZOrderParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long addViewport_CCamera_ev_int32(long pNativeObject, long ref_cam, int ZOrder);
	/**
	 * 给渲染目标添加一个视口
	 * @param cam 摄像机从视口的哪一项内容开始被渲染
	 * @param ZOrder 在渲染目标上视口的相对顺序
	 */
	public com.earthview.world.graphic.Viewport addViewport(com.earthview.world.graphic.Camera ref_cam, int ZOrder)
	{
		long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
		int ZOrderParamValue = ZOrder;
		long returnValue = addViewport_CCamera_ev_int32(this.nativeObject.pointer, ref_camParamValue, ZOrderParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Viewport)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewport");
		}
		return __returnValue;
	}
	native private long addViewport_CCamera_ev_int32_NoVirtual(long pNativeObject, long ref_cam, int ZOrder);
	protected com.earthview.world.graphic.Viewport addViewport_NoVirtual(com.earthview.world.graphic.Camera ref_cam, int ZOrder)
	{
		long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
		int ZOrderParamValue = ZOrder;
		long returnValue = addViewport_CCamera_ev_int32_NoVirtual(this.nativeObject.pointer, ref_camParamValue, ZOrderParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Viewport)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewport");
		}
		return __returnValue;
	}

	protected  long addViewport_CCamera_callback(long ref_cam)
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
		com.earthview.world.graphic.Viewport returnValue = addViewport(ref_camParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long addViewport_CCamera(long pNativeObject, long ref_cam);
	/**
	 * 给渲染目标添加一个视口
	 * @param cam 摄像机从视口的哪一项内容开始被渲染
	 */
	public com.earthview.world.graphic.Viewport addViewport(com.earthview.world.graphic.Camera ref_cam)
	{
		long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
		long returnValue = addViewport_CCamera(this.nativeObject.pointer, ref_camParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Viewport)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewport");
		}
		return __returnValue;
	}
	native private long addViewport_CCamera_NoVirtual(long pNativeObject, long ref_cam);
	protected com.earthview.world.graphic.Viewport addViewport_NoVirtual(com.earthview.world.graphic.Camera ref_cam)
	{
		long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
		long returnValue = addViewport_CCamera_NoVirtual(this.nativeObject.pointer, ref_camParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Viewport)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewport");
		}
		return __returnValue;
	}

	protected  int getNumViewports_void_callback()
	{
		int returnValue = getNumViewports();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getNumViewports_void(long pNativeObject);
	/**
	 * 返回连接到渲染目标上视口的数量
	 * @param  
	 */
	public int getNumViewports()
	{
		int returnValue = getNumViewports_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getNumViewports_void_NoVirtual(long pNativeObject);
	protected int getNumViewports_NoVirtual()
	{
		int returnValue = getNumViewports_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getViewport_ev_uint16_callback(int index)
	{
		int indexParamValue = index;
		com.earthview.world.graphic.Viewport returnValue = getViewport(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getViewport_ev_uint16(long pNativeObject, int index);
	/**
	 * 返回一个指针指向已给索引的视口
	 * @param index 
	 */
	public com.earthview.world.graphic.Viewport getViewport(int index)
	{
		int indexParamValue = index;
		long returnValue = getViewport_ev_uint16(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Viewport)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewport");
		}
		return __returnValue;
	}
	native private long getViewport_ev_uint16_NoVirtual(long pNativeObject, int index);
	protected com.earthview.world.graphic.Viewport getViewport_NoVirtual(int index)
	{
		int indexParamValue = index;
		long returnValue = getViewport_ev_uint16_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Viewport)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewport");
		}
		return __returnValue;
	}

	protected  long getViewportByZOrder_ev_int32_callback(int ZOrder)
	{
		int ZOrderParamValue = ZOrder;
		com.earthview.world.graphic.Viewport returnValue = getViewportByZOrder(ZOrderParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getViewportByZOrder_ev_int32(long pNativeObject, int ZOrder);
	///zxt updatefor v1.8
	public com.earthview.world.graphic.Viewport getViewportByZOrder(int ZOrder)
	{
		int ZOrderParamValue = ZOrder;
		long returnValue = getViewportByZOrder_ev_int32(this.nativeObject.pointer, ZOrderParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Viewport)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewport");
		}
		return __returnValue;
	}
	native private long getViewportByZOrder_ev_int32_NoVirtual(long pNativeObject, int ZOrder);
	protected com.earthview.world.graphic.Viewport getViewportByZOrder_NoVirtual(int ZOrder)
	{
		int ZOrderParamValue = ZOrder;
		long returnValue = getViewportByZOrder_ev_int32_NoVirtual(this.nativeObject.pointer, ZOrderParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Viewport)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewport");
		}
		return __returnValue;
	}

	protected  boolean hasViewportWithZOrder_ev_int32_callback(int ZOrder)
	{
		int ZOrderParamValue = ZOrder;
		boolean returnValue = hasViewportWithZOrder(ZOrderParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean hasViewportWithZOrder_ev_int32(long pNativeObject, int ZOrder);
	public boolean hasViewportWithZOrder(int ZOrder)
	{
		int ZOrderParamValue = ZOrder;
		boolean returnValue = hasViewportWithZOrder_ev_int32(this.nativeObject.pointer, ZOrderParamValue);
		return returnValue;
	}
	native private boolean hasViewportWithZOrder_ev_int32_NoVirtual(long pNativeObject, int ZOrder);
	protected boolean hasViewportWithZOrder_NoVirtual(int ZOrder)
	{
		int ZOrderParamValue = ZOrder;
		boolean returnValue = hasViewportWithZOrder_ev_int32_NoVirtual(this.nativeObject.pointer, ZOrderParamValue);
		return returnValue;
	}

	protected  void removeViewport_ev_int32_callback(int ZOrder)
	{
		int ZOrderParamValue = ZOrder;
		removeViewport(ZOrderParamValue);
	}

	native private void removeViewport_ev_int32(long pNativeObject, int ZOrder);
	/**
	 * 去除掉已给顺序的视口
	 * @param ZOrder 
	 */
	public void removeViewport(int ZOrder)
	{
		int ZOrderParamValue = ZOrder;
		removeViewport_ev_int32(this.nativeObject.pointer, ZOrderParamValue);
	}
	native private void removeViewport_ev_int32_NoVirtual(long pNativeObject, int ZOrder);
	protected void removeViewport_NoVirtual(int ZOrder)
	{
		int ZOrderParamValue = ZOrder;
		removeViewport_ev_int32_NoVirtual(this.nativeObject.pointer, ZOrderParamValue);
	}

	protected  void removeAllViewports_void_callback()
	{
		removeAllViewports();
	}

	native private void removeAllViewports_void(long pNativeObject);
	/**
	 * 去除掉渲染目标上所有的视口
	 * @param  
	 */
	public void removeAllViewports()
	{
		removeAllViewports_void(this.nativeObject.pointer);
	}
	native private void removeAllViewports_void_NoVirtual(long pNativeObject);
	protected void removeAllViewports_NoVirtual()
	{
		removeAllViewports_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void getStatistics_ev_real32_ev_real32_ev_real32_ev_real32_callback(long lastFPS, long avgFPS, long bestFPS, long worstFPS)
	{
		FloatPointer lastFPSParamValue = new FloatPointer(new InstancePointer(lastFPS));
		FloatPointer avgFPSParamValue = new FloatPointer(new InstancePointer(avgFPS));
		FloatPointer bestFPSParamValue = new FloatPointer(new InstancePointer(bestFPS));
		FloatPointer worstFPSParamValue = new FloatPointer(new InstancePointer(worstFPS));
		getStatistics(lastFPSParamValue, avgFPSParamValue, bestFPSParamValue, worstFPSParamValue);
	}

	native private void getStatistics_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, long lastFPS, long avgFPS, long bestFPS, long worstFPS);
	/**
	 * 获得当前渲染操作的细节
	 * @param lastFPS 指向ev_real32类型，获得每秒帧的数量基于最后一次帧渲染
	 * @param avgFPS 指向ev_real32类型，获得每秒帧的数量基于从渲染开始所有渲染帧的平均速率
	 * @param bestFPS 指向ev_real32类型，获得每秒帧的数量基于从渲染开始已经实现的最好的速率
	 * @param worstFPS 指向ev_real32类型，获得每秒帧的数量基于到目前为止最差的速率
	 */
	public void getStatistics(FloatPointer lastFPS, FloatPointer avgFPS, FloatPointer bestFPS, FloatPointer worstFPS)
	{
		long lastFPSParamValue = lastFPS.nativeObject.pointer;
		long avgFPSParamValue = avgFPS.nativeObject.pointer;
		long bestFPSParamValue = bestFPS.nativeObject.pointer;
		long worstFPSParamValue = worstFPS.nativeObject.pointer;
		getStatistics_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, lastFPSParamValue, avgFPSParamValue, bestFPSParamValue, worstFPSParamValue);
	}
	native private void getStatistics_ev_real32_ev_real32_ev_real32_ev_real32_NoVirtual(long pNativeObject, long lastFPS, long avgFPS, long bestFPS, long worstFPS);
	protected void getStatistics_NoVirtual(FloatPointer lastFPS, FloatPointer avgFPS, FloatPointer bestFPS, FloatPointer worstFPS)
	{
		long lastFPSParamValue = lastFPS.nativeObject.pointer;
		long avgFPSParamValue = avgFPS.nativeObject.pointer;
		long bestFPSParamValue = bestFPS.nativeObject.pointer;
		long worstFPSParamValue = worstFPS.nativeObject.pointer;
		getStatistics_ev_real32_ev_real32_ev_real32_ev_real32_NoVirtual(this.nativeObject.pointer, lastFPSParamValue, avgFPSParamValue, bestFPSParamValue, worstFPSParamValue);
	}

	protected  long getStatistics_void_callback()
	{
		com.earthview.world.graphic.RenderTarget.FrameStats returnValue = getStatistics();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getStatistics_void(long pNativeObject);
	/**
	 * 获得当前渲染操作的细节
	 * @param  
	 */
	public com.earthview.world.graphic.RenderTarget.FrameStats getStatistics()
	{
		long returnValue = getStatistics_void(this.nativeObject.pointer);
		com.earthview.world.graphic.RenderTarget.FrameStats __returnValue = new com.earthview.world.graphic.RenderTarget.FrameStats(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getStatistics_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.RenderTarget.FrameStats getStatistics_NoVirtual()
	{
		long returnValue = getStatistics_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.RenderTarget.FrameStats __returnValue = new com.earthview.world.graphic.RenderTarget.FrameStats(new InstancePointer(returnValue));
		return __returnValue;
	}

	protected  float getLastFPS_void_callback()
	{
		float returnValue = getLastFPS();
		float __returnValue = returnValue;
		return __returnValue;
	}

	native private float getLastFPS_void(long pNativeObject);
	/**
	 * 基于最后的帧渲染，获得每秒帧的数量
	 * @param  
	 */
	public float getLastFPS()
	{
		float returnValue = getLastFPS_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getLastFPS_void_NoVirtual(long pNativeObject);
	protected float getLastFPS_NoVirtual()
	{
		float returnValue = getLastFPS_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  float getAverageFPS_void_callback()
	{
		float returnValue = getAverageFPS();
		float __returnValue = returnValue;
		return __returnValue;
	}

	native private float getAverageFPS_void(long pNativeObject);
	/**
	 * 调用CRoot::startRendering之后，获得每秒平均帧的数量
	 * @param  
	 */
	public float getAverageFPS()
	{
		float returnValue = getAverageFPS_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getAverageFPS_void_NoVirtual(long pNativeObject);
	protected float getAverageFPS_NoVirtual()
	{
		float returnValue = getAverageFPS_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  float getBestFPS_void_callback()
	{
		float returnValue = getBestFPS();
		float __returnValue = returnValue;
		return __returnValue;
	}

	native private float getBestFPS_void(long pNativeObject);
	/**
	 * 调用CRoot::startRendering之后，获得每秒最好的帧的数量
	 * @param  
	 */
	public float getBestFPS()
	{
		float returnValue = getBestFPS_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getBestFPS_void_NoVirtual(long pNativeObject);
	protected float getBestFPS_NoVirtual()
	{
		float returnValue = getBestFPS_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  float getWorstFPS_void_callback()
	{
		float returnValue = getWorstFPS();
		float __returnValue = returnValue;
		return __returnValue;
	}

	native private float getWorstFPS_void(long pNativeObject);
	/**
	 * 调用CRoot::startRendering之后，获得每秒最差的帧的数量
	 * @param  
	 */
	public float getWorstFPS()
	{
		float returnValue = getWorstFPS_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getWorstFPS_void_NoVirtual(long pNativeObject);
	protected float getWorstFPS_NoVirtual()
	{
		float returnValue = getWorstFPS_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  float getBestFrameTime_void_callback()
	{
		float returnValue = getBestFrameTime();
		float __returnValue = returnValue;
		return __returnValue;
	}

	native private float getBestFrameTime_void(long pNativeObject);
	/**
	 * 获得最好的帧的时间
	 * @param  
	 */
	public float getBestFrameTime()
	{
		float returnValue = getBestFrameTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getBestFrameTime_void_NoVirtual(long pNativeObject);
	protected float getBestFrameTime_NoVirtual()
	{
		float returnValue = getBestFrameTime_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  float getWorstFrameTime_void_callback()
	{
		float returnValue = getWorstFrameTime();
		float __returnValue = returnValue;
		return __returnValue;
	}

	native private float getWorstFrameTime_void(long pNativeObject);
	/**
	 * 获得最差的帧的时间
	 * @param  
	 */
	public float getWorstFrameTime()
	{
		float returnValue = getWorstFrameTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getWorstFrameTime_void_NoVirtual(long pNativeObject);
	protected float getWorstFrameTime_NoVirtual()
	{
		float returnValue = getWorstFrameTime_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void resetStatistics_void_callback()
	{
		resetStatistics();
	}

	native private void resetStatistics_void(long pNativeObject);
	/**
	 * 重新设置帧速率的统计
	 * @param  
	 */
	public void resetStatistics()
	{
		resetStatistics_void(this.nativeObject.pointer);
	}
	native private void resetStatistics_void_NoVirtual(long pNativeObject);
	protected void resetStatistics_NoVirtual()
	{
		resetStatistics_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void getCustomAttribute_EVString_void_callback(String name, long pData)
	{
		String nameParamValue = name;
		VoidPointer pDataParamValue = (pData == 0L ? null : new VoidPointer(new InstancePointer(pData)));
		getCustomAttribute(nameParamValue, pDataParamValue);
	}

	native private void getCustomAttribute_EVString_void(long pNativeObject, String name, long pData);
	/**
	 * 获得自定义的属性
	 * @param name 属性的名称
	 * @param pData 指向结构的正确种类的内存来获得信息
	 */
	public void getCustomAttribute(String name, VoidPointer pData)
	{
		String nameParamValue = name;
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		getCustomAttribute_EVString_void(this.nativeObject.pointer, nameParamValue, pDataParamValue);
	}
	native private void getCustomAttribute_EVString_void_NoVirtual(long pNativeObject, String name, long pData);
	protected void getCustomAttribute_NoVirtual(String name, VoidPointer pData)
	{
		String nameParamValue = name;
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		getCustomAttribute_EVString_void_NoVirtual(this.nativeObject.pointer, nameParamValue, pDataParamValue);
	}

	protected  void addListener_CRenderTargetListener_callback(long ref_listener)
	{
		com.earthview.world.graphic.RenderTargetListener ref_listenerParamValue = (ref_listener == 0L ? null : new com.earthview.world.graphic.RenderTargetListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_listenerParamValue != null)
		{
		ref_listenerParamValue.setDelegate(true);
		ref_listenerParamValue.setInstancePointer(new InstancePointer(ref_listener));
		IClassFactory ref_listenerParamValueClassFactory = GlobalClassFactoryMap.get(ref_listenerParamValue.getCppInstanceTypeName());
		if (ref_listenerParamValueClassFactory != null)
		{
			ref_listenerParamValue.setDelegate(true);
			ref_listenerParamValue = (com.earthview.world.graphic.RenderTargetListener)ref_listenerParamValueClassFactory.create();
			ref_listenerParamValue.setDelegate(true);
			ref_listenerParamValue.setInstancePointer(new InstancePointer(ref_listener));
		}
		}
		addListener(ref_listenerParamValue);
	}

	native private void addListener_CRenderTargetListener(long pNativeObject, long ref_listener);
	/**
	 * 向CRenderTarget中添加一个帧监听器
	 * @param  
	 */
	public void addListener(com.earthview.world.graphic.RenderTargetListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		addListener_CRenderTargetListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private void addListener_CRenderTargetListener_NoVirtual(long pNativeObject, long ref_listener);
	protected void addListener_NoVirtual(com.earthview.world.graphic.RenderTargetListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		addListener_CRenderTargetListener_NoVirtual(this.nativeObject.pointer, ref_listenerParamValue);
	}

	protected  void removeListener_CRenderTargetListener_callback(long listener)
	{
		com.earthview.world.graphic.RenderTargetListener listenerParamValue = (listener == 0L ? null : new com.earthview.world.graphic.RenderTargetListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(listenerParamValue != null)
		{
		listenerParamValue.setDelegate(true);
		listenerParamValue.setInstancePointer(new InstancePointer(listener));
		IClassFactory listenerParamValueClassFactory = GlobalClassFactoryMap.get(listenerParamValue.getCppInstanceTypeName());
		if (listenerParamValueClassFactory != null)
		{
			listenerParamValue.setDelegate(true);
			listenerParamValue = (com.earthview.world.graphic.RenderTargetListener)listenerParamValueClassFactory.create();
			listenerParamValue.setDelegate(true);
			listenerParamValue.setInstancePointer(new InstancePointer(listener));
		}
		}
		removeListener(listenerParamValue);
	}

	native private void removeListener_CRenderTargetListener(long pNativeObject, long listener);
	/**
	 * 去除掉注册之前的帧监听器
	 * @param  
	 */
	public void removeListener(com.earthview.world.graphic.RenderTargetListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		removeListener_CRenderTargetListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private void removeListener_CRenderTargetListener_NoVirtual(long pNativeObject, long listener);
	protected void removeListener_NoVirtual(com.earthview.world.graphic.RenderTargetListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		removeListener_CRenderTargetListener_NoVirtual(this.nativeObject.pointer, listenerParamValue);
	}

	protected  void removeAllListeners_void_callback()
	{
		removeAllListeners();
	}

	native private void removeAllListeners_void(long pNativeObject);
	/**
	 * 去除掉实例中所有的帧监听器
	 * @param  
	 */
	public void removeAllListeners()
	{
		removeAllListeners_void(this.nativeObject.pointer);
	}
	native private void removeAllListeners_void_NoVirtual(long pNativeObject);
	protected void removeAllListeners_NoVirtual()
	{
		removeAllListeners_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setPriority_ev_uchar_callback(short priority)
	{
		short priorityParamValue = priority;
		setPriority(priorityParamValue);
	}

	native private void setPriority_ev_uchar(long pNativeObject, short priority);
	/**
	 * 设置渲染目标的优先权
	 * @param priority 
	 */
	public void setPriority(short priority)
	{
		short priorityParamValue = priority;
		setPriority_ev_uchar(this.nativeObject.pointer, priorityParamValue);
	}
	native private void setPriority_ev_uchar_NoVirtual(long pNativeObject, short priority);
	protected void setPriority_NoVirtual(short priority)
	{
		short priorityParamValue = priority;
		setPriority_ev_uchar_NoVirtual(this.nativeObject.pointer, priorityParamValue);
	}

	protected  short getPriority_void_callback()
	{
		short returnValue = getPriority();
		short __returnValue = returnValue;
		return __returnValue;
	}

	native private short getPriority_void(long pNativeObject);
	/**
	 * 获得渲染目标的优先权
	 * @param  
	 */
	public short getPriority()
	{
		short returnValue = getPriority_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private short getPriority_void_NoVirtual(long pNativeObject);
	protected short getPriority_NoVirtual()
	{
		short returnValue = getPriority_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean isActive_void_callback()
	{
		boolean returnValue = isActive();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isActive_void(long pNativeObject);
	/**
	 * 获得或设置渲染目标的活跃状态
	 * @param  
	 */
	public boolean isActive()
	{
		boolean returnValue = isActive_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isActive_void_NoVirtual(long pNativeObject);
	protected boolean isActive_NoVirtual()
	{
		boolean returnValue = isActive_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setActive_ev_bool_callback(boolean state)
	{
		boolean stateParamValue = state;
		setActive(stateParamValue);
	}

	native private void setActive_ev_bool(long pNativeObject, boolean state);
	/**
	 * 设置渲染目标的活跃状态
	 * @param state 
	 */
	public void setActive(boolean state)
	{
		boolean stateParamValue = state;
		setActive_ev_bool(this.nativeObject.pointer, stateParamValue);
	}
	native private void setActive_ev_bool_NoVirtual(long pNativeObject, boolean state);
	protected void setActive_NoVirtual(boolean state)
	{
		boolean stateParamValue = state;
		setActive_ev_bool_NoVirtual(this.nativeObject.pointer, stateParamValue);
	}

	protected  void setAutoUpdated_ev_bool_callback(boolean autoupdate)
	{
		boolean autoupdateParamValue = autoupdate;
		setAutoUpdated(autoupdateParamValue);
	}

	native private void setAutoUpdated_ev_bool(long pNativeObject, boolean autoupdate);
	/**
	 * 设置渲染目标是否自动更新，如果渲染循环或者是CRoot::_updateAllRenderTargets已经被使用
	 * @param autoupdate 如果为true渲染目标自动更新，否则只有当更新方法被调用时才更新
	 */
	public void setAutoUpdated(boolean autoupdate)
	{
		boolean autoupdateParamValue = autoupdate;
		setAutoUpdated_ev_bool(this.nativeObject.pointer, autoupdateParamValue);
	}
	native private void setAutoUpdated_ev_bool_NoVirtual(long pNativeObject, boolean autoupdate);
	protected void setAutoUpdated_NoVirtual(boolean autoupdate)
	{
		boolean autoupdateParamValue = autoupdate;
		setAutoUpdated_ev_bool_NoVirtual(this.nativeObject.pointer, autoupdateParamValue);
	}

	protected  boolean isAutoUpdated_void_callback()
	{
		boolean returnValue = isAutoUpdated();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isAutoUpdated_void(long pNativeObject);
	/**
	 * 获得渲染目标是否自动更新，如果渲染循环或者是CRoot::_updateAllRenderTargets已经被使用
	 * @param  
	 */
	public boolean isAutoUpdated()
	{
		boolean returnValue = isAutoUpdated_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isAutoUpdated_void_NoVirtual(long pNativeObject);
	protected boolean isAutoUpdated_NoVirtual()
	{
		boolean returnValue = isAutoUpdated_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void copyContentsToMemory_CPixelBox_FrameBuffer_callback(long dst, int buffer)
	{
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
		com.earthview.world.graphic.RenderTarget.FrameBuffer bufferParamValue = com.earthview.world.graphic.RenderTarget.FrameBuffer.toEnum(buffer);
		copyContentsToMemory(dstParamValue, bufferParamValue);
	}

	native private void copyContentsToMemory_CPixelBox_FrameBuffer(long pNativeObject, long dst, int buffer);
	/**
	 * 复制当前渲染目标的内容到一个像素盒
	 * @param dst 
	 * @param buffer 
	 */
	public void copyContentsToMemory(com.earthview.world.graphic.PixelBox dst, com.earthview.world.graphic.RenderTarget.FrameBuffer buffer)
	{
		long dstParamValue = dst.nativeObject.pointer;
		int bufferParamValue = buffer.getValue();
		copyContentsToMemory_CPixelBox_FrameBuffer(this.nativeObject.pointer, dstParamValue, bufferParamValue);
	}
	native private void copyContentsToMemory_CPixelBox_FrameBuffer_NoVirtual(long pNativeObject, long dst, int buffer);
	protected void copyContentsToMemory_NoVirtual(com.earthview.world.graphic.PixelBox dst, com.earthview.world.graphic.RenderTarget.FrameBuffer buffer)
	{
		long dstParamValue = dst.nativeObject.pointer;
		int bufferParamValue = buffer.getValue();
		copyContentsToMemory_CPixelBox_FrameBuffer_NoVirtual(this.nativeObject.pointer, dstParamValue, bufferParamValue);
	}

	protected  void copyContentsToMemory_CPixelBox_callback(long dst)
	{
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
		copyContentsToMemory(dstParamValue);
	}

	native private void copyContentsToMemory_CPixelBox(long pNativeObject, long dst);
	/**
	 * 复制当前渲染目标的内容到一个像素盒
	 * @param dst 
	 * @param buffer 
	 */
	public void copyContentsToMemory(com.earthview.world.graphic.PixelBox dst)
	{
		long dstParamValue = dst.nativeObject.pointer;
		copyContentsToMemory_CPixelBox(this.nativeObject.pointer, dstParamValue);
	}
	native private void copyContentsToMemory_CPixelBox_NoVirtual(long pNativeObject, long dst);
	protected void copyContentsToMemory_NoVirtual(com.earthview.world.graphic.PixelBox dst)
	{
		long dstParamValue = dst.nativeObject.pointer;
		copyContentsToMemory_CPixelBox_NoVirtual(this.nativeObject.pointer, dstParamValue);
	}

	protected  int suggestPixelFormat_void_callback()
	{
		com.earthview.world.graphic.PixelFormat returnValue = suggestPixelFormat();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int suggestPixelFormat_void(long pNativeObject);
	/**
	 * 提出一种像素格式来获得渲染目标中的数据
	 * @param  
	 */
	public com.earthview.world.graphic.PixelFormat suggestPixelFormat()
	{
		int returnValue = suggestPixelFormat_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.PixelFormat.toEnum(returnValue);
	}
	native private int suggestPixelFormat_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.PixelFormat suggestPixelFormat_NoVirtual()
	{
		int returnValue = suggestPixelFormat_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.graphic.PixelFormat.toEnum(returnValue);
	}

	native private void writeContentsToFile_EVString(long pNativeObject, String filename);
	/**
	 * 将当前渲染目标的内容写到已命名的文件中
	 * @param filename 
	 */
	public void writeContentsToFile(String filename)
	{
		String filenameParamValue = filename;
		writeContentsToFile_EVString(this.nativeObject.pointer, filenameParamValue);
	}
	protected  String writeContentsToTimestampedFile_EVString_EVString_callback(String filenamePrefix, String filenameSuffix)
	{
		String filenamePrefixParamValue = filenamePrefix;
		String filenameSuffixParamValue = filenameSuffix;
		String returnValue = writeContentsToTimestampedFile(filenamePrefixParamValue, filenameSuffixParamValue);
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String writeContentsToTimestampedFile_EVString_EVString(long pNativeObject, String filenamePrefix, String filenameSuffix);
	/**
	 * 将当前渲染目标的内容写到(PREFIX)(time-stamp)(SUFFIX)文件中
	 * @param filenamePrefix 
	 * @param filenameSuffix 
	 * @return 返回文件的名字
	 */
	public String writeContentsToTimestampedFile(String filenamePrefix, String filenameSuffix)
	{
		String filenamePrefixParamValue = filenamePrefix;
		String filenameSuffixParamValue = filenameSuffix;
		String returnValue = writeContentsToTimestampedFile_EVString_EVString(this.nativeObject.pointer, filenamePrefixParamValue, filenameSuffixParamValue);
		return returnValue;
	}
	native private String writeContentsToTimestampedFile_EVString_EVString_NoVirtual(long pNativeObject, String filenamePrefix, String filenameSuffix);
	protected String writeContentsToTimestampedFile_NoVirtual(String filenamePrefix, String filenameSuffix)
	{
		String filenamePrefixParamValue = filenamePrefix;
		String filenameSuffixParamValue = filenameSuffix;
		String returnValue = writeContentsToTimestampedFile_EVString_EVString_NoVirtual(this.nativeObject.pointer, filenamePrefixParamValue, filenameSuffixParamValue);
		return returnValue;
	}

	protected  boolean requiresTextureFlipping_void_callback()
	{
		boolean returnValue = requiresTextureFlipping();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean requiresTextureFlipping_void(long pNativeObject);
	public boolean requiresTextureFlipping()
	{
		boolean returnValue = requiresTextureFlipping_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean requiresTextureFlipping_void_NoVirtual(long pNativeObject);
	protected boolean requiresTextureFlipping_NoVirtual()
	{
		boolean returnValue = requiresTextureFlipping_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getTriangleCount_void_callback()
	{
		long returnValue = getTriangleCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getTriangleCount_void(long pNativeObject);
	/**
	 * 在最后的更新中获得渲染三角形的数量
	 * @param  
	 */
	public long getTriangleCount()
	{
		long returnValue = getTriangleCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTriangleCount_void_NoVirtual(long pNativeObject);
	protected long getTriangleCount_NoVirtual()
	{
		long returnValue = getTriangleCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getBatchCount_void_callback()
	{
		long returnValue = getBatchCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getBatchCount_void(long pNativeObject);
	/**
	 * 在最后的更新中获得渲染批次的数量
	 * @param  
	 */
	public long getBatchCount()
	{
		long returnValue = getBatchCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getBatchCount_void_NoVirtual(long pNativeObject);
	protected long getBatchCount_NoVirtual()
	{
		long returnValue = getBatchCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getVertexCount_void_callback()
	{
		long returnValue = getVertexCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getVertexCount_void(long pNativeObject);
	/**
	 * 在最后的更新中获得渲染顶点的数量
	 * @param  
	 */
	public long getVertexCount()
	{
		long returnValue = getVertexCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getVertexCount_void_NoVirtual(long pNativeObject);
	protected long getVertexCount_NoVirtual()
	{
		long returnValue = getVertexCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void _notifyCameraRemoved_CCamera_callback(long cam)
	{
		com.earthview.world.graphic.Camera camParamValue = (cam == 0L ? null : new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate));
		if(camParamValue != null)
		{
		camParamValue.setDelegate(true);
		camParamValue.setInstancePointer(new InstancePointer(cam));
		IClassFactory camParamValueClassFactory = GlobalClassFactoryMap.get(camParamValue.getCppInstanceTypeName());
		if (camParamValueClassFactory != null)
		{
			camParamValue.setDelegate(true);
			camParamValue = (com.earthview.world.graphic.Camera)camParamValueClassFactory.create();
			camParamValue.setDelegate(true);
			camParamValue.setInstancePointer(new InstancePointer(cam));
		}
		}
		_notifyCameraRemoved(camParamValue);
	}

	native private void _notifyCameraRemoved_CCamera(long pNativeObject, long cam);
	/**
	 * 通知渲染目标摄像机已经移除
	 * @param cam 
	 */
	public void _notifyCameraRemoved(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		_notifyCameraRemoved_CCamera(this.nativeObject.pointer, camParamValue);
	}
	native private void _notifyCameraRemoved_CCamera_NoVirtual(long pNativeObject, long cam);
	protected void _notifyCameraRemoved_NoVirtual(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		_notifyCameraRemoved_CCamera_NoVirtual(this.nativeObject.pointer, camParamValue);
	}

	protected  boolean isPrimary_void_callback()
	{
		boolean returnValue = isPrimary();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isPrimary_void(long pNativeObject);
	/**
	 * 指出渲染目标是否是主要的窗体
	 * @param  
	 */
	public boolean isPrimary()
	{
		boolean returnValue = isPrimary_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isPrimary_void_NoVirtual(long pNativeObject);
	protected boolean isPrimary_NoVirtual()
	{
		boolean returnValue = isPrimary_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean isHardwareGammaEnabled_void_callback()
	{
		boolean returnValue = isHardwareGammaEnabled();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isHardwareGammaEnabled_void(long pNativeObject);
	/**
	 * 表明渲染中是否从线性颜色空间转换到RGB颜色空间
	 * @param  
	 */
	public boolean isHardwareGammaEnabled()
	{
		boolean returnValue = isHardwareGammaEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isHardwareGammaEnabled_void_NoVirtual(long pNativeObject);
	protected boolean isHardwareGammaEnabled_NoVirtual()
	{
		boolean returnValue = isHardwareGammaEnabled_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getFSAA_void_callback()
	{
		long returnValue = getFSAA();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getFSAA_void(long pNativeObject);
	/**
	 * 表明是否多个实例在渲染系统中，并且处于什么级别
	 * @param  
	 */
	public long getFSAA()
	{
		long returnValue = getFSAA_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getFSAA_void_NoVirtual(long pNativeObject);
	protected long getFSAA_NoVirtual()
	{
		long returnValue = getFSAA_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getFSAAHint_void_callback()
	{
		String returnValue = getFSAAHint();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getFSAAHint_void(long pNativeObject);
	/**
	 * 获得FSAA提示
	 * @param  
	 */
	public String getFSAAHint()
	{
		String returnValue = getFSAAHint_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getFSAAHint_void_NoVirtual(long pNativeObject);
	protected String getFSAAHint_NoVirtual()
	{
		String returnValue = getFSAAHint_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	/**
	 * 渲染目标的特殊接口
	 */
	public static class Impl extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderTarget::Impl", new ImplClassFactory());
		}

		/**
		 * 默认构造函数
		 * @param  
		 */
		public Impl() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("Impl", null);
		}

		public Impl(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Impl(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static Impl fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Impl obj = null;
 			if(baseObj instanceof Impl)
			{
				obj = (Impl)baseObj;
			} else {
				obj = new Impl(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "Impl");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ImplClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Impl emptyInstance = new Impl(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  long _getImpl_void_callback()
	{
		com.earthview.world.graphic.RenderTarget.Impl returnValue = _getImpl();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long _getImpl_void(long pNativeObject);
	/**
	 * 获得渲染目标的特殊接口
	 * @param  
	 */
	public com.earthview.world.graphic.RenderTarget.Impl _getImpl()
	{
		long returnValue = _getImpl_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderTarget.Impl __returnValue = new com.earthview.world.graphic.RenderTarget.Impl(CreatedWhenConstruct.CWC_NotToCreate, "Impl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderTarget.Impl)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "Impl");
		}
		return __returnValue;
	}
	native private long _getImpl_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.RenderTarget.Impl _getImpl_NoVirtual()
	{
		long returnValue = _getImpl_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderTarget.Impl __returnValue = new com.earthview.world.graphic.RenderTarget.Impl(CreatedWhenConstruct.CWC_NotToCreate, "Impl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderTarget.Impl)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "Impl");
		}
		return __returnValue;
	}

	protected  void _beginUpdate_void_callback()
	{
		_beginUpdate();
	}

	native private void _beginUpdate_void(long pNativeObject);
	/**
	 * 手动的管理渲染，如'preRenderTargetUpdate'和初始化统计表
	 * @param  
	 */
	public void _beginUpdate()
	{
		_beginUpdate_void(this.nativeObject.pointer);
	}
	native private void _beginUpdate_void_NoVirtual(long pNativeObject);
	protected void _beginUpdate_NoVirtual()
	{
		_beginUpdate_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void _updateViewport_ev_int32_ev_bool_callback(int zorder, boolean updateStatistics)
	{
		int zorderParamValue = zorder;
		boolean updateStatisticsParamValue = updateStatistics;
		_updateViewport(zorderParamValue, updateStatisticsParamValue);
	}

	native private void _updateViewport_ev_int32_ev_bool(long pNativeObject, int zorder, boolean updateStatistics);
	/**
	 * 手动的管理已给的视口的渲染
	 * @param zorder 更新时的顺序
	 * @param updateStatistics 是否更新统计表
	 */
	public void _updateViewport(int zorder, boolean updateStatistics)
	{
		int zorderParamValue = zorder;
		boolean updateStatisticsParamValue = updateStatistics;
		_updateViewport_ev_int32_ev_bool(this.nativeObject.pointer, zorderParamValue, updateStatisticsParamValue);
	}
	native private void _updateViewport_ev_int32_ev_bool_NoVirtual(long pNativeObject, int zorder, boolean updateStatistics);
	protected void _updateViewport_NoVirtual(int zorder, boolean updateStatistics)
	{
		int zorderParamValue = zorder;
		boolean updateStatisticsParamValue = updateStatistics;
		_updateViewport_ev_int32_ev_bool_NoVirtual(this.nativeObject.pointer, zorderParamValue, updateStatisticsParamValue);
	}

	protected  void _updateViewport_ev_int32_callback(int zorder)
	{
		int zorderParamValue = zorder;
		_updateViewport(zorderParamValue);
	}

	native private void _updateViewport_ev_int32(long pNativeObject, int zorder);
	/**
	 * 手动的管理已给的视口的渲染
	 * @param zorder 更新时候的顺序
	 */
	public void _updateViewport(int zorder)
	{
		int zorderParamValue = zorder;
		_updateViewport_ev_int32(this.nativeObject.pointer, zorderParamValue);
	}
	native private void _updateViewport_ev_int32_NoVirtual(long pNativeObject, int zorder);
	protected void _updateViewport_NoVirtual(int zorder)
	{
		int zorderParamValue = zorder;
		_updateViewport_ev_int32_NoVirtual(this.nativeObject.pointer, zorderParamValue);
	}

	protected  void _updateViewport_CViewport_ev_bool_callback(long viewport, boolean updateStatistics)
	{
		com.earthview.world.graphic.Viewport viewportParamValue = (viewport == 0L ? null : new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate));
		if(viewportParamValue != null)
		{
		viewportParamValue.setDelegate(true);
		viewportParamValue.setInstancePointer(new InstancePointer(viewport));
		IClassFactory viewportParamValueClassFactory = GlobalClassFactoryMap.get(viewportParamValue.getCppInstanceTypeName());
		if (viewportParamValueClassFactory != null)
		{
			viewportParamValue.setDelegate(true);
			viewportParamValue = (com.earthview.world.graphic.Viewport)viewportParamValueClassFactory.create();
			viewportParamValue.setDelegate(true);
			viewportParamValue.setInstancePointer(new InstancePointer(viewport));
		}
		}
		boolean updateStatisticsParamValue = updateStatistics;
		_updateViewport(viewportParamValue, updateStatisticsParamValue);
	}

	native private void _updateViewport_CViewport_ev_bool(long pNativeObject, long viewport, boolean updateStatistics);
	/**
	 * 手动的管理已给的视口的渲染，即使不能自动更新
	 * @param viewport 必须和渲染目标绑定的想要更新的视口
	 * @param updateStatistics 是否想要更新统计表
	 */
	public void _updateViewport(com.earthview.world.graphic.Viewport viewport, boolean updateStatistics)
	{
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean updateStatisticsParamValue = updateStatistics;
		_updateViewport_CViewport_ev_bool(this.nativeObject.pointer, viewportParamValue, updateStatisticsParamValue);
	}
	native private void _updateViewport_CViewport_ev_bool_NoVirtual(long pNativeObject, long viewport, boolean updateStatistics);
	protected void _updateViewport_NoVirtual(com.earthview.world.graphic.Viewport viewport, boolean updateStatistics)
	{
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean updateStatisticsParamValue = updateStatistics;
		_updateViewport_CViewport_ev_bool_NoVirtual(this.nativeObject.pointer, viewportParamValue, updateStatisticsParamValue);
	}

	protected  void _updateViewport_CViewport_callback(long viewport)
	{
		com.earthview.world.graphic.Viewport viewportParamValue = (viewport == 0L ? null : new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate));
		if(viewportParamValue != null)
		{
		viewportParamValue.setDelegate(true);
		viewportParamValue.setInstancePointer(new InstancePointer(viewport));
		IClassFactory viewportParamValueClassFactory = GlobalClassFactoryMap.get(viewportParamValue.getCppInstanceTypeName());
		if (viewportParamValueClassFactory != null)
		{
			viewportParamValue.setDelegate(true);
			viewportParamValue = (com.earthview.world.graphic.Viewport)viewportParamValueClassFactory.create();
			viewportParamValue.setDelegate(true);
			viewportParamValue.setInstancePointer(new InstancePointer(viewport));
		}
		}
		_updateViewport(viewportParamValue);
	}

	native private void _updateViewport_CViewport(long pNativeObject, long viewport);
	/**
	 * 手动的管理已给的视口的渲染，即使不能自动更新
	 * @param viewport 必须和渲染目标绑定的想要更新的视口
	 */
	public void _updateViewport(com.earthview.world.graphic.Viewport viewport)
	{
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		_updateViewport_CViewport(this.nativeObject.pointer, viewportParamValue);
	}
	native private void _updateViewport_CViewport_NoVirtual(long pNativeObject, long viewport);
	protected void _updateViewport_NoVirtual(com.earthview.world.graphic.Viewport viewport)
	{
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		_updateViewport_CViewport_NoVirtual(this.nativeObject.pointer, viewportParamValue);
	}

	protected  void _updateAutoUpdatedViewports_ev_bool_callback(boolean updateStatistics)
	{
		boolean updateStatisticsParamValue = updateStatistics;
		_updateAutoUpdatedViewports(updateStatisticsParamValue);
	}

	native private void _updateAutoUpdatedViewports_ev_bool(long pNativeObject, boolean updateStatistics);
	/**
	 * 手动的管理已给的视口的渲染，视口自动更新
	 * @param updateStatistics 是否想要更新统计表
	 */
	public void _updateAutoUpdatedViewports(boolean updateStatistics)
	{
		boolean updateStatisticsParamValue = updateStatistics;
		_updateAutoUpdatedViewports_ev_bool(this.nativeObject.pointer, updateStatisticsParamValue);
	}
	native private void _updateAutoUpdatedViewports_ev_bool_NoVirtual(long pNativeObject, boolean updateStatistics);
	protected void _updateAutoUpdatedViewports_NoVirtual(boolean updateStatistics)
	{
		boolean updateStatisticsParamValue = updateStatistics;
		_updateAutoUpdatedViewports_ev_bool_NoVirtual(this.nativeObject.pointer, updateStatisticsParamValue);
	}

	protected  void _updateAutoUpdatedViewports_void_callback()
	{
		_updateAutoUpdatedViewports();
	}

	native private void _updateAutoUpdatedViewports_void(long pNativeObject);
	/**
	 * 手动的管理已给的视口的渲染，视口自动更新
	 * @param  
	 */
	public void _updateAutoUpdatedViewports()
	{
		_updateAutoUpdatedViewports_void(this.nativeObject.pointer);
	}
	native private void _updateAutoUpdatedViewports_void_NoVirtual(long pNativeObject);
	protected void _updateAutoUpdatedViewports_NoVirtual()
	{
		_updateAutoUpdatedViewports_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void _endUpdate_void_callback()
	{
		_endUpdate();
	}

	native private void _endUpdate_void(long pNativeObject);
	/**
	 * 手动的管理渲染，完成统计表的计算
	 * @param  
	 */
	public void _endUpdate()
	{
		_endUpdate_void(this.nativeObject.pointer);
	}
	native private void _endUpdate_void_NoVirtual(long pNativeObject);
	protected void _endUpdate_NoVirtual()
	{
		_endUpdate_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void firePreUpdate_void_callback()
	{
		firePreUpdate();
	}

	native private void firePreUpdate_void(long pNativeObject);
	//// internal method for firing events
	public void firePreUpdate()
	{
		firePreUpdate_void(this.nativeObject.pointer);
	}
	native private void firePreUpdate_void_NoVirtual(long pNativeObject);
	protected void firePreUpdate_NoVirtual()
	{
		firePreUpdate_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void firePostUpdate_void_callback()
	{
		firePostUpdate();
	}

	native private void firePostUpdate_void(long pNativeObject);
	//// internal method for firing events
	public void firePostUpdate()
	{
		firePostUpdate_void(this.nativeObject.pointer);
	}
	native private void firePostUpdate_void_NoVirtual(long pNativeObject);
	protected void firePostUpdate_NoVirtual()
	{
		firePostUpdate_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void fireViewportPreUpdate_CViewport_callback(long vp)
	{
		com.earthview.world.graphic.Viewport vpParamValue = (vp == 0L ? null : new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate));
		if(vpParamValue != null)
		{
		vpParamValue.setDelegate(true);
		vpParamValue.setInstancePointer(new InstancePointer(vp));
		IClassFactory vpParamValueClassFactory = GlobalClassFactoryMap.get(vpParamValue.getCppInstanceTypeName());
		if (vpParamValueClassFactory != null)
		{
			vpParamValue.setDelegate(true);
			vpParamValue = (com.earthview.world.graphic.Viewport)vpParamValueClassFactory.create();
			vpParamValue.setDelegate(true);
			vpParamValue.setInstancePointer(new InstancePointer(vp));
		}
		}
		fireViewportPreUpdate(vpParamValue);
	}

	native private void fireViewportPreUpdate_CViewport(long pNativeObject, long vp);
	//// internal method for firing events
	public void fireViewportPreUpdate(com.earthview.world.graphic.Viewport vp)
	{
		long vpParamValue = (vp == null ? 0L : vp.nativeObject.pointer);
		fireViewportPreUpdate_CViewport(this.nativeObject.pointer, vpParamValue);
	}
	native private void fireViewportPreUpdate_CViewport_NoVirtual(long pNativeObject, long vp);
	protected void fireViewportPreUpdate_NoVirtual(com.earthview.world.graphic.Viewport vp)
	{
		long vpParamValue = (vp == null ? 0L : vp.nativeObject.pointer);
		fireViewportPreUpdate_CViewport_NoVirtual(this.nativeObject.pointer, vpParamValue);
	}

	protected  void fireViewportPostUpdate_CViewport_callback(long vp)
	{
		com.earthview.world.graphic.Viewport vpParamValue = (vp == 0L ? null : new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate));
		if(vpParamValue != null)
		{
		vpParamValue.setDelegate(true);
		vpParamValue.setInstancePointer(new InstancePointer(vp));
		IClassFactory vpParamValueClassFactory = GlobalClassFactoryMap.get(vpParamValue.getCppInstanceTypeName());
		if (vpParamValueClassFactory != null)
		{
			vpParamValue.setDelegate(true);
			vpParamValue = (com.earthview.world.graphic.Viewport)vpParamValueClassFactory.create();
			vpParamValue.setDelegate(true);
			vpParamValue.setInstancePointer(new InstancePointer(vp));
		}
		}
		fireViewportPostUpdate(vpParamValue);
	}

	native private void fireViewportPostUpdate_CViewport(long pNativeObject, long vp);
	//// internal method for firing events
	public void fireViewportPostUpdate(com.earthview.world.graphic.Viewport vp)
	{
		long vpParamValue = (vp == null ? 0L : vp.nativeObject.pointer);
		fireViewportPostUpdate_CViewport(this.nativeObject.pointer, vpParamValue);
	}
	native private void fireViewportPostUpdate_CViewport_NoVirtual(long pNativeObject, long vp);
	protected void fireViewportPostUpdate_NoVirtual(com.earthview.world.graphic.Viewport vp)
	{
		long vpParamValue = (vp == null ? 0L : vp.nativeObject.pointer);
		fireViewportPostUpdate_CViewport_NoVirtual(this.nativeObject.pointer, vpParamValue);
	}

	protected  void fireViewportAdded_CViewport_callback(long vp)
	{
		com.earthview.world.graphic.Viewport vpParamValue = (vp == 0L ? null : new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate));
		if(vpParamValue != null)
		{
		vpParamValue.setDelegate(true);
		vpParamValue.setInstancePointer(new InstancePointer(vp));
		IClassFactory vpParamValueClassFactory = GlobalClassFactoryMap.get(vpParamValue.getCppInstanceTypeName());
		if (vpParamValueClassFactory != null)
		{
			vpParamValue.setDelegate(true);
			vpParamValue = (com.earthview.world.graphic.Viewport)vpParamValueClassFactory.create();
			vpParamValue.setDelegate(true);
			vpParamValue.setInstancePointer(new InstancePointer(vp));
		}
		}
		fireViewportAdded(vpParamValue);
	}

	native private void fireViewportAdded_CViewport(long pNativeObject, long vp);
	//// internal method for firing events
	public void fireViewportAdded(com.earthview.world.graphic.Viewport vp)
	{
		long vpParamValue = (vp == null ? 0L : vp.nativeObject.pointer);
		fireViewportAdded_CViewport(this.nativeObject.pointer, vpParamValue);
	}
	native private void fireViewportAdded_CViewport_NoVirtual(long pNativeObject, long vp);
	protected void fireViewportAdded_NoVirtual(com.earthview.world.graphic.Viewport vp)
	{
		long vpParamValue = (vp == null ? 0L : vp.nativeObject.pointer);
		fireViewportAdded_CViewport_NoVirtual(this.nativeObject.pointer, vpParamValue);
	}

	protected  void fireViewportRemoved_CViewport_callback(long vp)
	{
		com.earthview.world.graphic.Viewport vpParamValue = (vp == 0L ? null : new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate));
		if(vpParamValue != null)
		{
		vpParamValue.setDelegate(true);
		vpParamValue.setInstancePointer(new InstancePointer(vp));
		IClassFactory vpParamValueClassFactory = GlobalClassFactoryMap.get(vpParamValue.getCppInstanceTypeName());
		if (vpParamValueClassFactory != null)
		{
			vpParamValue.setDelegate(true);
			vpParamValue = (com.earthview.world.graphic.Viewport)vpParamValueClassFactory.create();
			vpParamValue.setDelegate(true);
			vpParamValue.setInstancePointer(new InstancePointer(vp));
		}
		}
		fireViewportRemoved(vpParamValue);
	}

	native private void fireViewportRemoved_CViewport(long pNativeObject, long vp);
	//// internal method for firing events
	public void fireViewportRemoved(com.earthview.world.graphic.Viewport vp)
	{
		long vpParamValue = (vp == null ? 0L : vp.nativeObject.pointer);
		fireViewportRemoved_CViewport(this.nativeObject.pointer, vpParamValue);
	}
	native private void fireViewportRemoved_CViewport_NoVirtual(long pNativeObject, long vp);
	protected void fireViewportRemoved_NoVirtual(com.earthview.world.graphic.Viewport vp)
	{
		long vpParamValue = (vp == null ? 0L : vp.nativeObject.pointer);
		fireViewportRemoved_CViewport_NoVirtual(this.nativeObject.pointer, vpParamValue);
	}

	protected  void updateImpl_void_callback()
	{
		updateImpl();
	}

	native private void updateImpl_void(long pNativeObject);
	/**
	 * 内部update()的执行
	 * @param  
	 */
	public void updateImpl()
	{
		updateImpl_void(this.nativeObject.pointer);
	}
	native private void updateImpl_void_NoVirtual(long pNativeObject);
	protected void updateImpl_NoVirtual()
	{
		updateImpl_void_NoVirtual(this.nativeObject.pointer);
	}

	public RenderTarget(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderTarget(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getMetrics_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_getWidth_void(long pNativeObject, String method);
	native protected void register_getHeight_void(long pNativeObject, String method);
	native protected void register_getColourDepth_void(long pNativeObject, String method);
	native protected void register_attachDepthBuffer_CDepthBuffer(long pNativeObject, String method);
	native protected void register_detachDepthBuffer_void(long pNativeObject, String method);
	native protected void register__detachDepthBuffer_void(long pNativeObject, String method);
	native protected void register_update_ev_bool(long pNativeObject, String method);
	native protected void register_update_void(long pNativeObject, String method);
	native protected void register_swapBuffers_ev_bool(long pNativeObject, String method);
	native protected void register_swapBuffers_void(long pNativeObject, String method);
	native protected void register_addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, String method);
	native protected void register_addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32(long pNativeObject, String method);
	native protected void register_addViewport_CCamera_ev_int32_ev_real32_ev_real32(long pNativeObject, String method);
	native protected void register_addViewport_CCamera_ev_int32_ev_real32(long pNativeObject, String method);
	native protected void register_addViewport_CCamera_ev_int32(long pNativeObject, String method);
	native protected void register_addViewport_CCamera(long pNativeObject, String method);
	native protected void register_getNumViewports_void(long pNativeObject, String method);
	native protected void register_getViewport_ev_uint16(long pNativeObject, String method);
	native protected void register_getViewportByZOrder_ev_int32(long pNativeObject, String method);
	native protected void register_hasViewportWithZOrder_ev_int32(long pNativeObject, String method);
	native protected void register_removeViewport_ev_int32(long pNativeObject, String method);
	native protected void register_removeAllViewports_void(long pNativeObject, String method);
	native protected void register_getStatistics_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, String method);
	native protected void register_getStatistics_void(long pNativeObject, String method);
	native protected void register_getLastFPS_void(long pNativeObject, String method);
	native protected void register_getAverageFPS_void(long pNativeObject, String method);
	native protected void register_getBestFPS_void(long pNativeObject, String method);
	native protected void register_getWorstFPS_void(long pNativeObject, String method);
	native protected void register_getBestFrameTime_void(long pNativeObject, String method);
	native protected void register_getWorstFrameTime_void(long pNativeObject, String method);
	native protected void register_resetStatistics_void(long pNativeObject, String method);
	native protected void register_getCustomAttribute_EVString_void(long pNativeObject, String method);
	native protected void register_addListener_CRenderTargetListener(long pNativeObject, String method);
	native protected void register_removeListener_CRenderTargetListener(long pNativeObject, String method);
	native protected void register_removeAllListeners_void(long pNativeObject, String method);
	native protected void register_setPriority_ev_uchar(long pNativeObject, String method);
	native protected void register_getPriority_void(long pNativeObject, String method);
	native protected void register_isActive_void(long pNativeObject, String method);
	native protected void register_setActive_ev_bool(long pNativeObject, String method);
	native protected void register_setAutoUpdated_ev_bool(long pNativeObject, String method);
	native protected void register_isAutoUpdated_void(long pNativeObject, String method);
	native protected void register_copyContentsToMemory_CPixelBox_FrameBuffer(long pNativeObject, String method);
	native protected void register_copyContentsToMemory_CPixelBox(long pNativeObject, String method);
	native protected void register_suggestPixelFormat_void(long pNativeObject, String method);
	native protected void register_writeContentsToTimestampedFile_EVString_EVString(long pNativeObject, String method);
	native protected void register_requiresTextureFlipping_void(long pNativeObject, String method);
	native protected void register_getTriangleCount_void(long pNativeObject, String method);
	native protected void register_getBatchCount_void(long pNativeObject, String method);
	native protected void register_getVertexCount_void(long pNativeObject, String method);
	native protected void register__notifyCameraRemoved_CCamera(long pNativeObject, String method);
	native protected void register_isPrimary_void(long pNativeObject, String method);
	native protected void register_isHardwareGammaEnabled_void(long pNativeObject, String method);
	native protected void register_getFSAA_void(long pNativeObject, String method);
	native protected void register_getFSAAHint_void(long pNativeObject, String method);
	native protected void register__getImpl_void(long pNativeObject, String method);
	native protected void register__beginUpdate_void(long pNativeObject, String method);
	native protected void register__updateViewport_ev_int32_ev_bool(long pNativeObject, String method);
	native protected void register__updateViewport_ev_int32(long pNativeObject, String method);
	native protected void register__updateViewport_CViewport_ev_bool(long pNativeObject, String method);
	native protected void register__updateViewport_CViewport(long pNativeObject, String method);
	native protected void register__updateAutoUpdatedViewports_ev_bool(long pNativeObject, String method);
	native protected void register__updateAutoUpdatedViewports_void(long pNativeObject, String method);
	native protected void register__endUpdate_void(long pNativeObject, String method);
	native protected void register_firePreUpdate_void(long pNativeObject, String method);
	native protected void register_firePostUpdate_void(long pNativeObject, String method);
	native protected void register_fireViewportPreUpdate_CViewport(long pNativeObject, String method);
	native protected void register_fireViewportPostUpdate_CViewport(long pNativeObject, String method);
	native protected void register_fireViewportAdded_CViewport(long pNativeObject, String method);
	native protected void register_fireViewportRemoved_CViewport(long pNativeObject, String method);
	native protected void register_updateImpl_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getMetrics_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, "getMetrics_ev_uint32_ev_uint32_ev_uint32_callback");
			this.register_getWidth_void(this.nativeObject.pointer, "getWidth_void_callback");
			this.register_getHeight_void(this.nativeObject.pointer, "getHeight_void_callback");
			this.register_getColourDepth_void(this.nativeObject.pointer, "getColourDepth_void_callback");
			this.register_attachDepthBuffer_CDepthBuffer(this.nativeObject.pointer, "attachDepthBuffer_CDepthBuffer_callback");
			this.register_detachDepthBuffer_void(this.nativeObject.pointer, "detachDepthBuffer_void_callback");
			this.register__detachDepthBuffer_void(this.nativeObject.pointer, "_detachDepthBuffer_void_callback");
			this.register_update_ev_bool(this.nativeObject.pointer, "update_ev_bool_callback");
			this.register_update_void(this.nativeObject.pointer, "update_void_callback");
			this.register_swapBuffers_ev_bool(this.nativeObject.pointer, "swapBuffers_ev_bool_callback");
			this.register_swapBuffers_void(this.nativeObject.pointer, "swapBuffers_void_callback");
			this.register_addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, "addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_ev_real32_callback");
			this.register_addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, "addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_callback");
			this.register_addViewport_CCamera_ev_int32_ev_real32_ev_real32(this.nativeObject.pointer, "addViewport_CCamera_ev_int32_ev_real32_ev_real32_callback");
			this.register_addViewport_CCamera_ev_int32_ev_real32(this.nativeObject.pointer, "addViewport_CCamera_ev_int32_ev_real32_callback");
			this.register_addViewport_CCamera_ev_int32(this.nativeObject.pointer, "addViewport_CCamera_ev_int32_callback");
			this.register_addViewport_CCamera(this.nativeObject.pointer, "addViewport_CCamera_callback");
			this.register_getNumViewports_void(this.nativeObject.pointer, "getNumViewports_void_callback");
			this.register_getViewport_ev_uint16(this.nativeObject.pointer, "getViewport_ev_uint16_callback");
			this.register_getViewportByZOrder_ev_int32(this.nativeObject.pointer, "getViewportByZOrder_ev_int32_callback");
			this.register_hasViewportWithZOrder_ev_int32(this.nativeObject.pointer, "hasViewportWithZOrder_ev_int32_callback");
			this.register_removeViewport_ev_int32(this.nativeObject.pointer, "removeViewport_ev_int32_callback");
			this.register_removeAllViewports_void(this.nativeObject.pointer, "removeAllViewports_void_callback");
			this.register_getStatistics_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, "getStatistics_ev_real32_ev_real32_ev_real32_ev_real32_callback");
			this.register_getStatistics_void(this.nativeObject.pointer, "getStatistics_void_callback");
			this.register_getLastFPS_void(this.nativeObject.pointer, "getLastFPS_void_callback");
			this.register_getAverageFPS_void(this.nativeObject.pointer, "getAverageFPS_void_callback");
			this.register_getBestFPS_void(this.nativeObject.pointer, "getBestFPS_void_callback");
			this.register_getWorstFPS_void(this.nativeObject.pointer, "getWorstFPS_void_callback");
			this.register_getBestFrameTime_void(this.nativeObject.pointer, "getBestFrameTime_void_callback");
			this.register_getWorstFrameTime_void(this.nativeObject.pointer, "getWorstFrameTime_void_callback");
			this.register_resetStatistics_void(this.nativeObject.pointer, "resetStatistics_void_callback");
			this.register_getCustomAttribute_EVString_void(this.nativeObject.pointer, "getCustomAttribute_EVString_void_callback");
			this.register_addListener_CRenderTargetListener(this.nativeObject.pointer, "addListener_CRenderTargetListener_callback");
			this.register_removeListener_CRenderTargetListener(this.nativeObject.pointer, "removeListener_CRenderTargetListener_callback");
			this.register_removeAllListeners_void(this.nativeObject.pointer, "removeAllListeners_void_callback");
			this.register_setPriority_ev_uchar(this.nativeObject.pointer, "setPriority_ev_uchar_callback");
			this.register_getPriority_void(this.nativeObject.pointer, "getPriority_void_callback");
			this.register_isActive_void(this.nativeObject.pointer, "isActive_void_callback");
			this.register_setActive_ev_bool(this.nativeObject.pointer, "setActive_ev_bool_callback");
			this.register_setAutoUpdated_ev_bool(this.nativeObject.pointer, "setAutoUpdated_ev_bool_callback");
			this.register_isAutoUpdated_void(this.nativeObject.pointer, "isAutoUpdated_void_callback");
			this.register_copyContentsToMemory_CPixelBox_FrameBuffer(this.nativeObject.pointer, "copyContentsToMemory_CPixelBox_FrameBuffer_callback");
			this.register_copyContentsToMemory_CPixelBox(this.nativeObject.pointer, "copyContentsToMemory_CPixelBox_callback");
			this.register_suggestPixelFormat_void(this.nativeObject.pointer, "suggestPixelFormat_void_callback");
			this.register_writeContentsToTimestampedFile_EVString_EVString(this.nativeObject.pointer, "writeContentsToTimestampedFile_EVString_EVString_callback");
			this.register_requiresTextureFlipping_void(this.nativeObject.pointer, "requiresTextureFlipping_void_callback");
			this.register_getTriangleCount_void(this.nativeObject.pointer, "getTriangleCount_void_callback");
			this.register_getBatchCount_void(this.nativeObject.pointer, "getBatchCount_void_callback");
			this.register_getVertexCount_void(this.nativeObject.pointer, "getVertexCount_void_callback");
			this.register__notifyCameraRemoved_CCamera(this.nativeObject.pointer, "_notifyCameraRemoved_CCamera_callback");
			this.register_isPrimary_void(this.nativeObject.pointer, "isPrimary_void_callback");
			this.register_isHardwareGammaEnabled_void(this.nativeObject.pointer, "isHardwareGammaEnabled_void_callback");
			this.register_getFSAA_void(this.nativeObject.pointer, "getFSAA_void_callback");
			this.register_getFSAAHint_void(this.nativeObject.pointer, "getFSAAHint_void_callback");
			this.register__getImpl_void(this.nativeObject.pointer, "_getImpl_void_callback");
			this.register__beginUpdate_void(this.nativeObject.pointer, "_beginUpdate_void_callback");
			this.register__updateViewport_ev_int32_ev_bool(this.nativeObject.pointer, "_updateViewport_ev_int32_ev_bool_callback");
			this.register__updateViewport_ev_int32(this.nativeObject.pointer, "_updateViewport_ev_int32_callback");
			this.register__updateViewport_CViewport_ev_bool(this.nativeObject.pointer, "_updateViewport_CViewport_ev_bool_callback");
			this.register__updateViewport_CViewport(this.nativeObject.pointer, "_updateViewport_CViewport_callback");
			this.register__updateAutoUpdatedViewports_ev_bool(this.nativeObject.pointer, "_updateAutoUpdatedViewports_ev_bool_callback");
			this.register__updateAutoUpdatedViewports_void(this.nativeObject.pointer, "_updateAutoUpdatedViewports_void_callback");
			this.register__endUpdate_void(this.nativeObject.pointer, "_endUpdate_void_callback");
			this.register_firePreUpdate_void(this.nativeObject.pointer, "firePreUpdate_void_callback");
			this.register_firePostUpdate_void(this.nativeObject.pointer, "firePostUpdate_void_callback");
			this.register_fireViewportPreUpdate_CViewport(this.nativeObject.pointer, "fireViewportPreUpdate_CViewport_callback");
			this.register_fireViewportPostUpdate_CViewport(this.nativeObject.pointer, "fireViewportPostUpdate_CViewport_callback");
			this.register_fireViewportAdded_CViewport(this.nativeObject.pointer, "fireViewportAdded_CViewport_callback");
			this.register_fireViewportRemoved_CViewport(this.nativeObject.pointer, "fireViewportRemoved_CViewport_callback");
			this.register_updateImpl_void(this.nativeObject.pointer, "updateImpl_void_callback");
		}
	}
	
	public static RenderTarget fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderTarget obj = null;
 		if(baseObj instanceof RenderTarget)
		{
			obj = (RenderTarget)baseObj;
		} else {
			obj = new RenderTarget(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRenderTarget");
			obj.increaseCast();
		}

		return obj;
	}
}
