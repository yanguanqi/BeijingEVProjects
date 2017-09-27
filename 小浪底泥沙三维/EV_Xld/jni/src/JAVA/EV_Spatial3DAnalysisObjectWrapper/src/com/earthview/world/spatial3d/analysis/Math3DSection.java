package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 三维分析之断面分析算法
 */
public class Math3DSection extends com.earthview.world.spatial3d.analysis.Math3DBaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CMath3DSection", new Math3DSectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCMath3DSectionProxy", new Math3DSectionClassFactory());
	}

	/**
	 * 构造函数
	 * @param ref_pAltitude3DListener 高度控件
	 */
	public Math3DSection(com.earthview.world.spatial3d.analysis.Altitude3DListener ref_pAltitude3DListener) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pAltitude3DListenerPtr = new BasePointer(ref_pAltitude3DListener);
		list.add("ref_pAltitude3DListener", ref_pAltitude3DListenerPtr.get());
		Create("JCMath3DSectionProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.Math3DSection".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void calcuSectionInfo_VertexList_CSectionLineInfo(long pNativeObject, long inPts, long sectionInfo);
	/**
	 * 计算断面分析结果
	 * @param inPts 点列表
	 * @param sectionInfo 断面分析结果
	 */
	public void calcuSectionInfo(com.earthview.world.spatial.math.VertexList inPts, com.earthview.world.spatial3d.analysis.SectionLineInfo sectionInfo)
	{
		long inPtsParamValue = inPts.nativeObject.pointer;
		long sectionInfoParamValue = sectionInfo.nativeObject.pointer;
		calcuSectionInfo_VertexList_CSectionLineInfo(this.nativeObject.pointer, inPtsParamValue, sectionInfoParamValue);
	}
	native private void calcuSectionLineInfo_ev_bool_ev_real64_CVector3_CVector3_VertexList_CSectionLineInfo(long pNativeObject, boolean detail, long interval, long p0, long p1, long vertices, long pSectionInfo);
	/**
	 * 计算两点之间的断面分析结果
	 * @param detail 控制断面分析结果信息精确程度
	 * @param interval 采样间隔距离
	 * @param p0 输入点,地理坐标（经度、纬度、高程或0）
	 * @param p1 输入点,地理坐标（经度、纬度、高程或0）
	 * @param vertices 插值后的渲染点列表
	 * @param pSectionInfo 断面分析结果指针
	 */
	public void calcuSectionLineInfo(boolean detail, DoublePointer interval, com.earthview.world.spatial.math.Vector3 p0, com.earthview.world.spatial.math.Vector3 p1, com.earthview.world.spatial.math.VertexList vertices, com.earthview.world.spatial3d.analysis.SectionLineInfo pSectionInfo)
	{
		boolean detailParamValue = detail;
		long intervalParamValue = interval.nativeObject.pointer;
		long p0ParamValue = p0.nativeObject.pointer;
		long p1ParamValue = p1.nativeObject.pointer;
		long verticesParamValue = vertices.nativeObject.pointer;
		long pSectionInfoParamValue = (pSectionInfo == null ? 0L : pSectionInfo.nativeObject.pointer);
		calcuSectionLineInfo_ev_bool_ev_real64_CVector3_CVector3_VertexList_CSectionLineInfo(this.nativeObject.pointer, detailParamValue, intervalParamValue, p0ParamValue, p1ParamValue, verticesParamValue, pSectionInfoParamValue);
	}
	native private void calculateOnServer_VertexList_CSectionLineInfo(long pNativeObject, long inPts, long sectionInfo);
	/**
	 * 服务器端计算
	 * @param inPts 点列表
	 * @param sectionInfo 断面分析结果
	 */
	public void calculateOnServer(com.earthview.world.spatial.math.VertexList inPts, com.earthview.world.spatial3d.analysis.SectionLineInfo sectionInfo)
	{
		long inPtsParamValue = inPts.nativeObject.pointer;
		long sectionInfoParamValue = sectionInfo.nativeObject.pointer;
		calculateOnServer_VertexList_CSectionLineInfo(this.nativeObject.pointer, inPtsParamValue, sectionInfoParamValue);
	}
	public Math3DSection(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Math3DSection(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取高程控件指针
	 * @param  
	 * @return 高程控件
	 */
	public com.earthview.world.spatial3d.analysis.Altitude3DListener getAltitude3DListener()
	{
		return super.getAltitude3DListener_NoVirtual();
	}
	/**
	 * 设置高程控件指针
	 * @param pListener 高程控件
	 */
	public void setAltitude3DListener(com.earthview.world.spatial3d.analysis.Altitude3DListener ref_pListener)
	{
		super.setAltitude3DListener_NoVirtual(ref_pListener);
	}
	
	native protected void register_getAltitude3DListener_void(long pNativeObject, String method);
	native protected void register_setAltitude3DListener_CAltitude3DListener(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getAltitude3DListener_void(this.nativeObject.pointer, "getAltitude3DListener_void_callback");
			this.register_setAltitude3DListener_CAltitude3DListener(this.nativeObject.pointer, "setAltitude3DListener_CAltitude3DListener_callback");
		}
	}
	
	public static Math3DSection fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Math3DSection obj = null;
 		if(baseObj instanceof Math3DSection)
		{
			obj = (Math3DSection)baseObj;
		} else {
			obj = new Math3DSection(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMath3DSection");
			obj.increaseCast();
		}

		return obj;
	}
}
