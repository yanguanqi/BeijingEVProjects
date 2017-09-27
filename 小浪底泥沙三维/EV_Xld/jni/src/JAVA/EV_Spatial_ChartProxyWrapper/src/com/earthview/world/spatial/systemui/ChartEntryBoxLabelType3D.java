package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 三维海图注记类型组合框
 */
public class ChartEntryBoxLabelType3D extends com.earthview.world.spatial.systemui.Ientrybox {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CChartEntryBoxLabelType3D", new ChartEntryBoxLabelType3DClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::JCChartEntryBoxLabelType3DProxy", new ChartEntryBoxLabelType3DClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public ChartEntryBoxLabelType3D() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCChartEntryBoxLabelType3DProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.systemui.ChartEntryBoxLabelType3D".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getToolBarType_void(long pNativeObject);
	/**
	 * 获取命令项所属的工具栏类型
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
	 * 获取相应命令项的类型
	 * @param  
	 * @return 类型
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
	 * 获取命令项的名称
	 * @param  
	 * @return 名称
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
	 * 获取命令项所属类别
	 * @param  
	 * @return 类别
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
	 * 工具提示
	 * @param  
	 * @return 提示信息
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
	 * 命令项的显示图标
	 * @param  
	 * @return 图标
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
	 * 判断命令项是否支持"按下"状态
	 * @param  
	 * @return 如果支持"按下"则返回true,反之则否
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

	native private void onClicked_void(long pNativeObject);
	/**
	 * 当命令项按钮被点击的时候,调用该方法
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
	 * 获取命令项是否被按下
	 * @param  
	 * @return 如果命令项被按下了则返回true,反之则否
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
	 * 设置命令项是否按下
	 * @param checked 如果为true,则命令项被按下,反之则否
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
	 * 获取命令项是否可用
	 * @param  
	 * @return 如果命令项可用则返回true,反之则否
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
	 * 设置命令项是否可用
	 * @param enabled 如果为true,则设置该命令项可用,反之则否
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

	native private void create_ISpatialControl(long pNativeObject, long ctrl);
	/**
	 * 使命令项与指定的控件相关联
	 * @param ctrl 待关联的控件
	 */
	public void create(com.earthview.world.spatial.atlas.Ispatialcontrol ctrl)
	{
		long ctrlParamValue = (ctrl == null ? 0L : ctrl.nativeObject.pointer);
		create_ISpatialControl(this.nativeObject.pointer, ctrlParamValue);
	}
	native private void create_ISpatialControl_NoVirtual(long pNativeObject, long ctrl);
	protected void create_NoVirtual(com.earthview.world.spatial.atlas.Ispatialcontrol ctrl)
	{
		long ctrlParamValue = (ctrl == null ? 0L : ctrl.nativeObject.pointer);
		create_ISpatialControl_NoVirtual(this.nativeObject.pointer, ctrlParamValue);
	}

	native private boolean update_CEvent(long pNativeObject, long e);
	/**
	 * 当有事件被触发时,会调用该方法
	 * @param e 事件
	 * @return 如果状态发生变化则返回true,反之则否
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

	native private long getEntryCount_void(long pNativeObject);
	/**
	 * 获取组合项中条目的个数
	 * @param  
	 * @return 条目数量
	 */
	public long getEntryCount()
	{
		long returnValue = getEntryCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getEntryCount_void_NoVirtual(long pNativeObject);
	protected long getEntryCount_NoVirtual()
	{
		long returnValue = getEntryCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getEntry_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定的条目
	 * @param index 索引
	 */
	public String getEntry(long index)
	{
		long indexParamValue = index;
		String returnValue = getEntry_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private String getEntry_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected String getEntry_NoVirtual(long index)
	{
		long indexParamValue = index;
		String returnValue = getEntry_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	native private int getCurrentIndex_void(long pNativeObject);
	/**
	 * 获取当前的索引
	 * @param  
	 * @return 索引
	 */
	public int getCurrentIndex()
	{
		int returnValue = getCurrentIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getCurrentIndex_void_NoVirtual(long pNativeObject);
	protected int getCurrentIndex_NoVirtual()
	{
		int returnValue = getCurrentIndex_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void currentIndexChanged_ev_uint32(long pNativeObject, long index);
	/**
	 * 当前的索引发生变化时,会调用该方法
	 * @param index 新的当前索引
	 */
	public void currentIndexChanged(long index)
	{
		long indexParamValue = index;
		currentIndexChanged_ev_uint32(this.nativeObject.pointer, indexParamValue);
	}
	native private void currentIndexChanged_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected void currentIndexChanged_NoVirtual(long index)
	{
		long indexParamValue = index;
		currentIndexChanged_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
	}

	public ChartEntryBoxLabelType3D(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ChartEntryBoxLabelType3D(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取组合框的宽度
	 * @param  
	 * @return 宽度值
	 */
	public long getWidth()
	{
		return super.getWidth_NoVirtual();
	}
	
	native protected void register_getWidth_void(long pNativeObject, String method);
	native protected void register_getEntryCount_void(long pNativeObject, String method);
	native protected void register_getEntry_ev_uint32(long pNativeObject, String method);
	native protected void register_getCurrentIndex_void(long pNativeObject, String method);
	native protected void register_currentIndexChanged_ev_uint32(long pNativeObject, String method);
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
			this.register_getWidth_void(this.nativeObject.pointer, "getWidth_void_callback");
			this.register_getEntryCount_void(this.nativeObject.pointer, "getEntryCount_void_callback");
			this.register_getEntry_ev_uint32(this.nativeObject.pointer, "getEntry_ev_uint32_callback");
			this.register_getCurrentIndex_void(this.nativeObject.pointer, "getCurrentIndex_void_callback");
			this.register_currentIndexChanged_ev_uint32(this.nativeObject.pointer, "currentIndexChanged_ev_uint32_callback");
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
	
	public static ChartEntryBoxLabelType3D fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ChartEntryBoxLabelType3D obj = null;
 		if(baseObj instanceof ChartEntryBoxLabelType3D)
		{
			obj = (ChartEntryBoxLabelType3D)baseObj;
		} else {
			obj = new ChartEntryBoxLabelType3D(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CChartEntryBoxLabelType3D");
			obj.increaseCast();
		}

		return obj;
	}
}
