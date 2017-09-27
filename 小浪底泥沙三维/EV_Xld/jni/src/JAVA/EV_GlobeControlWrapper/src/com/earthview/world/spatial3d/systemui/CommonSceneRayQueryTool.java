package com.earthview.world.spatial3d.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 通用场景射线查询工具类
 */
public class CommonSceneRayQueryTool extends com.earthview.world.spatial.systemui.Itool {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool", new CommonSceneRayQueryToolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::SystemUI::JCCommonSceneRayQueryToolProxy", new CommonSceneRayQueryToolClassFactory());
	}

	/**
	 * 构造函数
	 * @param ref_ctrl 抽象三维场景控件
	 */
	public CommonSceneRayQueryTool(com.earthview.world.spatial3d.controls.CommonSceneControl ref_ctrl) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_ctrlPtr = new BasePointer(ref_ctrl);
		list.add("ref_ctrl", ref_ctrlPtr.get());
		Create("JCCommonSceneRayQueryToolProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.systemui.CommonSceneRayQueryTool".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void onClicked_void(long pNativeObject);
	/**
	 * 单击处理
	 * @param  
	 */
	public void onClicked()
	{
		onClicked_void(this.nativeObject.pointer);
	}
	native private void onClicked_void_NoVirtual(long pNativeObject);
	protected void onClicked_NoVirtual()
	{
		onClicked_void_NoVirtual(this.nativeObject.pointer);
	}

	native private boolean getChecked_void(long pNativeObject);
	/**
	 * 查看抽象三维场景控件是否使用当前工具类
	 * @param  
	 * @return 是返回true,否返回false
	 */
	public boolean getChecked()
	{
		boolean returnValue = getChecked_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getChecked_void_NoVirtual(long pNativeObject);
	protected boolean getChecked_NoVirtual()
	{
		boolean returnValue = getChecked_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean getEnabled_void(long pNativeObject);
	/**
	 * 查看抽象三维场景控件是否已设置好场景
	 * @param  
	 * @return 有返回true,没有返回false
	 */
	public boolean getEnabled()
	{
		boolean returnValue = getEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getEnabled_void_NoVirtual(long pNativeObject);
	protected boolean getEnabled_NoVirtual()
	{
		boolean returnValue = getEnabled_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setSortByDistance_ev_bool(long pNativeObject, boolean sort);
	/**
	 * 设置是否按照到相机的距离排序
	 * @param sort 是否排序
	 */
	public void setSortByDistance(boolean sort)
	{
		boolean sortParamValue = sort;
		setSortByDistance_ev_bool(this.nativeObject.pointer, sortParamValue);
	}
	native private void setSortByDistance_ev_bool_ev_uint16(long pNativeObject, boolean sort, int maxresults);
	/**
	 * 设置是否按照到相机的距离排序和结果集大小
	 * @param sort 是否排序
	 * @param maxresults 结果集大小
	 */
	public void setSortByDistance(boolean sort, int maxresults)
	{
		boolean sortParamValue = sort;
		int maxresultsParamValue = maxresults;
		setSortByDistance_ev_bool_ev_uint16(this.nativeObject.pointer, sortParamValue, maxresultsParamValue);
	}
	native private boolean getSortByDistance_void(long pNativeObject);
	/**
	 * 查看是否按照到相机的距离排序
	 * @param  
	 * @return 是返回true,否返回false
	 */
	public boolean getSortByDistance()
	{
		boolean returnValue = getSortByDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMaxResults_void(long pNativeObject);
	/**
	 * 获得结果集大小
	 * @param  
	 * @return 结果集大小
	 */
	public int getMaxResults()
	{
		int returnValue = getMaxResults_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void init_void(long pNativeObject);
	/**
	 * 初始化
	 * @param  
	 */
	public void init()
	{
		init_void(this.nativeObject.pointer);
	}
	native private void resetResults_void(long pNativeObject);
	/**
	 * 重置结果集
	 * @param  
	 */
	public void resetResults()
	{
		resetResults_void(this.nativeObject.pointer);
	}
	native private long getType_void(long pNativeObject);
	/**
	 * 返回当前类类型标识
	 * @param  
	 * @return 类型标识
	 */
	public long getType()
	{
		long returnValue = getType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getType_void_NoVirtual(long pNativeObject);
	protected long getType_NoVirtual()
	{
		long returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * 鼠标按下处理
	 * @param button 鼠标按钮标识
	 * @param shift shift标识
	 * @param x 鼠标按下的点在x轴上的位置
	 * @param y 鼠标按下的点在y轴上的位置
	 * @return 处理完毕返回false,射线不与包围盒相交返回true
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
	native private boolean onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(long pNativeObject, int button, int shift, int x, int y);
	protected boolean onMouseDown_NoVirtual(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		return returnValue;
	}

	native private boolean onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * 鼠标双击处理
	 * @param button 鼠标按钮标识
	 * @param shift shift标识
	 * @param x 鼠标按下的点在x轴上的位置
	 * @param y 鼠标按下的点在y轴上的位置
	 * @return 处理完毕返回false,结束编辑返回true
	 */
	public boolean onDoubleClick(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		return returnValue;
	}
	native private boolean onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(long pNativeObject, int button, int shift, int x, int y);
	protected boolean onDoubleClick_NoVirtual(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		return returnValue;
	}

	native private boolean onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * 鼠标释放处理
	 * @param button 鼠标按钮标识
	 * @param shift shift标识
	 * @param x 鼠标按下的点在x轴上的位置
	 * @param y 鼠标按下的点在y轴上的位置
	 * @return 返回false
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
	native private boolean onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(long pNativeObject, int button, int shift, int x, int y);
	protected boolean onMouseUp_NoVirtual(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		return returnValue;
	}

	native private boolean onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * 鼠标移动处理
	 * @param button 鼠标按钮标识
	 * @param shift shift标识
	 * @param x 鼠标按下的点在x轴上的位置
	 * @param y 鼠标按下的点在y轴上的位置
	 * @return 返回false
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
	native private boolean onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(long pNativeObject, int button, int shift, int x, int y);
	protected boolean onMouseMove_NoVirtual(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		return returnValue;
	}

	native private boolean onKeyDown_ev_int32_ev_int32(long pNativeObject, int keyCode, int shift);
	/**
	 * 键盘按下处理
	 * @param keyCode 键位标识
	 * @param shift shift标识
	 * @return 按下的键是Delete键返回true,按下的键不是Delete键返回false
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

	public CommonSceneRayQueryTool(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CommonSceneRayQueryTool(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 启用Tool
	 * @param  
	 */
	public void activate()
	{
		super.activate_NoVirtual();
	}
	/**
	 * 不使用Tool
	 * @param  
	 */
	public void deactivate()
	{
		super.deactivate_NoVirtual();
	}
	/**
	 * 获取光标样式
	 * @param  
	 * @return 光标样式枚举
	 */
	public int getCursor()
	{
		return super.getCursor_NoVirtual();
	}
	/**
	 * 右键菜单事件触发
	 * @param x 光标位置x
	 * @param y 光标位置y
	 * @return 标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)
	 */
	public boolean onContextMenu(int x, int y)
	{
		return super.onContextMenu_NoVirtual(x, y);
	}
	/**
	 * 鼠标双击事件触发
	 * @param  
	 * @return 标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)
	 */
	public boolean onDoubleClick()
	{
		return super.onDoubleClick_NoVirtual();
	}
	/**
	 * 键盘弹起事件触发
	 * @param key 弹起的键
	 * @param shift shift键是否同时被释放
	 * @return 标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)
	 */
	public boolean onKeyUp(int keyCode, int shift)
	{
		return super.onKeyUp_NoVirtual(keyCode, shift);
	}
	/**
	 * 鼠标滚轮滚动事件触发
	 * @param delta 滚动的幅度
	 * @param x 光标位置x
	 * @param y 光标位置y
	 * @param flag 标识位
	 * @return 标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)
	 */
	public boolean onMouseWheel(int delta, int x, int y, int flag)
	{
		return super.onMouseWheel_NoVirtual(delta, x, y, flag);
	}
	/**
	 * 触屏接触事件触发
	 * @param touchEvent 事件参数
	 * @return 标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)
	 */
	public boolean onTouchDown(com.earthview.world.spatial.systemui.MotionEvent touchEvent)
	{
		return super.onTouchDown_NoVirtual(touchEvent);
	}
	/**
	 * 触屏接触事件触发
	 * @param touchEvent 事件参数
	 * @return 标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)
	 */
	public boolean onTouchUp(com.earthview.world.spatial.systemui.MotionEvent touchEvent)
	{
		return super.onTouchUp_NoVirtual(touchEvent);
	}
	/**
	 * 触屏接触事件触发
	 * @param touchEvent 事件参数
	 * @return 标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)
	 */
	public boolean onTouchMove(com.earthview.world.spatial.systemui.MotionEvent touchEvent)
	{
		return super.onTouchMove_NoVirtual(touchEvent);
	}
	/**
	 * 获取命令项所属的工具栏类型
	 * @param  
	 * @return 工具栏类型
	 */
	public long getToolBarType()
	{
		return super.getToolBarType_NoVirtual();
	}
	/**
	 * 获取命令项的名称
	 * @param  
	 * @return 名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 获取命令项所属类别
	 * @param  
	 * @return 类别
	 */
	public String getCategory()
	{
		return super.getCategory_NoVirtual();
	}
	/**
	 * 工具提示
	 * @param  
	 * @return 提示信息
	 */
	public String getToolTip()
	{
		return super.getToolTip_NoVirtual();
	}
	/**
	 * 命令项的显示图标
	 * @param  
	 * @return 图标
	 */
	public com.earthview.world.display.Ibitmap getIcon()
	{
		return super.getIcon_NoVirtual();
	}
	/**
	 * 判断命令项是否支持"按下"状态
	 * @param  
	 * @return 如果支持"按下"则返回true,反之则否
	 */
	public boolean isCheckable()
	{
		return super.isCheckable_NoVirtual();
	}
	/**
	 * 设置命令项是否按下
	 * @param checked 如果为true,则命令项被按下,反之则否
	 */
	public void setChecked(boolean checked)
	{
		super.setChecked_NoVirtual(checked);
	}
	/**
	 * 设置命令项是否可用
	 * @param enabled 如果为true,则设置该命令项可用,反之则否
	 */
	public void setEnabled(boolean enabled)
	{
		super.setEnabled_NoVirtual(enabled);
	}
	/**
	 * 使命令项与指定的控件相关联
	 * @param ctrl 待关联的控件
	 */
	public void create(com.earthview.world.spatial.atlas.Ispatialcontrol ref_ctrl)
	{
		super.create_NoVirtual(ref_ctrl);
	}
	/**
	 * 当有事件被触发时,会调用该方法
	 * @param e 事件
	 * @return 如果状态发生变化则返回true,反之则否
	 */
	public boolean update(com.earthview.world.core.Event e)
	{
		return super.update_NoVirtual(e);
	}
	
	native protected void register_activate_void(long pNativeObject, String method);
	native protected void register_deactivate_void(long pNativeObject, String method);
	native protected void register_getCursor_void(long pNativeObject, String method);
	native protected void register_onContextMenu_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onDoubleClick_void(long pNativeObject, String method);
	native protected void register_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onKeyDown_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onKeyUp_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onTouchDown_MotionEvent(long pNativeObject, String method);
	native protected void register_onTouchUp_MotionEvent(long pNativeObject, String method);
	native protected void register_onTouchMove_MotionEvent(long pNativeObject, String method);
	native protected void register_getToolBarType_void(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getCategory_void(long pNativeObject, String method);
	native protected void register_getToolTip_void(long pNativeObject, String method);
	native protected void register_getIcon_void(long pNativeObject, String method);
	native protected void register_isCheckable_void(long pNativeObject, String method);
	native protected void register_onClicked_void(long pNativeObject, String method);
	native protected void register_getChecked_void(long pNativeObject, String method);
	native protected void register_setChecked_ev_bool(long pNativeObject, String method);
	native protected void register_getEnabled_void(long pNativeObject, String method);
	native protected void register_setEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_create_ISpatialControl(long pNativeObject, String method);
	native protected void register_update_CEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_activate_void(this.nativeObject.pointer, "activate_void_callback");
			this.register_deactivate_void(this.nativeObject.pointer, "deactivate_void_callback");
			this.register_getCursor_void(this.nativeObject.pointer, "getCursor_void_callback");
			this.register_onContextMenu_ev_int32_ev_int32(this.nativeObject.pointer, "onContextMenu_ev_int32_ev_int32_callback");
			this.register_onDoubleClick_void(this.nativeObject.pointer, "onDoubleClick_void_callback");
			this.register_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_callback");
			this.register_onKeyDown_ev_int32_ev_int32(this.nativeObject.pointer, "onKeyDown_ev_int32_ev_int32_callback");
			this.register_onKeyUp_ev_int32_ev_int32(this.nativeObject.pointer, "onKeyUp_ev_int32_ev_int32_callback");
			this.register_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback");
			this.register_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback");
			this.register_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback");
			this.register_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32_callback");
			this.register_onTouchDown_MotionEvent(this.nativeObject.pointer, "onTouchDown_MotionEvent_callback");
			this.register_onTouchUp_MotionEvent(this.nativeObject.pointer, "onTouchUp_MotionEvent_callback");
			this.register_onTouchMove_MotionEvent(this.nativeObject.pointer, "onTouchMove_MotionEvent_callback");
			this.register_getToolBarType_void(this.nativeObject.pointer, "getToolBarType_void_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getCategory_void(this.nativeObject.pointer, "getCategory_void_callback");
			this.register_getToolTip_void(this.nativeObject.pointer, "getToolTip_void_callback");
			this.register_getIcon_void(this.nativeObject.pointer, "getIcon_void_callback");
			this.register_isCheckable_void(this.nativeObject.pointer, "isCheckable_void_callback");
			this.register_onClicked_void(this.nativeObject.pointer, "onClicked_void_callback");
			this.register_getChecked_void(this.nativeObject.pointer, "getChecked_void_callback");
			this.register_setChecked_ev_bool(this.nativeObject.pointer, "setChecked_ev_bool_callback");
			this.register_getEnabled_void(this.nativeObject.pointer, "getEnabled_void_callback");
			this.register_setEnabled_ev_bool(this.nativeObject.pointer, "setEnabled_ev_bool_callback");
			this.register_create_ISpatialControl(this.nativeObject.pointer, "create_ISpatialControl_callback");
			this.register_update_CEvent(this.nativeObject.pointer, "update_CEvent_callback");
		}
	}
	
	public static CommonSceneRayQueryTool fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CommonSceneRayQueryTool obj = null;
 		if(baseObj instanceof CommonSceneRayQueryTool)
		{
			obj = (CommonSceneRayQueryTool)baseObj;
		} else {
			obj = new CommonSceneRayQueryTool(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCommonSceneRayQueryTool");
			obj.increaseCast();
		}

		return obj;
	}
}
