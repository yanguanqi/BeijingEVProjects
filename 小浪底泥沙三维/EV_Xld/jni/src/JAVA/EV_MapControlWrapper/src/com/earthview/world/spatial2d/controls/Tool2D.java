package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Tool2D extends com.earthview.world.spatial.systemui.Itool {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CTool2D", new Tool2DClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCTool2DProxy", new Tool2DClassFactory());
	}

	native private long getToolBarType_void(long pNativeObject);
	/**
	 * 获取工具栏类型
	 * @param  
	 * @return 工具栏类型
	 */
	public long getToolBarType()
	{
		long returnValue = getToolBarType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getToolBarType_void_NoVirtual(long pNativeObject);
	protected long getToolBarType_NoVirtual()
	{
		long returnValue = getToolBarType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getType_void(long pNativeObject);
	/**
	 * 获取工具类型
	 * @param  
	 * @return 工具类型
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

	native private String getName_void(long pNativeObject);
	/**
	 * 获取工具名称
	 * @param  
	 * @return 工具名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getCategory_void(long pNativeObject);
	/**
	 * 获取工具类别
	 * @param  
	 * @return 工具类别名称
	 */
	public String getCategory()
	{
		String returnValue = getCategory_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getCategory_void_NoVirtual(long pNativeObject);
	protected String getCategory_NoVirtual()
	{
		String returnValue = getCategory_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getToolTip_void(long pNativeObject);
	/**
	 * 获取工具提示
	 * @param  
	 * @return 工具提示
	 */
	public String getToolTip()
	{
		String returnValue = getToolTip_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getToolTip_void_NoVirtual(long pNativeObject);
	protected String getToolTip_NoVirtual()
	{
		String returnValue = getToolTip_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getIcon_void(long pNativeObject);
	/**
	 * 获取图标
	 * @param  
	 * @return 命令的图标
	 */
	public com.earthview.world.display.Ibitmap getIcon()
	{
		long returnValue = getIcon_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ibitmap __returnValue = new com.earthview.world.display.Ibitmap(CreatedWhenConstruct.CWC_NotToCreate, "IBitmap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ibitmap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IBitmap");
		}
		return __returnValue;
	}
	native private long getIcon_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.display.Ibitmap getIcon_NoVirtual()
	{
		long returnValue = getIcon_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ibitmap __returnValue = new com.earthview.world.display.Ibitmap(CreatedWhenConstruct.CWC_NotToCreate, "IBitmap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ibitmap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IBitmap");
		}
		return __returnValue;
	}

	native private boolean isCheckable_void(long pNativeObject);
	/**
	 * 是否可以选择
	 * @param  
	 * @return 如果可以选择，返回true,如果不可以选择，返回false
	 */
	public boolean isCheckable()
	{
		boolean returnValue = isCheckable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isCheckable_void_NoVirtual(long pNativeObject);
	protected boolean isCheckable_NoVirtual()
	{
		boolean returnValue = isCheckable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean getChecked_void(long pNativeObject);
	/**
	 * 获取能不能被选择
	 * @param  
	 * @return 如果能被选择，返回true,如果不能被选择，返回false
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

	native private void setChecked_ev_bool(long pNativeObject, boolean checked);
	/**
	 * 设置能不能被选择
	 * @param checked 能否被选择
	 */
	public void setChecked(boolean checked)
	{
		boolean checkedParamValue = checked;
		setChecked_ev_bool(this.nativeObject.pointer, checkedParamValue);
	}
	native private void setChecked_ev_bool_NoVirtual(long pNativeObject, boolean checked);
	protected void setChecked_NoVirtual(boolean checked)
	{
		boolean checkedParamValue = checked;
		setChecked_ev_bool_NoVirtual(this.nativeObject.pointer, checkedParamValue);
	}

	native private boolean getEnabled_void(long pNativeObject);
	/**
	 * 获取是否有效
	 * @param  
	 * @return 如果有效，返回true,如果无效，返回false
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

	native private void setEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置是否有效
	 * @param checked 是否有效
	 */
	public void setEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void setEnabled_ev_bool_NoVirtual(long pNativeObject, boolean enabled);
	protected void setEnabled_NoVirtual(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setEnabled_ev_bool_NoVirtual(this.nativeObject.pointer, enabledParamValue);
	}

	native private void create_ISpatialControl(long pNativeObject, long ref_ctrl);
	/**
	 * 创建工具
	 * @param ctrl 空间控制对象
	 */
	public void create(com.earthview.world.spatial.atlas.Ispatialcontrol ref_ctrl)
	{
		long ref_ctrlParamValue = (ref_ctrl == null ? 0L : ref_ctrl.nativeObject.pointer);
		create_ISpatialControl(this.nativeObject.pointer, ref_ctrlParamValue);
	}
	native private void create_ISpatialControl_NoVirtual(long pNativeObject, long ref_ctrl);
	protected void create_NoVirtual(com.earthview.world.spatial.atlas.Ispatialcontrol ref_ctrl)
	{
		long ref_ctrlParamValue = (ref_ctrl == null ? 0L : ref_ctrl.nativeObject.pointer);
		create_ISpatialControl_NoVirtual(this.nativeObject.pointer, ref_ctrlParamValue);
	}

	native private void loadContextMenu_void(long pNativeObject);
	/**
	 * 加载右键菜单
	 * @param ctrl 
	 */
	public void loadContextMenu()
	{
		loadContextMenu_void(this.nativeObject.pointer);
	}
	native private void activate_void(long pNativeObject);
	/**
	 * 激活任务
	 * @param  
	 */
	public void activate()
	{
		activate_void(this.nativeObject.pointer);
	}
	native private void activate_void_NoVirtual(long pNativeObject);
	protected void activate_NoVirtual()
	{
		activate_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void deactivate_void(long pNativeObject);
	/**
	 * 取消任务的激活状态
	 * @param  
	 */
	public void deactivate()
	{
		deactivate_void(this.nativeObject.pointer);
	}
	native private void deactivate_void_NoVirtual(long pNativeObject);
	protected void deactivate_NoVirtual()
	{
		deactivate_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void onClicked_void(long pNativeObject);
	/**
	 * 点击工具
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

	native private boolean onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * 鼠标按下事件触发
	 * @param button 键的标识(1代表左键，2代表右键，4代表中键)
	 * @param shift shift键是否同时被按下
	 * @param x 光标位置x
	 * @param y 光标位置y
	 * @return 标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)
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

	native private boolean onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * 鼠标移动事件触发
	 * @param button 键的标识(1代表左键，2代表右键，4代表中键)
	 * @param shift shift键是否同时被按下
	 * @param x 光标位置x
	 * @param y 光标位置y
	 * @return 标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)
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

	native private boolean onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * 鼠标弹起事件触发
	 * @param button 键的标识(1代表左键，2代表右键，4代表中键)
	 * @param shift shift键是否同时被释放
	 * @param x 光标位置x
	 * @param y 光标位置y
	 * @return 标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)
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
	native private boolean onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(long pNativeObject, int delta, int x, int y, int flag);
	protected boolean onMouseWheel_NoVirtual(int delta, int x, int y, int flag)
	{
		int deltaParamValue = delta;
		int xParamValue = x;
		int yParamValue = y;
		int flagParamValue = flag;
		boolean returnValue = onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, deltaParamValue, xParamValue, yParamValue, flagParamValue);
		return returnValue;
	}

	native private boolean onKeyDown_ev_int32_ev_int32(long pNativeObject, int keyCode, int shift);
	/**
	 * 键盘按下事件触发
	 * @param key 按下的键
	 * @param shift shift键是否同时被按下
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

	native private boolean onKeyUp_ev_int32_ev_int32(long pNativeObject, int keyCode, int shift);
	/**
	 * 键盘弹起事件触发
	 * @param key 弹起的键
	 * @param shift shift键是否同时被释放
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

	native private boolean onDoubleClick_void(long pNativeObject);
	/**
	 * 鼠标双击
	 * @param  
	 * @return 如果鼠标双击，返回true,如果没有双击，返回false
	 */
	public boolean onDoubleClick()
	{
		boolean returnValue = onDoubleClick_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean onDoubleClick_void_NoVirtual(long pNativeObject);
	protected boolean onDoubleClick_NoVirtual()
	{
		boolean returnValue = onDoubleClick_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
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

	native private boolean onTouchDown_MotionEvent(long pNativeObject, long touchEvent);
	public boolean onTouchDown(com.earthview.world.spatial.systemui.MotionEvent touchEvent)
	{
		long touchEventParamValue = touchEvent.nativeObject.pointer;
		boolean returnValue = onTouchDown_MotionEvent(this.nativeObject.pointer, touchEventParamValue);
		return returnValue;
	}
	native private boolean onTouchDown_MotionEvent_NoVirtual(long pNativeObject, long touchEvent);
	protected boolean onTouchDown_NoVirtual(com.earthview.world.spatial.systemui.MotionEvent touchEvent)
	{
		long touchEventParamValue = touchEvent.nativeObject.pointer;
		boolean returnValue = onTouchDown_MotionEvent_NoVirtual(this.nativeObject.pointer, touchEventParamValue);
		return returnValue;
	}

	native private boolean onTouchUp_MotionEvent(long pNativeObject, long touchEvent);
	public boolean onTouchUp(com.earthview.world.spatial.systemui.MotionEvent touchEvent)
	{
		long touchEventParamValue = touchEvent.nativeObject.pointer;
		boolean returnValue = onTouchUp_MotionEvent(this.nativeObject.pointer, touchEventParamValue);
		return returnValue;
	}
	native private boolean onTouchUp_MotionEvent_NoVirtual(long pNativeObject, long touchEvent);
	protected boolean onTouchUp_NoVirtual(com.earthview.world.spatial.systemui.MotionEvent touchEvent)
	{
		long touchEventParamValue = touchEvent.nativeObject.pointer;
		boolean returnValue = onTouchUp_MotionEvent_NoVirtual(this.nativeObject.pointer, touchEventParamValue);
		return returnValue;
	}

	native private boolean onTouchMove_MotionEvent(long pNativeObject, long touchEvent);
	public boolean onTouchMove(com.earthview.world.spatial.systemui.MotionEvent touchEvent)
	{
		long touchEventParamValue = touchEvent.nativeObject.pointer;
		boolean returnValue = onTouchMove_MotionEvent(this.nativeObject.pointer, touchEventParamValue);
		return returnValue;
	}
	native private boolean onTouchMove_MotionEvent_NoVirtual(long pNativeObject, long touchEvent);
	protected boolean onTouchMove_NoVirtual(com.earthview.world.spatial.systemui.MotionEvent touchEvent)
	{
		long touchEventParamValue = touchEvent.nativeObject.pointer;
		boolean returnValue = onTouchMove_MotionEvent_NoVirtual(this.nativeObject.pointer, touchEventParamValue);
		return returnValue;
	}

	native private boolean update_CEvent(long pNativeObject, long e);
	/**
	 * 操作更新
	 * @param e 操作事件
	 * @return 如果有操作更新，返回true,如果没有，返回false
	 */
	public boolean update(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = update_CEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean update_CEvent_NoVirtual(long pNativeObject, long e);
	protected boolean update_NoVirtual(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = update_CEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	native private boolean get_m_bChecked_void(long pNativeObject);
	public boolean get_m_bChecked()
	{
		boolean jniValue = get_m_bChecked_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_bChecked_ev_bool (long pNativeObject, boolean value);
	public void set_m_bChecked(boolean m_bChecked)
	{
		boolean m_bCheckedParamValue = m_bChecked;
		
		set_m_bChecked_ev_bool(this.nativeObject.pointer, m_bCheckedParamValue);
	}
	
	native private boolean get_m_bEnabled_void(long pNativeObject);
	public boolean get_m_bEnabled()
	{
		boolean jniValue = get_m_bEnabled_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_bEnabled_ev_bool (long pNativeObject, boolean value);
	public void set_m_bEnabled(boolean m_bEnabled)
	{
		boolean m_bEnabledParamValue = m_bEnabled;
		
		set_m_bEnabled_ev_bool(this.nativeObject.pointer, m_bEnabledParamValue);
	}
	
	native private long get_mpMapControl_void(long pNativeObject);
	public com.earthview.world.spatial2d.controls.MapControl get_mpMapControl()
	{
		long jniValue = get_mpMapControl_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.MapControl __returnValue = new com.earthview.world.spatial2d.controls.MapControl(CreatedWhenConstruct.CWC_NotToCreate, "CMapControl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.MapControl)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMapControl");
		}
		return __returnValue;
	}
	
	native private void set_mpMapControl_CMapControl (long pNativeObject, long value);
	public void set_mpMapControl(com.earthview.world.spatial2d.controls.MapControl mpMapControl)
	{
		long mpMapControlParamValue = (mpMapControl == null ? 0L : mpMapControl.nativeObject.pointer);
		
		set_mpMapControl_CMapControl(this.nativeObject.pointer, mpMapControlParamValue);
	}
	
	native private long get_m_pDisplay_void(long pNativeObject);
	public com.earthview.world.spatial.display.Ispatialdisplay get_m_pDisplay()
	{
		long jniValue = get_m_pDisplay_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Ispatialdisplay __returnValue = new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialDisplay");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Ispatialdisplay)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialDisplay");
		}
		return __returnValue;
	}
	
	native private void set_m_pDisplay_ISpatialDisplay (long pNativeObject, long value);
	public void set_m_pDisplay(com.earthview.world.spatial.display.Ispatialdisplay m_pDisplay)
	{
		long m_pDisplayParamValue = (m_pDisplay == null ? 0L : m_pDisplay.nativeObject.pointer);
		
		set_m_pDisplay_ISpatialDisplay(this.nativeObject.pointer, m_pDisplayParamValue);
	}
	
	native private long get_m_pTransformer_void(long pNativeObject);
	public com.earthview.world.spatial.display.Ispatialtransformer get_m_pTransformer()
	{
		long jniValue = get_m_pTransformer_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Ispatialtransformer __returnValue = new com.earthview.world.spatial.display.Ispatialtransformer(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialTransformer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Ispatialtransformer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialTransformer");
		}
		return __returnValue;
	}
	
	native private void set_m_pTransformer_ISpatialTransformer (long pNativeObject, long value);
	public void set_m_pTransformer(com.earthview.world.spatial.display.Ispatialtransformer m_pTransformer)
	{
		long m_pTransformerParamValue = (m_pTransformer == null ? 0L : m_pTransformer.nativeObject.pointer);
		
		set_m_pTransformer_ISpatialTransformer(this.nativeObject.pointer, m_pTransformerParamValue);
	}
	
	native private long get_m_pIcon_void(long pNativeObject);
	public com.earthview.world.display.Ibitmap get_m_pIcon()
	{
		long jniValue = get_m_pIcon_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ibitmap __returnValue = new com.earthview.world.display.Ibitmap(CreatedWhenConstruct.CWC_NotToCreate, "IBitmap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ibitmap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IBitmap");
		}
		return __returnValue;
	}
	
	native private void set_m_pIcon_IBitmap (long pNativeObject, long value);
	public void set_m_pIcon(com.earthview.world.display.Ibitmap m_pIcon)
	{
		long m_pIconParamValue = (m_pIcon == null ? 0L : m_pIcon.nativeObject.pointer);
		
		set_m_pIcon_IBitmap(this.nativeObject.pointer, m_pIconParamValue);
	}
	
	native private int get_m_nStartY_void(long pNativeObject);
	public int get_m_nStartY()
	{
		int jniValue = get_m_nStartY_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_nStartY_ev_int32 (long pNativeObject, int value);
	public void set_m_nStartY(int m_nStartY)
	{
		int m_nStartYParamValue = m_nStartY;
		
		set_m_nStartY_ev_int32(this.nativeObject.pointer, m_nStartYParamValue);
	}
	
	native private int get_m_nStartX_void(long pNativeObject);
	public int get_m_nStartX()
	{
		int jniValue = get_m_nStartX_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_nStartX_ev_int32 (long pNativeObject, int value);
	public void set_m_nStartX(int m_nStartX)
	{
		int m_nStartXParamValue = m_nStartX;
		
		set_m_nStartX_ev_int32(this.nativeObject.pointer, m_nStartXParamValue);
	}
	
	public Tool2D() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCTool2DProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.controls.Tool2D".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public Tool2D(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Tool2D(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static Tool2D fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Tool2D obj = null;
 		if(baseObj instanceof Tool2D)
		{
			obj = (Tool2D)baseObj;
		} else {
			obj = new Tool2D(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTool2D");
			obj.increaseCast();
		}

		return obj;
	}
}
