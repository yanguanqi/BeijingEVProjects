package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 字体点阵缓存管理类
 */
public class LatticeFontManager extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CLatticeFontManager", new LatticeFontManagerClassFactory());
	}

	public enum MaterialType implements INativeEnum<MaterialType> {
		NORMAL_DCHECK(MaterialTypeHelper.ENUM_VALUES[0]),
		NORMAL(MaterialTypeHelper.ENUM_VALUES[1]),
		HIGHLIGHT_DCHECK(MaterialTypeHelper.ENUM_VALUES[2]),
		HIGHLIGHT(MaterialTypeHelper.ENUM_VALUES[3]);
		private int value;
		MaterialType(int i) {
			this.value = i;
		}
		public MaterialType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final MaterialType toEnum(int retval) {
			if(retval == NORMAL_DCHECK.value){
				return NORMAL_DCHECK;
			}
			else if(retval == NORMAL.value){
				return NORMAL;
			}
			else if(retval == HIGHLIGHT_DCHECK.value){
				return HIGHLIGHT_DCHECK;
			}
			else if(retval == HIGHLIGHT.value){
				return HIGHLIGHT;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class MaterialTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private static void destroySingleton_void();
	/**
	 * 销毁单例
	 */
	public static void destroySingleton()
	{
		destroySingleton_void();
	}
	native private static void create_void();
	/**
	 * 字体引擎初始化
	 */
	public static void create()
	{
		create_void();
	}
	native private static long generateTextMaterial_EVString_EVString(String materialName, String resgrpName);
	/// <summary>
	/// 生成文本可渲染对象材质
	/// <param name="materialName">材质名称</param>
	/// <param name="resgrpName">资源组名称</param>
	/// <returns>材质智能指针</returns>
	public static com.earthview.world.graphic.MaterialPtr generateTextMaterial(String materialName, String resgrpName)
	{
		String materialNameParamValue = materialName;
		String resgrpNameParamValue = resgrpName;
		long returnValue = generateTextMaterial_EVString_EVString(materialNameParamValue, resgrpNameParamValue);
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
	native private long getTextMaterial_MaterialType(long pNativeObject, int maType);
	/**
	 * 获得当前文本可渲染对象材质
	 * @return 材质智能指针
	 */
	public com.earthview.world.graphic.MaterialPtr getTextMaterial(com.earthview.world.graphic.LatticeFontManager.MaterialType maType)
	{
		int maTypeParamValue = maType.getValue();
		long returnValue = getTextMaterial_MaterialType(this.nativeObject.pointer, maTypeParamValue);
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
	native private static long getSingleton_void();
	/**
	 * 获取单例
	 * @return 单例指针
	 */
	public static com.earthview.world.graphic.LatticeFontManager getSingleton()
	{
		long returnValue = getSingleton_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.LatticeFontManager __returnValue = new com.earthview.world.graphic.LatticeFontManager(CreatedWhenConstruct.CWC_NotToCreate, "CLatticeFontManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LatticeFontManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLatticeFontManager");
		}
		return __returnValue;
	}
	public LatticeFontManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LatticeFontManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LatticeFontManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LatticeFontManager obj = null;
 		if(baseObj instanceof LatticeFontManager)
		{
			obj = (LatticeFontManager)baseObj;
		} else {
			obj = new LatticeFontManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLatticeFontManager");
			obj.increaseCast();
		}

		return obj;
	}
}
