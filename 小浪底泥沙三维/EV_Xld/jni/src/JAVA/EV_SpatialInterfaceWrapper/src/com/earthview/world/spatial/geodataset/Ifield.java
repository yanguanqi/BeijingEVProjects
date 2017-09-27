package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// <summer>
/// 字段类，用于描述字段相关信息。
/// </summer>
public class Ifield extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::IField", new IfieldClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JIFieldProxy", new IfieldClassFactory());
	}

	protected  String getName_void_callback()
	{
		String returnValue = getName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取字段名称
	 * @return 字段名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getAliasName_void_callback()
	{
		String returnValue = getAliasName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getAliasName_void(long pNativeObject);
	/**
	 * 获取字段别名
	 * @return 字段别名
	 */
	public String getAliasName()
	{
		String returnValue = getAliasName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getAliasName_void_NoVirtual(long pNativeObject);
	protected String getAliasName_NoVirtual()
	{
		String returnValue = getAliasName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getFieldType_void_callback()
	{
		com.earthview.world.spatial.geodataset.EVFieldType returnValue = getFieldType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getFieldType_void(long pNativeObject);
	/**
	 * 获取字段类型
	 * @return 字段类型
	 */
	public com.earthview.world.spatial.geodataset.EVFieldType getFieldType()
	{
		int returnValue = getFieldType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVFieldType.toEnum(returnValue);
	}
	native private int getFieldType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.EVFieldType getFieldType_NoVirtual()
	{
		int returnValue = getFieldType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.geodataset.EVFieldType.toEnum(returnValue);
	}

	protected  long getSize_void_callback()
	{
		long returnValue = getSize();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getSize_void(long pNativeObject);
	/**
	 * 获取字段大小，一般用于EVString类型
	 * @return 字段大小
	 */
	public long getSize()
	{
		long returnValue = getSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSize_void_NoVirtual(long pNativeObject);
	protected long getSize_NoVirtual()
	{
		long returnValue = getSize_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getPrecision_void_callback()
	{
		long returnValue = getPrecision();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getPrecision_void(long pNativeObject);
	/**
	 * 获取字段精度，一般用于Real类型
	 * @return 字段精度
	 */
	public long getPrecision()
	{
		long returnValue = getPrecision_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getPrecision_void_NoVirtual(long pNativeObject);
	protected long getPrecision_NoVirtual()
	{
		long returnValue = getPrecision_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getDescription_void_callback()
	{
		String returnValue = getDescription();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getDescription_void(long pNativeObject);
	/**
	 * 获取字段描述
	 * @return 字段描述
	 */
	public String getDescription()
	{
		String returnValue = getDescription_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDescription_void_NoVirtual(long pNativeObject);
	protected String getDescription_NoVirtual()
	{
		String returnValue = getDescription_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean isRequest_void_callback()
	{
		boolean returnValue = isRequest();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isRequest_void(long pNativeObject);
	/**
	 * 判断是否必需字段
	 * @return 是，返回true；否则，返回false
	 */
	public boolean isRequest()
	{
		boolean returnValue = isRequest_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isRequest_void_NoVirtual(long pNativeObject);
	protected boolean isRequest_NoVirtual()
	{
		boolean returnValue = isRequest_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean canEdit_void_callback()
	{
		boolean returnValue = canEdit();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean canEdit_void(long pNativeObject);
	/**
	 * 判断是否支持编辑，一般情况下，不允许编辑。
	 * @return 是，返回true;否则，返回false
	 */
	public boolean canEdit()
	{
		boolean returnValue = canEdit_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean canEdit_void_NoVirtual(long pNativeObject);
	protected boolean canEdit_NoVirtual()
	{
		boolean returnValue = canEdit_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean canDelete_void_callback()
	{
		boolean returnValue = canDelete();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean canDelete_void(long pNativeObject);
	/**
	 * 判断是否支持删除，一般情况下，必需字段不允许删除。
	 * @return 是，返回true；否则，返回false
	 */
	public boolean canDelete()
	{
		boolean returnValue = canDelete_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean canDelete_void_NoVirtual(long pNativeObject);
	protected boolean canDelete_NoVirtual()
	{
		boolean returnValue = canDelete_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean canNull_void_callback()
	{
		boolean returnValue = canNull();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean canNull_void(long pNativeObject);
	/**
	 * 判断是否支持空值。
	 * @return 是，返回true；否则，返回false
	 */
	public boolean canNull()
	{
		boolean returnValue = canNull_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean canNull_void_NoVirtual(long pNativeObject);
	protected boolean canNull_NoVirtual()
	{
		boolean returnValue = canNull_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setAliasName_EVString_callback(String name)
	{
		String nameParamValue = name;
		setAliasName(nameParamValue);
	}

	native private void setAliasName_EVString(long pNativeObject, String name);
	/**
	 * 设置字段别名
	 * @param value 字段别名
	 */
	public void setAliasName(String name)
	{
		String nameParamValue = name;
		setAliasName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setAliasName_EVString_NoVirtual(long pNativeObject, String name);
	protected void setAliasName_NoVirtual(String name)
	{
		String nameParamValue = name;
		setAliasName_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	protected  void setSize_ev_uint32_callback(long value)
	{
		long valueParamValue = value;
		setSize(valueParamValue);
	}

	native private void setSize_ev_uint32(long pNativeObject, long value);
	/**
	 * 设置字段大小
	 * @param value 字段大小
	 */
	public void setSize(long value)
	{
		long valueParamValue = value;
		setSize_ev_uint32(this.nativeObject.pointer, valueParamValue);
	}
	native private void setSize_ev_uint32_NoVirtual(long pNativeObject, long value);
	protected void setSize_NoVirtual(long value)
	{
		long valueParamValue = value;
		setSize_ev_uint32_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	protected  void setPrecision_ev_uint32_callback(long value)
	{
		long valueParamValue = value;
		setPrecision(valueParamValue);
	}

	native private void setPrecision_ev_uint32(long pNativeObject, long value);
	/**
	 * 设置字段精度
	 * @param value 字段精度
	 */
	public void setPrecision(long value)
	{
		long valueParamValue = value;
		setPrecision_ev_uint32(this.nativeObject.pointer, valueParamValue);
	}
	native private void setPrecision_ev_uint32_NoVirtual(long pNativeObject, long value);
	protected void setPrecision_NoVirtual(long value)
	{
		long valueParamValue = value;
		setPrecision_ev_uint32_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	protected  void setDescription_EVString_callback(String description)
	{
		String descriptionParamValue = description;
		setDescription(descriptionParamValue);
	}

	native private void setDescription_EVString(long pNativeObject, String description);
	/**
	 * 设置字段描述
	 * @param description 字段描述
	 */
	public void setDescription(String description)
	{
		String descriptionParamValue = description;
		setDescription_EVString(this.nativeObject.pointer, descriptionParamValue);
	}
	native private void setDescription_EVString_NoVirtual(long pNativeObject, String description);
	protected void setDescription_NoVirtual(String description)
	{
		String descriptionParamValue = description;
		setDescription_EVString_NoVirtual(this.nativeObject.pointer, descriptionParamValue);
	}

	protected  long getDefaultValue_void_callback()
	{
		com.earthview.world.core.Variant returnValue = getDefaultValue();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDefaultValue_void(long pNativeObject);
	/**
	 * 获取字段默认值
	 * @return 字段描述
	 */
	public com.earthview.world.core.Variant getDefaultValue()
	{
		long returnValue = getDefaultValue_void(this.nativeObject.pointer);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariant");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}
	native private long getDefaultValue_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.Variant getDefaultValue_NoVirtual()
	{
		long returnValue = getDefaultValue_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.Variant __returnValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVariant");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Variant)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVariant");
		}
		return __returnValue;
	}

	protected  void setDefaultValue_CVariant_callback(long defaultValue)
	{
		com.earthview.world.core.Variant defaultValueParamValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		defaultValueParamValue.setDelegate(true);
		defaultValueParamValue.setInstancePointer(new InstancePointer(defaultValue));
		IClassFactory defaultValueParamValueClassFactory = GlobalClassFactoryMap.get(defaultValueParamValue.getCppInstanceTypeName());
		if (defaultValueParamValueClassFactory != null)
		{
			defaultValueParamValue.setDelegate(true);
			defaultValueParamValue = (com.earthview.world.core.Variant)defaultValueParamValueClassFactory.create();
			defaultValueParamValue.setDelegate(true);
			defaultValueParamValue.setInstancePointer(new InstancePointer(defaultValue));
		}
		setDefaultValue(defaultValueParamValue);
	}

	native private void setDefaultValue_CVariant(long pNativeObject, long defaultValue);
	/**
	 * 设置字段默认值
	 * @param description 字段描述
	 */
	public void setDefaultValue(com.earthview.world.core.Variant defaultValue)
	{
		long defaultValueParamValue = defaultValue.nativeObject.pointer;
		setDefaultValue_CVariant(this.nativeObject.pointer, defaultValueParamValue);
	}
	native private void setDefaultValue_CVariant_NoVirtual(long pNativeObject, long defaultValue);
	protected void setDefaultValue_NoVirtual(com.earthview.world.core.Variant defaultValue)
	{
		long defaultValueParamValue = defaultValue.nativeObject.pointer;
		setDefaultValue_CVariant_NoVirtual(this.nativeObject.pointer, defaultValueParamValue);
	}

	protected  long ev_clone_void_callback()
	{
		com.earthview.world.spatial.geodataset.Ifield returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 深度拷贝
	 * @param  
	 * @return 拷贝对象
	 */
	public com.earthview.world.spatial.geodataset.Ifield ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifield __returnValue = new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate, "IField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifield)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IField");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifield ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifield __returnValue = new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate, "IField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifield)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IField");
		}
		return __returnValue;
	}

	public Ifield(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ifield(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
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
	
	public static Ifield fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ifield obj = null;
 		if(baseObj instanceof Ifield)
		{
			obj = (Ifield)baseObj;
		} else {
			obj = new Ifield(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IField");
			obj.increaseCast();
		}

		return obj;
	}
}
