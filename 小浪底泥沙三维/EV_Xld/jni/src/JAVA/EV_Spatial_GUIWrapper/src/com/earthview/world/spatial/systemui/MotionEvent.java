package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///手势事件
public class MotionEvent extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::MotionEvent", new MotionEventClassFactory());
	}

	public enum MotionEventType implements INativeEnum<MotionEventType> {
		MET_Down(MotionEventTypeHelper.ENUM_VALUES[0]),
		MET_Up(MotionEventTypeHelper.ENUM_VALUES[1]),
		MET_Move(MotionEventTypeHelper.ENUM_VALUES[2]);
		private int value;
		MotionEventType(int i) {
			this.value = i;
		}
		public MotionEventType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final MotionEventType toEnum(int retval) {
			if(retval == MET_Down.value){
				return MET_Down;
			}
			else if(retval == MET_Up.value){
				return MET_Up;
			}
			else if(retval == MET_Move.value){
				return MET_Move;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class MotionEventTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	///释放
	public MotionEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("MotionEvent", null);
	}

	native private void setEventTime_CCoreTime(long pNativeObject, long time);
	/**
	 * 设置手势事件产生的时间
	 * @param y 年
	 * @param mon 月
	 * @param d 日
	 * @param h 时
	 * @param m 分
	 * @param s 秒
	 * @param ms 毫秒
	 */
	public void setEventTime(com.earthview.world.core.CoreTime time)
	{
		long timeParamValue = time.nativeObject.pointer;
		setEventTime_CCoreTime(this.nativeObject.pointer, timeParamValue);
	}
	native private long getEventTime_void(long pNativeObject);
	/**
	 * 获取手势事件产生的时间
	 * @param type 事件类型
	 */
	public com.earthview.world.core.CoreTime getEventTime()
	{
		long returnValue = getEventTime_void(this.nativeObject.pointer);
		com.earthview.world.core.CoreTime __returnValue = new com.earthview.world.core.CoreTime(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CCoreTime");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.CoreTime)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCoreTime");
		}
		return __returnValue;
	}
	native private void setEventType_MotionEventType(long pNativeObject, int type);
	/**
	 * 设置手势事件类型，该类型通过操作系统手势事件传递
	 * @param type 事件类型
	 */
	public void setEventType(com.earthview.world.spatial.systemui.MotionEvent.MotionEventType type)
	{
		int typeParamValue = type.getValue();
		setEventType_MotionEventType(this.nativeObject.pointer, typeParamValue);
	}
	native private int getEventType_void(long pNativeObject);
	/**
	 * 返回手势事件类型
	 * @param  
	 * @return 手势事件类型
	 */
	public com.earthview.world.spatial.systemui.MotionEvent.MotionEventType getEventType()
	{
		int returnValue = getEventType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.systemui.MotionEvent.MotionEventType.toEnum(returnValue);
	}
	native private boolean addTouchPoint_ev_real64_ev_real64(long pNativeObject, double x, double y);
	/**
	 * 添加手势接触点
	 * @param x 接触点x坐标
	 * @param y 接触点y坐标
	 */
	public boolean addTouchPoint(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		boolean returnValue = addTouchPoint_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue);
		return returnValue;
	}
	native private void clearTouchPoint_void(long pNativeObject);
	/**
	 * 清除所有手势接触点
	 * @param  
	 */
	public void clearTouchPoint()
	{
		clearTouchPoint_void(this.nativeObject.pointer);
	}
	native private double pointerCount_void(long pNativeObject);
	/**
	 * 返回手势事件接触点数量
	 * @param  
	 * @return 接触点数量
	 */
	public double pointerCount()
	{
		double returnValue = pointerCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getX_ev_int16(long pNativeObject, short index);
	/**
	 * 获取指定编号接触点的x坐标值
	 * @param index 接触点编号
	 */
	public double getX(short index)
	{
		short indexParamValue = index;
		double returnValue = getX_ev_int16(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private double getY_ev_int16(long pNativeObject, short index);
	/**
	 * 获取指定编号接触点的y坐标值
	 * @param  
	 */
	public double getY(short index)
	{
		short indexParamValue = index;
		double returnValue = getY_ev_int16(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	public MotionEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MotionEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MotionEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MotionEvent obj = null;
 		if(baseObj instanceof MotionEvent)
		{
			obj = (MotionEvent)baseObj;
		} else {
			obj = new MotionEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "MotionEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
