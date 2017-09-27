package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorCache3DLayerInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo", new VectorCache3DLayerInfoClassFactory());
	}

	public VectorCache3DLayerInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CVectorCache3DLayerInfo", null);
	}

	native private void setLayerTheme_ITheme(long pNativeObject, long theme);
	public void setLayerTheme(com.earthview.world.spatial.theme.Itheme theme)
	{
		long themeParamValue = (theme == null ? 0L : theme.nativeObject.pointer);
		setLayerTheme_ITheme(this.nativeObject.pointer, themeParamValue);
	}
	native private long getLayerTheme_void(long pNativeObject);
	public com.earthview.world.spatial.theme.Itheme getLayerTheme()
	{
		long returnValue = getLayerTheme_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
		}
		return __returnValue;
	}
	native private void setLayerLabelProperty_ILabelProperty(long pNativeObject, long labelproperty);
	public void setLayerLabelProperty(com.earthview.world.spatial.display.Ilabelproperty labelproperty)
	{
		long labelpropertyParamValue = (labelproperty == null ? 0L : labelproperty.nativeObject.pointer);
		setLayerLabelProperty_ILabelProperty(this.nativeObject.pointer, labelpropertyParamValue);
	}
	native private long getLayerLabelProperty_void(long pNativeObject);
	public com.earthview.world.spatial.display.Ilabelproperty getLayerLabelProperty()
	{
		long returnValue = getLayerLabelProperty_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Ilabelproperty __returnValue = new com.earthview.world.spatial.display.Ilabelproperty(CreatedWhenConstruct.CWC_NotToCreate, "ILabelProperty");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Ilabelproperty)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILabelProperty");
		}
		return __returnValue;
	}
	native private void setLayerFeatureCount_ev_uint32(long pNativeObject, long count);
	public void setLayerFeatureCount(long count)
	{
		long countParamValue = count;
		setLayerFeatureCount_ev_uint32(this.nativeObject.pointer, countParamValue);
	}
	native private long getLayerFeatureCount_void(long pNativeObject);
	public long getLayerFeatureCount()
	{
		long returnValue = getLayerFeatureCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLayerStatisticsMaxValue_ev_real64(long pNativeObject, double value);
	public void setLayerStatisticsMaxValue(double value)
	{
		double valueParamValue = value;
		setLayerStatisticsMaxValue_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private double getLayerStatisticsMaxValue_void(long pNativeObject);
	public double getLayerStatisticsMaxValue()
	{
		double returnValue = getLayerStatisticsMaxValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLayerRootOctreeBox_CAxisAlignedBox(long pNativeObject, long box);
	public void setLayerRootOctreeBox(com.earthview.world.spatial.math.AxisAlignedBox box)
	{
		long boxParamValue = box.nativeObject.pointer;
		setLayerRootOctreeBox_CAxisAlignedBox(this.nativeObject.pointer, boxParamValue);
	}
	native private long getLayerRootOctreeBox_void(long pNativeObject);
	public com.earthview.world.spatial.math.AxisAlignedBox getLayerRootOctreeBox()
	{
		long returnValue = getLayerRootOctreeBox_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	native private void setLayerWebFields_CVector3DCacheFieldVector(long pNativeObject, long fields);
	public void setLayerWebFields(com.earthview.world.spatial3d.atlas.Vector3DCacheFieldVector fields)
	{
		long fieldsParamValue = (fields == null ? 0L : fields.nativeObject.pointer);
		setLayerWebFields_CVector3DCacheFieldVector(this.nativeObject.pointer, fieldsParamValue);
	}
	native private long getLayerWebFields_void(long pNativeObject);
	public com.earthview.world.spatial3d.atlas.Vector3DCacheFieldVector getLayerWebFields()
	{
		long returnValue = getLayerWebFields_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.atlas.Vector3DCacheFieldVector __returnValue = new com.earthview.world.spatial3d.atlas.Vector3DCacheFieldVector(CreatedWhenConstruct.CWC_NotToCreate, "CVector3DCacheFieldVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.Vector3DCacheFieldVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3DCacheFieldVector");
		}
		return __returnValue;
	}
	native private long toStream_void(long pNativeObject);
	public com.earthview.world.core.MemoryDataStreamPtr toStream()
	{
		long returnValue = toStream_void(this.nativeObject.pointer);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	native private static long fromStream_MemoryDataStreamPtr(long stream);
	public static com.earthview.world.spatial3d.atlas.VectorCache3DLayerInfo fromStream(com.earthview.world.core.MemoryDataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = fromStream_MemoryDataStreamPtr(streamParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.atlas.VectorCache3DLayerInfo __returnValue = new com.earthview.world.spatial3d.atlas.VectorCache3DLayerInfo(CreatedWhenConstruct.CWC_NotToCreate, "CVectorCache3DLayerInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.VectorCache3DLayerInfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVectorCache3DLayerInfo");
		}
		return __returnValue;
	}
	public VectorCache3DLayerInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VectorCache3DLayerInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static VectorCache3DLayerInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VectorCache3DLayerInfo obj = null;
 		if(baseObj instanceof VectorCache3DLayerInfo)
		{
			obj = (VectorCache3DLayerInfo)baseObj;
		} else {
			obj = new VectorCache3DLayerInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVectorCache3DLayerInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
