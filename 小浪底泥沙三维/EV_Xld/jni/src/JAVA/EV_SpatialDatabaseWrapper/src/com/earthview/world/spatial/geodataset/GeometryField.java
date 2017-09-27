package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 几何字段构造类包括几何字段属性信息的设置等
 */
public class GeometryField extends com.earthview.world.spatial.geodataset.Igeometryfield {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CGeometryField", new GeometryFieldClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCGeometryFieldProxy", new GeometryFieldClassFactory());
	}

	native private int getGeometryType_void(long pNativeObject);
	/**
	 * 获取类型
	 * @param  
	 * @return 类型
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

	native private void setGeometryType_EVGeometryType(long pNativeObject, int type);
	/**
	 * 设置类型
	 * @param type 类型
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

	native private long getSpatialReference_void(long pNativeObject);
	/**
	 * 获取空间参考
	 * @param  
	 * @return 空间参考
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

	native private void setSpatialReference_ISpatialReference(long pNativeObject, long ref_sr);
	/**
	 * 设置空间参考
	 * @param sr 空间参考
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

	protected  void setName_EVString_callback(String name)
	{
		String nameParamValue = name;
		setName(nameParamValue);
	}

	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置字段名
	 * @param name 字段名
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setName_EVString_NoVirtual(long pNativeObject, String name);
	protected void setName_NoVirtual(String name)
	{
		String nameParamValue = name;
		setName_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	protected  void setCanNull_ev_bool_callback(boolean value)
	{
		boolean valueParamValue = value;
		setCanNull(valueParamValue);
	}

	native private void setCanNull_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置字段是否可以为空
	 * @param value 是否
	 */
	public void setCanNull(boolean value)
	{
		boolean valueParamValue = value;
		setCanNull_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setCanNull_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setCanNull_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setCanNull_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	protected  void setCanEdit_ev_bool_callback(boolean value)
	{
		boolean valueParamValue = value;
		setCanEdit(valueParamValue);
	}

	native private void setCanEdit_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置字段是否可以编辑
	 * @param value 
	 */
	public void setCanEdit(boolean value)
	{
		boolean valueParamValue = value;
		setCanEdit_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setCanEdit_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setCanEdit_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setCanEdit_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	protected  void setCanDelete_ev_bool_callback(boolean value)
	{
		boolean valueParamValue = value;
		setCanDelete(valueParamValue);
	}

	native private void setCanDelete_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置字段是否可以被删除
	 * @param value 
	 */
	public void setCanDelete(boolean value)
	{
		boolean valueParamValue = value;
		setCanDelete_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setCanDelete_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setCanDelete_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setCanDelete_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	protected  void toStream_CDataStream_bool_callback(long stream, boolean hasHead)
	{
		com.earthview.world.core.DataStream streamParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStream)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		boolean hasHeadParamValue = hasHead;
		toStream(streamParamValue, hasHeadParamValue);
	}

	native private void toStream_CDataStream_bool(long pNativeObject, long stream, boolean hasHead);
	/**
	 * /序列化字段信息/
	 * @param stream 流
	 * @param hasHead 是否有头信息
	 */
	public void toStream(com.earthview.world.core.DataStream stream, boolean hasHead)
	{
		long streamParamValue = stream.nativeObject.pointer;
		boolean hasHeadParamValue = hasHead;
		toStream_CDataStream_bool(this.nativeObject.pointer, streamParamValue, hasHeadParamValue);
	}
	native private void toStream_CDataStream_bool_NoVirtual(long pNativeObject, long stream, boolean hasHead);
	protected void toStream_NoVirtual(com.earthview.world.core.DataStream stream, boolean hasHead)
	{
		long streamParamValue = stream.nativeObject.pointer;
		boolean hasHeadParamValue = hasHead;
		toStream_CDataStream_bool_NoVirtual(this.nativeObject.pointer, streamParamValue, hasHeadParamValue);
	}

	/**
	 * 构造函数
	 */
	public GeometryField() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCGeometryFieldProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.geodataset.GeometryField".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 拷贝构造函数
	 * @param geofield 几何体字段对象
	 */
	public GeometryField(com.earthview.world.spatial.geodataset.GeometryField geofield) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer geofieldPtr = new BasePointer(geofield);
		list.add("geofield", geofieldPtr.get());
		Create("JCGeometryFieldProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.geodataset.GeometryField".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public GeometryField(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GeometryField(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	native protected void register_setName_EVString(long pNativeObject, String method);
	native protected void register_setCanNull_ev_bool(long pNativeObject, String method);
	native protected void register_setCanEdit_ev_bool(long pNativeObject, String method);
	native protected void register_setCanDelete_ev_bool(long pNativeObject, String method);
	native protected void register_toStream_CDataStream_bool(long pNativeObject, String method);
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
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
			this.register_setCanNull_ev_bool(this.nativeObject.pointer, "setCanNull_ev_bool_callback");
			this.register_setCanEdit_ev_bool(this.nativeObject.pointer, "setCanEdit_ev_bool_callback");
			this.register_setCanDelete_ev_bool(this.nativeObject.pointer, "setCanDelete_ev_bool_callback");
			this.register_toStream_CDataStream_bool(this.nativeObject.pointer, "toStream_CDataStream_bool_callback");
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
	
	public static GeometryField fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GeometryField obj = null;
 		if(baseObj instanceof GeometryField)
		{
			obj = (GeometryField)baseObj;
		} else {
			obj = new GeometryField(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGeometryField");
			obj.increaseCast();
		}

		return obj;
	}
}
