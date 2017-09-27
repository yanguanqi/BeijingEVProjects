package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 根CSymbol创建CMaterialPtr
 */
public class SymbolToMaterial extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CSymbolToMaterial", new SymbolToMaterialClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public SymbolToMaterial() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSymbolToMaterial", null);
	}

	native private static long colorToLineMaterial_IColor_EVString_EVString(long color, long symbolName, String groupName);
	/**
	 * 创建简单的线材质
	 * @param  
	 * @param groupName 资源组名称
	 * @return 材质
	 */
	public static com.earthview.world.graphic.MaterialPtr colorToLineMaterial(com.earthview.world.spatial.display.Icolor color, StringPointer symbolName, String groupName)
	{
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		long symbolNameParamValue = symbolName.nativeObject.pointer;
		String groupNameParamValue = groupName;
		long returnValue = colorToLineMaterial_IColor_EVString_EVString(colorParamValue, symbolNameParamValue, groupNameParamValue);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private static long createMaterial_ISymbol_EVString(long symbol, String groupName);
	/**
	 * 创建材质
	 * @param symbol 风格
	 * @param groupName 资源组名称
	 * @return 材质
	 */
	public static com.earthview.world.graphic.MaterialPtr createMaterial(com.earthview.world.spatial.display.Isymbol symbol, String groupName)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		String groupNameParamValue = groupName;
		long returnValue = createMaterial_ISymbol_EVString(symbolParamValue, groupNameParamValue);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private static void createMaterial_ISymbol_EVString_CMaterialPtr_CMaterialPtr_CMaterialPtr(long symbol, String groupName, long topMaterial, long exteriorSideMaterial, long interiorSideMaterial);
	/**
	 * 创建材质，用于面扩展
	 * @param symbol 风格
	 * @param groupName 资源组名称
	 * @param topMaterial 顶面材质
	 * @param exteriorSideMaterial 外环侧面材质
	 * @param interiorSideMaterial 内环侧面材质
	 */
	public static void createMaterial(com.earthview.world.spatial.display.Isymbol symbol, String groupName, com.earthview.world.graphic.MaterialPtr topMaterial, com.earthview.world.graphic.MaterialPtr exteriorSideMaterial, com.earthview.world.graphic.MaterialPtr interiorSideMaterial)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		String groupNameParamValue = groupName;
		long topMaterialParamValue = topMaterial.nativeObject.pointer;
		long exteriorSideMaterialParamValue = exteriorSideMaterial.nativeObject.pointer;
		long interiorSideMaterialParamValue = interiorSideMaterial.nativeObject.pointer;
		createMaterial_ISymbol_EVString_CMaterialPtr_CMaterialPtr_CMaterialPtr(symbolParamValue, groupNameParamValue, topMaterialParamValue, exteriorSideMaterialParamValue, interiorSideMaterialParamValue);
	}
	native private static void createMaterial_ISymbol_EVString_CMaterialPtr_CMaterialPtr(long symbol, String groupName, long topMaterial, long exteriorSideMaterial);
	/**
	 * 创建材质，用于面扩展
	 * @param symbol 风格
	 * @param groupName 资源组名称
	 * @param topMaterial 顶面材质
	 * @param exteriorSideMaterial 外环侧面材质
	 */
	public static void createMaterial(com.earthview.world.spatial.display.Isymbol symbol, String groupName, com.earthview.world.graphic.MaterialPtr topMaterial, com.earthview.world.graphic.MaterialPtr exteriorSideMaterial)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		String groupNameParamValue = groupName;
		long topMaterialParamValue = topMaterial.nativeObject.pointer;
		long exteriorSideMaterialParamValue = exteriorSideMaterial.nativeObject.pointer;
		createMaterial_ISymbol_EVString_CMaterialPtr_CMaterialPtr(symbolParamValue, groupNameParamValue, topMaterialParamValue, exteriorSideMaterialParamValue);
	}
	native private static void createMaterial_ISymbol_EVString_CMaterialPtr(long symbol, String groupName, long topMaterial);
	/**
	 * 创建材质，用于面扩展
	 * @param symbol 风格
	 * @param groupName 资源组名称
	 * @param topMaterial 顶面材质
	 */
	public static void createMaterial(com.earthview.world.spatial.display.Isymbol symbol, String groupName, com.earthview.world.graphic.MaterialPtr topMaterial)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		String groupNameParamValue = groupName;
		long topMaterialParamValue = topMaterial.nativeObject.pointer;
		createMaterial_ISymbol_EVString_CMaterialPtr(symbolParamValue, groupNameParamValue, topMaterialParamValue);
	}
	native private static long blankLineMaterial_EVString(String groupName);
	/**
	 * 创建简单的线材质
	 * @param groupName 资源组名称
	 * @return 材质
	 */
	public static com.earthview.world.graphic.MaterialPtr blankLineMaterial(String groupName)
	{
		String groupNameParamValue = groupName;
		long returnValue = blankLineMaterial_EVString(groupNameParamValue);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	public SymbolToMaterial(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SymbolToMaterial(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SymbolToMaterial fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SymbolToMaterial obj = null;
 		if(baseObj instanceof SymbolToMaterial)
		{
			obj = (SymbolToMaterial)baseObj;
		} else {
			obj = new SymbolToMaterial(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSymbolToMaterial");
			obj.increaseCast();
		}

		return obj;
	}
}
