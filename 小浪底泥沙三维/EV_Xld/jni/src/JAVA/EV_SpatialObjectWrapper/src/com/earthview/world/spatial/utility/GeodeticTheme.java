package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///求解大地主题
public class GeodeticTheme extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Utility::CGeodeticTheme", new GeodeticThemeClassFactory());
	}

	/**
	 * 构造函数
	 * @param dfSemiMajor 椭球长半轴
	 * @param dfInvFlattening 椭球偏率倒数
	 */
	public GeodeticTheme(double dfSemiMajor, double dfInvFlattening) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer dfSemiMajorPtr = new BasePointer(dfSemiMajor);
		list.add("dfSemiMajor", dfSemiMajorPtr.get());
		BasePointer dfInvFlatteningPtr = new BasePointer(dfInvFlattening);
		list.add("dfInvFlattening", dfInvFlatteningPtr.get());
		Create("CGeodeticTheme", list);
	}

	native private void gaussSeriesForward_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double lon1, double lat1, double pazi1, double s12, long lon2, long lat2, long pazi2);
	/**
	 * 大地主题正算:已知椭球体，点A，AB距离，AB连线A处方位角，求点B及点B处方位角
	 * @param lon1 点A经度
	 * @param lat1 点A纬度
	 * @param pazi1 点A处方位角
	 * @param s12 AB距离
	 * @param lon2 输出：点B经度
	 * @param lat2 输出：点B纬度
	 * @param pazi2 输出：点B处方位角
	 */
	public void gaussSeriesForward(double lon1, double lat1, double pazi1, double s12, DoublePointer lon2, DoublePointer lat2, DoublePointer pazi2)
	{
		double lon1ParamValue = lon1;
		double lat1ParamValue = lat1;
		double pazi1ParamValue = pazi1;
		double s12ParamValue = s12;
		long lon2ParamValue = lon2.nativeObject.pointer;
		long lat2ParamValue = lat2.nativeObject.pointer;
		long pazi2ParamValue = pazi2.nativeObject.pointer;
		gaussSeriesForward_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, lon1ParamValue, lat1ParamValue, pazi1ParamValue, s12ParamValue, lon2ParamValue, lat2ParamValue, pazi2ParamValue);
	}
	native private void gaussSeriesBackward_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double lon1, double lat1, double lon2, double lat2, long pazi1, long pazi2, long s12);
	/**
	 * 大地主题反算：已知椭球体，点A，点B，求AB距离，AB连线上A、B处方位角
	 * @param lon1 点A经度
	 * @param lat1 点A纬度
	 * @param lon2 点B经度
	 * @param lat2 点B纬度
	 * @param pazi1 输出：点A处方位角
	 * @param pazi2 输出：点B处方位角
	 * @param s12 输出：AB距离
	 */
	public void gaussSeriesBackward(double lon1, double lat1, double lon2, double lat2, DoublePointer pazi1, DoublePointer pazi2, DoublePointer s12)
	{
		double lon1ParamValue = lon1;
		double lat1ParamValue = lat1;
		double lon2ParamValue = lon2;
		double lat2ParamValue = lat2;
		long pazi1ParamValue = pazi1.nativeObject.pointer;
		long pazi2ParamValue = pazi2.nativeObject.pointer;
		long s12ParamValue = s12.nativeObject.pointer;
		gaussSeriesBackward_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, lon1ParamValue, lat1ParamValue, lon2ParamValue, lat2ParamValue, pazi1ParamValue, pazi2ParamValue, s12ParamValue);
	}
	public GeodeticTheme(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GeodeticTheme(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GeodeticTheme fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GeodeticTheme obj = null;
 		if(baseObj instanceof GeodeticTheme)
		{
			obj = (GeodeticTheme)baseObj;
		} else {
			obj = new GeodeticTheme(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGeodeticTheme");
			obj.increaseCast();
		}

		return obj;
	}
}
