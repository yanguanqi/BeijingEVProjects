package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.systemui.*;
import com.earthview.world.spatial.display.*;
import com.earthview.world.core.*;

public class LayoutCommand extends com.earthview.world.spatial.systemui.Icommand {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CLayoutCommand", new LayoutCommandClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCLayoutCommandProxy", new LayoutCommandClassFactory());
	}

	native private long getToolBarType_void(long pNativeObject);
	/**
	 * 												获取命令项所属的工具栏类型
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
	 * 获取命令项的类型
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
	 * 获取名称
	 * @param  
	 * @return 命令名称
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
	 * 获取类别
	 * @param  
	 * @return 类别的名称
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
	 * 获取工具
	 * @param  
	 * @return 工具的名称
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

	native private void onClicked_void(long pNativeObject);
	/**
	 * 点击命令
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
	 * 获取是否可以选择
	 * @param  
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
	 * 设置是否可以选择
	 * @param checked 是否可以选择
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
	 * @param enabled 是否有效
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
	 * 初始化
	 * @param  
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
	
	native private long get_m_pLayoutControl_void(long pNativeObject);
	public com.earthview.world.layout.controls.LayoutControl get_m_pLayoutControl()
	{
		long jniValue = get_m_pLayoutControl_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.layout.controls.LayoutControl __returnValue = new com.earthview.world.layout.controls.LayoutControl(CreatedWhenConstruct.CWC_NotToCreate, "CLayoutControl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.layout.controls.LayoutControl)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLayoutControl");
		}
		return __returnValue;
	}
	
	native private void set_m_pLayoutControl_CLayoutControl (long pNativeObject, long value);
	public void set_m_pLayoutControl(com.earthview.world.layout.controls.LayoutControl m_pLayoutControl)
	{
		long m_pLayoutControlParamValue = (m_pLayoutControl == null ? 0L : m_pLayoutControl.nativeObject.pointer);
		
		set_m_pLayoutControl_CLayoutControl(this.nativeObject.pointer, m_pLayoutControlParamValue);
	}
	
	native private long get_m_pMapControl_void(long pNativeObject);
	public com.earthview.world.spatial2d.controls.MapControl get_m_pMapControl()
	{
		long jniValue = get_m_pMapControl_void(this.nativeObject.pointer);
		
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
	
	native private void set_m_pMapControl_CMapControl (long pNativeObject, long value);
	public void set_m_pMapControl(com.earthview.world.spatial2d.controls.MapControl m_pMapControl)
	{
		long m_pMapControlParamValue = (m_pMapControl == null ? 0L : m_pMapControl.nativeObject.pointer);
		
		set_m_pMapControl_CMapControl(this.nativeObject.pointer, m_pMapControlParamValue);
	}
	
	public LayoutCommand() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCLayoutCommandProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.layout.controls.LayoutCommand".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public LayoutCommand(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LayoutCommand(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
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
	
	public static LayoutCommand fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LayoutCommand obj = null;
 		if(baseObj instanceof LayoutCommand)
		{
			obj = (LayoutCommand)baseObj;
		} else {
			obj = new LayoutCommand(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLayoutCommand");
			obj.increaseCast();
		}

		return obj;
	}
}
