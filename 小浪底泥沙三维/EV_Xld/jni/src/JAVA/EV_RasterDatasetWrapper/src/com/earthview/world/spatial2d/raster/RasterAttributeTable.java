package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterAttributeTable extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CRasterAttributeTable", new RasterAttributeTableClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCRasterAttributeTableProxy", new RasterAttributeTableClassFactory());
	}

	public RasterAttributeTable() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCRasterAttributeTableProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.raster.RasterAttributeTable".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long getRowCount_void_callback()
	{
		long returnValue = getRowCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getRowCount_void(long pNativeObject);
	public long getRowCount()
	{
		long returnValue = getRowCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getRowCount_void_NoVirtual(long pNativeObject);
	protected long getRowCount_NoVirtual()
	{
		long returnValue = getRowCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getFieldCount_void_callback()
	{
		long returnValue = getFieldCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getFieldCount_void(long pNativeObject);
	public long getFieldCount()
	{
		long returnValue = getFieldCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getFieldCount_void_NoVirtual(long pNativeObject);
	protected long getFieldCount_NoVirtual()
	{
		long returnValue = getFieldCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getFields_void_callback()
	{
		com.earthview.world.spatial.geodataset.Ifields returnValue = getFields();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getFields_void(long pNativeObject);
	public com.earthview.world.spatial.geodataset.Ifields getFields()
	{
		long returnValue = getFields_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifields __returnValue = new com.earthview.world.spatial.geodataset.Ifields(CreatedWhenConstruct.CWC_NotToCreate, "IFields");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifields)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFields");
		}
		return __returnValue;
	}
	native private long getFields_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifields getFields_NoVirtual()
	{
		long returnValue = getFields_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifields __returnValue = new com.earthview.world.spatial.geodataset.Ifields(CreatedWhenConstruct.CWC_NotToCreate, "IFields");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifields)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFields");
		}
		return __returnValue;
	}

	protected  long getField_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.geodataset.Ifield returnValue = getField(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getField_ev_uint32(long pNativeObject, long index);
	public com.earthview.world.spatial.geodataset.Ifield getField(long index)
	{
		long indexParamValue = index;
		long returnValue = getField_ev_uint32(this.nativeObject.pointer, indexParamValue);
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
	native private long getField_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.geodataset.Ifield getField_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getField_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
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

	protected  long getValueField_void_callback()
	{
		com.earthview.world.spatial.geodataset.Ifield returnValue = getValueField();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getValueField_void(long pNativeObject);
	public com.earthview.world.spatial.geodataset.Ifield getValueField()
	{
		long returnValue = getValueField_void(this.nativeObject.pointer);
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
	native private long getValueField_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifield getValueField_NoVirtual()
	{
		long returnValue = getValueField_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long findField_EVString_callback(long fieldName)
	{
		StringPointer fieldNameParamValue = new StringPointer(new InstancePointer(fieldName));
		long returnValue = findField(fieldNameParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long findField_EVString(long pNativeObject, long fieldName);
	public long findField(StringPointer fieldName)
	{
		long fieldNameParamValue = fieldName.nativeObject.pointer;
		long returnValue = findField_EVString(this.nativeObject.pointer, fieldNameParamValue);
		return returnValue;
	}
	native private long findField_EVString_NoVirtual(long pNativeObject, long fieldName);
	protected long findField_NoVirtual(StringPointer fieldName)
	{
		long fieldNameParamValue = fieldName.nativeObject.pointer;
		long returnValue = findField_EVString_NoVirtual(this.nativeObject.pointer, fieldNameParamValue);
		return returnValue;
	}

	protected  void addField_IField_callback(long pField)
	{
		com.earthview.world.spatial.geodataset.Ifield pFieldParamValue = (pField == 0L ? null : new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate));
		if(pFieldParamValue != null)
		{
		pFieldParamValue.setDelegate(true);
		pFieldParamValue.setInstancePointer(new InstancePointer(pField));
		IClassFactory pFieldParamValueClassFactory = GlobalClassFactoryMap.get(pFieldParamValue.getCppInstanceTypeName());
		if (pFieldParamValueClassFactory != null)
		{
			pFieldParamValue.setDelegate(true);
			pFieldParamValue = (com.earthview.world.spatial.geodataset.Ifield)pFieldParamValueClassFactory.create();
			pFieldParamValue.setDelegate(true);
			pFieldParamValue.setInstancePointer(new InstancePointer(pField));
		}
		}
		addField(pFieldParamValue);
	}

	native private void addField_IField(long pNativeObject, long pField);
	public void addField(com.earthview.world.spatial.geodataset.Ifield pField)
	{
		long pFieldParamValue = (pField == null ? 0L : pField.nativeObject.pointer);
		addField_IField(this.nativeObject.pointer, pFieldParamValue);
	}
	native private void addField_IField_NoVirtual(long pNativeObject, long pField);
	protected void addField_NoVirtual(com.earthview.world.spatial.geodataset.Ifield pField)
	{
		long pFieldParamValue = (pField == null ? 0L : pField.nativeObject.pointer);
		addField_IField_NoVirtual(this.nativeObject.pointer, pFieldParamValue);
	}

	protected  void removeField_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		removeField(indexParamValue);
	}

	native private void removeField_ev_uint32(long pNativeObject, long index);
	public void removeField(long index)
	{
		long indexParamValue = index;
		removeField_ev_uint32(this.nativeObject.pointer, indexParamValue);
	}
	native private void removeField_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected void removeField_NoVirtual(long index)
	{
		long indexParamValue = index;
		removeField_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
	}

	protected  void removeAllFields_void_callback()
	{
		removeAllFields();
	}

	native private void removeAllFields_void(long pNativeObject);
	public void removeAllFields()
	{
		removeAllFields_void(this.nativeObject.pointer);
	}
	native private void removeAllFields_void_NoVirtual(long pNativeObject);
	protected void removeAllFields_NoVirtual()
	{
		removeAllFields_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void addRow_CVariantArray_callback(long varArray)
	{
		com.earthview.world.core.VariantArray varArrayParamValue = new com.earthview.world.core.VariantArray(CreatedWhenConstruct.CWC_NotToCreate);
		varArrayParamValue.setDelegate(true);
		varArrayParamValue.setInstancePointer(new InstancePointer(varArray));
		IClassFactory varArrayParamValueClassFactory = GlobalClassFactoryMap.get(varArrayParamValue.getCppInstanceTypeName());
		if (varArrayParamValueClassFactory != null)
		{
			varArrayParamValue.setDelegate(true);
			varArrayParamValue = (com.earthview.world.core.VariantArray)varArrayParamValueClassFactory.create();
			varArrayParamValue.setDelegate(true);
			varArrayParamValue.setInstancePointer(new InstancePointer(varArray));
		}
		addRow(varArrayParamValue);
	}

	native private void addRow_CVariantArray(long pNativeObject, long varArray);
	public void addRow(com.earthview.world.core.VariantArray varArray)
	{
		long varArrayParamValue = varArray.nativeObject.pointer;
		addRow_CVariantArray(this.nativeObject.pointer, varArrayParamValue);
	}
	native private void addRow_CVariantArray_NoVirtual(long pNativeObject, long varArray);
	protected void addRow_NoVirtual(com.earthview.world.core.VariantArray varArray)
	{
		long varArrayParamValue = varArray.nativeObject.pointer;
		addRow_CVariantArray_NoVirtual(this.nativeObject.pointer, varArrayParamValue);
	}

	protected  void removeRow_ev_uint32_callback(long row)
	{
		long rowParamValue = row;
		removeRow(rowParamValue);
	}

	native private void removeRow_ev_uint32(long pNativeObject, long row);
	public void removeRow(long row)
	{
		long rowParamValue = row;
		removeRow_ev_uint32(this.nativeObject.pointer, rowParamValue);
	}
	native private void removeRow_ev_uint32_NoVirtual(long pNativeObject, long row);
	protected void removeRow_NoVirtual(long row)
	{
		long rowParamValue = row;
		removeRow_ev_uint32_NoVirtual(this.nativeObject.pointer, rowParamValue);
	}

	protected  void removeAllRows_void_callback()
	{
		removeAllRows();
	}

	native private void removeAllRows_void(long pNativeObject);
	public void removeAllRows()
	{
		removeAllRows_void(this.nativeObject.pointer);
	}
	native private void removeAllRows_void_NoVirtual(long pNativeObject);
	protected void removeAllRows_NoVirtual()
	{
		removeAllRows_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean getElement_ev_uint32_ev_uint32_CVariant_callback(long row, long fieldIndex, long var)
	{
		long rowParamValue = row;
		long fieldIndexParamValue = fieldIndex;
		com.earthview.world.core.Variant varParamValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		varParamValue.setDelegate(true);
		varParamValue.setInstancePointer(new InstancePointer(var));
		IClassFactory varParamValueClassFactory = GlobalClassFactoryMap.get(varParamValue.getCppInstanceTypeName());
		if (varParamValueClassFactory != null)
		{
			varParamValue.setDelegate(true);
			varParamValue = (com.earthview.world.core.Variant)varParamValueClassFactory.create();
			varParamValue.setDelegate(true);
			varParamValue.setInstancePointer(new InstancePointer(var));
		}
		boolean returnValue = getElement(rowParamValue, fieldIndexParamValue, varParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getElement_ev_uint32_ev_uint32_CVariant(long pNativeObject, long row, long fieldIndex, long var);
	public boolean getElement(long row, long fieldIndex, com.earthview.world.core.Variant var)
	{
		long rowParamValue = row;
		long fieldIndexParamValue = fieldIndex;
		long varParamValue = var.nativeObject.pointer;
		boolean returnValue = getElement_ev_uint32_ev_uint32_CVariant(this.nativeObject.pointer, rowParamValue, fieldIndexParamValue, varParamValue);
		return returnValue;
	}
	native private boolean getElement_ev_uint32_ev_uint32_CVariant_NoVirtual(long pNativeObject, long row, long fieldIndex, long var);
	protected boolean getElement_NoVirtual(long row, long fieldIndex, com.earthview.world.core.Variant var)
	{
		long rowParamValue = row;
		long fieldIndexParamValue = fieldIndex;
		long varParamValue = var.nativeObject.pointer;
		boolean returnValue = getElement_ev_uint32_ev_uint32_CVariant_NoVirtual(this.nativeObject.pointer, rowParamValue, fieldIndexParamValue, varParamValue);
		return returnValue;
	}

	protected  boolean setElement_ev_uint32_ev_uint32_CVariant_callback(long row, long fieldIndex, long var)
	{
		long rowParamValue = row;
		long fieldIndexParamValue = fieldIndex;
		com.earthview.world.core.Variant varParamValue = new com.earthview.world.core.Variant(CreatedWhenConstruct.CWC_NotToCreate);
		varParamValue.setDelegate(true);
		varParamValue.setInstancePointer(new InstancePointer(var));
		IClassFactory varParamValueClassFactory = GlobalClassFactoryMap.get(varParamValue.getCppInstanceTypeName());
		if (varParamValueClassFactory != null)
		{
			varParamValue.setDelegate(true);
			varParamValue = (com.earthview.world.core.Variant)varParamValueClassFactory.create();
			varParamValue.setDelegate(true);
			varParamValue.setInstancePointer(new InstancePointer(var));
		}
		boolean returnValue = setElement(rowParamValue, fieldIndexParamValue, varParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean setElement_ev_uint32_ev_uint32_CVariant(long pNativeObject, long row, long fieldIndex, long var);
	public boolean setElement(long row, long fieldIndex, com.earthview.world.core.Variant var)
	{
		long rowParamValue = row;
		long fieldIndexParamValue = fieldIndex;
		long varParamValue = var.nativeObject.pointer;
		boolean returnValue = setElement_ev_uint32_ev_uint32_CVariant(this.nativeObject.pointer, rowParamValue, fieldIndexParamValue, varParamValue);
		return returnValue;
	}
	native private boolean setElement_ev_uint32_ev_uint32_CVariant_NoVirtual(long pNativeObject, long row, long fieldIndex, long var);
	protected boolean setElement_NoVirtual(long row, long fieldIndex, com.earthview.world.core.Variant var)
	{
		long rowParamValue = row;
		long fieldIndexParamValue = fieldIndex;
		long varParamValue = var.nativeObject.pointer;
		boolean returnValue = setElement_ev_uint32_ev_uint32_CVariant_NoVirtual(this.nativeObject.pointer, rowParamValue, fieldIndexParamValue, varParamValue);
		return returnValue;
	}

	protected  long toXmlElement_void_callback()
	{
		com.earthview.world.core.XmlElement returnValue = toXmlElement();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long toXmlElement_void(long pNativeObject);
	public com.earthview.world.core.XmlElement toXmlElement()
	{
		long returnValue = toXmlElement_void(this.nativeObject.pointer);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}
	native private long toXmlElement_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.XmlElement toXmlElement_NoVirtual()
	{
		long returnValue = toXmlElement_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}

	protected  void fromXmlElement_CXmlElement_callback(long element)
	{
		com.earthview.world.core.XmlElement elementParamValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		elementParamValue.setDelegate(true);
		elementParamValue.setInstancePointer(new InstancePointer(element));
		IClassFactory elementParamValueClassFactory = GlobalClassFactoryMap.get(elementParamValue.getCppInstanceTypeName());
		if (elementParamValueClassFactory != null)
		{
			elementParamValue.setDelegate(true);
			elementParamValue = (com.earthview.world.core.XmlElement)elementParamValueClassFactory.create();
			elementParamValue.setDelegate(true);
			elementParamValue.setInstancePointer(new InstancePointer(element));
		}
		fromXmlElement(elementParamValue);
	}

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
	}
	native private void fromXmlElement_CXmlElement_NoVirtual(long pNativeObject, long element);
	protected void fromXmlElement_NoVirtual(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
	}

	public RasterAttributeTable(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RasterAttributeTable(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getRowCount_void(long pNativeObject, String method);
	native protected void register_getFieldCount_void(long pNativeObject, String method);
	native protected void register_getFields_void(long pNativeObject, String method);
	native protected void register_getField_ev_uint32(long pNativeObject, String method);
	native protected void register_getValueField_void(long pNativeObject, String method);
	native protected void register_findField_EVString(long pNativeObject, String method);
	native protected void register_addField_IField(long pNativeObject, String method);
	native protected void register_removeField_ev_uint32(long pNativeObject, String method);
	native protected void register_removeAllFields_void(long pNativeObject, String method);
	native protected void register_addRow_CVariantArray(long pNativeObject, String method);
	native protected void register_removeRow_ev_uint32(long pNativeObject, String method);
	native protected void register_removeAllRows_void(long pNativeObject, String method);
	native protected void register_getElement_ev_uint32_ev_uint32_CVariant(long pNativeObject, String method);
	native protected void register_setElement_ev_uint32_ev_uint32_CVariant(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getRowCount_void(this.nativeObject.pointer, "getRowCount_void_callback");
			this.register_getFieldCount_void(this.nativeObject.pointer, "getFieldCount_void_callback");
			this.register_getFields_void(this.nativeObject.pointer, "getFields_void_callback");
			this.register_getField_ev_uint32(this.nativeObject.pointer, "getField_ev_uint32_callback");
			this.register_getValueField_void(this.nativeObject.pointer, "getValueField_void_callback");
			this.register_findField_EVString(this.nativeObject.pointer, "findField_EVString_callback");
			this.register_addField_IField(this.nativeObject.pointer, "addField_IField_callback");
			this.register_removeField_ev_uint32(this.nativeObject.pointer, "removeField_ev_uint32_callback");
			this.register_removeAllFields_void(this.nativeObject.pointer, "removeAllFields_void_callback");
			this.register_addRow_CVariantArray(this.nativeObject.pointer, "addRow_CVariantArray_callback");
			this.register_removeRow_ev_uint32(this.nativeObject.pointer, "removeRow_ev_uint32_callback");
			this.register_removeAllRows_void(this.nativeObject.pointer, "removeAllRows_void_callback");
			this.register_getElement_ev_uint32_ev_uint32_CVariant(this.nativeObject.pointer, "getElement_ev_uint32_ev_uint32_CVariant_callback");
			this.register_setElement_ev_uint32_ev_uint32_CVariant(this.nativeObject.pointer, "setElement_ev_uint32_ev_uint32_CVariant_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
		}
	}
	
	public static RasterAttributeTable fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RasterAttributeTable obj = null;
 		if(baseObj instanceof RasterAttributeTable)
		{
			obj = (RasterAttributeTable)baseObj;
		} else {
			obj = new RasterAttributeTable(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRasterAttributeTable");
			obj.increaseCast();
		}

		return obj;
	}
}
