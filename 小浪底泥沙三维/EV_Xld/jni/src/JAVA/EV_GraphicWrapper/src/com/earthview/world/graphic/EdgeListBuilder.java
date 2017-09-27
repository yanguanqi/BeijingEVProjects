package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EdgeListBuilder extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CEdgeListBuilder", new EdgeListBuilderClassFactory());
	}

	public EdgeListBuilder() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CEdgeListBuilder", null);
	}

	native private void addVertexData_CVertexData_CMatrix4(long pNativeObject, long ref_vertexData, long mat);
	public void addVertexData(com.earthview.world.graphic.VertexData ref_vertexData, com.earthview.world.spatial.math.Matrix4 mat)
	{
		long ref_vertexDataParamValue = (ref_vertexData == null ? 0L : ref_vertexData.nativeObject.pointer);
		long matParamValue = mat.nativeObject.pointer;
		addVertexData_CVertexData_CMatrix4(this.nativeObject.pointer, ref_vertexDataParamValue, matParamValue);
	}
	native private void addIndexData_CIndexData_ev_size_t_OperationType(long pNativeObject, long ref_indexData, long vertexSet, int opType);
	public void addIndexData(com.earthview.world.graphic.IndexData ref_indexData, long vertexSet, com.earthview.world.graphic.RenderOperation.OperationType opType)
	{
		long ref_indexDataParamValue = (ref_indexData == null ? 0L : ref_indexData.nativeObject.pointer);
		long vertexSetParamValue = vertexSet;
		int opTypeParamValue = opType.getValue();
		addIndexData_CIndexData_ev_size_t_OperationType(this.nativeObject.pointer, ref_indexDataParamValue, vertexSetParamValue, opTypeParamValue);
	}
	native private void addIndexData_CIndexData_ev_size_t(long pNativeObject, long ref_indexData, long vertexSet);
	public void addIndexData(com.earthview.world.graphic.IndexData ref_indexData, long vertexSet)
	{
		long ref_indexDataParamValue = (ref_indexData == null ? 0L : ref_indexData.nativeObject.pointer);
		long vertexSetParamValue = vertexSet;
		addIndexData_CIndexData_ev_size_t(this.nativeObject.pointer, ref_indexDataParamValue, vertexSetParamValue);
	}
	native private void addIndexData_CIndexData(long pNativeObject, long ref_indexData);
	public void addIndexData(com.earthview.world.graphic.IndexData ref_indexData)
	{
		long ref_indexDataParamValue = (ref_indexData == null ? 0L : ref_indexData.nativeObject.pointer);
		addIndexData_CIndexData(this.nativeObject.pointer, ref_indexDataParamValue);
	}
	native private long build_void(long pNativeObject);
	public com.earthview.world.graphic.EdgeData build()
	{
		long returnValue = build_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.EdgeData __returnValue = new com.earthview.world.graphic.EdgeData(CreatedWhenConstruct.CWC_NotToCreate, "CEdgeData");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.EdgeData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CEdgeData");
		}
		return __returnValue;
	}
	native private void log_CLogger(long pNativeObject, long ptLog);
	//// Debugging method
	public void log(com.earthview.world.core.Logger ptLog)
	{
		long ptLogParamValue = (ptLog == null ? 0L : ptLog.nativeObject.pointer);
		log_CLogger(this.nativeObject.pointer, ptLogParamValue);
	}
	public EdgeListBuilder(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EdgeListBuilder(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static EdgeListBuilder fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EdgeListBuilder obj = null;
 		if(baseObj instanceof EdgeListBuilder)
		{
			obj = (EdgeListBuilder)baseObj;
		} else {
			obj = new EdgeListBuilder(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEdgeListBuilder");
			obj.increaseCast();
		}

		return obj;
	}
}
