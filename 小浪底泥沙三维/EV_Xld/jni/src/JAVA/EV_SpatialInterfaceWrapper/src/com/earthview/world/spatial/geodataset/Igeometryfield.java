package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 几何体字段接口，继承于字段接口
 */
public class Igeometryfield extends com.earthview.world.spatial.geodataset.Ifield {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::IGeometryField", new IgeometryfieldClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JIGeometryFieldProxy", new IgeometryfieldClassFactory());
	}

	protected  int getGeometryType_void_callback()
	{
		com.earthview.world.spatial.geometry.EVGeometryType returnValue = getGeometryType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getGeometryType_void(long pNativeObject);
	/**
	 * 获取几何体类型
	 * @return 几何体类型枚举
	 */
	public com.earthview.world.spatial.geometry.EVGeometryType getGeometryType()
	{
		int returnValue = getGeometryType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geometry.EVGeometryType.toEnum(returnValue);
	}
	native private int getGeometryType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.EVGeometryType getGeometryType_NoVirtual()
	{
		int returnValue = getGeometryType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geometry.EVGeometryType.toEnum(returnValue);
	}

	protected  void setGeometryType_EVGeometryType_callback(int type)
	{
		com.earthview.world.spatial.geometry.EVGeometryType typeParamValue = com.earthview.world.spatial.geometry.EVGeometryType.toEnum(type);
		setGeometryType(typeParamValue);
	}

	native private void setGeometryType_EVGeometryType(long pNativeObject, int type);
	/**
	 * 设置几何体类型
	 * @param type 几何体类型枚举
	 */
	public void setGeometryType(com.earthview.world.spatial.geometry.EVGeometryType type)
	{
		int typeParamValue = type.getValue();
		setGeometryType_EVGeometryType(this.nativeObject.pointer, typeParamValue);
	}
	native private void setGeometryType_EVGeometryType_NoVirtual(long pNativeObject, int type);
	protected void setGeometryType_NoVirtual(com.earthview.world.spatial.geometry.EVGeometryType type)
	{
		int typeParamValue = type.getValue();
		setGeometryType_EVGeometryType_NoVirtual(this.nativeObject.pointer, typeParamValue);
	}

	protected  long getSpatialReference_void_callback()
	{
		com.earthview.world.spatial.geometry.Ispatialreference returnValue = getSpatialReference();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSpatialReference_void(long pNativeObject);
	/**
	 * 获取空间坐标参考
	 * @return 空间坐标参考
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference()
	{
		long returnValue = getSpatialReference_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}
	native private long getSpatialReference_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference_NoVirtual()
	{
		long returnValue = getSpatialReference_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}

	protected  void setSpatialReference_ISpatialReference_callback(long ref_sr)
	{
		com.earthview.world.spatial.geometry.Ispatialreference ref_srParamValue = (ref_sr == 0L ? null : new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_srParamValue != null)
		{
		ref_srParamValue.setDelegate(true);
		ref_srParamValue.setInstancePointer(new InstancePointer(ref_sr));
		IClassFactory ref_srParamValueClassFactory = GlobalClassFactoryMap.get(ref_srParamValue.getCppInstanceTypeName());
		if (ref_srParamValueClassFactory != null)
		{
			ref_srParamValue.setDelegate(true);
			ref_srParamValue = (com.earthview.world.spatial.geometry.Ispatialreference)ref_srParamValueClassFactory.create();
			ref_srParamValue.setDelegate(true);
			ref_srParamValue.setInstancePointer(new InstancePointer(ref_sr));
		}
		}
		setSpatialReference(ref_srParamValue);
	}

	native private void setSpatialReference_ISpatialReference(long pNativeObject, long ref_sr);
	/**
	 * 设置空间坐标参考
	 * @param sr 空间坐标参考
	 */
	public void setSpatialReference(com.earthview.world.spatial.geometry.Ispatialreference ref_sr)
	{
		long ref_srParamValue = (ref_sr == null ? 0L : ref_sr.nativeObject.pointer);
		setSpatialReference_ISpatialReference(this.nativeObject.pointer, ref_srParamValue);
	}
	native private void setSpatialReference_ISpatialReference_NoVirtual(long pNativeObject, long ref_sr);
	protected void setSpatialReference_NoVirtual(com.earthview.world.spatial.geometry.Ispatialreference ref_sr)
	{
		long ref_srParamValue = (ref_sr == null ? 0L : ref_sr.nativeObject.pointer);
		setSpatialReference_ISpatialReference_NoVirtual(this.nativeObject.pointer, ref_srParamValue);
	}

	public Igeometryfield(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Igeometryfield(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取字段名称
	 * @return 字段名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 获取字段别名
	 * @return 字段别名
	 */
	public String getAliasName()
	{
		return super.getAliasName_NoVirtual();
	}
	/**
	 * 获取字段类型
	 * @return 字段类型
	 */
	public com.earthview.world.spatial.geodataset.EVFieldType getFieldType()
	{
		return super.getFieldType_NoVirtual();
	}
	/**
	 * 获取字段大小，一般用于EVString类型
	 * @return 字段大小
	 */
	public long getSize()
	{
		return super.getSize_NoVirtual();
	}
	/**
	 * 获取字段精度，一般用于Real类型
	 * @return 字段精度
	 */
	public long getPrecision()
	{
		return super.getPrecision_NoVirtual();
	}
	/**
	 * 获取字段描述
	 * @return 字段描述
	 */
	public String getDescription()
	{
		return super.getDescription_NoVirtual();
	}
	/**
	 * 判断是否必需字段
	 * @return 是，返回true；否则，返回false
	 */
	public boolean isRequest()
	{
		return super.isRequest_NoVirtual();
	}
	/**
	 * 判断是否支持编辑，一般情况下，不允许编辑。
	 * @return 是，返回true;否则，返回false
	 */
	public boolean canEdit()
	{
		return super.canEdit_NoVirtual();
	}
	/**
	 * 判断是否支持删除，一般情况下，必需字段不允许删除。
	 * @return 是，返回true；否则，返回false
	 */
	public boolean canDelete()
	{
		return super.canDelete_NoVirtual();
	}
	/**
	 * 判断是否支持空值。
	 * @return 是，返回true；否则，返回false
	 */
	public boolean canNull()
	{
		return super.canNull_NoVirtual();
	}
	/**
	 * 设置字段别名
	 * @param value 字段别名
	 */
	public void setAliasName(String name)
	{
		super.setAliasName_NoVirtual(name);
	}
	/**
	 * 设置字段大小
	 * @param value 字段大小
	 */
	public void setSize(long value)
	{
		super.setSize_NoVirtual(value);
	}
	/**
	 * 设置字段精度
	 * @param value 字段精度
	 */
	public void setPrecision(long value)
	{
		super.setPrecision_NoVirtual(value);
	}
	/**
	 * 设置字段描述
	 * @param description 字段描述
	 */
	public void setDescription(String description)
	{
		super.setDescription_NoVirtual(description);
	}
	/**
	 * 获取字段默认值
	 * @return 字段描述
	 */
	public com.earthview.world.core.Variant getDefaultValue()
	{
		return super.getDefaultValue_NoVirtual();
	}
	/**
	 * 设置字段默认值
	 * @param description 字段描述
	 */
	public void setDefaultValue(com.earthview.world.core.Variant defaultValue)
	{
		super.setDefaultValue_NoVirtual(defaultValue);
	}
	/**
	 * 深度拷贝
	 * @param  
	 * @return 拷贝对象
	 */
	public com.earthview.world.spatial.geodataset.Ifield ev_clone()
	{
		return super.ev_clone_NoVirtual();
	}
	
	native protected void register_getGeometryType_void(long pNativeObject, String method);
	native protected void register_setGeometryType_EVGeometryType(long pNativeObject, String method);
	native protected void register_getSpatialReference_void(long pNativeObject, String method);
	native protected void register_setSpatialReference_ISpatialReference(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getAliasName_void(long pNativeObject, String method);
	native protected void register_getFieldType_void(long pNativeObject, String method);
	native protected void register_getSize_void(long pNativeObject, String method);
	native protected void register_getPrecision_void(long pNativeObject, String method);
	native protected void register_getDescription_void(long pNativeObject, String method);
	native protected void register_isRequest_void(long pNativeObject, String method);
	native protected void register_canEdit_void(long pNativeObject, String method);
	native protected void register_canDelete_void(long pNativeObject, String method);
	native protected void register_canNull_void(long pNativeObject, String method);
	native protected void register_setAliasName_EVString(long pNativeObject, String method);
	native protected void register_setSize_ev_uint32(long pNativeObject, String method);
	native protected void register_setPrecision_ev_uint32(long pNativeObject, String method);
	native protected void register_setDescription_EVString(long pNativeObject, String method);
	native protected void register_getDefaultValue_void(long pNativeObject, String method);
	native protected void register_setDefaultValue_CVariant(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getGeometryType_void(this.nativeObject.pointer, "getGeometryType_void_callback");
			this.register_setGeometryType_EVGeometryType(this.nativeObject.pointer, "setGeometryType_EVGeometryType_callback");
			this.register_getSpatialReference_void(this.nativeObject.pointer, "getSpatialReference_void_callback");
			this.register_setSpatialReference_ISpatialReference(this.nativeObject.pointer, "setSpatialReference_ISpatialReference_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getAliasName_void(this.nativeObject.pointer, "getAliasName_void_callback");
			this.register_getFieldType_void(this.nativeObject.pointer, "getFieldType_void_callback");
			this.register_getSize_void(this.nativeObject.pointer, "getSize_void_callback");
			this.register_getPrecision_void(this.nativeObject.pointer, "getPrecision_void_callback");
			this.register_getDescription_void(this.nativeObject.pointer, "getDescription_void_callback");
			this.register_isRequest_void(this.nativeObject.pointer, "isRequest_void_callback");
			this.register_canEdit_void(this.nativeObject.pointer, "canEdit_void_callback");
			this.register_canDelete_void(this.nativeObject.pointer, "canDelete_void_callback");
			this.register_canNull_void(this.nativeObject.pointer, "canNull_void_callback");
			this.register_setAliasName_EVString(this.nativeObject.pointer, "setAliasName_EVString_callback");
			this.register_setSize_ev_uint32(this.nativeObject.pointer, "setSize_ev_uint32_callback");
			this.register_setPrecision_ev_uint32(this.nativeObject.pointer, "setPrecision_ev_uint32_callback");
			this.register_setDescription_EVString(this.nativeObject.pointer, "setDescription_EVString_callback");
			this.register_getDefaultValue_void(this.nativeObject.pointer, "getDefaultValue_void_callback");
			this.register_setDefaultValue_CVariant(this.nativeObject.pointer, "setDefaultValue_CVariant_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static Igeometryfield fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Igeometryfield obj = null;
 		if(baseObj instanceof Igeometryfield)
		{
			obj = (Igeometryfield)baseObj;
		} else {
			obj = new Igeometryfield(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IGeometryField");
			obj.increaseCast();
		}

		return obj;
	}
}
