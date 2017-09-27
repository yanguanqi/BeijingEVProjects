package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandModelSubmeshSelector extends com.earthview.world.spatial3d.controls.GlobeCommand {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CCommandModelSubmeshSelector", new CommandModelSubmeshSelectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::JCCommandModelSubmeshSelectorProxy", new CommandModelSubmeshSelectorClassFactory());
	}

	public CommandModelSubmeshSelector() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCCommandModelSubmeshSelectorProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.CommandModelSubmeshSelector".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getType_void(long pNativeObject);
	/**
	 * ªÒµ√√¸¡Óµƒ¿‡–Õ
	 * @param  
	 * @return √¸¡Óµƒ¿‡–ÕEVCommandType√∂æŸ÷µ
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
	 * ªÒµ√∞¥≈•√˚≥∆
	 * @param  
	 * @return ∞¥≈•√˚≥∆
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
	 * ªÒµ√∞¥≈•µƒƒø¬º√˚≥∆
	 * @param  
	 * @return ∞¥≈•µƒƒø¬º√˚≥∆
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
	 * ªÒµ√∞¥≈•µƒÃ· æ
	 * @param  
	 * @return ∞¥≈•µƒÃ· æ
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
	 * ªÒµ√∞¥≈•µƒÕº±Í
	 * @param  
	 * @return ∞¥≈•µƒÕº±Í
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
	 * ≈–∂œ∞¥≈• «∑Òƒ‹∞¥œ¬
	 * @param  
	 * @return ƒ‹∞¥œ¬∑µªÿtrue,≤ªƒ‹∞¥œ¬∑µªÿfalse
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
	 * ∞¥≈•µ•ª˜¥¶¿Ì
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
	 * ≈–∂œ∞¥≈• «∑Ò∞¥œ¬
	 * @param  
	 * @return ∞¥œ¬∑µªÿtrue,√ª∞¥œ¬∑µªÿfalse
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
	 * …Ë÷√∞¥≈•◊¥Ã¨
	 * @param checked ∞¥≈•◊¥Ã¨
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
	 * ≈–∂œ∞¥≈• «∑Òø…”√
	 * @param  
	 * @return ø…”√∑µªÿtrue,≤ªø…”√∑µªÿfalse
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
	 * …Ë÷√∞¥≈• «∑Òø…”√
	 * @param enabled  «∑Òø…”√
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

	native private boolean update_CEvent(long pNativeObject, long e);
	/**
	 * Õ®÷™∞¥≈•∏¸–¬
	 * @param e  ¬º˛
	 * @return ∑µªÿfalse
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

	public CommandModelSubmeshSelector(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CommandModelSubmeshSelector(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * Ëé∑ÂèñÂëΩ‰ª§È°πÊâÄÂ±ûÁöÑÂ∑•ÂÖ∑Ê†èÁ±ªÂûã
	 * @param  
	 * @return Â∑•ÂÖ∑Ê†èÁ±ªÂûã
	 */
	public long getToolBarType()
	{
		return super.getToolBarType_NoVirtual();
	}
	/**
	 * ‰ΩøÂëΩ‰ª§È°π‰∏éÊåáÂÆöÁöÑÊéß‰ª∂Áõ∏ÂÖ≥ËÅî
	 * @param ctrl ÂæÖÂÖ≥ËÅîÁöÑÊéß‰ª∂
	 */
	public void create(com.earthview.world.spatial.atlas.Ispatialcontrol ref_ctrl)
	{
		super.create_NoVirtual(ref_ctrl);
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
	
	public static CommandModelSubmeshSelector fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CommandModelSubmeshSelector obj = null;
 		if(baseObj instanceof CommandModelSubmeshSelector)
		{
			obj = (CommandModelSubmeshSelector)baseObj;
		} else {
			obj = new CommandModelSubmeshSelector(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCommandModelSubmeshSelector");
			obj.increaseCast();
		}

		return obj;
	}
}
