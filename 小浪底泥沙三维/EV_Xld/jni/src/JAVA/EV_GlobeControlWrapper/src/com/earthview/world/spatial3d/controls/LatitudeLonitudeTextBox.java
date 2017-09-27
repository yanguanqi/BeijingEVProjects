package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LatitudeLonitudeTextBox extends com.earthview.world.spatial3d.controls.TextBoxWidget {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox", new LatitudeLonitudeTextBoxClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::JCLatitudeLonitudeTextBoxProxy", new LatitudeLonitudeTextBoxClassFactory());
	}

	public LatitudeLonitudeTextBox(com.earthview.world.spatial3d.GlobeCamera globeCamera, String name, String fontName, com.earthview.world.graphic.GuiHorizontalAlignment gha, com.earthview.world.graphic.GuiVerticalAlignment vga, float top, float left, float width, float height, float textOffsetX, float textOffsetY, int charHeight, int spaceWidth, com.earthview.world.graphic.ColourValue color) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer globeCameraPtr = new BasePointer(globeCamera);
		list.add("globeCamera", globeCameraPtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer fontNamePtr = new BasePointer(fontName);
		list.add("fontName", fontNamePtr.get());
		BasePointer ghaPtr = new BasePointer(gha);
		list.add("gha", ghaPtr.get());
		BasePointer vgaPtr = new BasePointer(vga);
		list.add("vga", vgaPtr.get());
		BasePointer topPtr = new BasePointer(top);
		list.add("top", topPtr.get());
		BasePointer leftPtr = new BasePointer(left);
		list.add("left", leftPtr.get());
		BasePointer widthPtr = new BasePointer(width);
		list.add("width", widthPtr.get());
		BasePointer heightPtr = new BasePointer(height);
		list.add("height", heightPtr.get());
		BasePointer textOffsetXPtr = new BasePointer(textOffsetX);
		list.add("textOffsetX", textOffsetXPtr.get());
		BasePointer textOffsetYPtr = new BasePointer(textOffsetY);
		list.add("textOffsetY", textOffsetYPtr.get());
		BasePointer charHeightPtr = new BasePointer(charHeight);
		list.add("charHeight", charHeightPtr.get());
		BasePointer spaceWidthPtr = new BasePointer(spaceWidth);
		list.add("spaceWidth", spaceWidthPtr.get());
		BasePointer colorPtr = new BasePointer(color);
		list.add("color", colorPtr.get());
		Create("JCLatitudeLonitudeTextBoxProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.LatitudeLonitudeTextBox".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void addGlobeControlListener_CGlobeControlListener(long pNativeObject, long ref_listener);
	/**
	 * 添加globeControlListener监听
	 * @param listener 监听者
	 */
	public void addGlobeControlListener(com.earthview.world.spatial3d.controls.GlobeControlListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		addGlobeControlListener_CGlobeControlListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private void removeGlobeControlListener_CGlobeControlListener(long pNativeObject, long listener);
	/**
	 * 移除Goto监听
	 * @param listener 监听者
	 */
	public void removeGlobeControlListener(com.earthview.world.spatial3d.controls.GlobeControlListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		removeGlobeControlListener_CGlobeControlListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private void setShowLayerInfo_ev_bool(long pNativeObject, boolean show);
	/**
	 * 是否显示图层信息
	 * @param show 
	 */
	public void setShowLayerInfo(boolean show)
	{
		boolean showParamValue = show;
		setShowLayerInfo_ev_bool(this.nativeObject.pointer, showParamValue);
	}
	native private boolean handleUserEvent_CGUIEvent(long pNativeObject, long event);
	public boolean handleUserEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		boolean returnValue = handleUserEvent_CGUIEvent(this.nativeObject.pointer, eventParamValue);
		return returnValue;
	}
	native private boolean handleUserEvent_CGUIEvent_NoVirtual(long pNativeObject, long event);
	protected boolean handleUserEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent event)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		boolean returnValue = handleUserEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, eventParamValue);
		return returnValue;
	}

	native private boolean handleFrameEvent_CGUIEvent_CViewport(long pNativeObject, long event, long viewport);
	public boolean handleFrameEvent(com.earthview.world.spatial.systemui.Guievent event, com.earthview.world.graphic.Viewport viewport)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean returnValue = handleFrameEvent_CGUIEvent_CViewport(this.nativeObject.pointer, eventParamValue, viewportParamValue);
		return returnValue;
	}
	native private boolean handleFrameEvent_CGUIEvent_CViewport_NoVirtual(long pNativeObject, long event, long viewport);
	protected boolean handleFrameEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent event, com.earthview.world.graphic.Viewport viewport)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean returnValue = handleFrameEvent_CGUIEvent_CViewport_NoVirtual(this.nativeObject.pointer, eventParamValue, viewportParamValue);
		return returnValue;
	}

	public LatitudeLonitudeTextBox(com.earthview.world.spatial3d.controls.LatitudeLonitudeTextBox rhs) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		Create("JCLatitudeLonitudeTextBoxProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.LatitudeLonitudeTextBox".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void OperatorAssign_CTextBoxWidget(long pNativeObject, long rhs);
	public void OperatorAssign(com.earthview.world.spatial3d.controls.TextBoxWidget rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		OperatorAssign_CTextBoxWidget(this.nativeObject.pointer, rhsParamValue);
	}
	native private void setGlobelControl_CGlobeControl(long pNativeObject, long globeContorl);
	public void setGlobelControl(com.earthview.world.spatial3d.controls.GlobeControl globeContorl)
	{
		long globeContorlParamValue = (globeContorl == null ? 0L : globeContorl.nativeObject.pointer);
		setGlobelControl_CGlobeControl(this.nativeObject.pointer, globeContorlParamValue);
	}
	native private void setMousetPickInterval_ev_uint32(long pNativeObject, long intervalTime);
	public void setMousetPickInterval(long intervalTime)
	{
		long intervalTimeParamValue = intervalTime;
		setMousetPickInterval_ev_uint32(this.nativeObject.pointer, intervalTimeParamValue);
	}
	native private long get_mGlobeCamera_void(long pNativeObject);
	public com.earthview.world.spatial3d.GlobeCamera get_mGlobeCamera()
	{
		long jniValue = get_mGlobeCamera_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.GlobeCamera __returnValue = new com.earthview.world.spatial3d.GlobeCamera(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeCamera");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeCamera)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeCamera");
		}
		return __returnValue;
	}
	
	native private void set_mGlobeCamera_CGlobeCamera (long pNativeObject, long value);
	public void set_mGlobeCamera(com.earthview.world.spatial3d.GlobeCamera mGlobeCamera)
	{
		long mGlobeCameraParamValue = (mGlobeCamera == null ? 0L : mGlobeCamera.nativeObject.pointer);
		
		set_mGlobeCamera_CGlobeCamera(this.nativeObject.pointer, mGlobeCameraParamValue);
	}
	
	native private int get_mlastWidth_void(long pNativeObject);
	public int get_mlastWidth()
	{
		int jniValue = get_mlastWidth_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mlastWidth_int (long pNativeObject, int value);
	public void set_mlastWidth(int mlastWidth)
	{
		int mlastWidthParamValue = mlastWidth;
		
		set_mlastWidth_int(this.nativeObject.pointer, mlastWidthParamValue);
	}
	
	native private long get_mtextInformation_void(long pNativeObject);
	public BytePointer get_mtextInformation()
	{
		long jniValue = get_mtextInformation_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		BytePointer __returnValue = new BytePointer(new InstancePointer(jniValue));
		return __returnValue;
	}
	
	native private void set_mtextInformation_char (long pNativeObject, long value);
	public void set_mtextInformation(BytePointer mtextInformation)
	{
		long mtextInformationParamValue = (mtextInformation == null ? 0L : mtextInformation.nativeObject.pointer);
		
		set_mtextInformation_char(this.nativeObject.pointer, mtextInformationParamValue);
	}
	
	native private int get_mCurrentEventX_void(long pNativeObject);
	public int get_mCurrentEventX()
	{
		int jniValue = get_mCurrentEventX_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mCurrentEventX_ev_int32 (long pNativeObject, int value);
	public void set_mCurrentEventX(int mCurrentEventX)
	{
		int mCurrentEventXParamValue = mCurrentEventX;
		
		set_mCurrentEventX_ev_int32(this.nativeObject.pointer, mCurrentEventXParamValue);
	}
	
	native private int get_mCurrentEventY_void(long pNativeObject);
	public int get_mCurrentEventY()
	{
		int jniValue = get_mCurrentEventY_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mCurrentEventY_ev_int32 (long pNativeObject, int value);
	public void set_mCurrentEventY(int mCurrentEventY)
	{
		int mCurrentEventYParamValue = mCurrentEventY;
		
		set_mCurrentEventY_ev_int32(this.nativeObject.pointer, mCurrentEventYParamValue);
	}
	
	native private int get_mPreEventX_void(long pNativeObject);
	public int get_mPreEventX()
	{
		int jniValue = get_mPreEventX_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mPreEventX_ev_int32 (long pNativeObject, int value);
	public void set_mPreEventX(int mPreEventX)
	{
		int mPreEventXParamValue = mPreEventX;
		
		set_mPreEventX_ev_int32(this.nativeObject.pointer, mPreEventXParamValue);
	}
	
	native private int get_mPreEventY_void(long pNativeObject);
	public int get_mPreEventY()
	{
		int jniValue = get_mPreEventY_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mPreEventY_ev_int32 (long pNativeObject, int value);
	public void set_mPreEventY(int mPreEventY)
	{
		int mPreEventYParamValue = mPreEventY;
		
		set_mPreEventY_ev_int32(this.nativeObject.pointer, mPreEventYParamValue);
	}
	
	native private long get_mStartTime_void(long pNativeObject);
	public long get_mStartTime()
	{
		long jniValue = get_mStartTime_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mStartTime_ev_uint32 (long pNativeObject, long value);
	public void set_mStartTime(long mStartTime)
	{
		long mStartTimeParamValue = mStartTime;
		
		set_mStartTime_ev_uint32(this.nativeObject.pointer, mStartTimeParamValue);
	}
	
	native private long get_mStopTime_void(long pNativeObject);
	public long get_mStopTime()
	{
		long jniValue = get_mStopTime_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mStopTime_ev_uint32 (long pNativeObject, long value);
	public void set_mStopTime(long mStopTime)
	{
		long mStopTimeParamValue = mStopTime;
		
		set_mStopTime_ev_uint32(this.nativeObject.pointer, mStopTimeParamValue);
	}
	
	native private boolean get_mIsStartTime_void(long pNativeObject);
	public boolean get_mIsStartTime()
	{
		boolean jniValue = get_mIsStartTime_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsStartTime_ev_bool (long pNativeObject, boolean value);
	public void set_mIsStartTime(boolean mIsStartTime)
	{
		boolean mIsStartTimeParamValue = mIsStartTime;
		
		set_mIsStartTime_ev_bool(this.nativeObject.pointer, mIsStartTimeParamValue);
	}
	
	native private long get_mIntervalTime_void(long pNativeObject);
	public long get_mIntervalTime()
	{
		long jniValue = get_mIntervalTime_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIntervalTime_ev_uint32 (long pNativeObject, long value);
	public void set_mIntervalTime(long mIntervalTime)
	{
		long mIntervalTimeParamValue = mIntervalTime;
		
		set_mIntervalTime_ev_uint32(this.nativeObject.pointer, mIntervalTimeParamValue);
	}
	
	native private long get_mpGlobelControl_void(long pNativeObject);
	public com.earthview.world.spatial3d.controls.GlobeControl get_mpGlobelControl()
	{
		long jniValue = get_mpGlobelControl_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.controls.GlobeControl __returnValue = new com.earthview.world.spatial3d.controls.GlobeControl(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeControl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.GlobeControl)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeControl");
		}
		return __returnValue;
	}
	
	native private void set_mpGlobelControl_CGlobeControl (long pNativeObject, long value);
	public void set_mpGlobelControl(com.earthview.world.spatial3d.controls.GlobeControl mpGlobelControl)
	{
		long mpGlobelControlParamValue = (mpGlobelControl == null ? 0L : mpGlobelControl.nativeObject.pointer);
		
		set_mpGlobelControl_CGlobeControl(this.nativeObject.pointer, mpGlobelControlParamValue);
	}
	
	native private String get_mouseLatitudeString_void(long pNativeObject);
	public String get_mouseLatitudeString()
	{
		String jniValue = get_mouseLatitudeString_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mouseLatitudeString_EVString (long pNativeObject, String value);
	public void set_mouseLatitudeString(String mouseLatitudeString)
	{
		String mouseLatitudeStringParamValue = mouseLatitudeString;
		
		set_mouseLatitudeString_EVString(this.nativeObject.pointer, mouseLatitudeStringParamValue);
	}
	
	native private String get_mouseLongitudeString_void(long pNativeObject);
	public String get_mouseLongitudeString()
	{
		String jniValue = get_mouseLongitudeString_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mouseLongitudeString_EVString (long pNativeObject, String value);
	public void set_mouseLongitudeString(String mouseLongitudeString)
	{
		String mouseLongitudeStringParamValue = mouseLongitudeString;
		
		set_mouseLongitudeString_EVString(this.nativeObject.pointer, mouseLongitudeStringParamValue);
	}
	
	native private String get_mouseAltitudeString_void(long pNativeObject);
	public String get_mouseAltitudeString()
	{
		String jniValue = get_mouseAltitudeString_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mouseAltitudeString_EVString (long pNativeObject, String value);
	public void set_mouseAltitudeString(String mouseAltitudeString)
	{
		String mouseAltitudeStringParamValue = mouseAltitudeString;
		
		set_mouseAltitudeString_EVString(this.nativeObject.pointer, mouseAltitudeStringParamValue);
	}
	
	native private double get_mLat_void(long pNativeObject);
	public double get_mLat()
	{
		double jniValue = get_mLat_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mLat_ev_real64 (long pNativeObject, double value);
	public void set_mLat(double mLat)
	{
		double mLatParamValue = mLat;
		
		set_mLat_ev_real64(this.nativeObject.pointer, mLatParamValue);
	}
	
	native private double get_mLon_void(long pNativeObject);
	public double get_mLon()
	{
		double jniValue = get_mLon_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mLon_ev_real64 (long pNativeObject, double value);
	public void set_mLon(double mLon)
	{
		double mLonParamValue = mLon;
		
		set_mLon_ev_real64(this.nativeObject.pointer, mLonParamValue);
	}
	
	native private double get_mAltitude_void(long pNativeObject);
	public double get_mAltitude()
	{
		double jniValue = get_mAltitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mAltitude_ev_real64 (long pNativeObject, double value);
	public void set_mAltitude(double mAltitude)
	{
		double mAltitudeParamValue = mAltitude;
		
		set_mAltitude_ev_real64(this.nativeObject.pointer, mAltitudeParamValue);
	}
	
	public LatitudeLonitudeTextBox(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LatitudeLonitudeTextBox(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public void additionMouseUp()
	{
		super.additionMouseUp_NoVirtual();
	}
	/**
	 * 处理鼠标按键松开事件
	 * @param event 事件对象
	 */
	public boolean handleMouseUpEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		return super.handleMouseUpEvent_NoVirtual(event);
	}
	/**
	 * 处理鼠标按键移动事件
	 * @param event 事件对象
	 */
	public boolean handleMouseMoveEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		return super.handleMouseMoveEvent_NoVirtual(event);
	}
	/**
	 * 处理鼠标按键按下事件
	 * @param event 事件对象
	 */
	public boolean handleMouseDownEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		return super.handleMouseDownEvent_NoVirtual(event);
	}
	/**
	 * 处理鼠标按键双击按下事件
	 * @param event 事件对象
	 */
	public boolean handeMouseDbClickEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		return super.handeMouseDbClickEvent_NoVirtual(event);
	}
	/**
	 * 处理键盘按下事件
	 * @param event 事件对象
	 */
	public boolean handleKeyDownEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		return super.handleKeyDownEvent_NoVirtual(event);
	}
	/**
	 * 处理键盘松开事件
	 * @param event 事件对象
	 */
	public boolean handleKeyUpEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		return super.handleKeyUpEvent_NoVirtual(event);
	}
	
	native protected void register_additionMouseUp_void(long pNativeObject, String method);
	native protected void register_handleMouseUpEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleMouseMoveEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleMouseDownEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handeMouseDbClickEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleKeyDownEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleKeyUpEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleUserEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleFrameEvent_CGUIEvent_CViewport(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_additionMouseUp_void(this.nativeObject.pointer, "additionMouseUp_void_callback");
			this.register_handleMouseUpEvent_CGUIEvent(this.nativeObject.pointer, "handleMouseUpEvent_CGUIEvent_callback");
			this.register_handleMouseMoveEvent_CGUIEvent(this.nativeObject.pointer, "handleMouseMoveEvent_CGUIEvent_callback");
			this.register_handleMouseDownEvent_CGUIEvent(this.nativeObject.pointer, "handleMouseDownEvent_CGUIEvent_callback");
			this.register_handeMouseDbClickEvent_CGUIEvent(this.nativeObject.pointer, "handeMouseDbClickEvent_CGUIEvent_callback");
			this.register_handleKeyDownEvent_CGUIEvent(this.nativeObject.pointer, "handleKeyDownEvent_CGUIEvent_callback");
			this.register_handleKeyUpEvent_CGUIEvent(this.nativeObject.pointer, "handleKeyUpEvent_CGUIEvent_callback");
			this.register_handleUserEvent_CGUIEvent(this.nativeObject.pointer, "handleUserEvent_CGUIEvent_callback");
			this.register_handleFrameEvent_CGUIEvent_CViewport(this.nativeObject.pointer, "handleFrameEvent_CGUIEvent_CViewport_callback");
		}
	}
	
	public static LatitudeLonitudeTextBox fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LatitudeLonitudeTextBox obj = null;
 		if(baseObj instanceof LatitudeLonitudeTextBox)
		{
			obj = (LatitudeLonitudeTextBox)baseObj;
		} else {
			obj = new LatitudeLonitudeTextBox(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLatitudeLonitudeTextBox");
			obj.increaseCast();
		}

		return obj;
	}
}
