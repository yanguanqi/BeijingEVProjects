package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///思路：将一条LineString分解成多条，并且根据比例尺分为若干个等级。每条LineString点数一定
///添加点时，不同等级根据当前点与前一点的像素差判断是否需要添加及刷新地图
///添加一个点，每个等级下的Linestring组都需要判断是否需要添加此点
///地图绘制前，选择与屏幕范围有交集的当前级别下的所有linestring添加到跟踪项
///参数需要根据实际应用情况、以及实际显示效果进行调整，当前参数在过渡效果中并不理想，可以增加等级、调整权重，或者采用其他策略
///此类可添加设置跟踪项符号的接口
public class LinestringTrackingItemWrapper extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("CLinestringTrackingItemWrapper", new LinestringTrackingItemWrapperClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public LinestringTrackingItemWrapper(com.earthview.world.spatial2d.controls.MapControl ref_mapcontrol) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_mapcontrolPtr = new BasePointer(ref_mapcontrol);
		list.add("ref_mapcontrol", ref_mapcontrolPtr.get());
		Create("CLinestringTrackingItemWrapper", list);
	}

	/**
	 * 构造函数默认值：pointCountPerLine(100)每条线最多点数levelCount(10)级别数tolerance(5)线段化简容差（像素，内部换算），越大表示化简力度越大。使用此构造函数，还需调用
	 */
	public LinestringTrackingItemWrapper(com.earthview.world.spatial2d.controls.MapControl ref_mapcontrol, int pointCountPerLine, int levelCount, int tolerance) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_mapcontrolPtr = new BasePointer(ref_mapcontrol);
		list.add("ref_mapcontrol", ref_mapcontrolPtr.get());
		BasePointer pointCountPerLinePtr = new BasePointer(pointCountPerLine);
		list.add("pointCountPerLine", pointCountPerLinePtr.get());
		BasePointer levelCountPtr = new BasePointer(levelCount);
		list.add("levelCount", levelCountPtr.get());
		BasePointer tolerancePtr = new BasePointer(tolerance);
		list.add("tolerance", tolerancePtr.get());
		Create("CLinestringTrackingItemWrapper", list);
	}

	native private void setLevelScale_ev_int32_ev_real64(long pNativeObject, int level, double scale);
	/**
	 * 设置每个级别的最小比例尺,level从0开始
	 */
	public void setLevelScale(int level, double scale)
	{
		int levelParamValue = level;
		double scaleParamValue = scale;
		setLevelScale_ev_int32_ev_real64(this.nativeObject.pointer, levelParamValue, scaleParamValue);
	}
	native private void setSymbol_ISymbol(long pNativeObject, long pSymbol);
	/**
	 * 设置符号
	 */
	public void setSymbol(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		setSymbol_ISymbol(this.nativeObject.pointer, pSymbolParamValue);
	}
	native private void addPoint_CPoint(long pNativeObject, long point);
	/**
	 * 添加点，通过距离判断是否添加。其中判断机制可修改
	 */
	public void addPoint(com.earthview.world.spatial.geometry.Point point)
	{
		long pointParamValue = (point == null ? 0L : point.nativeObject.pointer);
		addPoint_CPoint(this.nativeObject.pointer, pointParamValue);
	}
	native private void refresh_void(long pNativeObject);
	/**
	 * 刷新，此函数会在地图刷新前被调用，会选择与屏幕范围有交集的当前级别下的所有linestring添加到跟踪项
	 */
	public void refresh()
	{
		refresh_void(this.nativeObject.pointer);
	}
	public LinestringTrackingItemWrapper(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LinestringTrackingItemWrapper(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LinestringTrackingItemWrapper fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LinestringTrackingItemWrapper obj = null;
 		if(baseObj instanceof LinestringTrackingItemWrapper)
		{
			obj = (LinestringTrackingItemWrapper)baseObj;
		} else {
			obj = new LinestringTrackingItemWrapper(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLinestringTrackingItemWrapper");
			obj.increaseCast();
		}

		return obj;
	}
}
