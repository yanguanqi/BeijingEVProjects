package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// </summary>
///  EarthView::World::Geometry3D::CVertex是一个顶点缓冲单位的结构，包含了位置，法向量，切线，纹理和颜色信息
///  纹理的信息可以有2，3，4三种不同的情况，具体见纹理设置说明
/// </summary>
public class Vertex extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CVertex", new VertexClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public Vertex() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CVertex", null);
	}

	native private long getPostion_void(long pNativeObject);
	/// </summary>
	///  获取点坐标
	/// </summary>
	/// <returns>点坐标</returns>
	public com.earthview.world.spatial.math.Vector3 getPostion()
	{
		long returnValue = getPostion_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setPostion_CVector3(long pNativeObject, long position);
	/// </summary>
	/// 设置点坐标
	/// </summary>
	/// <param name="position">点坐标</param>
	/// <returns>None</returns>
	public void setPostion(com.earthview.world.spatial.math.Vector3 position)
	{
		long positionParamValue = position.nativeObject.pointer;
		setPostion_CVector3(this.nativeObject.pointer, positionParamValue);
	}
	native private long getNormal_void(long pNativeObject);
	/// </summary>
	/// 获取法向量
	/// </summary>
	/// <returns>法向量</returns>
	public com.earthview.world.spatial.math.Vector3 getNormal()
	{
		long returnValue = getNormal_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setNormal_CVector3(long pNativeObject, long normal);
	/// </summary>
	/// 设置法向量
	/// </summary>
	/// <param name="normal">法向量</param>
	/// <returns>None</returns>
	public void setNormal(com.earthview.world.spatial.math.Vector3 normal)
	{
		long normalParamValue = normal.nativeObject.pointer;
		setNormal_CVector3(this.nativeObject.pointer, normalParamValue);
	}
	native private long getTangent_void(long pNativeObject);
	/// </summary>
	/// 获取切线
	/// </summary>
	/// <returns>切线</returns>
	public com.earthview.world.spatial.math.Vector3 getTangent()
	{
		long returnValue = getTangent_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setTangent_CVector3(long pNativeObject, long tangent);
	/// </summary>
	/// 设置切线
	/// </summary>
	/// <param name="tangent">切线</param>
	/// <returns>None</returns>
	public void setTangent(com.earthview.world.spatial.math.Vector3 tangent)
	{
		long tangentParamValue = tangent.nativeObject.pointer;
		setTangent_CVector3(this.nativeObject.pointer, tangentParamValue);
	}
	native private long getTexCoord_void(long pNativeObject);
	/// </summary>
	///  获取纹理坐标
	///  纹理坐标声明的格式有   VET_FLOAT2 ,VET_FLOAT3 ,VET_FLOAT4 三种元素类型，分别对应EarthView::World::Spatial::Math::CVector2，EarthView::World::Spatial::Math::CVector3，EarthView::World::Spatial::Math::CVector4
	///  当声明为VET_FLOAT4时，存储的值为m_texCoord的x,y,z,w四位
	///  当声明为VET_FLOAT3时，存储的值为m_texCoord的x,y,z三位
	///  当声明为VET_FLOAT2时，存储的值为m_texCoord的x,y两位
	/// </summary>
	/// <returns>纹理坐标</returns>
	public com.earthview.world.spatial.math.Vector4 getTexCoord()
	{
		long returnValue = getTexCoord_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private void setTexCoord_CVector4(long pNativeObject, long texCoord);
	/// </summary>
	/// 设置0号纹理坐标
	/// </summary>
	/// <param name="texCoord">纹理坐标</param>
	/// <returns>None</returns>
	public void setTexCoord(com.earthview.world.spatial.math.Vector4 texCoord)
	{
		long texCoordParamValue = texCoord.nativeObject.pointer;
		setTexCoord_CVector4(this.nativeObject.pointer, texCoordParamValue);
	}
	native private void setTexCoord_CVector4_int(long pNativeObject, long texCoord, int index);
	///<summary>
	///按索引设置纹理坐标
	///</summary>
	///<param name = "texCoord">纹理坐标</param>
	///<return>None</returns>
	/// </summary>
	public void setTexCoord(com.earthview.world.spatial.math.Vector4 texCoord, int index)
	{
		long texCoordParamValue = texCoord.nativeObject.pointer;
		int indexParamValue = index;
		setTexCoord_CVector4_int(this.nativeObject.pointer, texCoordParamValue, indexParamValue);
	}
	native private long getColour_void(long pNativeObject);
	/// </summary>
	/// 获取颜色
	/// </summary>
	/// <returns>颜色</returns>
	public com.earthview.world.graphic.ColourValue getColour()
	{
		long returnValue = getColour_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private void setColour_CColourValue(long pNativeObject, long colour);
	/// </summary>
	/// 设置颜色
	/// </summary>
	/// <param name="colour">颜色</param>
	/// <returns>None</returns>
	public void setColour(com.earthview.world.graphic.ColourValue colour)
	{
		long colourParamValue = colour.nativeObject.pointer;
		setColour_CColourValue(this.nativeObject.pointer, colourParamValue);
	}
	/// </summary>
	/// 构造函数
	/// </summary>
	/// <param name="vp">位置</param>
	/// <param name="colour">颜色</param>
	/// <param name="u">纹理坐标水平分量</param>
	/// <param name="v">纹理坐标垂直分量</param>
	/// <returns>None</returns>
	public Vertex(com.earthview.world.spatial.math.Vector3 vp, com.earthview.world.graphic.ColourValue colour, float u, float v) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer vpPtr = new BasePointer(vp);
		list.add("vp", vpPtr.get());
		BasePointer colourPtr = new BasePointer(colour);
		list.add("colour", colourPtr.get());
		BasePointer uPtr = new BasePointer(u);
		list.add("u", uPtr.get());
		BasePointer vPtr = new BasePointer(v);
		list.add("v", vPtr.get());
		Create("CVertex", list);
	}

	/// </summary>
	/// 构造函数
	/// </summary>
	/// <param name="vp">位置</param>
	/// <param name="norm">法线</param>
	/// <param name="colour">颜色</param>
	/// <param name="u">纹理坐标</param>
	/// <returns>None</returns>
	public Vertex(com.earthview.world.spatial.math.Vector3 vp, com.earthview.world.spatial.math.Vector3 norm, com.earthview.world.graphic.ColourValue colour, com.earthview.world.spatial.math.Vector2 uv) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer vpPtr = new BasePointer(vp);
		list.add("vp", vpPtr.get());
		BasePointer normPtr = new BasePointer(norm);
		list.add("norm", normPtr.get());
		BasePointer colourPtr = new BasePointer(colour);
		list.add("colour", colourPtr.get());
		BasePointer uvPtr = new BasePointer(uv);
		list.add("uv", uvPtr.get());
		Create("CVertex", list);
	}

	public Vertex(com.earthview.world.spatial.math.Vector3 vp, com.earthview.world.graphic.ColourValue colour, com.earthview.world.spatial.math.Vector2 uv) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer vpPtr = new BasePointer(vp);
		list.add("vp", vpPtr.get());
		BasePointer colourPtr = new BasePointer(colour);
		list.add("colour", colourPtr.get());
		BasePointer uvPtr = new BasePointer(uv);
		list.add("uv", uvPtr.get());
		Create("CVertex", list);
	}

	public Vertex(com.earthview.world.spatial.math.Vector3 vp, com.earthview.world.graphic.ColourValue colour) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer vpPtr = new BasePointer(vp);
		list.add("vp", vpPtr.get());
		BasePointer colourPtr = new BasePointer(colour);
		list.add("colour", colourPtr.get());
		Create("CVertex", list);
	}

	native private long OperatorConvertionCVector3_void(long pNativeObject);
	/**
	 * 转换成为坐标数据
	 * @param  
	 * @return 单精度数据数据
	 */
	public com.earthview.world.spatial.math.Vector3 OperatorConvertionCVector3()
	{
		long returnValue = OperatorConvertionCVector3_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private long get_m_position_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_m_position()
	{
		long jniValue = get_m_position_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	
	native private void set_m_position_CVector3 (long pNativeObject, long value);
	public void set_m_position(com.earthview.world.spatial.math.Vector3 m_position)
	{
		long m_positionParamValue = m_position.nativeObject.pointer;
		
		set_m_position_CVector3(this.nativeObject.pointer, m_positionParamValue);
	}
	
	native private long get_m_normal_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_m_normal()
	{
		long jniValue = get_m_normal_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	
	native private void set_m_normal_CVector3 (long pNativeObject, long value);
	public void set_m_normal(com.earthview.world.spatial.math.Vector3 m_normal)
	{
		long m_normalParamValue = m_normal.nativeObject.pointer;
		
		set_m_normal_CVector3(this.nativeObject.pointer, m_normalParamValue);
	}
	
	native private long get_m_tangent_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_m_tangent()
	{
		long jniValue = get_m_tangent_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	
	native private void set_m_tangent_CVector3 (long pNativeObject, long value);
	public void set_m_tangent(com.earthview.world.spatial.math.Vector3 m_tangent)
	{
		long m_tangentParamValue = m_tangent.nativeObject.pointer;
		
		set_m_tangent_CVector3(this.nativeObject.pointer, m_tangentParamValue);
	}
	
	native private long get_m_texCoord_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector4 get_m_texCoord()
	{
		long jniValue = get_m_texCoord_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	
	native private void set_m_texCoord_CVector4 (long pNativeObject, long value);
	public void set_m_texCoord(com.earthview.world.spatial.math.Vector4 m_texCoord)
	{
		long m_texCoordParamValue = m_texCoord.nativeObject.pointer;
		
		set_m_texCoord_CVector4(this.nativeObject.pointer, m_texCoordParamValue);
	}
	
	native private long get_m_texCoord1_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector4 get_m_texCoord1()
	{
		long jniValue = get_m_texCoord1_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	
	native private void set_m_texCoord1_CVector4 (long pNativeObject, long value);
	public void set_m_texCoord1(com.earthview.world.spatial.math.Vector4 m_texCoord1)
	{
		long m_texCoord1ParamValue = m_texCoord1.nativeObject.pointer;
		
		set_m_texCoord1_CVector4(this.nativeObject.pointer, m_texCoord1ParamValue);
	}
	
	native private long get_m_texCoord2_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector4 get_m_texCoord2()
	{
		long jniValue = get_m_texCoord2_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	
	native private void set_m_texCoord2_CVector4 (long pNativeObject, long value);
	public void set_m_texCoord2(com.earthview.world.spatial.math.Vector4 m_texCoord2)
	{
		long m_texCoord2ParamValue = m_texCoord2.nativeObject.pointer;
		
		set_m_texCoord2_CVector4(this.nativeObject.pointer, m_texCoord2ParamValue);
	}
	
	native private long get_m_texCoord3_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector4 get_m_texCoord3()
	{
		long jniValue = get_m_texCoord3_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	
	native private void set_m_texCoord3_CVector4 (long pNativeObject, long value);
	public void set_m_texCoord3(com.earthview.world.spatial.math.Vector4 m_texCoord3)
	{
		long m_texCoord3ParamValue = m_texCoord3.nativeObject.pointer;
		
		set_m_texCoord3_CVector4(this.nativeObject.pointer, m_texCoord3ParamValue);
	}
	
	native private long get_m_texCoord4_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector4 get_m_texCoord4()
	{
		long jniValue = get_m_texCoord4_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	
	native private void set_m_texCoord4_CVector4 (long pNativeObject, long value);
	public void set_m_texCoord4(com.earthview.world.spatial.math.Vector4 m_texCoord4)
	{
		long m_texCoord4ParamValue = m_texCoord4.nativeObject.pointer;
		
		set_m_texCoord4_CVector4(this.nativeObject.pointer, m_texCoord4ParamValue);
	}
	
	native private long get_m_texCoord5_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector4 get_m_texCoord5()
	{
		long jniValue = get_m_texCoord5_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	
	native private void set_m_texCoord5_CVector4 (long pNativeObject, long value);
	public void set_m_texCoord5(com.earthview.world.spatial.math.Vector4 m_texCoord5)
	{
		long m_texCoord5ParamValue = m_texCoord5.nativeObject.pointer;
		
		set_m_texCoord5_CVector4(this.nativeObject.pointer, m_texCoord5ParamValue);
	}
	
	native private long get_m_texCoord6_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector4 get_m_texCoord6()
	{
		long jniValue = get_m_texCoord6_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	
	native private void set_m_texCoord6_CVector4 (long pNativeObject, long value);
	public void set_m_texCoord6(com.earthview.world.spatial.math.Vector4 m_texCoord6)
	{
		long m_texCoord6ParamValue = m_texCoord6.nativeObject.pointer;
		
		set_m_texCoord6_CVector4(this.nativeObject.pointer, m_texCoord6ParamValue);
	}
	
	native private long get_m_texCoord7_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector4 get_m_texCoord7()
	{
		long jniValue = get_m_texCoord7_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	
	native private void set_m_texCoord7_CVector4 (long pNativeObject, long value);
	public void set_m_texCoord7(com.earthview.world.spatial.math.Vector4 m_texCoord7)
	{
		long m_texCoord7ParamValue = m_texCoord7.nativeObject.pointer;
		
		set_m_texCoord7_CVector4(this.nativeObject.pointer, m_texCoord7ParamValue);
	}
	
	native private long get_m_colour_void(long pNativeObject);
	public com.earthview.world.graphic.ColourValue get_m_colour()
	{
		long jniValue = get_m_colour_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	
	native private void set_m_colour_CColourValue (long pNativeObject, long value);
	public void set_m_colour(com.earthview.world.graphic.ColourValue m_colour)
	{
		long m_colourParamValue = m_colour.nativeObject.pointer;
		
		set_m_colour_CColourValue(this.nativeObject.pointer, m_colourParamValue);
	}
	
	public Vertex(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Vertex(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Vertex fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Vertex obj = null;
 		if(baseObj instanceof Vertex)
		{
			obj = (Vertex)baseObj;
		} else {
			obj = new Vertex(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVertex");
			obj.increaseCast();
		}

		return obj;
	}
}
