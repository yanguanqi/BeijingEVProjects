package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 地图捕捉器
 */
public class MapSnapper extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CMapSnapper", new MapSnapperClassFactory());
	}

	/**
	 * 构造函数
	 * @param editor 编辑器
	 */
	public MapSnapper(com.earthview.world.spatial2d.controls.MapControl ctrl) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ctrlPtr = new BasePointer(ctrl);
		list.add("ctrl", ctrlPtr.get());
		Create("CMapSnapper", list);
	}

	native private void open_void(long pNativeObject);
	/**
	 * 打开捕捉器
	 * @param  
	 */
	public void open()
	{
		open_void(this.nativeObject.pointer);
	}
	native private boolean isOpen_void(long pNativeObject);
	/**
	 * 检测捕捉器是否已经打开
	 * @param  
	 * @return 打开返回true,反之返回false
	 */
	public boolean isOpen()
	{
		boolean returnValue = isOpen_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void close_void(long pNativeObject);
	/**
	 * 关闭捕捉器
	 * @param  
	 */
	public void close()
	{
		close_void(this.nativeObject.pointer);
	}
	native private void addLayer_ILayer(long pNativeObject, long ref_layer);
	/**
	 * 添加捕捉的图层
	 * @param layer 参与捕捉的图层
	 */
	public void addLayer(com.earthview.world.spatial.atlas.Ilayer ref_layer)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		addLayer_ILayer(this.nativeObject.pointer, ref_layerParamValue);
	}
	native private void removeLayer_ev_uint32(long pNativeObject, long index);
	/**
	 * 移除不参与捕捉的图层索引
	 * @param index 图层的索引
	 */
	public void removeLayer(long index)
	{
		long indexParamValue = index;
		removeLayer_ev_uint32(this.nativeObject.pointer, indexParamValue);
	}
	native private void insertLayer_ev_uint32_ILayer(long pNativeObject, long index, long layer);
	/**
	 * 插入需要参与捕捉的图层
	 * @param index 插入的索引位置
	 * @param layer 图层指针
	 */
	public void insertLayer(long index, com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long indexParamValue = index;
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		insertLayer_ev_uint32_ILayer(this.nativeObject.pointer, indexParamValue, layerParamValue);
	}
	native private long getSnapLayerCount_void(long pNativeObject);
	/**
	 * 获取参与捕捉的图层个数
	 * @param  
	 * @return 图层个数
	 */
	public long getSnapLayerCount()
	{
		long returnValue = getSnapLayerCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLayerSnapAttributes_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取获取指定索引处的图层的捕捉属性
	 * @param  
	 * @return 图层的捕捉属性
	 */
	public com.earthview.world.spatial2d.controls.SnapAttributes getLayerSnapAttributes(long index)
	{
		long indexParamValue = index;
		long returnValue = getLayerSnapAttributes_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.SnapAttributes __returnValue = new com.earthview.world.spatial2d.controls.SnapAttributes(CreatedWhenConstruct.CWC_NotToCreate, "CSnapAttributes");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.SnapAttributes)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSnapAttributes");
		}
		return __returnValue;
	}
	native private long getSketchSnapAttributes_void(long pNativeObject);
	/**
	 * 获取描绘几何的捕捉属性
	 * @param  
	 * @return 捕捉属性
	 */
	public com.earthview.world.spatial2d.controls.SnapAttributes getSketchSnapAttributes()
	{
		long returnValue = getSketchSnapAttributes_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.SnapAttributes __returnValue = new com.earthview.world.spatial2d.controls.SnapAttributes(CreatedWhenConstruct.CWC_NotToCreate, "CSnapAttributes");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.SnapAttributes)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSnapAttributes");
		}
		return __returnValue;
	}
	native private boolean snap_ev_real64_ev_real64(long pNativeObject, double dx, double dy);
	/**
	 * 执行捕捉
	 * @param x X坐标(单位:像素)
	 * @param y Y坐标(单位:像素)
	 * @return 如果有捕捉结果则返回true,反之则返回false
	 */
	public boolean snap(double dx, double dy)
	{
		double dxParamValue = dx;
		double dyParamValue = dy;
		boolean returnValue = snap_ev_real64_ev_real64(this.nativeObject.pointer, dxParamValue, dyParamValue);
		return returnValue;
	}
	native private long getSnappedResult_void(long pNativeObject);
	/**
	 * 获取捕捉的结果
	 * @param  
	 * @return 捕捉结果指针
	 */
	public com.earthview.world.spatial2d.controls.SnappedResult getSnappedResult()
	{
		long returnValue = getSnappedResult_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.SnappedResult __returnValue = new com.earthview.world.spatial2d.controls.SnappedResult(CreatedWhenConstruct.CWC_NotToCreate, "CSnappedResult");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.SnappedResult)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSnappedResult");
		}
		return __returnValue;
	}
	native private long getSnapSymbol_void(long pNativeObject);
	/**
	 * 获取捕捉标志的风格
	 * @param  
	 * @return 风格
	 */
	public com.earthview.world.spatial.display.Isymbol getSnapSymbol()
	{
		long returnValue = getSnapSymbol_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	native private void setSnapSymbol_ISymbol(long pNativeObject, long symbol);
	/**
	 * 设置捕捉标志的风格
	 * @param symbol 风格
	 */
	public void setSnapSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setSnapSymbol_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	public MapSnapper(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MapSnapper(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MapSnapper fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MapSnapper obj = null;
 		if(baseObj instanceof MapSnapper)
		{
			obj = (MapSnapper)baseObj;
		} else {
			obj = new MapSnapper(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMapSnapper");
			obj.increaseCast();
		}

		return obj;
	}
}
