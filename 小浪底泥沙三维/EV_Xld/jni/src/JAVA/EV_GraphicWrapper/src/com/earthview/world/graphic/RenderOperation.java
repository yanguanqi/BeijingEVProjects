package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 用于顶点缓冲的渲染操作
 */
public class RenderOperation extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderOperation", new RenderOperationClassFactory());
	}

	////执行渲染操作的类型
	public enum OperationType implements INativeEnum<OperationType> {
		OT_POINT_LIST(OperationTypeHelper.ENUM_VALUES[0]),
		OT_LINE_LIST(OperationTypeHelper.ENUM_VALUES[1]),
		OT_LINE_STRIP(OperationTypeHelper.ENUM_VALUES[2]),
		OT_TRIANGLE_LIST(OperationTypeHelper.ENUM_VALUES[3]),
		OT_TRIANGLE_STRIP(OperationTypeHelper.ENUM_VALUES[4]),
		OT_TRIANGLE_FAN(OperationTypeHelper.ENUM_VALUES[5]);
		private int value;
		OperationType(int i) {
			this.value = i;
		}
		public OperationType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final OperationType toEnum(int retval) {
			if(retval == OT_POINT_LIST.value){
				return OT_POINT_LIST;
			}
			else if(retval == OT_LINE_LIST.value){
				return OT_LINE_LIST;
			}
			else if(retval == OT_LINE_STRIP.value){
				return OT_LINE_STRIP;
			}
			else if(retval == OT_TRIANGLE_LIST.value){
				return OT_TRIANGLE_LIST;
			}
			else if(retval == OT_TRIANGLE_STRIP.value){
				return OT_TRIANGLE_STRIP;
			}
			else if(retval == OT_TRIANGLE_FAN.value){
				return OT_TRIANGLE_FAN;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class OperationTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private long get_vertexData_void(long pNativeObject);
	public com.earthview.world.graphic.VertexData get_vertexData()
	{
		long jniValue = get_vertexData_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexData __returnValue = new com.earthview.world.graphic.VertexData(CreatedWhenConstruct.CWC_NotToCreate, "CVertexData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexData");
		}
		return __returnValue;
	}
	
	native private void set_vertexData_CVertexData (long pNativeObject, long value);
	public void set_vertexData(com.earthview.world.graphic.VertexData vertexData)
	{
		long vertexDataParamValue = (vertexData == null ? 0L : vertexData.nativeObject.pointer);
		
		set_vertexData_CVertexData(this.nativeObject.pointer, vertexDataParamValue);
	}
	
	native private int get_operationType_void(long pNativeObject);
	public com.earthview.world.graphic.RenderOperation.OperationType get_operationType()
	{
		int jniValue = get_operationType_void(this.nativeObject.pointer);
		
		return com.earthview.world.graphic.RenderOperation.OperationType.toEnum(jniValue);
	}
	
	native private void set_operationType_OperationType (long pNativeObject, int value);
	public void set_operationType(com.earthview.world.graphic.RenderOperation.OperationType operationType)
	{
		int operationTypeParamValue = operationType.getValue();
		
		set_operationType_OperationType(this.nativeObject.pointer, operationTypeParamValue);
	}
	
	native private boolean get_useIndexes_void(long pNativeObject);
	public boolean get_useIndexes()
	{
		boolean jniValue = get_useIndexes_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_useIndexes_ev_bool (long pNativeObject, boolean value);
	public void set_useIndexes(boolean useIndexes)
	{
		boolean useIndexesParamValue = useIndexes;
		
		set_useIndexes_ev_bool(this.nativeObject.pointer, useIndexesParamValue);
	}
	
	native private long get_indexData_void(long pNativeObject);
	public com.earthview.world.graphic.IndexData get_indexData()
	{
		long jniValue = get_indexData_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.IndexData __returnValue = new com.earthview.world.graphic.IndexData(CreatedWhenConstruct.CWC_NotToCreate, "CIndexData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.IndexData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CIndexData");
		}
		return __returnValue;
	}
	
	native private void set_indexData_CIndexData (long pNativeObject, long value);
	public void set_indexData(com.earthview.world.graphic.IndexData indexData)
	{
		long indexDataParamValue = (indexData == null ? 0L : indexData.nativeObject.pointer);
		
		set_indexData_CIndexData(this.nativeObject.pointer, indexDataParamValue);
	}
	
	native private long get_srcRenderable_void(long pNativeObject);
	public com.earthview.world.graphic.Renderable get_srcRenderable()
	{
		long jniValue = get_srcRenderable_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Renderable __returnValue = new com.earthview.world.graphic.Renderable(CreatedWhenConstruct.CWC_NotToCreate, "CRenderable");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Renderable)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderable");
		}
		return __returnValue;
	}
	
	native private long get_numberOfInstances_void(long pNativeObject);
	public long get_numberOfInstances()
	{
		long jniValue = get_numberOfInstances_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_numberOfInstances_size_t (long pNativeObject, long value);
	public void set_numberOfInstances(long numberOfInstances)
	{
		long numberOfInstancesParamValue = numberOfInstances;
		
		set_numberOfInstances_size_t(this.nativeObject.pointer, numberOfInstancesParamValue);
	}
	
	native private boolean get_useGlobalInstancingVertexBufferIsAvailable_void(long pNativeObject);
	public boolean get_useGlobalInstancingVertexBufferIsAvailable()
	{
		boolean jniValue = get_useGlobalInstancingVertexBufferIsAvailable_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_useGlobalInstancingVertexBufferIsAvailable_bool (long pNativeObject, boolean value);
	public void set_useGlobalInstancingVertexBufferIsAvailable(boolean useGlobalInstancingVertexBufferIsAvailable)
	{
		boolean useGlobalInstancingVertexBufferIsAvailableParamValue = useGlobalInstancingVertexBufferIsAvailable;
		
		set_useGlobalInstancingVertexBufferIsAvailable_bool(this.nativeObject.pointer, useGlobalInstancingVertexBufferIsAvailableParamValue);
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public RenderOperation() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRenderOperation", null);
	}

	public RenderOperation(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderOperation(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RenderOperation fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderOperation obj = null;
 		if(baseObj instanceof RenderOperation)
		{
			obj = (RenderOperation)baseObj;
		} else {
			obj = new RenderOperation(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRenderOperation");
			obj.increaseCast();
		}

		return obj;
	}
}
