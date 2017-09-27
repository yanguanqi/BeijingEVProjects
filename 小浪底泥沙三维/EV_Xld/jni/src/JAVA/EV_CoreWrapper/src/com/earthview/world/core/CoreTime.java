package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

/**
 * 时间类可以使用该类获得当前系统时间，并提供计时功能
 */
public class CoreTime extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CCoreTime", new CoreTimeClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public CoreTime() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CCoreTime", null);
	}

	/**
	 * 构造函数
	 * @param y 年
	 * @param mon 月
	 * @param d 日
	 * @param h 时
	 * @param m 分
	 * @param s 秒
	 * @param ms 毫秒
	 */
	public CoreTime(int y, int mon, int d, int h, int m, int s, int ms) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer yPtr = new BasePointer(y);
		list.add("y", yPtr.get());
		BasePointer monPtr = new BasePointer(mon);
		list.add("mon", monPtr.get());
		BasePointer dPtr = new BasePointer(d);
		list.add("d", dPtr.get());
		BasePointer hPtr = new BasePointer(h);
		list.add("h", hPtr.get());
		BasePointer mPtr = new BasePointer(m);
		list.add("m", mPtr.get());
		BasePointer sPtr = new BasePointer(s);
		list.add("s", sPtr.get());
		BasePointer msPtr = new BasePointer(ms);
		list.add("ms", msPtr.get());
		Create("CCoreTime", list);
	}

	native private boolean isNull_void(long pNativeObject);
	/**
	 * 时间是否为空，未初始化
	 * @param  
	 * @return 为空返回true，否则返回false
	 */
	public boolean isNull()
	{
		boolean returnValue = isNull_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isValid_void(long pNativeObject);
	/**
	 * 时间是否有效
	 * @param  
	 * @return 有效返回true，否则返回false
	 */
	public boolean isValid()
	{
		boolean returnValue = isValid_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int year_void(long pNativeObject);
	/**
	 * 获得年份
	 * @param  
	 * @return 年份
	 */
	public int year()
	{
		int returnValue = year_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int month_void(long pNativeObject);
	/**
	 * 获得月份
	 * @param  
	 * @return 月份
	 */
	public int month()
	{
		int returnValue = month_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int day_void(long pNativeObject);
	/**
	 * 获得日期
	 * @param  
	 * @return 日期
	 */
	public int day()
	{
		int returnValue = day_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int hour_void(long pNativeObject);
	/**
	 * 获得当天的小时数，24小时制
	 * @param  
	 * @return 小时
	 */
	public int hour()
	{
		int returnValue = hour_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int minute_void(long pNativeObject);
	/**
	 * 获得当前小时的分钟数
	 * @param  
	 * @return 分钟数
	 */
	public int minute()
	{
		int returnValue = minute_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int second_void(long pNativeObject);
	/**
	 * 获得当前分钟的秒数
	 * @param  
	 * @return 秒数
	 */
	public int second()
	{
		int returnValue = second_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int msec_void(long pNativeObject);
	/**
	 * 获得当前秒的毫秒数
	 * @param  
	 * @return 毫秒数
	 */
	public int msec()
	{
		int returnValue = msec_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int daysofmonth_ev_int32_ev_int32(long pNativeObject, int y, int mon);
	/**
	 * 获得当月的天数
	 * @param y 年
	 * @param mon 月
	 * @return 天数
	 */
	public int daysofmonth(int y, int mon)
	{
		int yParamValue = y;
		int monParamValue = mon;
		int returnValue = daysofmonth_ev_int32_ev_int32(this.nativeObject.pointer, yParamValue, monParamValue);
		return returnValue;
	}
	native private boolean setYear_ev_int32(long pNativeObject, int y);
	/**
	 * 设置年份
	 * @param y 年份
	 * @return 成功返回true，否则返回false
	 */
	public boolean setYear(int y)
	{
		int yParamValue = y;
		boolean returnValue = setYear_ev_int32(this.nativeObject.pointer, yParamValue);
		return returnValue;
	}
	native private boolean setMonth_ev_int32(long pNativeObject, int mon);
	/**
	 * 设置月份
	 * @param mon 月份
	 * @return 成功返回true，否则返回false
	 */
	public boolean setMonth(int mon)
	{
		int monParamValue = mon;
		boolean returnValue = setMonth_ev_int32(this.nativeObject.pointer, monParamValue);
		return returnValue;
	}
	native private boolean setDay_ev_int32(long pNativeObject, int d);
	/**
	 * 设置日期
	 * @param d 日期
	 * @return 成功返回true，否则返回false
	 */
	public boolean setDay(int d)
	{
		int dParamValue = d;
		boolean returnValue = setDay_ev_int32(this.nativeObject.pointer, dParamValue);
		return returnValue;
	}
	native private boolean setTime_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int y, int mon, int d, int h, int m, int s, int ms);
	/**
	 * 设置时间
	 * @param y 年
	 * @param mon 月
	 * @param d 日
	 * @param h 时
	 * @param m 分
	 * @param s 秒
	 * @param ms 毫秒
	 * @return 成功返回true，否则返回false
	 */
	public boolean setTime(int y, int mon, int d, int h, int m, int s, int ms)
	{
		int yParamValue = y;
		int monParamValue = mon;
		int dParamValue = d;
		int hParamValue = h;
		int mParamValue = m;
		int sParamValue = s;
		int msParamValue = ms;
		boolean returnValue = setTime_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, yParamValue, monParamValue, dParamValue, hParamValue, mParamValue, sParamValue, msParamValue);
		return returnValue;
	}
	native private boolean setHMS_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int h, int m, int s, int ms);
	/**
	 * 设置当天的时分秒毫秒
	 * @param h 时
	 * @param m 分
	 * @param s 秒
	 * @param ms 毫秒
	 * @return 成功返回true，否则返回false
	 */
	public boolean setHMS(int h, int m, int s, int ms)
	{
		int hParamValue = h;
		int mParamValue = m;
		int sParamValue = s;
		int msParamValue = ms;
		boolean returnValue = setHMS_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, hParamValue, mParamValue, sParamValue, msParamValue);
		return returnValue;
	}
	native private int secsTo_CCoreTime(long pNativeObject, long t);
	/**
	 * 获得本时间到给定时间的时间差，以秒为单位
	 * @param t 给定时间
	 * @return 时间差（秒数）
	 */
	public int secsTo(com.earthview.world.core.CoreTime t)
	{
		long tParamValue = t.nativeObject.pointer;
		int returnValue = secsTo_CCoreTime(this.nativeObject.pointer, tParamValue);
		return returnValue;
	}
	native private long addYear_ev_int32(long pNativeObject, int y);
	/**
	 * 拨动年
	 * @param y 年
	 * @param onlyy 只修改年为true
	 * @return 更改后的时间
	 */
	public com.earthview.world.core.CoreTime addYear(int y)
	{
		int yParamValue = y;
		long returnValue = addYear_ev_int32(this.nativeObject.pointer, yParamValue);
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
	native private long addMon_ev_int32_ev_bool(long pNativeObject, int mon, boolean onlymon);
	/**
	 * 拨动月
	 * @param mon 月数
	 * @param onlymon 只修改月时为true
	 * @return 更改后的时间
	 */
	public com.earthview.world.core.CoreTime addMon(int mon, boolean onlymon)
	{
		int monParamValue = mon;
		boolean onlymonParamValue = onlymon;
		long returnValue = addMon_ev_int32_ev_bool(this.nativeObject.pointer, monParamValue, onlymonParamValue);
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
	native private long addDay_ev_int32(long pNativeObject, int d);
	/**
	 * 拨动天数
	 * @param d 天数
	 * @return 更改后的时间
	 */
	public com.earthview.world.core.CoreTime addDay(int d)
	{
		int dParamValue = d;
		long returnValue = addDay_ev_int32(this.nativeObject.pointer, dParamValue);
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
	native private long addHour_ev_int32(long pNativeObject, int h);
	/**
	 * 拨动时针
	 * @param h 小时数
	 * @return 更改后的时间
	 */
	public com.earthview.world.core.CoreTime addHour(int h)
	{
		int hParamValue = h;
		long returnValue = addHour_ev_int32(this.nativeObject.pointer, hParamValue);
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
	native private long addMin_ev_int32(long pNativeObject, int min);
	/**
	 * 拨动分针
	 * @param min 分钟数
	 * @return 更改后的时间
	 */
	public com.earthview.world.core.CoreTime addMin(int min)
	{
		int minParamValue = min;
		long returnValue = addMin_ev_int32(this.nativeObject.pointer, minParamValue);
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
	native private long addSecs_ev_int32(long pNativeObject, int secs);
	/**
	 * 拨动秒针
	 * @param secs 秒数
	 * @return 更改后的时间
	 */
	public com.earthview.world.core.CoreTime addSecs(int secs)
	{
		int secsParamValue = secs;
		long returnValue = addSecs_ev_int32(this.nativeObject.pointer, secsParamValue);
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
	native private long addMSecs_ev_int32(long pNativeObject, int ms);
	/// <summary>
	/// 拨动毫秒针
	/// </summary>
	/// <param name="ms">毫秒数</param>
	/// ms + m_nMillisecondsOfDay < 2147483647
	/// 2147483647 = 24*MSECS_PER_DAY + 73883647
	/// 故限定 ms <= 23*MSECS_PER_DAY
	/// <returns>更改后的时间</returns>
	public com.earthview.world.core.CoreTime addMSecs(int ms)
	{
		int msParamValue = ms;
		long returnValue = addMSecs_ev_int32(this.nativeObject.pointer, msParamValue);
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
	native private int msecsTo_CCoreTime(long pNativeObject, long t);
	/**
	 * 获得本时间到给定时间的时间差，以毫秒为单位
	 * @param t 给定时间
	 * @return 时间差（毫秒数）
	 */
	public int msecsTo(com.earthview.world.core.CoreTime t)
	{
		long tParamValue = t.nativeObject.pointer;
		int returnValue = msecsTo_CCoreTime(this.nativeObject.pointer, tParamValue);
		return returnValue;
	}
	native private boolean OperatorEquals_CCoreTime(long pNativeObject, long other);
	/**
	 * 重载==运算符
	 * @param other 右操作数
	 * @return 相等返回true，否则返回false
	 */
	public boolean OperatorEquals(com.earthview.world.core.CoreTime other)
	{
		long otherParamValue = other.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CCoreTime(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CCoreTime(long pNativeObject, long other);
	/**
	 * 重载!=运算符
	 * @param other 右操作数
	 * @return 不相等返回true，否则返回false
	 */
	public boolean OperatorNotEquals(com.earthview.world.core.CoreTime other)
	{
		long otherParamValue = other.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CCoreTime(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	native private boolean OperatorLessThan_CCoreTime(long pNativeObject, long other);
	/// <summary>
	/// 重载<运算符
	/// </summary>
	/// <param name="other">右操作数</param>
	/// <returns>小于返回true，否则返回false</returns>
	public boolean OperatorLessThan(com.earthview.world.core.CoreTime other)
	{
		long otherParamValue = other.nativeObject.pointer;
		boolean returnValue = OperatorLessThan_CCoreTime(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	native private boolean OperatorLessThanOrEqual_CCoreTime(long pNativeObject, long other);
	/// <summary>
	/// 重载<=运算符
	/// </summary>
	/// <param name="other">右操作数</param>
	/// <returns>小于等于返回true，否则返回false</returns>
	public boolean OperatorLessThanOrEqual(com.earthview.world.core.CoreTime other)
	{
		long otherParamValue = other.nativeObject.pointer;
		boolean returnValue = OperatorLessThanOrEqual_CCoreTime(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	native private boolean OperatorGreaterThan_CCoreTime(long pNativeObject, long other);
	/**
	 * 重载>运算符
	 * @param other 右操作数
	 * @return 大于返回true，否则返回false
	 */
	public boolean OperatorGreaterThan(com.earthview.world.core.CoreTime other)
	{
		long otherParamValue = other.nativeObject.pointer;
		boolean returnValue = OperatorGreaterThan_CCoreTime(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	native private boolean OperatorGreaterThanOrEqual_CCoreTime(long pNativeObject, long other);
	/**
	 * 重载>=运算符
	 * @param other 右操作数
	 * @return 大于等于返回true，否则返回false
	 */
	public boolean OperatorGreaterThanOrEqual(com.earthview.world.core.CoreTime other)
	{
		long otherParamValue = other.nativeObject.pointer;
		boolean returnValue = OperatorGreaterThanOrEqual_CCoreTime(this.nativeObject.pointer, otherParamValue);
		return returnValue;
	}
	native private static long currentTime_void();
	/**
	 * 获得当前系统时间
	 * @param  
	 * @return 当前系统时间
	 */
	public static com.earthview.world.core.CoreTime currentTime()
	{
		long returnValue = currentTime_void();
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
	native private static long getTickCount_void();
	public static long getTickCount()
	{
		long returnValue = getTickCount_void();
		return returnValue;
	}
	native private static boolean isValid_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32(int y, int mon, int d, int h, int m, int s, int ms);
	/**
	 * 判断给定时间是否有效
	 * @param y 年
	 * @param mon 月
	 * @param d 日
	 * @param h 时
	 * @param m 分
	 * @param s 秒
	 * @param ms 毫秒
	 * @return 有效返回true，否则返回false
	 */
	public static boolean isValid(int y, int mon, int d, int h, int m, int s, int ms)
	{
		int yParamValue = y;
		int monParamValue = mon;
		int dParamValue = d;
		int hParamValue = h;
		int mParamValue = m;
		int sParamValue = s;
		int msParamValue = ms;
		boolean returnValue = isValid_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32(yParamValue, monParamValue, dParamValue, hParamValue, mParamValue, sParamValue, msParamValue);
		return returnValue;
	}
	native private void start_void(long pNativeObject);
	/**
	 * 从当前时间开始计时
	 * @param  
	 */
	public void start()
	{
		start_void(this.nativeObject.pointer);
	}
	native private int restart_void(long pNativeObject);
	/**
	 * 返回从开始计时起经过了多少毫秒并重新开始计时
	 * @param  
	 * @return 毫秒数
	 */
	public int restart()
	{
		int returnValue = restart_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int elapsed_void(long pNativeObject);
	/**
	 * 返回从计时起经过了多少毫秒
	 * @param  
	 * @return 毫秒数
	 */
	public int elapsed()
	{
		int returnValue = elapsed_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getDs_void(long pNativeObject);
	/**
	 * 获得当天经过了多少毫秒
	 * @param  
	 * @return 毫秒数
	 */
	public long getDs()
	{
		long returnValue = getDs_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDs_ev_uint32(long pNativeObject, long value);
	/**
	 * 设置当天已经过的毫秒数
	 * @param value 毫秒数
	 */
	public void setDs(long value)
	{
		long valueParamValue = value;
		setDs_ev_uint32(this.nativeObject.pointer, valueParamValue);
	}
	native private long OperatorAssign_CCoreTime(long pNativeObject, long time);
	/**
	 * 重载=运算符
	 * @param time 右操作数
	 * @return 本对象
	 */
	public com.earthview.world.core.CoreTime OperatorAssign(com.earthview.world.core.CoreTime time)
	{
		long timeParamValue = time.nativeObject.pointer;
		long returnValue = OperatorAssign_CCoreTime(this.nativeObject.pointer, timeParamValue);
		com.earthview.world.core.CoreTime __returnValue = new com.earthview.world.core.CoreTime(CreatedWhenConstruct.CWC_NotToCreate, "CCoreTime");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.CoreTime)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCoreTime");
		}
		return __returnValue;
	}
	native private String ev_toString_void(long pNativeObject);
	/**
	 * 当前时间转换成字符串Y_M_D_H_M_S_MS
	 * @param  
	 */
	public String ev_toString()
	{
		String returnValue = ev_toString_void(this.nativeObject.pointer);
		return returnValue;
	}
	public CoreTime(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CoreTime(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CoreTime fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CoreTime obj = null;
 		if(baseObj instanceof CoreTime)
		{
			obj = (CoreTime)baseObj;
		} else {
			obj = new CoreTime(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCoreTime");
			obj.increaseCast();
		}

		return obj;
	}
}
