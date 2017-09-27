package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ParameterFactory extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CParameterFactory", new ParameterFactoryClassFactory());
	}

	public ParameterFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CParameterFactory", null);
	}

	native private static long createInPosition_ev_int32(int index);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr createInPosition(int index)
	{
		int indexParamValue = index;
		long returnValue = createInPosition_ev_int32(indexParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long createOutPosition_ev_int32(int index);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr createOutPosition(int index)
	{
		int indexParamValue = index;
		long returnValue = createOutPosition_ev_int32(indexParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long createInNormal_ev_int32(int index);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr createInNormal(int index)
	{
		int indexParamValue = index;
		long returnValue = createInNormal_ev_int32(indexParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long createInWeights_ev_int32(int index);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr createInWeights(int index)
	{
		int indexParamValue = index;
		long returnValue = createInWeights_ev_int32(indexParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long createInIndices_ev_int32(int index);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr createInIndices(int index)
	{
		int indexParamValue = index;
		long returnValue = createInIndices_ev_int32(indexParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long createOutNormal_ev_int32(int index);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr createOutNormal(int index)
	{
		int indexParamValue = index;
		long returnValue = createOutNormal_ev_int32(indexParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long createInBiNormal_ev_int32(int index);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr createInBiNormal(int index)
	{
		int indexParamValue = index;
		long returnValue = createInBiNormal_ev_int32(indexParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long createOutBiNormal_ev_int32(int index);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr createOutBiNormal(int index)
	{
		int indexParamValue = index;
		long returnValue = createOutBiNormal_ev_int32(indexParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long createInTangent_ev_int32(int index);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr createInTangent(int index)
	{
		int indexParamValue = index;
		long returnValue = createInTangent_ev_int32(indexParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long createOutTangent_ev_int32(int index);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr createOutTangent(int index)
	{
		int indexParamValue = index;
		long returnValue = createOutTangent_ev_int32(indexParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long createInColor_ev_int32(int index);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr createInColor(int index)
	{
		int indexParamValue = index;
		long returnValue = createInColor_ev_int32(indexParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long createOutColor_ev_int32(int index);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr createOutColor(int index)
	{
		int indexParamValue = index;
		long returnValue = createOutColor_ev_int32(indexParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long createInTexcoord_GpuConstantType_ev_int32_Content(int type, int index, int content);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr createInTexcoord(com.earthview.world.graphic.GpuConstantType type, int index, com.earthview.world.graphic.rtshadersystem.Parameter.Content content)
	{
		int typeParamValue = type.getValue();
		int indexParamValue = index;
		int contentParamValue = content.getValue();
		long returnValue = createInTexcoord_GpuConstantType_ev_int32_Content(typeParamValue, indexParamValue, contentParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long createOutTexcoord_GpuConstantType_ev_int32_Content(int type, int index, int content);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr createOutTexcoord(com.earthview.world.graphic.GpuConstantType type, int index, com.earthview.world.graphic.rtshadersystem.Parameter.Content content)
	{
		int typeParamValue = type.getValue();
		int indexParamValue = index;
		int contentParamValue = content.getValue();
		long returnValue = createOutTexcoord_GpuConstantType_ev_int32_Content(typeParamValue, indexParamValue, contentParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long createInTexcoord1_ev_int32_Content(int index, int content);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr createInTexcoord1(int index, com.earthview.world.graphic.rtshadersystem.Parameter.Content content)
	{
		int indexParamValue = index;
		int contentParamValue = content.getValue();
		long returnValue = createInTexcoord1_ev_int32_Content(indexParamValue, contentParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long createOutTexcoord1_ev_int32_Content(int index, int content);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr createOutTexcoord1(int index, com.earthview.world.graphic.rtshadersystem.Parameter.Content content)
	{
		int indexParamValue = index;
		int contentParamValue = content.getValue();
		long returnValue = createOutTexcoord1_ev_int32_Content(indexParamValue, contentParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long createInTexcoord2_ev_int32_Content(int index, int content);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr createInTexcoord2(int index, com.earthview.world.graphic.rtshadersystem.Parameter.Content content)
	{
		int indexParamValue = index;
		int contentParamValue = content.getValue();
		long returnValue = createInTexcoord2_ev_int32_Content(indexParamValue, contentParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long createOutTexcoord2_ev_int32_Content(int index, int content);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr createOutTexcoord2(int index, com.earthview.world.graphic.rtshadersystem.Parameter.Content content)
	{
		int indexParamValue = index;
		int contentParamValue = content.getValue();
		long returnValue = createOutTexcoord2_ev_int32_Content(indexParamValue, contentParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long createInTexcoord3_ev_int32_Content(int index, int content);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr createInTexcoord3(int index, com.earthview.world.graphic.rtshadersystem.Parameter.Content content)
	{
		int indexParamValue = index;
		int contentParamValue = content.getValue();
		long returnValue = createInTexcoord3_ev_int32_Content(indexParamValue, contentParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long createOutTexcoord3_ev_int32_Content(int index, int content);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr createOutTexcoord3(int index, com.earthview.world.graphic.rtshadersystem.Parameter.Content content)
	{
		int indexParamValue = index;
		int contentParamValue = content.getValue();
		long returnValue = createOutTexcoord3_ev_int32_Content(indexParamValue, contentParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long createInTexcoord4_ev_int32_Content(int index, int content);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr createInTexcoord4(int index, com.earthview.world.graphic.rtshadersystem.Parameter.Content content)
	{
		int indexParamValue = index;
		int contentParamValue = content.getValue();
		long returnValue = createInTexcoord4_ev_int32_Content(indexParamValue, contentParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long createOutTexcoord4_ev_int32_Content(int index, int content);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr createOutTexcoord4(int index, com.earthview.world.graphic.rtshadersystem.Parameter.Content content)
	{
		int indexParamValue = index;
		int contentParamValue = content.getValue();
		long returnValue = createOutTexcoord4_ev_int32_Content(indexParamValue, contentParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long createConstParamVector2_CVector2(long val);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr createConstParamVector2(com.earthview.world.spatial.math.Vector2 val)
	{
		long valParamValue = val.nativeObject.pointer;
		long returnValue = createConstParamVector2_CVector2(valParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long createConstParamVector3_CVector3(long val);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr createConstParamVector3(com.earthview.world.spatial.math.Vector3 val)
	{
		long valParamValue = val.nativeObject.pointer;
		long returnValue = createConstParamVector3_CVector3(valParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long createConstParamVector4_CVector4(long val);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr createConstParamVector4(com.earthview.world.spatial.math.Vector4 val)
	{
		long valParamValue = val.nativeObject.pointer;
		long returnValue = createConstParamVector4_CVector4(valParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long createConstParamFloat_float(float val);
	public static com.earthview.world.graphic.rtshadersystem.ParameterPtr createConstParamFloat(float val)
	{
		float valParamValue = val;
		long returnValue = createConstParamFloat_float(valParamValue);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	native private static long createSampler_GpuConstantType_ev_int32(int type, int index);
	public static com.earthview.world.graphic.rtshadersystem.UniformParameterPtr createSampler(com.earthview.world.graphic.GpuConstantType type, int index)
	{
		int typeParamValue = type.getValue();
		int indexParamValue = index;
		long returnValue = createSampler_GpuConstantType_ev_int32(typeParamValue, indexParamValue);
		com.earthview.world.graphic.rtshadersystem.UniformParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		}
		return __returnValue;
	}
	native private static long createSampler1D_ev_int32(int index);
	public static com.earthview.world.graphic.rtshadersystem.UniformParameterPtr createSampler1D(int index)
	{
		int indexParamValue = index;
		long returnValue = createSampler1D_ev_int32(indexParamValue);
		com.earthview.world.graphic.rtshadersystem.UniformParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		}
		return __returnValue;
	}
	native private static long createSampler2D_ev_int32(int index);
	public static com.earthview.world.graphic.rtshadersystem.UniformParameterPtr createSampler2D(int index)
	{
		int indexParamValue = index;
		long returnValue = createSampler2D_ev_int32(indexParamValue);
		com.earthview.world.graphic.rtshadersystem.UniformParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		}
		return __returnValue;
	}
	native private static long createSampler2DArray_ev_int32(int index);
	public static com.earthview.world.graphic.rtshadersystem.UniformParameterPtr createSampler2DArray(int index)
	{
		int indexParamValue = index;
		long returnValue = createSampler2DArray_ev_int32(indexParamValue);
		com.earthview.world.graphic.rtshadersystem.UniformParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		}
		return __returnValue;
	}
	native private static long createSampler3D_ev_int32(int index);
	public static com.earthview.world.graphic.rtshadersystem.UniformParameterPtr createSampler3D(int index)
	{
		int indexParamValue = index;
		long returnValue = createSampler3D_ev_int32(indexParamValue);
		com.earthview.world.graphic.rtshadersystem.UniformParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		}
		return __returnValue;
	}
	native private static long createSamplerCUBE_ev_int32(int index);
	public static com.earthview.world.graphic.rtshadersystem.UniformParameterPtr createSamplerCUBE(int index)
	{
		int indexParamValue = index;
		long returnValue = createSamplerCUBE_ev_int32(indexParamValue);
		com.earthview.world.graphic.rtshadersystem.UniformParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		}
		return __returnValue;
	}
	native private static long createUniform_GpuConstantType_ev_int32_ev_uint16_EVString_ev_size_t(int type, int index, int variability, String suggestedName, long size);
	public static com.earthview.world.graphic.rtshadersystem.UniformParameterPtr createUniform(com.earthview.world.graphic.GpuConstantType type, int index, int variability, String suggestedName, long size)
	{
		int typeParamValue = type.getValue();
		int indexParamValue = index;
		int variabilityParamValue = variability;
		String suggestedNameParamValue = suggestedName;
		long sizeParamValue = size;
		long returnValue = createUniform_GpuConstantType_ev_int32_ev_uint16_EVString_ev_size_t(typeParamValue, indexParamValue, variabilityParamValue, suggestedNameParamValue, sizeParamValue);
		com.earthview.world.graphic.rtshadersystem.UniformParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		}
		return __returnValue;
	}
	public ParameterFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ParameterFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ParameterFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ParameterFactory obj = null;
 		if(baseObj instanceof ParameterFactory)
		{
			obj = (ParameterFactory)baseObj;
		} else {
			obj = new ParameterFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CParameterFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
