package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 屏幕点类
 */
public class ScreenPolygon extends com.earthview.world.geometry3d.ScreenGeometry {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CScreenPolygon", new ScreenPolygonClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::JCScreenPolygonProxy", new ScreenPolygonClassFactory());
	}

	/**
	 * 构造函数
	 * @param scenemanager 场景管理器
	 * @param type 点类型
	 * @param estimatedCount 预设点个数
	 */
	public ScreenPolygon(com.earthview.world.graphic.SceneManager ref_scenemanager) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_scenemanagerPtr = new BasePointer(ref_scenemanager);
		list.add("ref_scenemanager", ref_scenemanagerPtr.get());
		Create("JCScreenPolygonProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.ScreenPolygon".equals(this.getClass().getName()))
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
	public ScreenPolygon(com.earthview.world.graphic.SceneManager ref_scenemanager, com.earthview.world.core.DataStreamPtr texture) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_scenemanagerPtr = new BasePointer(ref_scenemanager);
		list.add("ref_scenemanager", ref_scenemanagerPtr.get());
		BasePointer texturePtr = new BasePointer(texture);
		list.add("texture", texturePtr.get());
		Create("JCScreenPolygonProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.ScreenPolygon".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void begin_void(long pNativeObject);
	/**
	 * 开始追加多边形,render之后无效
	 */
	public void begin()
	{
		begin_void(this.nativeObject.pointer);
	}
	native private void appendPolygon_CPolygon_CColourValue(long pNativeObject, long polygon, long color);
	/**
	 * 追加多边形
	 * @param color 颜色
	 * @param polygon 无参考系的二维面,坐标用x和z，坐标类型和设置的屏幕坐标类型一致
	 */
	public void appendPolygon(com.earthview.world.spatial.geometry.Polygon polygon, com.earthview.world.graphic.ColourValue color)
	{
		long polygonParamValue = polygon.nativeObject.pointer;
		long colorParamValue = color.nativeObject.pointer;
		appendPolygon_CPolygon_CColourValue(this.nativeObject.pointer, polygonParamValue, colorParamValue);
	}
	native private void appendPolygon_CPolygon(long pNativeObject, long polygon);
	public void appendPolygon(com.earthview.world.spatial.geometry.Polygon polygon)
	{
		long polygonParamValue = polygon.nativeObject.pointer;
		appendPolygon_CPolygon(this.nativeObject.pointer, polygonParamValue);
	}
	native private void end_void(long pNativeObject);
	/**
	 * 结束追加多边形,开始进行多边形分割，创建buffer
	 */
	public void end()
	{
		end_void(this.nativeObject.pointer);
	}
	public ScreenPolygon(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScreenPolygon(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static ScreenPolygon fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScreenPolygon obj = null;
 		if(baseObj instanceof ScreenPolygon)
		{
			obj = (ScreenPolygon)baseObj;
		} else {
			obj = new ScreenPolygon(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScreenPolygon");
			obj.increaseCast();
		}

		return obj;
	}
}
