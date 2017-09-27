package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnnotationBuilder extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder", new AnnotationBuilderClassFactory());
	}

	/**
	 * 构造函数
	 */
	public AnnotationBuilder(com.earthview.world.spatial.atlas.Imap ref_map, com.earthview.world.spatial.atlas.Ivectorlayer ref_dataLayer, com.earthview.world.spatial.display.Ispatialdisplay ref_spatialDisplay, com.earthview.world.spatial.geometry.Ienvelope extent, com.earthview.world.core.database.SqlDatabase db) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_mapPtr = new BasePointer(ref_map);
		list.add("ref_map", ref_mapPtr.get());
		BasePointer ref_dataLayerPtr = new BasePointer(ref_dataLayer);
		list.add("ref_dataLayer", ref_dataLayerPtr.get());
		BasePointer ref_spatialDisplayPtr = new BasePointer(ref_spatialDisplay);
		list.add("ref_spatialDisplay", ref_spatialDisplayPtr.get());
		BasePointer extentPtr = new BasePointer(extent);
		list.add("extent", extentPtr.get());
		BasePointer dbPtr = new BasePointer(db);
		list.add("db", dbPtr.get());
		Create("CAnnotationBuilder", list);
	}

	native private boolean build_void(long pNativeObject);
	public boolean build()
	{
		boolean returnValue = build_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置注记数据集名称
	 * @param name 名称
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setCreateAnnotationWithSelection_ev_bool(long pNativeObject, boolean b);
	/**
	 * 设置是否通过选择集生成注记
	 * @param name 名称
	 */
	public void setCreateAnnotationWithSelection(boolean b)
	{
		boolean bParamValue = b;
		setCreateAnnotationWithSelection_ev_bool(this.nativeObject.pointer, bParamValue);
	}
	native private void setWhereClause_EVString(long pNativeObject, String whereClause);
	/**
	 * 设置需要生成注记的要素的过滤条件
	 * @param name 名称
	 */
	public void setWhereClause(String whereClause)
	{
		String whereClauseParamValue = whereClause;
		setWhereClause_EVString(this.nativeObject.pointer, whereClauseParamValue);
	}
	native private void setScale_ev_real64(long pNativeObject, double scale);
	/**
	 * 设置注记数据集比例尺
	 * @param scale 比例尺
	 */
	public void setScale(double scale)
	{
		double scaleParamValue = scale;
		setScale_ev_real64(this.nativeObject.pointer, scaleParamValue);
	}
	native private void setAppend_ev_bool(long pNativeObject, boolean b);
	/**
	 * 设置是否追加到已有数据集
	 * @param b true表示追加
	 */
	public void setAppend(boolean b)
	{
		boolean bParamValue = b;
		setAppend_ev_bool(this.nativeObject.pointer, bParamValue);
	}
	native private void setTerminated_void(long pNativeObject);
	/**
	 * 如果正在导出注记，停止操作
	 * @param b true表示追加
	 */
	public void setTerminated()
	{
		setTerminated_void(this.nativeObject.pointer);
	}
	public AnnotationBuilder(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AnnotationBuilder(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static AnnotationBuilder fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AnnotationBuilder obj = null;
 		if(baseObj instanceof AnnotationBuilder)
		{
			obj = (AnnotationBuilder)baseObj;
		} else {
			obj = new AnnotationBuilder(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAnnotationBuilder");
			obj.increaseCast();
		}

		return obj;
	}
}
