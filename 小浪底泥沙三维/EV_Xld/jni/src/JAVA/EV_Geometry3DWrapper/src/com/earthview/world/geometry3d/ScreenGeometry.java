package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 屏幕矢量基类
 */
public class ScreenGeometry extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CScreenGeometry", new ScreenGeometryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::JCScreenGeometryProxy", new ScreenGeometryClassFactory());
	}

	/**
	 * 构造函数,必须在场景打开后调用,默认情况下只在主视口渲染,坐标值参考为主视口
	 * @param scenemanager 场景管理器
	 */
	public ScreenGeometry(com.earthview.world.graphic.SceneManager ref_scenemanager) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_scenemanagerPtr = new BasePointer(ref_scenemanager);
		list.add("ref_scenemanager", ref_scenemanagerPtr.get());
		Create("JCScreenGeometryProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.ScreenGeometry".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setCoordinateType_ScreenGeometryCoordinateType(long pNativeObject, int type);
	/**
	 * 设置坐标类型,必须在begin之前设置才有效
	 * @param type 类型
	 */
	public void setCoordinateType(com.earthview.world.geometry3d.ScreenGeometryCoordinateType type)
	{
		int typeParamValue = type.getValue();
		setCoordinateType_ScreenGeometryCoordinateType(this.nativeObject.pointer, typeParamValue);
	}
	native private int getCoordinateType_void(long pNativeObject);
	/**
	 * 获取坐标类型
	 */
	public com.earthview.world.geometry3d.ScreenGeometryCoordinateType getCoordinateType()
	{
		int returnValue = getCoordinateType_void(this.nativeObject.pointer);
		return com.earthview.world.geometry3d.ScreenGeometryCoordinateType.toEnum(returnValue);
	}
	native private void addChildViewport_CViewport(long pNativeObject, long ref_viewport);
	/**
	 * 增加渲染屏幕矢量的子视口
	 * @param type 类型
	 */
	public void addChildViewport(com.earthview.world.graphic.Viewport ref_viewport)
	{
		long ref_viewportParamValue = (ref_viewport == null ? 0L : ref_viewport.nativeObject.pointer);
		addChildViewport_CViewport(this.nativeObject.pointer, ref_viewportParamValue);
	}
	native private boolean hasChildViewport_CViewport(long pNativeObject, long ref_viewport);
	/**
	 * 相机是否渲染此屏幕矢量
	 * @param type 类型
	 */
	public boolean hasChildViewport(com.earthview.world.graphic.Viewport ref_viewport)
	{
		long ref_viewportParamValue = (ref_viewport == null ? 0L : ref_viewport.nativeObject.pointer);
		boolean returnValue = hasChildViewport_CViewport(this.nativeObject.pointer, ref_viewportParamValue);
		return returnValue;
	}
	native private boolean removeChildViewport_CViewport(long pNativeObject, long ref_viewport);
	/**
	 * 移除渲染屏幕矢量的子视口相机
	 * @param type 类型
	 */
	public boolean removeChildViewport(com.earthview.world.graphic.Viewport ref_viewport)
	{
		long ref_viewportParamValue = (ref_viewport == null ? 0L : ref_viewport.nativeObject.pointer);
		boolean returnValue = removeChildViewport_CViewport(this.nativeObject.pointer, ref_viewportParamValue);
		return returnValue;
	}
	native private boolean setVisibleInGlobeViewport_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置主视口是否渲染此对象
	 * @param type 类型
	 */
	public boolean setVisibleInGlobeViewport(boolean value)
	{
		boolean valueParamValue = value;
		boolean returnValue = setVisibleInGlobeViewport_ev_bool(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	protected  void render_void_callback()
	{
		render();
	}

	native private void render_void(long pNativeObject);
	/**
	 * 挂接
	 * @param  
	 */
	public void render()
	{
		render_void(this.nativeObject.pointer);
	}
	native private void render_void_NoVirtual(long pNativeObject);
	protected void render_NoVirtual()
	{
		render_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void derender_void_callback()
	{
		derender();
	}

	native private void derender_void(long pNativeObject);
	/**
	 * 反挂接
	 * @param  
	 */
	public void derender()
	{
		derender_void(this.nativeObject.pointer);
	}
	native private void derender_void_NoVirtual(long pNativeObject);
	protected void derender_NoVirtual()
	{
		derender_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setVisible_ev_bool_callback(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible(visibleParamValue);
	}

	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 设置是否可见
	 * @param visible 是否可见
	 */
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private void setVisible_ev_bool_NoVirtual(long pNativeObject, boolean visible);
	protected void setVisible_NoVirtual(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool_NoVirtual(this.nativeObject.pointer, visibleParamValue);
	}

	protected  boolean getVisible_void_callback()
	{
		boolean returnValue = getVisible();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getVisible_void(long pNativeObject);
	/**
	 * 是否可见
	 * @param  
	 */
	public boolean getVisible()
	{
		boolean returnValue = getVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getVisible_void_NoVirtual(long pNativeObject);
	protected boolean getVisible_NoVirtual()
	{
		boolean returnValue = getVisible_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setRenderQueueGroup_ev_uint8_callback(short queueID)
	{
		short queueIDParamValue = queueID;
		setRenderQueueGroup(queueIDParamValue);
	}

	native private void setRenderQueueGroup_ev_uint8(long pNativeObject, short queueID);
	/**
	 * 设置渲染队列组信息
	 * @param queueID 队列ID号
	 */
	public void setRenderQueueGroup(short queueID)
	{
		short queueIDParamValue = queueID;
		setRenderQueueGroup_ev_uint8(this.nativeObject.pointer, queueIDParamValue);
	}
	native private void setRenderQueueGroup_ev_uint8_NoVirtual(long pNativeObject, short queueID);
	protected void setRenderQueueGroup_NoVirtual(short queueID)
	{
		short queueIDParamValue = queueID;
		setRenderQueueGroup_ev_uint8_NoVirtual(this.nativeObject.pointer, queueIDParamValue);
	}

	protected  void setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback(short queueID, int priority)
	{
		short queueIDParamValue = queueID;
		int priorityParamValue = priority;
		setRenderQueueGroupAndPriority(queueIDParamValue, priorityParamValue);
	}

	native private void setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(long pNativeObject, short queueID, int priority);
	/**
	 * 设置渲染队列组信息和队列优先级
	 * @param queueID 队列ID号
	 * @param priority 优先级
	 */
	public void setRenderQueueGroupAndPriority(short queueID, int priority)
	{
		short queueIDParamValue = queueID;
		int priorityParamValue = priority;
		setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(this.nativeObject.pointer, queueIDParamValue, priorityParamValue);
	}
	native private void setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_NoVirtual(long pNativeObject, short queueID, int priority);
	protected void setRenderQueueGroupAndPriority_NoVirtual(short queueID, int priority)
	{
		short queueIDParamValue = queueID;
		int priorityParamValue = priority;
		setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_NoVirtual(this.nativeObject.pointer, queueIDParamValue, priorityParamValue);
	}

	protected  short getRenderQueueGroup_void_callback()
	{
		short returnValue = getRenderQueueGroup();
		short __returnValue = returnValue;
		return __returnValue;
	}

	native private short getRenderQueueGroup_void(long pNativeObject);
	/**
	 * 获取该实体的渲染队列组
	 * @param  
	 */
	public short getRenderQueueGroup()
	{
		short returnValue = getRenderQueueGroup_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private short getRenderQueueGroup_void_NoVirtual(long pNativeObject);
	protected short getRenderQueueGroup_NoVirtual()
	{
		short returnValue = getRenderQueueGroup_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getMaterial_void_callback()
	{
		com.earthview.world.graphic.MaterialPtr returnValue = getMaterial();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getMaterial_void(long pNativeObject);
	/**
	 * 获取材质				
	 * @param  
	 */
	public com.earthview.world.graphic.MaterialPtr getMaterial()
	{
		long returnValue = getMaterial_void(this.nativeObject.pointer);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}
	native private long getMaterial_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.MaterialPtr getMaterial_NoVirtual()
	{
		long returnValue = getMaterial_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMaterialPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}

	protected  void flash_CColourValue_ev_uint32_ev_uint32_ev_uint32_callback(long color, long hightLight_ms, long normally_ms, long flashCount)
	{
		com.earthview.world.graphic.ColourValue colorParamValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		colorParamValue.setDelegate(true);
		colorParamValue.setInstancePointer(new InstancePointer(color));
		IClassFactory colorParamValueClassFactory = GlobalClassFactoryMap.get(colorParamValue.getCppInstanceTypeName());
		if (colorParamValueClassFactory != null)
		{
			colorParamValue.setDelegate(true);
			colorParamValue = (com.earthview.world.graphic.ColourValue)colorParamValueClassFactory.create();
			colorParamValue.setDelegate(true);
			colorParamValue.setInstancePointer(new InstancePointer(color));
		}
		long hightLight_msParamValue = hightLight_ms;
		long normally_msParamValue = normally_ms;
		long flashCountParamValue = flashCount;
		flash(colorParamValue, hightLight_msParamValue, normally_msParamValue, flashCountParamValue);
	}

	native private void flash_CColourValue_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, long color, long hightLight_ms, long normally_ms, long flashCount);
	/**
	 * 闪烁
	 */
	public void flash(com.earthview.world.graphic.ColourValue color, long hightLight_ms, long normally_ms, long flashCount)
	{
		long colorParamValue = color.nativeObject.pointer;
		long hightLight_msParamValue = hightLight_ms;
		long normally_msParamValue = normally_ms;
		long flashCountParamValue = flashCount;
		flash_CColourValue_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, colorParamValue, hightLight_msParamValue, normally_msParamValue, flashCountParamValue);
	}
	native private void flash_CColourValue_ev_uint32_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long color, long hightLight_ms, long normally_ms, long flashCount);
	protected void flash_NoVirtual(com.earthview.world.graphic.ColourValue color, long hightLight_ms, long normally_ms, long flashCount)
	{
		long colorParamValue = color.nativeObject.pointer;
		long hightLight_msParamValue = hightLight_ms;
		long normally_msParamValue = normally_ms;
		long flashCountParamValue = flashCount;
		flash_CColourValue_ev_uint32_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, colorParamValue, hightLight_msParamValue, normally_msParamValue, flashCountParamValue);
	}

	protected  void endFlash_void_callback()
	{
		endFlash();
	}

	native private void endFlash_void(long pNativeObject);
	/**
	 * 结束闪烁
	 */
	public void endFlash()
	{
		endFlash_void(this.nativeObject.pointer);
	}
	native private void endFlash_void_NoVirtual(long pNativeObject);
	protected void endFlash_NoVirtual()
	{
		endFlash_void_NoVirtual(this.nativeObject.pointer);
	}

	public ScreenGeometry(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScreenGeometry(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_render_void(long pNativeObject, String method);
	native protected void register_derender_void(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_getVisible_void(long pNativeObject, String method);
	native protected void register_setRenderQueueGroup_ev_uint8(long pNativeObject, String method);
	native protected void register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(long pNativeObject, String method);
	native protected void register_getRenderQueueGroup_void(long pNativeObject, String method);
	native protected void register_getMaterial_void(long pNativeObject, String method);
	native protected void register_flash_CColourValue_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_endFlash_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_render_void(this.nativeObject.pointer, "render_void_callback");
			this.register_derender_void(this.nativeObject.pointer, "derender_void_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_getVisible_void(this.nativeObject.pointer, "getVisible_void_callback");
			this.register_setRenderQueueGroup_ev_uint8(this.nativeObject.pointer, "setRenderQueueGroup_ev_uint8_callback");
			this.register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16(this.nativeObject.pointer, "setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback");
			this.register_getRenderQueueGroup_void(this.nativeObject.pointer, "getRenderQueueGroup_void_callback");
			this.register_getMaterial_void(this.nativeObject.pointer, "getMaterial_void_callback");
			this.register_flash_CColourValue_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, "flash_CColourValue_ev_uint32_ev_uint32_ev_uint32_callback");
			this.register_endFlash_void(this.nativeObject.pointer, "endFlash_void_callback");
		}
	}
	
	public static ScreenGeometry fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScreenGeometry obj = null;
 		if(baseObj instanceof ScreenGeometry)
		{
			obj = (ScreenGeometry)baseObj;
		} else {
			obj = new ScreenGeometry(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScreenGeometry");
			obj.increaseCast();
		}

		return obj;
	}
}
