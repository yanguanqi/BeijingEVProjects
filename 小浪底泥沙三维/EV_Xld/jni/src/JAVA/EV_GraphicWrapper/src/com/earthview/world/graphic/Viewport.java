package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 视口，渲染目标中的渲染区域抽象类
 */
public class Viewport extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CViewport", new ViewportClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCViewportProxy", new ViewportClassFactory());
	}

	public static class ViewportListener extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CViewport::CViewportListener", new ViewportListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CViewport::JCViewportListenerProxy", new ViewportListenerClassFactory());
		}

		public ViewportListener() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCViewportListenerProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.Viewport$ViewportListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  void viewportCameraChanged_CViewport_callback(long viewport)
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
			viewportCameraChanged(viewportParamValue);
		}

		native private void viewportCameraChanged_CViewport(long pNativeObject, long viewport);
		public void viewportCameraChanged(com.earthview.world.graphic.Viewport viewport)
		{
			long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
			viewportCameraChanged_CViewport(this.nativeObject.pointer, viewportParamValue);
		}
		native private void viewportCameraChanged_CViewport_NoVirtual(long pNativeObject, long viewport);
		protected void viewportCameraChanged_NoVirtual(com.earthview.world.graphic.Viewport viewport)
		{
			long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
			viewportCameraChanged_CViewport_NoVirtual(this.nativeObject.pointer, viewportParamValue);
		}

		protected  void viewportDimensionsChanged_CViewport_callback(long viewport)
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
			viewportDimensionsChanged(viewportParamValue);
		}

		native private void viewportDimensionsChanged_CViewport(long pNativeObject, long viewport);
		public void viewportDimensionsChanged(com.earthview.world.graphic.Viewport viewport)
		{
			long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
			viewportDimensionsChanged_CViewport(this.nativeObject.pointer, viewportParamValue);
		}
		native private void viewportDimensionsChanged_CViewport_NoVirtual(long pNativeObject, long viewport);
		protected void viewportDimensionsChanged_NoVirtual(com.earthview.world.graphic.Viewport viewport)
		{
			long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
			viewportDimensionsChanged_CViewport_NoVirtual(this.nativeObject.pointer, viewportParamValue);
		}

		protected  void viewportDestroyed_CViewport_callback(long viewport)
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
			viewportDestroyed(viewportParamValue);
		}

		native private void viewportDestroyed_CViewport(long pNativeObject, long viewport);
		public void viewportDestroyed(com.earthview.world.graphic.Viewport viewport)
		{
			long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
			viewportDestroyed_CViewport(this.nativeObject.pointer, viewportParamValue);
		}
		native private void viewportDestroyed_CViewport_NoVirtual(long pNativeObject, long viewport);
		protected void viewportDestroyed_NoVirtual(com.earthview.world.graphic.Viewport viewport)
		{
			long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
			viewportDestroyed_CViewport_NoVirtual(this.nativeObject.pointer, viewportParamValue);
		}

		public ViewportListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ViewportListener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_viewportCameraChanged_CViewport(long pNativeObject, String method);
		native protected void register_viewportDimensionsChanged_CViewport(long pNativeObject, String method);
		native protected void register_viewportDestroyed_CViewport(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_viewportCameraChanged_CViewport(this.nativeObject.pointer, "viewportCameraChanged_CViewport_callback");
				this.register_viewportDimensionsChanged_CViewport(this.nativeObject.pointer, "viewportDimensionsChanged_CViewport_callback");
				this.register_viewportDestroyed_CViewport(this.nativeObject.pointer, "viewportDestroyed_CViewport_callback");
			}
		}
		
		public static ViewportListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ViewportListener obj = null;
 			if(baseObj instanceof ViewportListener)
			{
				obj = (ViewportListener)baseObj;
			} else {
				obj = new ViewportListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CViewportListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ViewportListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ViewportListener emptyInstance = new ViewportListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 构造函数
	 * @param cam 指针指向摄像机的影像资源
	 * @param target 指针指向渲染目标
	 * @param left 
	 * @param top 
	 * @param width 
	 * @param height 视口的维数，值在0到1之间
	 * @param ZOrder 
	 */
	public Viewport(com.earthview.world.graphic.Camera ref_cam, com.earthview.world.graphic.RenderTarget ref_target, double left, double top, double width, double height, int ZOrder) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_camPtr = new BasePointer(ref_cam);
		list.add("ref_cam", ref_camPtr.get());
		BasePointer ref_targetPtr = new BasePointer(ref_target);
		list.add("ref_target", ref_targetPtr.get());
		BasePointer leftPtr = new BasePointer(left);
		list.add("left", leftPtr.get());
		BasePointer topPtr = new BasePointer(top);
		list.add("top", topPtr.get());
		BasePointer widthPtr = new BasePointer(width);
		list.add("width", widthPtr.get());
		BasePointer heightPtr = new BasePointer(height);
		list.add("height", heightPtr.get());
		BasePointer ZOrderPtr = new BasePointer(ZOrder);
		list.add("ZOrder", ZOrderPtr.get());
		Create("JCViewportProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.Viewport".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void _updateDimensions_void(long pNativeObject);
	/**
	 * 更新视口维数
	 * @param  
	 */
	public void _updateDimensions()
	{
		_updateDimensions_void(this.nativeObject.pointer);
	}
	native private void update_void(long pNativeObject);
	/**
	 * 更新视口的内容
	 * @param  
	 */
	public void update()
	{
		update_void(this.nativeObject.pointer);
	}
	native private void clear_ev_uint32_CColourValue_Real_ev_uint16(long pNativeObject, long buffers, long colour, double depth, int stencil);
	/**
	 * 通知清空视口，但不运行更新
	 * @param buffers 标明哪一个缓存元素需要清除
	 * @param colour 如果FBT_COLOUR被包含，清空颜色值
	 * @param depth 如果FBT_DEPTH被包含，清空深度值
	 * @param stencil 如果FBT_STENCIL被包含，清空模板值
	 */
	public void clear(long buffers, com.earthview.world.graphic.ColourValue colour, double depth, int stencil)
	{
		long buffersParamValue = buffers;
		long colourParamValue = colour.nativeObject.pointer;
		double depthParamValue = depth;
		int stencilParamValue = stencil;
		clear_ev_uint32_CColourValue_Real_ev_uint16(this.nativeObject.pointer, buffersParamValue, colourParamValue, depthParamValue, stencilParamValue);
	}
	native private void clear_ev_uint32_CColourValue_Real(long pNativeObject, long buffers, long colour, double depth);
	/**
	 * 通知清空视口，但不运行更新
	 * @param buffers 标明哪一个缓存元素需要清除
	 * @param colour 如果FBT_COLOUR被包含，清空颜色值
	 * @param depth 如果FBT_DEPTH被包含，清空深度值
	 */
	public void clear(long buffers, com.earthview.world.graphic.ColourValue colour, double depth)
	{
		long buffersParamValue = buffers;
		long colourParamValue = colour.nativeObject.pointer;
		double depthParamValue = depth;
		clear_ev_uint32_CColourValue_Real(this.nativeObject.pointer, buffersParamValue, colourParamValue, depthParamValue);
	}
	native private void clear_ev_uint32_CColourValue(long pNativeObject, long buffers, long colour);
	/**
	 * 通知清空视口，但不运行更新
	 * @param buffers 标明哪一个缓存元素需要清除
	 * @param colour 如果FBT_COLOUR被包含，清空颜色值
	 */
	public void clear(long buffers, com.earthview.world.graphic.ColourValue colour)
	{
		long buffersParamValue = buffers;
		long colourParamValue = colour.nativeObject.pointer;
		clear_ev_uint32_CColourValue(this.nativeObject.pointer, buffersParamValue, colourParamValue);
	}
	native private void clear_ev_uint32(long pNativeObject, long buffers);
	/**
	 * 通知清空视口，但不运行更新
	 * @param buffers 标明哪一个缓存元素需要清除
	 */
	public void clear(long buffers)
	{
		long buffersParamValue = buffers;
		clear_ev_uint32(this.nativeObject.pointer, buffersParamValue);
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 通知清空视口，但不运行更新
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private long getTarget_void(long pNativeObject);
	/**
	 * 获得渲染目标这个视口的指针
	 * @param  
	 */
	public com.earthview.world.graphic.RenderTarget getTarget()
	{
		long returnValue = getTarget_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderTarget __returnValue = new com.earthview.world.graphic.RenderTarget(CreatedWhenConstruct.CWC_NotToCreate, "CRenderTarget");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderTarget)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderTarget");
		}
		return __returnValue;
	}
	native private long getCamera_void(long pNativeObject);
	/**
	 * 获得视口摄像机的指针
	 * @param  
	 */
	public com.earthview.world.graphic.Camera getCamera()
	{
		long returnValue = getCamera_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Camera __returnValue = new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate, "CCamera");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Camera)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCamera");
		}
		return __returnValue;
	}
	native private void setCamera_CCamera(long pNativeObject, long ref_cam);
	/**
	 * 设置渲染视口的摄像机
	 * @param cam 
	 */
	public void setCamera(com.earthview.world.graphic.Camera ref_cam)
	{
		long ref_camParamValue = (ref_cam == null ? 0L : ref_cam.nativeObject.pointer);
		setCamera_CCamera(this.nativeObject.pointer, ref_camParamValue);
	}
	native private int getZOrder_void(long pNativeObject);
	/**
	 * 获得视口的Z-Order
	 * @param  
	 */
	public int getZOrder()
	{
		int returnValue = getZOrder_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getLeft_void(long pNativeObject);
	/**
	 * 获得视口的一个相对left维数，值在0到1之间
	 * @param  
	 */
	public double getLeft()
	{
		double returnValue = getLeft_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getTop_void(long pNativeObject);
	/**
	 * 获得视口的一个相对top维数，值在0到1之间
	 * @param  
	 */
	public double getTop()
	{
		double returnValue = getTop_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getWidth_void(long pNativeObject);
	/**
	 * 获得视口的一个相对宽度维数，值在0到1之间
	 * @param  
	 */
	public double getWidth()
	{
		double returnValue = getWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getHeight_void(long pNativeObject);
	/**
	 * 获得视口的一个相对高度维数，值在0到1之间
	 * @param  
	 */
	public double getHeight()
	{
		double returnValue = getHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getActualLeft_void(long pNativeObject);
	/**
	 * 获得视口的一个实际left维数，像素值
	 * @param  
	 */
	public int getActualLeft()
	{
		int returnValue = getActualLeft_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getActualTop_void(long pNativeObject);
	/**
	 * 获得视口的一个实际top维数，像素值
	 * @param  
	 */
	public int getActualTop()
	{
		int returnValue = getActualTop_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getActualWidth_void(long pNativeObject);
	/**
	 * 获得视口的一个实际宽度维数，像素值
	 * @param  
	 */
	public int getActualWidth()
	{
		int returnValue = getActualWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getActualHeight_void(long pNativeObject);
	/**
	 * 获得视口的一个实际高度维数，像素值
	 * @param  
	 */
	public int getActualHeight()
	{
		int returnValue = getActualHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDimensions_Real_Real_Real_Real(long pNativeObject, double left, double top, double width, double height);
	/**
	 * 设置维数
	 * @param left 
	 * @param top 
	 * @param width 
	 * @param height 相对于目标大小的高度维数
	 */
	public void setDimensions(double left, double top, double width, double height)
	{
		double leftParamValue = left;
		double topParamValue = top;
		double widthParamValue = width;
		double heightParamValue = height;
		setDimensions_Real_Real_Real_Real(this.nativeObject.pointer, leftParamValue, topParamValue, widthParamValue, heightParamValue);
	}
	native private void setOrientationMode_OrientationMode_ev_bool(long pNativeObject, int orientationMode, boolean setDefault);
	/**
	 * 设置视口的方位模型
	 * @param orientationMode 
	 * @param setDefault 
	 */
	public void setOrientationMode(com.earthview.world.graphic.OrientationMode orientationMode, boolean setDefault)
	{
		int orientationModeParamValue = orientationMode.getValue();
		boolean setDefaultParamValue = setDefault;
		setOrientationMode_OrientationMode_ev_bool(this.nativeObject.pointer, orientationModeParamValue, setDefaultParamValue);
	}
	native private void setOrientationMode_OrientationMode(long pNativeObject, int orientationMode);
	/**
	 * 设置视口的方位模型
	 * @param orientationMode 
	 */
	public void setOrientationMode(com.earthview.world.graphic.OrientationMode orientationMode)
	{
		int orientationModeParamValue = orientationMode.getValue();
		setOrientationMode_OrientationMode(this.nativeObject.pointer, orientationModeParamValue);
	}
	native private int getOrientationMode_void(long pNativeObject);
	/**
	 * 获得视口的方位模型
	 * @param  
	 */
	public com.earthview.world.graphic.OrientationMode getOrientationMode()
	{
		int returnValue = getOrientationMode_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.OrientationMode.toEnum(returnValue);
	}
	native private static void setDefaultOrientationMode_OrientationMode(int orientationMode);
	/**
	 * 设置视口的初始方位模型
	 * @param orientationMode 
	 */
	public static void setDefaultOrientationMode(com.earthview.world.graphic.OrientationMode orientationMode)
	{
		int orientationModeParamValue = orientationMode.getValue();
		setDefaultOrientationMode_OrientationMode(orientationModeParamValue);
	}
	native private static int getDefaultOrientationMode_void();
	/**
	 * 获得视口的初始方位模型
	 * @param  
	 */
	public static com.earthview.world.graphic.OrientationMode getDefaultOrientationMode()
	{
		int returnValue = getDefaultOrientationMode_void();
		return com.earthview.world.graphic.OrientationMode.toEnum(returnValue);
	}
	native private void setBackgroundColour_CColourValue(long pNativeObject, long colour);
	/**
	 * 设置视口的初始背景颜色
	 * @param colour 
	 */
	public void setBackgroundColour(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		setBackgroundColour_CColourValue(this.nativeObject.pointer, colourParamValue);
	}
	native private long getBackgroundColour_void(long pNativeObject);
	/**
	 * 获得视口的背景颜色
	 * @param  
	 */
	public com.earthview.world.graphic.ColourValue getBackgroundColour()
	{
		long returnValue = getBackgroundColour_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private long calculateViewportProjectViewMatrix_void(long pNativeObject);
	/**
	 * 计算视口投影观察矩阵
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 calculateViewportProjectViewMatrix()
	{
		long returnValue = calculateViewportProjectViewMatrix_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private void setDepthClear_Real(long pNativeObject, double depth);
	public void setDepthClear(double depth)
	{
		double depthParamValue = depth;
		setDepthClear_Real(this.nativeObject.pointer, depthParamValue);
	}
	native private double getDepthClear_void(long pNativeObject);
	public double getDepthClear()
	{
		double returnValue = getDepthClear_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setClearEveryFrame_ev_bool_ev_uint32(long pNativeObject, boolean clear, long buffers);
	/**
	 * 决定在渲染之前是否清空视口
	 * @param clear 
	 * @param buffers 
	 */
	public void setClearEveryFrame(boolean clear, long buffers)
	{
		boolean clearParamValue = clear;
		long buffersParamValue = buffers;
		setClearEveryFrame_ev_bool_ev_uint32(this.nativeObject.pointer, clearParamValue, buffersParamValue);
	}
	native private void setClearEveryFrame_ev_bool(long pNativeObject, boolean clear);
	/**
	 * 决定在渲染之前是否清空视口
	 * @param clear 
	 */
	public void setClearEveryFrame(boolean clear)
	{
		boolean clearParamValue = clear;
		setClearEveryFrame_ev_bool(this.nativeObject.pointer, clearParamValue);
	}
	native private boolean getClearEveryFrame_void(long pNativeObject);
	/**
	 * 决定是否在每一个帧之前清空视口
	 * @param  
	 */
	public boolean getClearEveryFrame()
	{
		boolean returnValue = getClearEveryFrame_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getClearBuffers_void(long pNativeObject);
	/**
	 * 获得哪一个缓存被清空
	 * @param  
	 */
	public long getClearBuffers()
	{
		long returnValue = getClearBuffers_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAutoUpdated_ev_bool(long pNativeObject, boolean autoupdate);
	/**
	 * 设置是否视口应该自动更新
	 * @param  
	 */
	public void setAutoUpdated(boolean autoupdate)
	{
		boolean autoupdateParamValue = autoupdate;
		setAutoUpdated_ev_bool(this.nativeObject.pointer, autoupdateParamValue);
	}
	native private boolean isAutoUpdated_void(long pNativeObject);
	/**
	 * 获得视口是否自动更新，如果渲染循环或CRenderTarget::update已经使用
	 * @param  
	 */
	public boolean isAutoUpdated()
	{
		boolean returnValue = isAutoUpdated_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMaterialScheme_EVString(long pNativeObject, String schemeName);
	/**
	 * 设置视口使用的材质的方案
	 * @param schemeName 方案名称
	 */
	public void setMaterialScheme(String schemeName)
	{
		String schemeNameParamValue = schemeName;
		setMaterialScheme_EVString(this.nativeObject.pointer, schemeNameParamValue);
	}
	native private long getMaterialScheme_void(long pNativeObject);
	/**
	 * 获得视口使用的材质的方案
	 * @param  
	 */
	public StringPointer getMaterialScheme()
	{
		long returnValue = getMaterialScheme_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void getActualDimensions_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, long left, long top, long width, long height);
	/**
	 * 获得实际的维数
	 * @param left 
	 * @param top 
	 * @param width 
	 * @param height 
	 */
	public void getActualDimensions(IntegerPointer left, IntegerPointer top, IntegerPointer width, IntegerPointer height)
	{
		long leftParamValue = left.nativeObject.pointer;
		long topParamValue = top.nativeObject.pointer;
		long widthParamValue = width.nativeObject.pointer;
		long heightParamValue = height.nativeObject.pointer;
		getActualDimensions_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, leftParamValue, topParamValue, widthParamValue, heightParamValue);
	}
	native private boolean _isUpdated_void(long pNativeObject);
	public boolean _isUpdated()
	{
		boolean returnValue = _isUpdated_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void _clearUpdatedFlag_void(long pNativeObject);
	public void _clearUpdatedFlag()
	{
		_clearUpdatedFlag_void(this.nativeObject.pointer);
	}
	native private long _getNumRenderedFaces_void(long pNativeObject);
	/**
	 * 在最后的更新中获得渲染面的数量
	 * @param  
	 */
	public long _getNumRenderedFaces()
	{
		long returnValue = _getNumRenderedFaces_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long _getNumRenderedBatches_void(long pNativeObject);
	/**
	 * 在最后的更新中获得渲染批次的数量
	 * @param  
	 */
	public long _getNumRenderedBatches()
	{
		long returnValue = _getNumRenderedBatches_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long _getNumRenderedVertices_void(long pNativeObject);
	/**
	 * 在最后的更新中获得渲染顶点的数量
	 * @param  
	 */
	public long _getNumRenderedVertices()
	{
		long returnValue = _getNumRenderedVertices_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setOverlaysEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置视口是否显示覆盖的对象
	 * @param enabled 如果为true显示覆盖的对象，否则不显示
	 */
	public void setOverlaysEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setOverlaysEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean getOverlaysEnabled_void(long pNativeObject);
	/**
	 * 返回视口是否显示覆盖的对象
	 * @param  
	 * @return 如果为true显示覆盖的对象，否则不显示
	 */
	public boolean getOverlaysEnabled()
	{
		boolean returnValue = getOverlaysEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSkiesEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置视口是否显示天空
	 * @param enabled 如果为true显示天空，否则不显示
	 */
	public void setSkiesEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setSkiesEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean getSkiesEnabled_void(long pNativeObject);
	/**
	 * 返回视口是否显示天空
	 * @param  
	 * @return 如果为true显示天空，否则不显示
	 */
	public boolean getSkiesEnabled()
	{
		boolean returnValue = getSkiesEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setShadowsEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置视口是否显示阴影
	 * @param enabled 如果为true显示阴影，否则不显示
	 */
	public void setShadowsEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setShadowsEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean getShadowsEnabled_void(long pNativeObject);
	/**
	 * 返回视口是否显示阴影
	 * @param  
	 * @return 如果为true显示阴影，否则不显示
	 */
	public boolean getShadowsEnabled()
	{
		boolean returnValue = getShadowsEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setVisibilityMask_ev_uint32(long pNativeObject, long mask);
	/**
	 * 设置视口可见度的屏蔽
	 * @param mask 
	 */
	public void setVisibilityMask(long mask)
	{
		long maskParamValue = mask;
		setVisibilityMask_ev_uint32(this.nativeObject.pointer, maskParamValue);
	}
	native private long getVisibilityMask_void(long pNativeObject);
	/**
	 * 获得视口可见度的屏蔽
	 * @param  
	 */
	public long getVisibilityMask()
	{
		long returnValue = getVisibilityMask_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  void setRenderQueueInvocationSequenceName_EVString_callback(String sequenceName)
	{
		String sequenceNameParamValue = sequenceName;
		setRenderQueueInvocationSequenceName(sequenceNameParamValue);
	}

	native private void setRenderQueueInvocationSequenceName_EVString(long pNativeObject, String sequenceName);
	/**
	 * 设置渲染目标自定义EarthView::World::Graphic::CRenderQueueInvocationSequence的使用
	 * @param sequenceName EarthView::World::Graphic::CRenderQueueInvocationSequence的名字
	 */
	public void setRenderQueueInvocationSequenceName(String sequenceName)
	{
		String sequenceNameParamValue = sequenceName;
		setRenderQueueInvocationSequenceName_EVString(this.nativeObject.pointer, sequenceNameParamValue);
	}
	native private void setRenderQueueInvocationSequenceName_EVString_NoVirtual(long pNativeObject, String sequenceName);
	protected void setRenderQueueInvocationSequenceName_NoVirtual(String sequenceName)
	{
		String sequenceNameParamValue = sequenceName;
		setRenderQueueInvocationSequenceName_EVString_NoVirtual(this.nativeObject.pointer, sequenceNameParamValue);
	}

	protected  String getRenderQueueInvocationSequenceName_void_callback()
	{
		String returnValue = getRenderQueueInvocationSequenceName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getRenderQueueInvocationSequenceName_void(long pNativeObject);
	/**
	 * 获得渲染目标的渲染队列调用次序的名字
	 * @param  
	 */
	public String getRenderQueueInvocationSequenceName()
	{
		String returnValue = getRenderQueueInvocationSequenceName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getRenderQueueInvocationSequenceName_void_NoVirtual(long pNativeObject);
	protected String getRenderQueueInvocationSequenceName_NoVirtual()
	{
		String returnValue = getRenderQueueInvocationSequenceName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long _getRenderQueueInvocationSequence_void(long pNativeObject);
	/**
	 * 获得调用序列，如果使用标准的则会返回NULL
	 * @param  
	 */
	public com.earthview.world.graphic.RenderQueueInvocationSequence _getRenderQueueInvocationSequence()
	{
		long returnValue = _getRenderQueueInvocationSequence_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderQueueInvocationSequence __returnValue = new com.earthview.world.graphic.RenderQueueInvocationSequence(CreatedWhenConstruct.CWC_NotToCreate, "CRenderQueueInvocationSequence");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderQueueInvocationSequence)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderQueueInvocationSequence");
		}
		return __returnValue;
	}
	native private void pointOrientedToScreen_CVector2_ev_int32_CVector2(long pNativeObject, long v, int orientationMode, long outv);
	/**
	 * 点坐标到屏幕坐标的转换
	 * @param v 
	 * @param orientationMode 
	 * @param outv 
	 */
	public void pointOrientedToScreen(com.earthview.world.spatial.math.Vector2 v, int orientationMode, com.earthview.world.spatial.math.Vector2 outv)
	{
		long vParamValue = v.nativeObject.pointer;
		int orientationModeParamValue = orientationMode;
		long outvParamValue = outv.nativeObject.pointer;
		pointOrientedToScreen_CVector2_ev_int32_CVector2(this.nativeObject.pointer, vParamValue, orientationModeParamValue, outvParamValue);
	}
	native private void pointOrientedToScreen_Real_Real_ev_int32_Real_Real(long pNativeObject, double orientedX, double orientedY, int orientationMode, long screenX, long screenY);
	/**
	 * 点坐标到屏幕坐标的转换
	 * @param orientedX 
	 * @param orientedY 
	 * @param orientationMode 
	 * @param screenX 
	 * @param screenY 
	 */
	public void pointOrientedToScreen(double orientedX, double orientedY, int orientationMode, DoublePointer screenX, DoublePointer screenY)
	{
		double orientedXParamValue = orientedX;
		double orientedYParamValue = orientedY;
		int orientationModeParamValue = orientationMode;
		long screenXParamValue = screenX.nativeObject.pointer;
		long screenYParamValue = screenY.nativeObject.pointer;
		pointOrientedToScreen_Real_Real_ev_int32_Real_Real(this.nativeObject.pointer, orientedXParamValue, orientedYParamValue, orientationModeParamValue, screenXParamValue, screenYParamValue);
	}
	native private void addListener_CViewportListener(long pNativeObject, long ref_l);
	//// Add a listener to this camera
	public void addListener(com.earthview.world.graphic.Viewport.ViewportListener ref_l)
	{
		long ref_lParamValue = (ref_l == null ? 0L : ref_l.nativeObject.pointer);
		addListener_CViewportListener(this.nativeObject.pointer, ref_lParamValue);
	}
	native private void removeListener_CViewportListener(long pNativeObject, long l);
	//// Remove a listener to this camera
	public void removeListener(com.earthview.world.graphic.Viewport.ViewportListener l)
	{
		long lParamValue = (l == null ? 0L : l.nativeObject.pointer);
		removeListener_CViewportListener(this.nativeObject.pointer, lParamValue);
	}
	public Viewport(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Viewport(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_setRenderQueueInvocationSequenceName_EVString(long pNativeObject, String method);
	native protected void register_getRenderQueueInvocationSequenceName_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setRenderQueueInvocationSequenceName_EVString(this.nativeObject.pointer, "setRenderQueueInvocationSequenceName_EVString_callback");
			this.register_getRenderQueueInvocationSequenceName_void(this.nativeObject.pointer, "getRenderQueueInvocationSequenceName_void_callback");
		}
	}
	
	public static Viewport fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Viewport obj = null;
 		if(baseObj instanceof Viewport)
		{
			obj = (Viewport)baseObj;
		} else {
			obj = new Viewport(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CViewport");
			obj.increaseCast();
		}

		return obj;
	}
}
