package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 屏幕点类
 */
public class ScreenPoint extends com.earthview.world.geometry3d.ScreenGeometry {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CScreenPoint", new ScreenPointClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::JCScreenPointProxy", new ScreenPointClassFactory());
	}

	/**
	 * 构造函数
	 * @param scenemanager 场景管理器
	 * @param type 点类型
	 * @param estimatedCount 预设点个数
	 */
	public ScreenPoint(com.earthview.world.graphic.SceneManager ref_scenemanager, com.earthview.world.geometry3d.ScreenPointType type, long estimatedCount) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_scenemanagerPtr = new BasePointer(ref_scenemanager);
		list.add("ref_scenemanager", ref_scenemanagerPtr.get());
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		BasePointer estimatedCountPtr = new BasePointer(estimatedCount);
		list.add("estimatedCount", estimatedCountPtr.get());
		Create("JCScreenPointProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.ScreenPoint".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param scenemanager 场景管理器
	 * @param type 点类型
	 * @param estimatedCount 预设点个数
	 * @param texture 纹理图片流
	 */
	public ScreenPoint(com.earthview.world.graphic.SceneManager ref_scenemanager, com.earthview.world.geometry3d.ScreenPointType type, long estimatedCount, com.earthview.world.core.DataStreamPtr texture) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_scenemanagerPtr = new BasePointer(ref_scenemanager);
		list.add("ref_scenemanager", ref_scenemanagerPtr.get());
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		BasePointer estimatedCountPtr = new BasePointer(estimatedCount);
		list.add("estimatedCount", estimatedCountPtr.get());
		BasePointer texturePtr = new BasePointer(texture);
		list.add("texture", texturePtr.get());
		Create("JCScreenPointProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.ScreenPoint".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void begin_CColourValue_Real(long pNativeObject, long color, double size);
	/**
	 * 开始一类相同的点,渲染时仍可以追加点,begin和end之间只能执行appenPoint
	 * @param color 颜色
	 * @param size 宽度(直径，单位和采用的坐标类型一致)
	 */
	public void begin(com.earthview.world.graphic.ColourValue color, double size)
	{
		long colorParamValue = color.nativeObject.pointer;
		double sizeParamValue = size;
		begin_CColourValue_Real(this.nativeObject.pointer, colorParamValue, sizeParamValue);
	}
	native private void begin_CColourValue(long pNativeObject, long color);
	public void begin(com.earthview.world.graphic.ColourValue color)
	{
		long colorParamValue = color.nativeObject.pointer;
		begin_CColourValue(this.nativeObject.pointer, colorParamValue);
	}
	native private void begin_void(long pNativeObject);
	public void begin()
	{
		begin_void(this.nativeObject.pointer);
	}
	native private void appendPoint_CVector2_CColourValue_Real(long pNativeObject, long position, long color, double size);
	/**
	 * 追加点
	 * @param position 屏幕坐标
	 * @param color 颜色
	 * @param size 宽度(直径，单位和采用的坐标类型一致)
	 */
	public void appendPoint(com.earthview.world.spatial.math.Vector2 position, com.earthview.world.graphic.ColourValue color, double size)
	{
		long positionParamValue = position.nativeObject.pointer;
		long colorParamValue = color.nativeObject.pointer;
		double sizeParamValue = size;
		appendPoint_CVector2_CColourValue_Real(this.nativeObject.pointer, positionParamValue, colorParamValue, sizeParamValue);
	}
	native private void appendPoint_CVector2_CColourValue(long pNativeObject, long position, long color);
	public void appendPoint(com.earthview.world.spatial.math.Vector2 position, com.earthview.world.graphic.ColourValue color)
	{
		long positionParamValue = position.nativeObject.pointer;
		long colorParamValue = color.nativeObject.pointer;
		appendPoint_CVector2_CColourValue(this.nativeObject.pointer, positionParamValue, colorParamValue);
	}
	native private void appendPoint_CVector2(long pNativeObject, long position);
	public void appendPoint(com.earthview.world.spatial.math.Vector2 position)
	{
		long positionParamValue = position.nativeObject.pointer;
		appendPoint_CVector2(this.nativeObject.pointer, positionParamValue);
	}
	native private void end_void(long pNativeObject);
	/**
	 * 结束一类相同点
	 */
	public void end()
	{
		end_void(this.nativeObject.pointer);
	}
	public ScreenPoint(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScreenPoint(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 挂接
	 * @param  
	 */
	public void render()
	{
		super.render_NoVirtual();
	}
	/**
	 * 反挂接
	 * @param  
	 */
	public void derender()
	{
		super.derender_NoVirtual();
	}
	/**
	 * 设置是否可见
	 * @param visible 是否可见
	 */
	public void setVisible(boolean visible)
	{
		super.setVisible_NoVirtual(visible);
	}
	/**
	 * 是否可见
	 * @param  
	 */
	public boolean getVisible()
	{
		return super.getVisible_NoVirtual();
	}
	/**
	 * 设置渲染队列组信息
	 * @param queueID 队列ID号
	 */
	public void setRenderQueueGroup(short queueID)
	{
		super.setRenderQueueGroup_NoVirtual(queueID);
	}
	/**
	 * 设置渲染队列组信息和队列优先级
	 * @param queueID 队列ID号
	 * @param priority 优先级
	 */
	public void setRenderQueueGroupAndPriority(short queueID, int priority)
	{
		super.setRenderQueueGroupAndPriority_NoVirtual(queueID, priority);
	}
	/**
	 * 获取该实体的渲染队列组
	 * @param  
	 */
	public short getRenderQueueGroup()
	{
		return super.getRenderQueueGroup_NoVirtual();
	}
	/**
	 * 获取材质				
	 * @param  
	 */
	public com.earthview.world.graphic.MaterialPtr getMaterial()
	{
		return super.getMaterial_NoVirtual();
	}
	/**
	 * 闪烁
	 */
	public void flash(com.earthview.world.graphic.ColourValue color, long hightLight_ms, long normally_ms, long flashCount)
	{
		super.flash_NoVirtual(color, hightLight_ms, normally_ms, flashCount);
	}
	/**
	 * 结束闪烁
	 */
	public void endFlash()
	{
		super.endFlash_NoVirtual();
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
	
	public static ScreenPoint fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScreenPoint obj = null;
 		if(baseObj instanceof ScreenPoint)
		{
			obj = (ScreenPoint)baseObj;
		} else {
			obj = new ScreenPoint(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScreenPoint");
			obj.increaseCast();
		}

		return obj;
	}
}
