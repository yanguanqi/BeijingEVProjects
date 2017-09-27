package com.earthview.world.spatial3d.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelRaySelectTool extends com.earthview.world.spatial.systemui.Itool {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::SystemUI::CModelRaySelectTool", new ModelRaySelectToolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::SystemUI::JCModelRaySelectToolProxy", new ModelRaySelectToolClassFactory());
	}

	/**
	 * ¹¹Ôìº¯Êı
	 * @param ref_ctrl ³éÏó³¡¾°¿Ø¼ş
	 */
	public ModelRaySelectTool(com.earthview.world.spatial3d.controls.GlobeControl ref_ctrl) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_ctrlPtr = new BasePointer(ref_ctrl);
		list.add("ref_ctrl", ref_ctrlPtr.get());
		Create("JCModelRaySelectToolProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.systemui.ModelRaySelectTool".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void onClicked_void(long pNativeObject);
	/**
	 * ¹¤¾ß´¥·¢ÏûÏ¢ÏìÓ¦
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
	 * ²éÑ¯¹¤¾ßÊÇ·ñ´¦ÓÚ¼¤»î×´Ì¬
	 * @param  
	 * @return ¼¤»î·µ»Øtrue£¬·ñÔò·µ»Øfalse
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
	 * ²éÑ¯¹¤¾ßÊÇ·ñ¿ÉÓÃ
	 * @param  
	 * @return ¿ÉÓÃ·µ»Øtrue£¬·ñÔò·µ»Øfalse
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

	native private boolean getEditable_void(long pNativeObject);
	/**
	 * »ñÈ¡¹¤¾ßÊÇ·ñ¿ªÆô±à¼­¹¦ÄÜ(Ä¬ÈÏÊÇ¿ªÆôµÄ)
	 * @param  
	 * @return ¿ªÆôÔò·µ»Øtrue£¬·ñÔò·µ»Øfalse
	 */
	public boolean getEditable()
	{
		boolean returnValue = getEditable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setEditable_ev_bool(long pNativeObject, boolean editable);
	/**
	 * ÉèÖÃ¹¤¾ßÊÇ·ñ¿ªÆô±à¼­¹¦ÄÜ
	 * @param editable ÊÇ·ñÆôÓÃ
	 */
	public void setEditable(boolean editable)
	{
		boolean editableParamValue = editable;
		setEditable_ev_bool(this.nativeObject.pointer, editableParamValue);
	}
	native private void setSortByDistance_ev_bool(long pNativeObject, boolean sort);
	/**
	 * ÉèÖÃÊÇ·ñ°´¾àÀëÅÅĞò
	 * @param sort ÊÇ·ñÅÅĞò
	 */
	public void setSortByDistance(boolean sort)
	{
		boolean sortParamValue = sort;
		setSortByDistance_ev_bool(this.nativeObject.pointer, sortParamValue);
	}
	native private void setSortByDistance_ev_bool_ev_uint16(long pNativeObject, boolean sort, int maxresults);
	/**
	 * ÉèÖÃÊÇ·ñ°´¾àÀëÅÅĞò
	 * @param sort ÊÇ·ñÅÅĞò
	 * @param sort ×î´óµÄ½á¹ûÊıÁ¿
	 */
	public void setSortByDistance(boolean sort, int maxresults)
	{
		boolean sortParamValue = sort;
		int maxresultsParamValue = maxresults;
		setSortByDistance_ev_bool_ev_uint16(this.nativeObject.pointer, sortParamValue, maxresultsParamValue);
	}
	native private boolean getSortByDistance_void(long pNativeObject);
	/**
	 * ²éÑ¯ÊÇ·ñ°´¾àÀëÅÅĞò
	 * @return ÊÇ·ñ°´¾àÀëÅÅĞò
	 */
	public boolean getSortByDistance()
	{
		boolean returnValue = getSortByDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMaxResults_void(long pNativeObject);
	/**
	 * »ñµÃ×î´ó½á¹ûÊıÁ¿
	 * @return ×î´ó½á¹ûÊıÁ¿
	 */
	public int getMaxResults()
	{
		int returnValue = getMaxResults_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSelectButton_void(long pNativeObject);
	/**
	 * »ñÈ¡Ñ¡ÔñÊ±Ê¹ÓÃ×ó¼ü¡¢ÖĞ¼ü»òÕßÓÒ¼ü
	 */
	public com.earthview.world.spatial.systemui.Guievent.GUIMouseButtonMask getSelectButton()
	{
		int returnValue = getSelectButton_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.systemui.Guievent.GUIMouseButtonMask.toEnum(returnValue);
	}
	native private void setSelectButton_GUIMouseButtonMask(long pNativeObject, int button);
	/**
	 * ÉèÖÃÑ¡ÔñÊ±Ê¹ÓÃ×ó¼ü¡¢ÖĞ¼ü»òÕßÓÒ¼ü
	 */
	public void setSelectButton(com.earthview.world.spatial.systemui.Guievent.GUIMouseButtonMask button)
	{
		int buttonParamValue = button.getValue();
		setSelectButton_GUIMouseButtonMask(this.nativeObject.pointer, buttonParamValue);
	}
	native private void resetResults_void(long pNativeObject);
	/**
	 * Çå¿Õ½á¹û¼¯
	 */
	public void resetResults()
	{
		resetResults_void(this.nativeObject.pointer);
	}
	native private long getType_void(long pNativeObject);
	/**
	 * ²éÑ¯¹¤¾ßÀàĞÍ
	 * @return ¹¤¾ßÀàĞÍEVToolType
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
	 * Êó±ê°´ÏÂÊÂ¼şÏìÓ¦
	 * @param button GUIMouseButtonMaskµÄ×éºÏ
	 * @param shift GUIModKeyMaskµÄ×éºÏ
	 * @param x ÆÁÄ»×ø±êx
	 * @param y ÆÁÄ»×ø±êy
	 * @return ÊÇ·ñĞèÒªÏòÏÂ´«µİÊÂ¼ş
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
	 * Êó±êË«»÷ÊÂ¼şÏìÓ¦
	 * @param button GUIMouseButtonMaskµÄ×éºÏ
	 * @param shift GUIModKeyMaskµÄ×éºÏ
	 * @param x ÆÁÄ»×ø±êx
	 * @param y ÆÁÄ»×ø±êy
	 * @return ÊÇ·ñĞèÒªÏòÏÂ´«µİÊÂ¼ş
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
	 * Êó±êµ¯ÆğÊÂ¼şÏìÓ¦
	 * @param button GUIMouseButtonMaskµÄ×éºÏ
	 * @param shift GUIModKeyMaskµÄ×éºÏ
	 * @param x ÆÁÄ»×ø±êx
	 * @param y ÆÁÄ»×ø±êy
	 * @return ÊÇ·ñĞèÒªÏòÏÂ´«µİÊÂ¼ş
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
	 * Êó±êÒÆ¶¯ÊÂ¼şÏìÓ¦
	 * @param button GUIMouseButtonMaskµÄ×éºÏ
	 * @param shift GUIModKeyMaskµÄ×éºÏ
	 * @param x ÆÁÄ»×ø±êx
	 * @param y ÆÁÄ»×ø±êy
	 * @return ÊÇ·ñĞèÒªÏòÏÂ´«µİÊÂ¼ş
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
	 * ¼üÅÌ°´ÏÂÊÂ¼ş´¥·¢
	 * @param key °´ÏÂµÄ¼ü
	 * @param shift shift¼üÊÇ·ñÍ¬Ê±±»°´ÏÂ
	 * @return ÊÇ·ñ¼ÌĞøÏò¸¸¿Ø¼ş·¢ËÍ¸ÃÊÂ¼ş
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

	public ModelRaySelectTool(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelRaySelectTool(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * å¯ç”¨Tool
	 * @param  
	 */
	public void activate()
	{
		super.activate_NoVirtual();
	}
	/**
	 * ä¸ä½¿ç”¨Tool
	 * @param  
	 */
	public void deactivate()
	{
		super.deactivate_NoVirtual();
	}
	/**
	 * è·å–å…‰æ ‡æ ·å¼
	 * @param  
	 * @return å…‰æ ‡æ ·å¼æšä¸¾
	 */
	public int getCursor()
	{
		return super.getCursor_NoVirtual();
	}
	/**
	 * å³é”®èœå•äº‹ä»¶è§¦å‘
	 * @param x å…‰æ ‡ä½ç½®x
	 * @param y å…‰æ ‡ä½ç½®y
	 * @return æ ‡è¯†æ­¤äº‹ä»¶æ˜¯å¦å·²ç»è¢«IToolå¤„ç†è¿‡,true:å¤„ç†è¿‡(ä¸å†å‘çˆ¶æ§ä»¶ä¼ é€’æ­¤äº‹ä»¶);false:æœªå¤„ç†(çˆ¶æ§ä»¶å¯¹è±¡å¯ä»¥ç»§ç»­å¤„ç†)
	 */
	public boolean onContextMenu(int x, int y)
	{
		return super.onContextMenu_NoVirtual(x, y);
	}
	/**
	 * é¼ æ ‡åŒå‡»äº‹ä»¶è§¦å‘
	 * @param  
	 * @return æ ‡è¯†æ­¤äº‹ä»¶æ˜¯å¦å·²ç»è¢«IToolå¤„ç†è¿‡,true:å¤„ç†è¿‡(ä¸å†å‘çˆ¶æ§ä»¶ä¼ é€’æ­¤äº‹ä»¶);false:æœªå¤„ç†(çˆ¶æ§ä»¶å¯¹è±¡å¯ä»¥ç»§ç»­å¤„ç†)
	 */
	public boolean onDoubleClick()
	{
		return super.onDoubleClick_NoVirtual();
	}
	/**
	 * é”®ç›˜å¼¹èµ·äº‹ä»¶è§¦å‘
	 * @param key å¼¹èµ·çš„é”®
	 * @param shift shifté”®æ˜¯å¦åŒæ—¶è¢«é‡Šæ”¾
	 * @return æ ‡è¯†æ­¤äº‹ä»¶æ˜¯å¦å·²ç»è¢«IToolå¤„ç†è¿‡,true:å¤„ç†è¿‡(ä¸å†å‘çˆ¶æ§ä»¶ä¼ é€’æ­¤äº‹ä»¶);false:æœªå¤„ç†(çˆ¶æ§ä»¶å¯¹è±¡å¯ä»¥ç»§ç»­å¤„ç†)
	 */
	public boolean onKeyUp(int keyCode, int shift)
	{
		return super.onKeyUp_NoVirtual(keyCode, shift);
	}
	/**
	 * é¼ æ ‡æ»šè½®æ»šåŠ¨äº‹ä»¶è§¦å‘
	 * @param delta æ»šåŠ¨çš„å¹…åº¦
	 * @param x å…‰æ ‡ä½ç½®x
	 * @param y å…‰æ ‡ä½ç½®y
	 * @param flag æ ‡è¯†ä½
	 * @return æ ‡è¯†æ­¤äº‹ä»¶æ˜¯å¦å·²ç»è¢«IToolå¤„ç†è¿‡,true:å¤„ç†è¿‡(ä¸å†å‘çˆ¶æ§ä»¶ä¼ é€’æ­¤äº‹ä»¶);false:æœªå¤„ç†(çˆ¶æ§ä»¶å¯¹è±¡å¯ä»¥ç»§ç»­å¤„ç†)
	 */
	public boolean onMouseWheel(int delta, int x, int y, int flag)
	{
		return super.onMouseWheel_NoVirtual(delta, x, y, flag);
	}
	/**
	 * è§¦å±æ¥è§¦äº‹ä»¶è§¦å‘
	 * @param touchEvent äº‹ä»¶å‚æ•°
	 * @return æ ‡è¯†æ­¤äº‹ä»¶æ˜¯å¦å·²ç»è¢«IToolå¤„ç†è¿‡,true:å¤„ç†è¿‡(ä¸å†å‘çˆ¶æ§ä»¶ä¼ é€’æ­¤äº‹ä»¶);false:æœªå¤„ç†(çˆ¶æ§ä»¶å¯¹è±¡å¯ä»¥ç»§ç»­å¤„ç†)
	 */
	public boolean onTouchDown(com.earthview.world.spatial.systemui.MotionEvent touchEvent)
	{
		return super.onTouchDown_NoVirtual(touchEvent);
	}
	/**
	 * è§¦å±æ¥è§¦äº‹ä»¶è§¦å‘
	 * @param touchEvent äº‹ä»¶å‚æ•°
	 * @return æ ‡è¯†æ­¤äº‹ä»¶æ˜¯å¦å·²ç»è¢«IToolå¤„ç†è¿‡,true:å¤„ç†è¿‡(ä¸å†å‘çˆ¶æ§ä»¶ä¼ é€’æ­¤äº‹ä»¶);false:æœªå¤„ç†(çˆ¶æ§ä»¶å¯¹è±¡å¯ä»¥ç»§ç»­å¤„ç†)
	 */
	public boolean onTouchUp(com.earthview.world.spatial.systemui.MotionEvent touchEvent)
	{
		return super.onTouchUp_NoVirtual(touchEvent);
	}
	/**
	 * è§¦å±æ¥è§¦äº‹ä»¶è§¦å‘
	 * @param touchEvent äº‹ä»¶å‚æ•°
	 * @return æ ‡è¯†æ­¤äº‹ä»¶æ˜¯å¦å·²ç»è¢«IToolå¤„ç†è¿‡,true:å¤„ç†è¿‡(ä¸å†å‘çˆ¶æ§ä»¶ä¼ é€’æ­¤äº‹ä»¶);false:æœªå¤„ç†(çˆ¶æ§ä»¶å¯¹è±¡å¯ä»¥ç»§ç»­å¤„ç†)
	 */
	public boolean onTouchMove(com.earthview.world.spatial.systemui.MotionEvent touchEvent)
	{
		return super.onTouchMove_NoVirtual(touchEvent);
	}
	/**
	 * è·å–å‘½ä»¤é¡¹æ‰€å±çš„å·¥å…·æ ç±»å‹
	 * @param  
	 * @return å·¥å…·æ ç±»å‹
	 */
	public long getToolBarType()
	{
		return super.getToolBarType_NoVirtual();
	}
	/**
	 * è·å–å‘½ä»¤é¡¹çš„åç§°
	 * @param  
	 * @return åç§°
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * è·å–å‘½ä»¤é¡¹æ‰€å±ç±»åˆ«
	 * @param  
	 * @return ç±»åˆ«
	 */
	public String getCategory()
	{
		return super.getCategory_NoVirtual();
	}
	/**
	 * å·¥å…·æç¤º
	 * @param  
	 * @return æç¤ºä¿¡æ¯
	 */
	public String getToolTip()
	{
		return super.getToolTip_NoVirtual();
	}
	/**
	 * å‘½ä»¤é¡¹çš„æ˜¾ç¤ºå›¾æ ‡
	 * @param  
	 * @return å›¾æ ‡
	 */
	public com.earthview.world.display.Ibitmap getIcon()
	{
		return super.getIcon_NoVirtual();
	}
	/**
	 * åˆ¤æ–­å‘½ä»¤é¡¹æ˜¯å¦æ”¯æŒ"æŒ‰ä¸‹"çŠ¶æ€
	 * @param  
	 * @return å¦‚æœæ”¯æŒ"æŒ‰ä¸‹"åˆ™è¿”å›true,åä¹‹åˆ™å¦
	 */
	public boolean isCheckable()
	{
		return super.isCheckable_NoVirtual();
	}
	/**
	 * è®¾ç½®å‘½ä»¤é¡¹æ˜¯å¦æŒ‰ä¸‹
	 * @param checked å¦‚æœä¸ºtrue,åˆ™å‘½ä»¤é¡¹è¢«æŒ‰ä¸‹,åä¹‹åˆ™å¦
	 */
	public void setChecked(boolean checked)
	{
		super.setChecked_NoVirtual(checked);
	}
	/**
	 * è®¾ç½®å‘½ä»¤é¡¹æ˜¯å¦å¯ç”¨
	 * @param enabled å¦‚æœä¸ºtrue,åˆ™è®¾ç½®è¯¥å‘½ä»¤é¡¹å¯ç”¨,åä¹‹åˆ™å¦
	 */
	public void setEnabled(boolean enabled)
	{
		super.setEnabled_NoVirtual(enabled);
	}
	/**
	 * ä½¿å‘½ä»¤é¡¹ä¸æŒ‡å®šçš„æ§ä»¶ç›¸å…³è”
	 * @param ctrl å¾…å…³è”çš„æ§ä»¶
	 */
	public void create(com.earthview.world.spatial.atlas.Ispatialcontrol ref_ctrl)
	{
		super.create_NoVirtual(ref_ctrl);
	}
	/**
	 * å½“æœ‰äº‹ä»¶è¢«è§¦å‘æ—¶,ä¼šè°ƒç”¨è¯¥æ–¹æ³•
	 * @param e äº‹ä»¶
	 * @return å¦‚æœçŠ¶æ€å‘ç”Ÿå˜åŒ–åˆ™è¿”å›true,åä¹‹åˆ™å¦
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
	
	public static ModelRaySelectTool fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelRaySelectTool obj = null;
 		if(baseObj instanceof ModelRaySelectTool)
		{
			obj = (ModelRaySelectTool)baseObj;
		} else {
			obj = new ModelRaySelectTool(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelRaySelectTool");
			obj.increaseCast();
		}

		return obj;
	}
}
