package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 				submesh数据存储submesh数据信息
 */
public class SubMeshData extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::SubMeshData", new SubMeshDataClassFactory());
	}

	native private long get_vertexs_void(long pNativeObject);
	public com.earthview.world.geometry3d.VertexVector get_vertexs()
	{
		long jniValue = get_vertexs_void(this.nativeObject.pointer);
		
		com.earthview.world.geometry3d.VertexVector __returnValue = new com.earthview.world.geometry3d.VertexVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVertexVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.VertexVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVertexVector");
		}
		return __returnValue;
	}
	
	native private void set_vertexs_CVertexVector (long pNativeObject, long value);
	public void set_vertexs(com.earthview.world.geometry3d.VertexVector vertexs)
	{
		long vertexsParamValue = vertexs.nativeObject.pointer;
		
		set_vertexs_CVertexVector(this.nativeObject.pointer, vertexsParamValue);
	}
	
	native private boolean get_existPosition_void(long pNativeObject);
	public boolean get_existPosition()
	{
		boolean jniValue = get_existPosition_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_existPosition_ev_bool (long pNativeObject, boolean value);
	public void set_existPosition(boolean existPosition)
	{
		boolean existPositionParamValue = existPosition;
		
		set_existPosition_ev_bool(this.nativeObject.pointer, existPositionParamValue);
	}
	
	native private boolean get_existNormal_void(long pNativeObject);
	public boolean get_existNormal()
	{
		boolean jniValue = get_existNormal_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_existNormal_ev_bool (long pNativeObject, boolean value);
	public void set_existNormal(boolean existNormal)
	{
		boolean existNormalParamValue = existNormal;
		
		set_existNormal_ev_bool(this.nativeObject.pointer, existNormalParamValue);
	}
	
	native private boolean get_existColor_void(long pNativeObject);
	public boolean get_existColor()
	{
		boolean jniValue = get_existColor_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_existColor_ev_bool (long pNativeObject, boolean value);
	public void set_existColor(boolean existColor)
	{
		boolean existColorParamValue = existColor;
		
		set_existColor_ev_bool(this.nativeObject.pointer, existColorParamValue);
	}
	
	native private boolean get_existTextureCoord_void(long pNativeObject);
	public boolean get_existTextureCoord()
	{
		boolean jniValue = get_existTextureCoord_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_existTextureCoord_ev_bool (long pNativeObject, boolean value);
	public void set_existTextureCoord(boolean existTextureCoord)
	{
		boolean existTextureCoordParamValue = existTextureCoord;
		
		set_existTextureCoord_ev_bool(this.nativeObject.pointer, existTextureCoordParamValue);
	}
	
	native private long get_indices_void(long pNativeObject);
	public com.earthview.world.geometry3d.IndexVector get_indices()
	{
		long jniValue = get_indices_void(this.nativeObject.pointer);
		
		com.earthview.world.geometry3d.IndexVector __returnValue = new com.earthview.world.geometry3d.IndexVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CIndexVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.IndexVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CIndexVector");
		}
		return __returnValue;
	}
	
	native private void set_indices_CIndexVector (long pNativeObject, long value);
	public void set_indices(com.earthview.world.geometry3d.IndexVector indices)
	{
		long indicesParamValue = indices.nativeObject.pointer;
		
		set_indices_CIndexVector(this.nativeObject.pointer, indicesParamValue);
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
	
	native private long get_material_void(long pNativeObject);
	public com.earthview.world.graphic.MaterialPtr get_material()
	{
		long jniValue = get_material_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}
	
	native private void set_material_CMaterialPtr (long pNativeObject, long value);
	public void set_material(com.earthview.world.graphic.MaterialPtr material)
	{
		long materialParamValue = material.nativeObject.pointer;
		
		set_material_CMaterialPtr(this.nativeObject.pointer, materialParamValue);
	}
	
	native private long get_matrix_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 get_matrix()
	{
		long jniValue = get_matrix_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	
	native private void set_matrix_CMatrix4 (long pNativeObject, long value);
	public void set_matrix(com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long matrixParamValue = matrix.nativeObject.pointer;
		
		set_matrix_CMatrix4(this.nativeObject.pointer, matrixParamValue);
	}
	
	/**
	 * 构造函数
	 * @param  
	 */
	public SubMeshData() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("SubMeshData", null);
	}

	public SubMeshData(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SubMeshData(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SubMeshData fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SubMeshData obj = null;
 		if(baseObj instanceof SubMeshData)
		{
			obj = (SubMeshData)baseObj;
		} else {
			obj = new SubMeshData(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "SubMeshData");
			obj.increaseCast();
		}

		return obj;
	}
}
