package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 跟踪项类
 */
public class TrackingItem extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CTrackingItem", new TrackingItemClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCTrackingItemProxy", new TrackingItemClassFactory());
	}

	protected  long boundingRect_void_callback()
	{
		com.earthview.world.spatial.display.SpatialRect returnValue = boundingRect();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long boundingRect_void(long pNativeObject);
	/**
	 * 获取包围盒,派生类必须重新实现
	 * @param  
	 * @return 追踪项的范围
	 */
	public com.earthview.world.spatial.display.SpatialRect boundingRect()
	{
		long returnValue = boundingRect_void(this.nativeObject.pointer);
		com.earthview.world.spatial.display.SpatialRect __returnValue = new com.earthview.world.spatial.display.SpatialRect(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SpatialRect)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		}
		return __returnValue;
	}
	native private long boundingRect_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.SpatialRect boundingRect_NoVirtual()
	{
		long returnValue = boundingRect_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.display.SpatialRect __returnValue = new com.earthview.world.spatial.display.SpatialRect(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SpatialRect)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		}
		return __returnValue;
	}

	protected  void paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_callback(long display, int state, long rect)
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
		com.earthview.world.spatial2d.controls.EVTrackingItemState stateParamValue = com.earthview.world.spatial2d.controls.EVTrackingItemState.toEnum(state);
		com.earthview.world.spatial.display.SpatialRect rectParamValue = new com.earthview.world.spatial.display.SpatialRect(CreatedWhenConstruct.CWC_NotToCreate);
		rectParamValue.setDelegate(true);
		rectParamValue.setInstancePointer(new InstancePointer(rect));
		IClassFactory rectParamValueClassFactory = GlobalClassFactoryMap.get(rectParamValue.getCppInstanceTypeName());
		if (rectParamValueClassFactory != null)
		{
			rectParamValue.setDelegate(true);
			rectParamValue = (com.earthview.world.spatial.display.SpatialRect)rectParamValueClassFactory.create();
			rectParamValue.setDelegate(true);
			rectParamValue.setInstancePointer(new InstancePointer(rect));
		}
		paint(displayParamValue, stateParamValue, rectParamValue);
	}

	native private void paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect(long pNativeObject, long display, int state, long rect);
	/**
	 * 绘制追踪项,派生类必须重新实现
	 * @param display 显示设备对象
	 * @param state 跟踪目标状态
	 * @param rect 绘制范围
	 */
	public void paint(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial2d.controls.EVTrackingItemState state, com.earthview.world.spatial.display.SpatialRect rect)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		int stateParamValue = state.getValue();
		long rectParamValue = rect.nativeObject.pointer;
		paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect(this.nativeObject.pointer, displayParamValue, stateParamValue, rectParamValue);
	}
	native private void paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_NoVirtual(long pNativeObject, long display, int state, long rect);
	protected void paint_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial2d.controls.EVTrackingItemState state, com.earthview.world.spatial.display.SpatialRect rect)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		int stateParamValue = state.getValue();
		long rectParamValue = rect.nativeObject.pointer;
		paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_NoVirtual(this.nativeObject.pointer, displayParamValue, stateParamValue, rectParamValue);
	}

	native private boolean isContains_CPoint(long pNativeObject, long pnt);
	/**
	 * 判断追踪项是否包含指定坐标
	 * @param pnt 空间点
	 * @return true，包含点pnt，false不包含
	 */
	public boolean isContains(com.earthview.world.spatial.geometry.Point pnt)
	{
		long pntParamValue = (pnt == null ? 0L : pnt.nativeObject.pointer);
		boolean returnValue = isContains_CPoint(this.nativeObject.pointer, pntParamValue);
		return returnValue;
	}
	protected  boolean isContains_ev_real64_ev_real64_callback(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		boolean returnValue = isContains(xParamValue, yParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isContains_ev_real64_ev_real64(long pNativeObject, double x, double y);
	/**
	 * 判断追踪项是否包含指定坐标
	 * @param x X坐标
	 * @param y Y坐标
	 * @return true，包含点，false不包含
	 */
	public boolean isContains(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		boolean returnValue = isContains_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue);
		return returnValue;
	}
	native private boolean isContains_ev_real64_ev_real64_NoVirtual(long pNativeObject, double x, double y);
	protected boolean isContains_NoVirtual(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		boolean returnValue = isContains_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue);
		return returnValue;
	}

	protected  int type_void_callback()
	{
		int returnValue = type();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int type_void(long pNativeObject);
	/**
	 * 获取追踪项类型
	 * @param  
	 * @return 对象类型
	 */
	public int type()
	{
		int returnValue = type_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int type_void_NoVirtual(long pNativeObject);
	protected int type_NoVirtual()
	{
		int returnValue = type_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private int flags_void(long pNativeObject);
	/**
	 * 获取追踪项属性标志
	 * @param  
	 */
	public com.earthview.world.spatial2d.controls.EVTrackingItemFlags flags()
	{
		int returnValue = flags_void(this.nativeObject.pointer);
		return com.earthview.world.spatial2d.controls.EVTrackingItemFlags.toEnum(returnValue);
	}
	native private void setFlags_EVTrackingItemFlags(long pNativeObject, int flags);
	/**
	 * 设置追踪项属性标志
	 * @param flags 标志
	 * @return 对象类型
	 */
	public void setFlags(com.earthview.world.spatial2d.controls.EVTrackingItemFlags flags)
	{
		int flagsParamValue = flags.getValue();
		setFlags_EVTrackingItemFlags(this.nativeObject.pointer, flagsParamValue);
	}
	native private boolean isInterest_void(long pNativeObject);
	/**
	 * 返回地图漫游或缩放时是否实时刷新此项
	 * @param  
	 * @return 返回true表示已设置为实时刷新
	 */
	public boolean isInterest()
	{
		boolean returnValue = isInterest_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setInterest_ev_bool(long pNativeObject, boolean b);
	/**
	 * 设置地图漫游或缩放时是否实时刷新此项
	 * @param b true为设置实时刷新
	 */
	public void setInterest(boolean b)
	{
		boolean bParamValue = b;
		setInterest_ev_bool(this.nativeObject.pointer, bParamValue);
	}
	native private int unitType_void(long pNativeObject);
	/**
	 * 获取跟踪项中数据类型(地理单位/像素单位)
	 * @param  
	 * @return 坐标单位类型
	 */
	public com.earthview.world.spatial2d.controls.EVTrackingItemUnit unitType()
	{
		int returnValue = unitType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial2d.controls.EVTrackingItemUnit.toEnum(returnValue);
	}
	native private long id_void(long pNativeObject);
	/**
	 * 获取追踪项的ID号
	 * @param  
	 * @return 追踪项的唯一ID类型
	 */
	public long id()
	{
		long returnValue = id_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int cacheMode_void(long pNativeObject);
	/**
	 * 获取缓存模式
	 * @param  
	 * @return 缓存模式
	 */
	public com.earthview.world.spatial2d.controls.EVCacheMode cacheMode()
	{
		int returnValue = cacheMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial2d.controls.EVCacheMode.toEnum(returnValue);
	}
	native private void setCacheMode_EVCacheMode(long pNativeObject, int mode);
	/**
	 * 设置缓存模式
	 * @param mode 缓存模式
	 */
	public void setCacheMode(com.earthview.world.spatial2d.controls.EVCacheMode mode)
	{
		int modeParamValue = mode.getValue();
		setCacheMode_EVCacheMode(this.nativeObject.pointer, modeParamValue);
	}
	native private void setPositionType_EVTrackingItemPosition(long pNativeObject, int type);
	/**
	 * 设置位置时,该位置所指定跟踪项的外包围框的方位
	 * @param type 位置类型
	 */
	public void setPositionType(com.earthview.world.spatial2d.controls.EVTrackingItemPosition type)
	{
		int typeParamValue = type.getValue();
		setPositionType_EVTrackingItemPosition(this.nativeObject.pointer, typeParamValue);
	}
	native private int getPositionType_void(long pNativeObject);
	/**
	 * 获取位置所指定跟踪项的外包围框的方位
	 * @param  
	 * @return 位置类型
	 */
	public com.earthview.world.spatial2d.controls.EVTrackingItemPosition getPositionType()
	{
		int returnValue = getPositionType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial2d.controls.EVTrackingItemPosition.toEnum(returnValue);
	}
	native private int cursor_void(long pNativeObject);
	/**
	 * 获取鼠标盘旋于当前跟踪项上面时的光标状态
	 * @param  
	 */
	public int cursor()
	{
		int returnValue = cursor_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCursor_ev_int32(long pNativeObject, int cursor);
	/**
	 * 设置鼠标盘旋于当前跟踪项上面时的光标状态
	 * @param  
	 */
	public void setCursor(int cursor)
	{
		int cursorParamValue = cursor;
		setCursor_ev_int32(this.nativeObject.pointer, cursorParamValue);
	}
	native private boolean isVisible_void(long pNativeObject);
	/**
	 * 是否可见
	 * @param  
	 * @return true,可见，false不可见
	 */
	public boolean isVisible()
	{
		boolean returnValue = isVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 设置是否可见
	 * @param visible 可见标识
	 * @return 
	 */
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private boolean isShowAsScale_void(long pNativeObject);
	/**
	 * 是否随比例尺变化来显示
	 * @param  
	 */
	public boolean isShowAsScale()
	{
		boolean returnValue = isShowAsScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setShowAsScale_ev_bool(long pNativeObject, boolean bAs);
	/**
	 * 设置是否随比例尺来进行显示
	 * @param bAs 是否跟随比例尺进行显示
	 */
	public void setShowAsScale(boolean bAs)
	{
		boolean bAsParamValue = bAs;
		setShowAsScale_ev_bool(this.nativeObject.pointer, bAsParamValue);
	}
	native private double minScale_void(long pNativeObject);
	/**
	 * 获取最小显示比例尺
	 * @param  
	 * @return 最小显示比例尺
	 */
	public double minScale()
	{
		double returnValue = minScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMinScale_ev_real64(long pNativeObject, double minSclae);
	/**
	 * 设置最小显示比例尺
	 * @param minScale 最小显示比例尺
	 */
	public void setMinScale(double minSclae)
	{
		double minSclaeParamValue = minSclae;
		setMinScale_ev_real64(this.nativeObject.pointer, minSclaeParamValue);
	}
	native private double maxScale_void(long pNativeObject);
	/**
	 * 获取最大显示比例尺
	 * @param  
	 * @return 最大显示比例尺
	 */
	public double maxScale()
	{
		double returnValue = maxScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMaxScale_ev_real64(long pNativeObject, double maxScale);
	/**
	 * 设置最大显示比例尺
	 * @param maxScale 最大显示比例尺
	 * @return true,可见，false不可见
	 */
	public void setMaxScale(double maxScale)
	{
		double maxScaleParamValue = maxScale;
		setMaxScale_ev_real64(this.nativeObject.pointer, maxScaleParamValue);
	}
	native private boolean isSelected_void(long pNativeObject);
	/**
	 * 是否被选中
	 * @param  
	 * @return true,选中，false未选中
	 */
	public boolean isSelected()
	{
		boolean returnValue = isSelected_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSelected_ev_bool(long pNativeObject, boolean selected);
	/**
	 * 设置是否被选中
	 * @param visible 选中标识
	 * @return 
	 */
	public void setSelected(boolean selected)
	{
		boolean selectedParamValue = selected;
		setSelected_ev_bool(this.nativeObject.pointer, selectedParamValue);
	}
	native private boolean isLocked_void(long pNativeObject);
	/**
	 * 跟踪项在窗口的位置是否被锁定
	 * @param  
	 * @return 
	 */
	public boolean isLocked()
	{
		boolean returnValue = isLocked_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLocked_ev_bool(long pNativeObject, boolean lock);
	/**
	 * 设置跟踪项在窗口的位置是否被锁定
	 * @param lock 如果为true,则锁定，反之则否
	 * @return 
	 */
	public void setLocked(boolean lock)
	{
		boolean lockParamValue = lock;
		setLocked_ev_bool(this.nativeObject.pointer, lockParamValue);
	}
	native private long pos_void(long pNativeObject);
	/**
	 * 获取当前跟踪项的位置
	 * @param  
	 * @return 当前位置坐标
	 */
	public com.earthview.world.spatial.geometry.Point pos()
	{
		long returnValue = pos_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	native private void setPos_ev_real64_ev_real64(long pNativeObject, double x, double y);
	/**
	 * 设置当前跟踪项的位置
	 * @param x X坐标
	 * @param y Y坐标
	 */
	public void setPos(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		setPos_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue);
	}
	native private void setPos_CPoint(long pNativeObject, long pos);
	/**
	 * 设置当前跟踪项的位置
	 * @param pos 位置点
	 */
	public void setPos(com.earthview.world.spatial.geometry.Point pos)
	{
		long posParamValue = (pos == null ? 0L : pos.nativeObject.pointer);
		setPos_CPoint(this.nativeObject.pointer, posParamValue);
	}
	native private double transparent_void(long pNativeObject);
	/**
	 * 获取透明度，0~1.0之间
	 * @param  
	 * @return 透明度值
	 */
	public double transparent()
	{
		double returnValue = transparent_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTransparent_ev_real64(long pNativeObject, double value);
	/**
	 * 设置透明度，0~1.0之间
	 * @param value 透明度值
	 */
	public void setTransparent(double value)
	{
		double valueParamValue = value;
		setTransparent_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private double rotation_void(long pNativeObject);
	/**
	 * 获取旋转角度
	 * @param  
	 * @return 旋转角度
	 */
	public double rotation()
	{
		double returnValue = rotation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRotation_ev_real64(long pNativeObject, double rotation);
	/**
	 * 设置旋转角度
	 * @param rotation 旋转度
	 */
	public void setRotation(double rotation)
	{
		double rotationParamValue = rotation;
		setRotation_ev_real64(this.nativeObject.pointer, rotationParamValue);
	}
	native private double scale_void(long pNativeObject);
	/**
	 * 获取缩放因子
	 * @param  
	 * @return 缩放因子
	 */
	public double scale()
	{
		double returnValue = scale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setScale_ev_real64(long pNativeObject, double scale);
	/**
	 * 设置缩放因子
	 * @param scale 缩放因子
	 */
	public void setScale(double scale)
	{
		double scaleParamValue = scale;
		setScale_ev_real64(this.nativeObject.pointer, scaleParamValue);
	}
	native private String toolTip_void(long pNativeObject);
	/**
	 * 获取提示信息
	 * @param  
	 * @return 提示信息
	 */
	public String toolTip()
	{
		String returnValue = toolTip_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setToolTip_EVString(long pNativeObject, String tip);
	/**
	 * 设置提示信息
	 * @param tip 
	 * @return 提示信息
	 */
	public void setToolTip(String tip)
	{
		String tipParamValue = tip;
		setToolTip_EVString(this.nativeObject.pointer, tipParamValue);
	}
	native private long parentItem_void(long pNativeObject);
	/**
	 * 获取父节点指针
	 * @param  
	 * @return 父节点指针
	 */
	public com.earthview.world.spatial2d.controls.TrackingItem parentItem()
	{
		long returnValue = parentItem_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.TrackingItem __returnValue = new com.earthview.world.spatial2d.controls.TrackingItem(CreatedWhenConstruct.CWC_NotToCreate, "CTrackingItem");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.TrackingItem)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTrackingItem");
		}
		return __returnValue;
	}
	native private void setParentItem_CTrackingItem(long pNativeObject, long ref_newParent);
	/**
	 * 设置父节点指针
	 * @param newParent 父节点指针
	 */
	public void setParentItem(com.earthview.world.spatial2d.controls.TrackingItem ref_newParent)
	{
		long ref_newParentParamValue = (ref_newParent == null ? 0L : ref_newParent.nativeObject.pointer);
		setParentItem_CTrackingItem(this.nativeObject.pointer, ref_newParentParamValue);
	}
	native private double zValue_void(long pNativeObject);
	/**
	 * 获取跟踪项的Ｚ值，该值描述了项的叠加关系，Z值比较大的项会在Z值比较小的项上绘制
	 * @param  
	 * @return z值
	 */
	public double zValue()
	{
		double returnValue = zValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setZValue_ev_real64(long pNativeObject, double zVar);
	/**
	 * 设置Z值
	 * @param zVar Z值
	 */
	public void setZValue(double zVar)
	{
		double zVarParamValue = zVar;
		setZValue_ev_real64(this.nativeObject.pointer, zVarParamValue);
	}
	native private void transform_ev_real64_ev_real64_ev_int32_EVTransformDirection(long pNativeObject, long x, long y, int count, int direct);
	/**
	 * 坐标变换
	 * @param x x坐标数组
	 * @param y x坐标数组
	 * @param count 坐标对个数
	 * @param direct 转换方向
	 */
	public void transform(DoublePointer x, DoublePointer y, int count, com.earthview.world.spatial2d.controls.EVTransformDirection direct)
	{
		long xParamValue = (x == null ? 0L : x.nativeObject.pointer);
		long yParamValue = (y == null ? 0L : y.nativeObject.pointer);
		int countParamValue = count;
		int directParamValue = direct.getValue();
		transform_ev_real64_ev_real64_ev_int32_EVTransformDirection(this.nativeObject.pointer, xParamValue, yParamValue, countParamValue, directParamValue);
	}
	native private void transform_CPoint_EVTransformDirection(long pNativeObject, long pnt, int direct);
	/**
	 * 坐标变换
	 * @param pnt 坐标数组
	 * @param direct 转换方向
	 */
	public void transform(com.earthview.world.spatial.geometry.Point pnt, com.earthview.world.spatial2d.controls.EVTransformDirection direct)
	{
		long pntParamValue = (pnt == null ? 0L : pnt.nativeObject.pointer);
		int directParamValue = direct.getValue();
		transform_CPoint_EVTransformDirection(this.nativeObject.pointer, pntParamValue, directParamValue);
	}
	native private void transform_CSpatialRect_EVTransformDirection(long pNativeObject, long rect, int direct);
	/**
	 * 范围转换
	 * @param rect 矩形范围
	 * @param direct 转换方向
	 */
	public void transform(com.earthview.world.spatial.display.SpatialRect rect, com.earthview.world.spatial2d.controls.EVTransformDirection direct)
	{
		long rectParamValue = rect.nativeObject.pointer;
		int directParamValue = direct.getValue();
		transform_CSpatialRect_EVTransformDirection(this.nativeObject.pointer, rectParamValue, directParamValue);
	}
	public TrackingItem(com.earthview.world.spatial2d.controls.EVTrackingItemUnit unitType) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer unitTypePtr = new BasePointer(unitType);
		list.add("unitType", unitTypePtr.get());
		Create("JCTrackingItemProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.controls.TrackingItem".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public TrackingItem(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TrackingItem(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_boundingRect_void(long pNativeObject, String method);
	native protected void register_paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect(long pNativeObject, String method);
	native protected void register_isContains_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_type_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_boundingRect_void(this.nativeObject.pointer, "boundingRect_void_callback");
			this.register_paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect(this.nativeObject.pointer, "paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_callback");
			this.register_isContains_ev_real64_ev_real64(this.nativeObject.pointer, "isContains_ev_real64_ev_real64_callback");
			this.register_type_void(this.nativeObject.pointer, "type_void_callback");
		}
	}
	
	public static TrackingItem fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TrackingItem obj = null;
 		if(baseObj instanceof TrackingItem)
		{
			obj = (TrackingItem)baseObj;
		} else {
			obj = new TrackingItem(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTrackingItem");
			obj.increaseCast();
		}

		return obj;
	}
}
