package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 鹰眼对象
 */
public class MapEagleEye extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CMapEagleEye", new MapEagleEyeClassFactory());
	}

	/**
	 * 构造函数
	 * @param pxy 地图控件代理
	 */
	public MapEagleEye(com.earthview.world.spatial2d.controls.MapControlAgent ref_pxy) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pxyPtr = new BasePointer(ref_pxy);
		list.add("ref_pxy", ref_pxyPtr.get());
		Create("CMapEagleEye", list);
	}

	native private void setRectSymbol_CLineSymbol(long pNativeObject, long symbol);
	/**
	 * 设置显示范围框风格
	 * @param symbol 风格
	 */
	public void setRectSymbol(com.earthview.world.spatial.display.LineSymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setRectSymbol_CLineSymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private long getRectSymbol_void(long pNativeObject);
	/**
	 * 获取显示范围框风格
	 * @param pxy 地图控件代理
	 */
	public com.earthview.world.spatial.display.LineSymbol getRectSymbol()
	{
		long returnValue = getRectSymbol_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.LineSymbol __returnValue = new com.earthview.world.spatial.display.LineSymbol(CreatedWhenConstruct.CWC_NotToCreate, "CLineSymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.LineSymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLineSymbol");
		}
		return __returnValue;
	}
	native private void setIdleLayers_ev_int32_ev_int32(long pNativeObject, long index, int count);
	/**
	 * 设置不参与绘制的图层索引列表
	 * @param index 图层索引数据
	 * @param count 索引数量
	 */
	public void setIdleLayers(IntegerPointer index, int count)
	{
		long indexParamValue = (index == null ? 0L : index.nativeObject.pointer);
		int countParamValue = count;
		setIdleLayers_ev_int32_ev_int32(this.nativeObject.pointer, indexParamValue, countParamValue);
	}
	native private boolean onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * 鼠标按下事件触发
	 * @param button 键的标识(1代表左键，2代表右键，4代表中键)
	 * @param shift shift键是否同时被按下
	 * @param x 光标位置x
	 * @param y 光标位置y
	 */
	public boolean onMouseDown(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		return returnValue;
	}
	native private boolean onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * 鼠标移动事件触发
	 * @param button 键的标识(1代表左键，2代表右键，4代表中键)
	 * @param shift shift键是否同时被按下
	 * @param x 光标位置x
	 * @param y 光标位置y
	 */
	public boolean onMouseMove(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		return returnValue;
	}
	native private boolean onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * 鼠标弹起事件触发
	 * @param button 键的标识(1代表左键，2代表右键，4代表中键)
	 * @param shift shift键是否同时被释放
	 * @param x 光标位置x
	 * @param y 光标位置y
	 */
	public boolean onMouseUp(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		return returnValue;
	}
	native private boolean onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int delta, int x, int y, int flag);
	/**
	 * 鼠标滚轮滚动事件触发
	 * @param delta 滚动的幅度
	 * @param x 光标位置x
	 * @param y 光标位置y
	 * @param flag 标识位
	 */
	public boolean onMouseWheel(int delta, int x, int y, int flag)
	{
		int deltaParamValue = delta;
		int xParamValue = x;
		int yParamValue = y;
		int flagParamValue = flag;
		boolean returnValue = onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, deltaParamValue, xParamValue, yParamValue, flagParamValue);
		return returnValue;
	}
	native private boolean onResize_ev_int32_ev_int32(long pNativeObject, int width, int height);
	/**
	 * 窗体大小发生变化
	 * @param  
	 */
	public boolean onResize(int width, int height)
	{
		int widthParamValue = width;
		int heightParamValue = height;
		boolean returnValue = onResize_ev_int32_ev_int32(this.nativeObject.pointer, widthParamValue, heightParamValue);
		return returnValue;
	}
	public MapEagleEye(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MapEagleEye(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MapEagleEye fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MapEagleEye obj = null;
 		if(baseObj instanceof MapEagleEye)
		{
			obj = (MapEagleEye)baseObj;
		} else {
			obj = new MapEagleEye(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMapEagleEye");
			obj.increaseCast();
		}

		return obj;
	}
}
