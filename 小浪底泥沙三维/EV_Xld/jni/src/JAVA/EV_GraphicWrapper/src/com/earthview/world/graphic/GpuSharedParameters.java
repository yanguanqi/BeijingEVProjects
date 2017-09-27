package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GpuSharedParameters extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuSharedParameters", new GpuSharedParametersClassFactory());
	}

	public GpuSharedParameters(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("CGpuSharedParameters", list);
	}

	native private long getName_void(long pNativeObject);
	//// Get the name of this shared parameter set
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void addConstantDefinition_EVString_GpuConstantType_ev_size_t(long pNativeObject, String name, int constType, long arraySize);
	public void addConstantDefinition(String name, com.earthview.world.graphic.GpuConstantType constType, long arraySize)
	{
		String nameParamValue = name;
		int constTypeParamValue = constType.getValue();
		long arraySizeParamValue = arraySize;
		addConstantDefinition_EVString_GpuConstantType_ev_size_t(this.nativeObject.pointer, nameParamValue, constTypeParamValue, arraySizeParamValue);
	}
	native private void addConstantDefinition_EVString_GpuConstantType(long pNativeObject, String name, int constType);
	public void addConstantDefinition(String name, com.earthview.world.graphic.GpuConstantType constType)
	{
		String nameParamValue = name;
		int constTypeParamValue = constType.getValue();
		addConstantDefinition_EVString_GpuConstantType(this.nativeObject.pointer, nameParamValue, constTypeParamValue);
	}
	native private void removeConstantDefinition_EVString(long pNativeObject, String name);
	public void removeConstantDefinition(String name)
	{
		String nameParamValue = name;
		removeConstantDefinition_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void removeAllConstantDefinitions_void(long pNativeObject);
	public void removeAllConstantDefinitions()
	{
		removeAllConstantDefinitions_void(this.nativeObject.pointer);
	}
	native private long getVersion_void(long pNativeObject);
	public long getVersion()
	{
		long returnValue = getVersion_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void _markDirty_void(long pNativeObject);
	public void _markDirty()
	{
		_markDirty_void(this.nativeObject.pointer);
	}
	native private long getFrameLastUpdated_void(long pNativeObject);
	//// Get the frame in which this shared parameter set was last updated
	public long getFrameLastUpdated()
	{
		long returnValue = getFrameLastUpdated_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getConstantDefinitionIterator_void(long pNativeObject);
	public com.earthview.world.graphic.GpuConstantDefinitionIterator getConstantDefinitionIterator()
	{
		long returnValue = getConstantDefinitionIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuConstantDefinitionIterator __returnValue = new com.earthview.world.graphic.GpuConstantDefinitionIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuConstantDefinitionIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuConstantDefinitionIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuConstantDefinitionIterator");
		}
		return __returnValue;
	}
	native private long getConstantDefinition_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.GpuConstantDefinition getConstantDefinition(String name)
	{
		String nameParamValue = name;
		long returnValue = getConstantDefinition_EVString(this.nativeObject.pointer, nameParamValue);
		com.earthview.world.graphic.GpuConstantDefinition __returnValue = new com.earthview.world.graphic.GpuConstantDefinition(CreatedWhenConstruct.CWC_NotToCreate, "GpuConstantDefinition");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuConstantDefinition)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuConstantDefinition");
		}
		return __returnValue;
	}
	native private long getConstantDefinitions_void(long pNativeObject);
	public com.earthview.world.graphic.GpuNamedConstants getConstantDefinitions()
	{
		long returnValue = getConstantDefinitions_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuNamedConstants __returnValue = new com.earthview.world.graphic.GpuNamedConstants(CreatedWhenConstruct.CWC_NotToCreate, "GpuNamedConstants");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuNamedConstants)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuNamedConstants");
		}
		return __returnValue;
	}
	native private void setNamedConstant_EVString_Real(long pNativeObject, String name, double val);
	public void setNamedConstant(String name, double val)
	{
		String nameParamValue = name;
		double valParamValue = val;
		setNamedConstant_EVString_Real(this.nativeObject.pointer, nameParamValue, valParamValue);
	}
	native private void setNamedConstant_EVString_ev_int32(long pNativeObject, String name, int val);
	public void setNamedConstant(String name, int val)
	{
		String nameParamValue = name;
		int valParamValue = val;
		setNamedConstant_EVString_ev_int32(this.nativeObject.pointer, nameParamValue, valParamValue);
	}
	native private void setNamedConstant_EVString_CVector4(long pNativeObject, String name, long vec);
	public void setNamedConstant(String name, com.earthview.world.spatial.math.Vector4 vec)
	{
		String nameParamValue = name;
		long vecParamValue = vec.nativeObject.pointer;
		setNamedConstant_EVString_CVector4(this.nativeObject.pointer, nameParamValue, vecParamValue);
	}
	native private void setNamedConstant_EVString_CVector3(long pNativeObject, String name, long vec);
	public void setNamedConstant(String name, com.earthview.world.spatial.math.Vector3 vec)
	{
		String nameParamValue = name;
		long vecParamValue = vec.nativeObject.pointer;
		setNamedConstant_EVString_CVector3(this.nativeObject.pointer, nameParamValue, vecParamValue);
	}
	native private void setNamedConstant_EVString_CMatrix4(long pNativeObject, String name, long m);
	public void setNamedConstant(String name, com.earthview.world.spatial.math.Matrix4 m)
	{
		String nameParamValue = name;
		long mParamValue = m.nativeObject.pointer;
		setNamedConstant_EVString_CMatrix4(this.nativeObject.pointer, nameParamValue, mParamValue);
	}
	native private void setNamedConstant_EVString_CMatrix4_ev_size_t(long pNativeObject, String name, long m, long numEntries);
	public void setNamedConstant(String name, com.earthview.world.spatial.math.Matrix4 m, long numEntries)
	{
		String nameParamValue = name;
		long mParamValue = (m == null ? 0L : m.nativeObject.pointer);
		long numEntriesParamValue = numEntries;
		setNamedConstant_EVString_CMatrix4_ev_size_t(this.nativeObject.pointer, nameParamValue, mParamValue, numEntriesParamValue);
	}
	native private void setNamedConstant_EVString_ev_real32_ev_size_t(long pNativeObject, String name, long val, long count);
	public void setNamedConstant(String name, FloatPointer val, long count)
	{
		String nameParamValue = name;
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		setNamedConstant_EVString_ev_real32_ev_size_t(this.nativeObject.pointer, nameParamValue, valParamValue, countParamValue);
	}
	native private void setNamedConstant_EVString_ev_real64_ev_size_t(long pNativeObject, String name, long val, long count);
	public void setNamedConstant(String name, DoublePointer val, long count)
	{
		String nameParamValue = name;
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		setNamedConstant_EVString_ev_real64_ev_size_t(this.nativeObject.pointer, nameParamValue, valParamValue, countParamValue);
	}
	native private void setNamedConstant_EVString_CColourValue(long pNativeObject, String name, long colour);
	public void setNamedConstant(String name, com.earthview.world.graphic.ColourValue colour)
	{
		String nameParamValue = name;
		long colourParamValue = colour.nativeObject.pointer;
		setNamedConstant_EVString_CColourValue(this.nativeObject.pointer, nameParamValue, colourParamValue);
	}
	native private void setNamedConstant_EVString_ev_int32_ev_size_t(long pNativeObject, String name, long val, long count);
	public void setNamedConstant(String name, IntegerPointer val, long count)
	{
		String nameParamValue = name;
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		long countParamValue = count;
		setNamedConstant_EVString_ev_int32_ev_size_t(this.nativeObject.pointer, nameParamValue, valParamValue, countParamValue);
	}
	native private long getFloatPointer_ev_size_t(long pNativeObject, long pos);
	//// Get a pointer to the 'nth' item in the ev_real32 buffer
	public FloatPointer getFloatPointer(long pos)
	{
		long posParamValue = pos;
		long returnValue = getFloatPointer_ev_size_t(this.nativeObject.pointer, posParamValue);
		if(returnValue == 0L) {
			return null;
		}
		FloatPointer __returnValue = new FloatPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getIntPointer_ev_size_t(long pNativeObject, long pos);
	//// Get a pointer to the 'nth' item in the ev_int32 buffer
	public IntegerPointer getIntPointer(long pos)
	{
		long posParamValue = pos;
		long returnValue = getIntPointer_ev_size_t(this.nativeObject.pointer, posParamValue);
		if(returnValue == 0L) {
			return null;
		}
		IntegerPointer __returnValue = new IntegerPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	public GpuSharedParameters(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GpuSharedParameters(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GpuSharedParameters fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GpuSharedParameters obj = null;
 		if(baseObj instanceof GpuSharedParameters)
		{
			obj = (GpuSharedParameters)baseObj;
		} else {
			obj = new GpuSharedParameters(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGpuSharedParameters");
			obj.increaseCast();
		}

		return obj;
	}
}
