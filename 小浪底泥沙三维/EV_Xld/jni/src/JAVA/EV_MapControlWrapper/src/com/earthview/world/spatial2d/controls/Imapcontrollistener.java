package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 地图控件的事件监听
 */
public class Imapcontrollistener extends com.earthview.world.spatial.atlas.Imaplistener {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::IMapControlListener", new ImapcontrollistenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JIMapControlListenerProxy", new ImapcontrollistenerClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public Imapcontrollistener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JIMapControlListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.controls.Imapcontrollistener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void onBeforeAddLayer_ILayer(long pNativeObject, long layer);
	/**
	 * 在添加图层之前的事件
	 * @param layer 待添加的图层
	 */
	public void onBeforeAddLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		onBeforeAddLayer_ILayer(this.nativeObject.pointer, layerParamValue);
	}
	native private void onBeforeAddLayer_ILayer_NoVirtual(long pNativeObject, long layer);
	protected void onBeforeAddLayer_NoVirtual(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		onBeforeAddLayer_ILayer_NoVirtual(this.nativeObject.pointer, layerParamValue);
	}

	native private void onAfterAddLayer_ILayer(long pNativeObject, long layer);
	/**
	 * 在添加图层之后的事件
	 * @param layer 己添加的图层
	 */
	public void onAfterAddLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		onAfterAddLayer_ILayer(this.nativeObject.pointer, layerParamValue);
	}
	native private void onAfterAddLayer_ILayer_NoVirtual(long pNativeObject, long layer);
	protected void onAfterAddLayer_NoVirtual(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		onAfterAddLayer_ILayer_NoVirtual(this.nativeObject.pointer, layerParamValue);
	}

	native private void onBeforeRemoveLayer_ILayer(long pNativeObject, long layer);
	/**
	 * 在移除图层之前的事件
	 * @param layer 待移除的图层
	 */
	public void onBeforeRemoveLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		onBeforeRemoveLayer_ILayer(this.nativeObject.pointer, layerParamValue);
	}
	native private void onBeforeRemoveLayer_ILayer_NoVirtual(long pNativeObject, long layer);
	protected void onBeforeRemoveLayer_NoVirtual(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		onBeforeRemoveLayer_ILayer_NoVirtual(this.nativeObject.pointer, layerParamValue);
	}

	native private void onAfterRemoveLayer_ILayer(long pNativeObject, long layer);
	/**
	 * 在移除图层之后的事件
	 * @param layer 己移除的图层
	 */
	public void onAfterRemoveLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		onAfterRemoveLayer_ILayer(this.nativeObject.pointer, layerParamValue);
	}
	native private void onAfterRemoveLayer_ILayer_NoVirtual(long pNativeObject, long layer);
	protected void onAfterRemoveLayer_NoVirtual(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		onAfterRemoveLayer_ILayer_NoVirtual(this.nativeObject.pointer, layerParamValue);
	}

	native private void onBeforeMoveLayer_ev_int32_ev_int32(long pNativeObject, int oldIndex, int newIndex);
	/**
	 * 在移动图层之前的事件
	 * @param oldIndex 原来的索引
	 * @param newIndex 新的索引
	 */
	public void onBeforeMoveLayer(int oldIndex, int newIndex)
	{
		int oldIndexParamValue = oldIndex;
		int newIndexParamValue = newIndex;
		onBeforeMoveLayer_ev_int32_ev_int32(this.nativeObject.pointer, oldIndexParamValue, newIndexParamValue);
	}
	native private void onBeforeMoveLayer_ev_int32_ev_int32_NoVirtual(long pNativeObject, int oldIndex, int newIndex);
	protected void onBeforeMoveLayer_NoVirtual(int oldIndex, int newIndex)
	{
		int oldIndexParamValue = oldIndex;
		int newIndexParamValue = newIndex;
		onBeforeMoveLayer_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, oldIndexParamValue, newIndexParamValue);
	}

	native private void onAfterMoveLayer_ev_int32_ev_int32(long pNativeObject, int oldIndex, int newIndex);
	/**
	 * 在移动图层之后的事件
	 * @param oldIndex 原来的索引
	 * @param newIndex 新的索引
	 */
	public void onAfterMoveLayer(int oldIndex, int newIndex)
	{
		int oldIndexParamValue = oldIndex;
		int newIndexParamValue = newIndex;
		onAfterMoveLayer_ev_int32_ev_int32(this.nativeObject.pointer, oldIndexParamValue, newIndexParamValue);
	}
	native private void onAfterMoveLayer_ev_int32_ev_int32_NoVirtual(long pNativeObject, int oldIndex, int newIndex);
	protected void onAfterMoveLayer_NoVirtual(int oldIndex, int newIndex)
	{
		int oldIndexParamValue = oldIndex;
		int newIndexParamValue = newIndex;
		onAfterMoveLayer_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, oldIndexParamValue, newIndexParamValue);
	}

	native private void onMapSelectionChanged_void(long pNativeObject);
	/**
	 * 地图的选中集合发生变化的事件
	 * @param  
	 */
	public void onMapSelectionChanged()
	{
		onMapSelectionChanged_void(this.nativeObject.pointer);
	}
	native private void onMapSelectionChanged_void_NoVirtual(long pNativeObject);
	protected void onMapSelectionChanged_NoVirtual()
	{
		onMapSelectionChanged_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType(long pNativeObject, long display, long layer, int type);
	/**
	 * 地图绘制事件
	 * @param display 显示参数
	 * @param layer 正在绘制的图层
	 * @param type 正在绘制的类型
	 */
	public void onMapDraw(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.atlas.Ilayer layer, com.earthview.world.spatial.atlas.EVVectorLayerRendererType type)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		int typeParamValue = type.getValue();
		onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType(this.nativeObject.pointer, displayParamValue, layerParamValue, typeParamValue);
	}
	native private void onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType_NoVirtual(long pNativeObject, long display, long layer, int type);
	protected void onMapDraw_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.atlas.Ilayer layer, com.earthview.world.spatial.atlas.EVVectorLayerRendererType type)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		int typeParamValue = type.getValue();
		onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType_NoVirtual(this.nativeObject.pointer, displayParamValue, layerParamValue, typeParamValue);
	}

	protected  boolean onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback(int button, int shift, int x, int y, double geoX, double geoY)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		boolean returnValue = onMouseDown(buttonParamValue, shiftParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(long pNativeObject, int button, int shift, int x, int y, double geoX, double geoY);
	/**
	 * 鼠标按下事件触发											
	 * @param button 键的标识(1代表左键，2代表右键，4代表中键)
	 * @param shift shift键是否同时被按下
	 * @param x 光标位置x
	 * @param y 光标位置y
	 * @param geoX 地理位置x
	 * @param geoY 地理位置y
	 * @return true,表示事件处理完毕，不再需要MapControl处理。false，表示事件处理后，还需要MapControl处理
	 */
	public boolean onMouseDown(int button, int shift, int x, int y, double geoX, double geoY)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		boolean returnValue = onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue);
		return returnValue;
	}
	native private boolean onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(long pNativeObject, int button, int shift, int x, int y, double geoX, double geoY);
	protected boolean onMouseDown_NoVirtual(int button, int shift, int x, int y, double geoX, double geoY)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		boolean returnValue = onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue);
		return returnValue;
	}

	protected  boolean onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback(int button, int shift, int x, int y, double geoX, double geoY)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		boolean returnValue = onMouseUp(buttonParamValue, shiftParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(long pNativeObject, int button, int shift, int x, int y, double geoX, double geoY);
	/**
	 * 鼠标弹起事件触发
	 * @param button 键的标识(1代表左键，2代表右键，4代表中键)
	 * @param shift shift键是否同时被按下
	 * @param x 光标位置x
	 * @param y 光标位置y
	 * @param geoX 地理位置x
	 * @param geoY 地理位置y
	 * @return true,表示事件处理完毕，不再需要MapControl处理。false，表示事件处理后，还需要MapControl处理
	 */
	public boolean onMouseUp(int button, int shift, int x, int y, double geoX, double geoY)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		boolean returnValue = onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue);
		return returnValue;
	}
	native private boolean onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(long pNativeObject, int button, int shift, int x, int y, double geoX, double geoY);
	protected boolean onMouseUp_NoVirtual(int button, int shift, int x, int y, double geoX, double geoY)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		boolean returnValue = onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue);
		return returnValue;
	}

	protected  boolean onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback(int button, int shift, int x, int y, double geoX, double geoY)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		boolean returnValue = onMouseMove(buttonParamValue, shiftParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(long pNativeObject, int button, int shift, int x, int y, double geoX, double geoY);
	/**
	 * 鼠标移动事件触发
	 * @param button 键的标识(1代表左键，2代表右键，4代表中键)
	 * @param shift shift键是否同时被按下
	 * @param x 光标位置x
	 * @param y 光标位置y
	 * @param geoX 地理位置x
	 * @param geoY 地理位置y
	 * @return true,表示事件处理完毕，不再需要MapControl处理。false，表示事件处理后，还需要MapControl处理
	 */
	public boolean onMouseMove(int button, int shift, int x, int y, double geoX, double geoY)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		boolean returnValue = onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue);
		return returnValue;
	}
	native private boolean onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(long pNativeObject, int button, int shift, int x, int y, double geoX, double geoY);
	protected boolean onMouseMove_NoVirtual(int button, int shift, int x, int y, double geoX, double geoY)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		boolean returnValue = onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue);
		return returnValue;
	}

	protected  boolean onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback(int button, int shift, int x, int y, double geoX, double geoY)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		boolean returnValue = onDoubleClick(buttonParamValue, shiftParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(long pNativeObject, int button, int shift, int x, int y, double geoX, double geoY);
	/**
	 * 鼠标双击事件触发
	 * @param button 键的标识(1代表左键，2代表右键，4代表中键)
	 * @param shift shift键是否同时被按下
	 * @param x 光标位置x
	 * @param y 光标位置y
	 * @param geoX 地理位置x
	 * @param geoY 地理位置y
	 * @return true,表示事件处理完毕，不再需要MapControl处理。false，表示事件处理后，还需要MapControl处理
	 */
	public boolean onDoubleClick(int button, int shift, int x, int y, double geoX, double geoY)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		boolean returnValue = onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue);
		return returnValue;
	}
	native private boolean onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(long pNativeObject, int button, int shift, int x, int y, double geoX, double geoY);
	protected boolean onDoubleClick_NoVirtual(int button, int shift, int x, int y, double geoX, double geoY)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		boolean returnValue = onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue);
		return returnValue;
	}

	protected  boolean onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_callback(int delta, int x, int y, double geoX, double geoY, int flag)
	{
		int deltaParamValue = delta;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		int flagParamValue = flag;
		boolean returnValue = onMouseWheel(deltaParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue, flagParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32(long pNativeObject, int delta, int x, int y, double geoX, double geoY, int flag);
	/**
	 * 鼠标滚轮事件触发
	 * @param delta 滚轮转过的角度
	 * @param shift shift键是否同时被按下
	 * @param x 光标位置x
	 * @param y 光标位置y
	 * @param geoX 地理位置x
	 * @param geoY 地理位置y
	 * @return true,表示事件处理完毕，不再需要MapControl处理。false，表示事件处理后，还需要MapControl处理
	 */
	public boolean onMouseWheel(int delta, int x, int y, double geoX, double geoY, int flag)
	{
		int deltaParamValue = delta;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		int flagParamValue = flag;
		boolean returnValue = onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32(this.nativeObject.pointer, deltaParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue, flagParamValue);
		return returnValue;
	}
	native private boolean onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_NoVirtual(long pNativeObject, int delta, int x, int y, double geoX, double geoY, int flag);
	protected boolean onMouseWheel_NoVirtual(int delta, int x, int y, double geoX, double geoY, int flag)
	{
		int deltaParamValue = delta;
		int xParamValue = x;
		int yParamValue = y;
		double geoXParamValue = geoX;
		double geoYParamValue = geoY;
		int flagParamValue = flag;
		boolean returnValue = onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_NoVirtual(this.nativeObject.pointer, deltaParamValue, xParamValue, yParamValue, geoXParamValue, geoYParamValue, flagParamValue);
		return returnValue;
	}

	protected  boolean onKeyDown_ev_int32_ev_int32_callback(int keyCode, int shift)
	{
		int keyCodeParamValue = keyCode;
		int shiftParamValue = shift;
		boolean returnValue = onKeyDown(keyCodeParamValue, shiftParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onKeyDown_ev_int32_ev_int32(long pNativeObject, int keyCode, int shift);
	/**
	 * 键盘按下事件触发
	 * @param key 按下的键
	 * @param shift shift键是否同时被按下
	 * @return true,表示事件处理完毕，不再需要MapControl处理。false，表示事件处理后，还需要MapControl处理
	 */
	public boolean onKeyDown(int keyCode, int shift)
	{
		int keyCodeParamValue = keyCode;
		int shiftParamValue = shift;
		boolean returnValue = onKeyDown_ev_int32_ev_int32(this.nativeObject.pointer, keyCodeParamValue, shiftParamValue);
		return returnValue;
	}
	native private boolean onKeyDown_ev_int32_ev_int32_NoVirtual(long pNativeObject, int keyCode, int shift);
	protected boolean onKeyDown_NoVirtual(int keyCode, int shift)
	{
		int keyCodeParamValue = keyCode;
		int shiftParamValue = shift;
		boolean returnValue = onKeyDown_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, keyCodeParamValue, shiftParamValue);
		return returnValue;
	}

	protected  boolean onKeyUp_ev_int32_ev_int32_callback(int keyCode, int shift)
	{
		int keyCodeParamValue = keyCode;
		int shiftParamValue = shift;
		boolean returnValue = onKeyUp(keyCodeParamValue, shiftParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onKeyUp_ev_int32_ev_int32(long pNativeObject, int keyCode, int shift);
	/**
	 * 键盘弹起事件触发
	 * @param key 按下的键
	 * @param shift shift键是否同时被按下
	 * @return true,表示事件处理完毕，不再需要MapControl处理。false，表示事件处理后，还需要MapControl处理
	 */
	public boolean onKeyUp(int keyCode, int shift)
	{
		int keyCodeParamValue = keyCode;
		int shiftParamValue = shift;
		boolean returnValue = onKeyUp_ev_int32_ev_int32(this.nativeObject.pointer, keyCodeParamValue, shiftParamValue);
		return returnValue;
	}
	native private boolean onKeyUp_ev_int32_ev_int32_NoVirtual(long pNativeObject, int keyCode, int shift);
	protected boolean onKeyUp_NoVirtual(int keyCode, int shift)
	{
		int keyCodeParamValue = keyCode;
		int shiftParamValue = shift;
		boolean returnValue = onKeyUp_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, keyCodeParamValue, shiftParamValue);
		return returnValue;
	}

	protected  boolean onResize_ev_int32_ev_int32_callback(int width, int height)
	{
		int widthParamValue = width;
		int heightParamValue = height;
		boolean returnValue = onResize(widthParamValue, heightParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onResize_ev_int32_ev_int32(long pNativeObject, int width, int height);
	/**
	 * 窗口大小发生变化
	 * @param width 窗口宽度
	 * @param height 窗口高度
	 */
	public boolean onResize(int width, int height)
	{
		int widthParamValue = width;
		int heightParamValue = height;
		boolean returnValue = onResize_ev_int32_ev_int32(this.nativeObject.pointer, widthParamValue, heightParamValue);
		return returnValue;
	}
	native private boolean onResize_ev_int32_ev_int32_NoVirtual(long pNativeObject, int width, int height);
	protected boolean onResize_NoVirtual(int width, int height)
	{
		int widthParamValue = width;
		int heightParamValue = height;
		boolean returnValue = onResize_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, widthParamValue, heightParamValue);
		return returnValue;
	}

	protected  void onBeforeRefresh_ISpatialDisplay_IEnvelope_callback(long display, long viewportEnvelope)
	{
		com.earthview.world.spatial.display.Ispatialdisplay displayParamValue = (display == 0L ? null : new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate));
		if(displayParamValue != null)
		{
		displayParamValue.setDelegate(true);
		displayParamValue.setInstancePointer(new InstancePointer(display));
		IClassFactory displayParamValueClassFactory = GlobalClassFactoryMap.get(displayParamValue.getCppInstanceTypeName());
		if (displayParamValueClassFactory != null)
		{
			displayParamValue.setDelegate(true);
			displayParamValue = (com.earthview.world.spatial.display.Ispatialdisplay)displayParamValueClassFactory.create();
			displayParamValue.setDelegate(true);
			displayParamValue.setInstancePointer(new InstancePointer(display));
		}
		}
		com.earthview.world.spatial.geometry.Ienvelope viewportEnvelopeParamValue = (viewportEnvelope == 0L ? null : new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate));
		if(viewportEnvelopeParamValue != null)
		{
		viewportEnvelopeParamValue.setDelegate(true);
		viewportEnvelopeParamValue.setInstancePointer(new InstancePointer(viewportEnvelope));
		IClassFactory viewportEnvelopeParamValueClassFactory = GlobalClassFactoryMap.get(viewportEnvelopeParamValue.getCppInstanceTypeName());
		if (viewportEnvelopeParamValueClassFactory != null)
		{
			viewportEnvelopeParamValue.setDelegate(true);
			viewportEnvelopeParamValue = (com.earthview.world.spatial.geometry.Ienvelope)viewportEnvelopeParamValueClassFactory.create();
			viewportEnvelopeParamValue.setDelegate(true);
			viewportEnvelopeParamValue.setInstancePointer(new InstancePointer(viewportEnvelope));
		}
		}
		onBeforeRefresh(displayParamValue, viewportEnvelopeParamValue);
	}

	native private void onBeforeRefresh_ISpatialDisplay_IEnvelope(long pNativeObject, long display, long viewportEnvelope);
	/**
	 * 地图刷新之前的事件
	 * @param display 显示参数
	 * @param viewportEnvelope 新的视口范围
	 */
	public void onBeforeRefresh(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.geometry.Ienvelope viewportEnvelope)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		long viewportEnvelopeParamValue = (viewportEnvelope == null ? 0L : viewportEnvelope.nativeObject.pointer);
		onBeforeRefresh_ISpatialDisplay_IEnvelope(this.nativeObject.pointer, displayParamValue, viewportEnvelopeParamValue);
	}
	native private void onBeforeRefresh_ISpatialDisplay_IEnvelope_NoVirtual(long pNativeObject, long display, long viewportEnvelope);
	protected void onBeforeRefresh_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.geometry.Ienvelope viewportEnvelope)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		long viewportEnvelopeParamValue = (viewportEnvelope == null ? 0L : viewportEnvelope.nativeObject.pointer);
		onBeforeRefresh_ISpatialDisplay_IEnvelope_NoVirtual(this.nativeObject.pointer, displayParamValue, viewportEnvelopeParamValue);
	}

	protected  void onAfterRefresh_ISpatialDisplay_IEnvelope_callback(long display, long viewportEnvelope)
	{
		com.earthview.world.spatial.display.Ispatialdisplay displayParamValue = (display == 0L ? null : new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate));
		if(displayParamValue != null)
		{
		displayParamValue.setDelegate(true);
		displayParamValue.setInstancePointer(new InstancePointer(display));
		IClassFactory displayParamValueClassFactory = GlobalClassFactoryMap.get(displayParamValue.getCppInstanceTypeName());
		if (displayParamValueClassFactory != null)
		{
			displayParamValue.setDelegate(true);
			displayParamValue = (com.earthview.world.spatial.display.Ispatialdisplay)displayParamValueClassFactory.create();
			displayParamValue.setDelegate(true);
			displayParamValue.setInstancePointer(new InstancePointer(display));
		}
		}
		com.earthview.world.spatial.geometry.Ienvelope viewportEnvelopeParamValue = (viewportEnvelope == 0L ? null : new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate));
		if(viewportEnvelopeParamValue != null)
		{
		viewportEnvelopeParamValue.setDelegate(true);
		viewportEnvelopeParamValue.setInstancePointer(new InstancePointer(viewportEnvelope));
		IClassFactory viewportEnvelopeParamValueClassFactory = GlobalClassFactoryMap.get(viewportEnvelopeParamValue.getCppInstanceTypeName());
		if (viewportEnvelopeParamValueClassFactory != null)
		{
			viewportEnvelopeParamValue.setDelegate(true);
			viewportEnvelopeParamValue = (com.earthview.world.spatial.geometry.Ienvelope)viewportEnvelopeParamValueClassFactory.create();
			viewportEnvelopeParamValue.setDelegate(true);
			viewportEnvelopeParamValue.setInstancePointer(new InstancePointer(viewportEnvelope));
		}
		}
		onAfterRefresh(displayParamValue, viewportEnvelopeParamValue);
	}

	native private void onAfterRefresh_ISpatialDisplay_IEnvelope(long pNativeObject, long display, long viewportEnvelope);
	/**
	 * 地图刷新之后的事件
	 * @param display 显示参数
	 * @param viewportEnvelope 新的视口范围
	 */
	public void onAfterRefresh(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.geometry.Ienvelope viewportEnvelope)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		long viewportEnvelopeParamValue = (viewportEnvelope == null ? 0L : viewportEnvelope.nativeObject.pointer);
		onAfterRefresh_ISpatialDisplay_IEnvelope(this.nativeObject.pointer, displayParamValue, viewportEnvelopeParamValue);
	}
	native private void onAfterRefresh_ISpatialDisplay_IEnvelope_NoVirtual(long pNativeObject, long display, long viewportEnvelope);
	protected void onAfterRefresh_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.geometry.Ienvelope viewportEnvelope)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		long viewportEnvelopeParamValue = (viewportEnvelope == null ? 0L : viewportEnvelope.nativeObject.pointer);
		onAfterRefresh_ISpatialDisplay_IEnvelope_NoVirtual(this.nativeObject.pointer, displayParamValue, viewportEnvelopeParamValue);
	}

	protected  void onBeforeDrawTrackingLayer_ISpatialDisplay_callback(long display)
	{
		com.earthview.world.spatial.display.Ispatialdisplay displayParamValue = (display == 0L ? null : new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate));
		if(displayParamValue != null)
		{
		displayParamValue.setDelegate(true);
		displayParamValue.setInstancePointer(new InstancePointer(display));
		IClassFactory displayParamValueClassFactory = GlobalClassFactoryMap.get(displayParamValue.getCppInstanceTypeName());
		if (displayParamValueClassFactory != null)
		{
			displayParamValue.setDelegate(true);
			displayParamValue = (com.earthview.world.spatial.display.Ispatialdisplay)displayParamValueClassFactory.create();
			displayParamValue.setDelegate(true);
			displayParamValue.setInstancePointer(new InstancePointer(display));
		}
		}
		onBeforeDrawTrackingLayer(displayParamValue);
	}

	native private void onBeforeDrawTrackingLayer_ISpatialDisplay(long pNativeObject, long display);
	/**
	 * 绘制跟踪层之前的事件
	 * @param display 显示参数
	 */
	public void onBeforeDrawTrackingLayer(com.earthview.world.spatial.display.Ispatialdisplay display)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		onBeforeDrawTrackingLayer_ISpatialDisplay(this.nativeObject.pointer, displayParamValue);
	}
	native private void onBeforeDrawTrackingLayer_ISpatialDisplay_NoVirtual(long pNativeObject, long display);
	protected void onBeforeDrawTrackingLayer_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay display)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		onBeforeDrawTrackingLayer_ISpatialDisplay_NoVirtual(this.nativeObject.pointer, displayParamValue);
	}

	protected  void onAfterDrawTrackingLayer_ISpatialDisplay_callback(long display)
	{
		com.earthview.world.spatial.display.Ispatialdisplay displayParamValue = (display == 0L ? null : new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate));
		if(displayParamValue != null)
		{
		displayParamValue.setDelegate(true);
		displayParamValue.setInstancePointer(new InstancePointer(display));
		IClassFactory displayParamValueClassFactory = GlobalClassFactoryMap.get(displayParamValue.getCppInstanceTypeName());
		if (displayParamValueClassFactory != null)
		{
			displayParamValue.setDelegate(true);
			displayParamValue = (com.earthview.world.spatial.display.Ispatialdisplay)displayParamValueClassFactory.create();
			displayParamValue.setDelegate(true);
			displayParamValue.setInstancePointer(new InstancePointer(display));
		}
		}
		onAfterDrawTrackingLayer(displayParamValue);
	}

	native private void onAfterDrawTrackingLayer_ISpatialDisplay(long pNativeObject, long display);
	/**
	 * 绘制跟踪层之后的事件
	 * @param display 显示参数
	 */
	public void onAfterDrawTrackingLayer(com.earthview.world.spatial.display.Ispatialdisplay display)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		onAfterDrawTrackingLayer_ISpatialDisplay(this.nativeObject.pointer, displayParamValue);
	}
	native private void onAfterDrawTrackingLayer_ISpatialDisplay_NoVirtual(long pNativeObject, long display);
	protected void onAfterDrawTrackingLayer_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay display)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		onAfterDrawTrackingLayer_ISpatialDisplay_NoVirtual(this.nativeObject.pointer, displayParamValue);
	}

	protected  void onBeforeDrawInterestTrackingItems_ISpatialDisplay_callback(long display)
	{
		com.earthview.world.spatial.display.Ispatialdisplay displayParamValue = (display == 0L ? null : new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate));
		if(displayParamValue != null)
		{
		displayParamValue.setDelegate(true);
		displayParamValue.setInstancePointer(new InstancePointer(display));
		IClassFactory displayParamValueClassFactory = GlobalClassFactoryMap.get(displayParamValue.getCppInstanceTypeName());
		if (displayParamValueClassFactory != null)
		{
			displayParamValue.setDelegate(true);
			displayParamValue = (com.earthview.world.spatial.display.Ispatialdisplay)displayParamValueClassFactory.create();
			displayParamValue.setDelegate(true);
			displayParamValue.setInstancePointer(new InstancePointer(display));
		}
		}
		onBeforeDrawInterestTrackingItems(displayParamValue);
	}

	native private void onBeforeDrawInterestTrackingItems_ISpatialDisplay(long pNativeObject, long display);
	/**
	 * 绘制interest跟踪项之前的事件
	 * @param display 显示参数
	 */
	public void onBeforeDrawInterestTrackingItems(com.earthview.world.spatial.display.Ispatialdisplay display)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		onBeforeDrawInterestTrackingItems_ISpatialDisplay(this.nativeObject.pointer, displayParamValue);
	}
	native private void onBeforeDrawInterestTrackingItems_ISpatialDisplay_NoVirtual(long pNativeObject, long display);
	protected void onBeforeDrawInterestTrackingItems_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay display)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		onBeforeDrawInterestTrackingItems_ISpatialDisplay_NoVirtual(this.nativeObject.pointer, displayParamValue);
	}

	protected  void onAfterDrawInterestTrackingItems_ISpatialDisplay_callback(long display)
	{
		com.earthview.world.spatial.display.Ispatialdisplay displayParamValue = (display == 0L ? null : new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate));
		if(displayParamValue != null)
		{
		displayParamValue.setDelegate(true);
		displayParamValue.setInstancePointer(new InstancePointer(display));
		IClassFactory displayParamValueClassFactory = GlobalClassFactoryMap.get(displayParamValue.getCppInstanceTypeName());
		if (displayParamValueClassFactory != null)
		{
			displayParamValue.setDelegate(true);
			displayParamValue = (com.earthview.world.spatial.display.Ispatialdisplay)displayParamValueClassFactory.create();
			displayParamValue.setDelegate(true);
			displayParamValue.setInstancePointer(new InstancePointer(display));
		}
		}
		onAfterDrawInterestTrackingItems(displayParamValue);
	}

	native private void onAfterDrawInterestTrackingItems_ISpatialDisplay(long pNativeObject, long display);
	/**
	 * 绘制interest跟踪项之后的事件
	 * @param display 显示参数
	 */
	public void onAfterDrawInterestTrackingItems(com.earthview.world.spatial.display.Ispatialdisplay display)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		onAfterDrawInterestTrackingItems_ISpatialDisplay(this.nativeObject.pointer, displayParamValue);
	}
	native private void onAfterDrawInterestTrackingItems_ISpatialDisplay_NoVirtual(long pNativeObject, long display);
	protected void onAfterDrawInterestTrackingItems_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay display)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		onAfterDrawInterestTrackingItems_ISpatialDisplay_NoVirtual(this.nativeObject.pointer, displayParamValue);
	}

	protected  void onAnalysisEnd_ICommand_callback(long command)
	{
		com.earthview.world.spatial.systemui.Icommand commandParamValue = (command == 0L ? null : new com.earthview.world.spatial.systemui.Icommand(CreatedWhenConstruct.CWC_NotToCreate));
		if(commandParamValue != null)
		{
		commandParamValue.setDelegate(true);
		commandParamValue.setInstancePointer(new InstancePointer(command));
		IClassFactory commandParamValueClassFactory = GlobalClassFactoryMap.get(commandParamValue.getCppInstanceTypeName());
		if (commandParamValueClassFactory != null)
		{
			commandParamValue.setDelegate(true);
			commandParamValue = (com.earthview.world.spatial.systemui.Icommand)commandParamValueClassFactory.create();
			commandParamValue.setDelegate(true);
			commandParamValue.setInstancePointer(new InstancePointer(command));
		}
		}
		onAnalysisEnd(commandParamValue);
	}

	native private void onAnalysisEnd_ICommand(long pNativeObject, long command);
	/**
	 * 二维分析完成后的事件
	 * @param display 显示参数
	 */
	public void onAnalysisEnd(com.earthview.world.spatial.systemui.Icommand command)
	{
		long commandParamValue = (command == null ? 0L : command.nativeObject.pointer);
		onAnalysisEnd_ICommand(this.nativeObject.pointer, commandParamValue);
	}
	native private void onAnalysisEnd_ICommand_NoVirtual(long pNativeObject, long command);
	protected void onAnalysisEnd_NoVirtual(com.earthview.world.spatial.systemui.Icommand command)
	{
		long commandParamValue = (command == null ? 0L : command.nativeObject.pointer);
		onAnalysisEnd_ICommand_NoVirtual(this.nativeObject.pointer, commandParamValue);
	}

	public Imapcontrollistener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Imapcontrollistener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32(long pNativeObject, String method);
	native protected void register_onKeyDown_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onKeyUp_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onResize_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onBeforeRefresh_ISpatialDisplay_IEnvelope(long pNativeObject, String method);
	native protected void register_onAfterRefresh_ISpatialDisplay_IEnvelope(long pNativeObject, String method);
	native protected void register_onBeforeDrawTrackingLayer_ISpatialDisplay(long pNativeObject, String method);
	native protected void register_onAfterDrawTrackingLayer_ISpatialDisplay(long pNativeObject, String method);
	native protected void register_onBeforeDrawInterestTrackingItems_ISpatialDisplay(long pNativeObject, String method);
	native protected void register_onAfterDrawInterestTrackingItems_ISpatialDisplay(long pNativeObject, String method);
	native protected void register_onAnalysisEnd_ICommand(long pNativeObject, String method);
	native protected void register_onBeforeAddLayer_ILayer(long pNativeObject, String method);
	native protected void register_onAfterAddLayer_ILayer(long pNativeObject, String method);
	native protected void register_onBeforeRemoveLayer_ILayer(long pNativeObject, String method);
	native protected void register_onAfterRemoveLayer_ILayer(long pNativeObject, String method);
	native protected void register_onBeforeMoveLayer_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onAfterMoveLayer_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onMapSelectionChanged_void(long pNativeObject, String method);
	native protected void register_onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(this.nativeObject.pointer, "onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback");
			this.register_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(this.nativeObject.pointer, "onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback");
			this.register_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(this.nativeObject.pointer, "onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback");
			this.register_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64(this.nativeObject.pointer, "onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_callback");
			this.register_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32(this.nativeObject.pointer, "onMouseWheel_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_callback");
			this.register_onKeyDown_ev_int32_ev_int32(this.nativeObject.pointer, "onKeyDown_ev_int32_ev_int32_callback");
			this.register_onKeyUp_ev_int32_ev_int32(this.nativeObject.pointer, "onKeyUp_ev_int32_ev_int32_callback");
			this.register_onResize_ev_int32_ev_int32(this.nativeObject.pointer, "onResize_ev_int32_ev_int32_callback");
			this.register_onBeforeRefresh_ISpatialDisplay_IEnvelope(this.nativeObject.pointer, "onBeforeRefresh_ISpatialDisplay_IEnvelope_callback");
			this.register_onAfterRefresh_ISpatialDisplay_IEnvelope(this.nativeObject.pointer, "onAfterRefresh_ISpatialDisplay_IEnvelope_callback");
			this.register_onBeforeDrawTrackingLayer_ISpatialDisplay(this.nativeObject.pointer, "onBeforeDrawTrackingLayer_ISpatialDisplay_callback");
			this.register_onAfterDrawTrackingLayer_ISpatialDisplay(this.nativeObject.pointer, "onAfterDrawTrackingLayer_ISpatialDisplay_callback");
			this.register_onBeforeDrawInterestTrackingItems_ISpatialDisplay(this.nativeObject.pointer, "onBeforeDrawInterestTrackingItems_ISpatialDisplay_callback");
			this.register_onAfterDrawInterestTrackingItems_ISpatialDisplay(this.nativeObject.pointer, "onAfterDrawInterestTrackingItems_ISpatialDisplay_callback");
			this.register_onAnalysisEnd_ICommand(this.nativeObject.pointer, "onAnalysisEnd_ICommand_callback");
			this.register_onBeforeAddLayer_ILayer(this.nativeObject.pointer, "onBeforeAddLayer_ILayer_callback");
			this.register_onAfterAddLayer_ILayer(this.nativeObject.pointer, "onAfterAddLayer_ILayer_callback");
			this.register_onBeforeRemoveLayer_ILayer(this.nativeObject.pointer, "onBeforeRemoveLayer_ILayer_callback");
			this.register_onAfterRemoveLayer_ILayer(this.nativeObject.pointer, "onAfterRemoveLayer_ILayer_callback");
			this.register_onBeforeMoveLayer_ev_int32_ev_int32(this.nativeObject.pointer, "onBeforeMoveLayer_ev_int32_ev_int32_callback");
			this.register_onAfterMoveLayer_ev_int32_ev_int32(this.nativeObject.pointer, "onAfterMoveLayer_ev_int32_ev_int32_callback");
			this.register_onMapSelectionChanged_void(this.nativeObject.pointer, "onMapSelectionChanged_void_callback");
			this.register_onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType(this.nativeObject.pointer, "onMapDraw_ISpatialDisplay_ILayer_EVVectorLayerRendererType_callback");
		}
	}
	
	public static Imapcontrollistener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Imapcontrollistener obj = null;
 		if(baseObj instanceof Imapcontrollistener)
		{
			obj = (Imapcontrollistener)baseObj;
		} else {
			obj = new Imapcontrollistener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IMapControlListener");
			obj.increaseCast();
		}

		return obj;
	}
}
