package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScreenScutcheonManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager", new ScreenScutcheonManagerClassFactory());
	}

	/**
	 * 构造函数
	 */
	public ScreenScutcheonManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CScreenScutcheonManager", null);
	}

	native private long OperatorIndex_EVString(long pNativeObject, String name);
	/**
	 * 通过名称，获取EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象
	 * @param name EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象名称
	 * @return EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象
	 */
	public com.earthview.industryengine.industrygraphic.ScreenScutcheon OperatorIndex(String name)
	{
		String nameParamValue = name;
		long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.industrygraphic.ScreenScutcheon __returnValue = new com.earthview.industryengine.industrygraphic.ScreenScutcheon(CreatedWhenConstruct.CWC_NotToCreate, "CScreenScutcheon");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.industrygraphic.ScreenScutcheon)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CScreenScutcheon");
		}
		return __returnValue;
	}
	native private long getScutcheon_EVString(long pNativeObject, String name);
	/**
	 * 通过名称，获取EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象
	 * @param name EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象名称
	 * @return EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象
	 */
	public com.earthview.industryengine.industrygraphic.ScreenScutcheon getScutcheon(String name)
	{
		String nameParamValue = name;
		long returnValue = getScutcheon_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.industrygraphic.ScreenScutcheon __returnValue = new com.earthview.industryengine.industrygraphic.ScreenScutcheon(CreatedWhenConstruct.CWC_NotToCreate, "CScreenScutcheon");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.industrygraphic.ScreenScutcheon)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CScreenScutcheon");
		}
		return __returnValue;
	}
	native private void destoryScutcheon_EVString(long pNativeObject, String name);
	/**
	 * 释放EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象
	 * @param name EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象名称
	 */
	public void destoryScutcheon(String name)
	{
		String nameParamValue = name;
		destoryScutcheon_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void destoryAll_void(long pNativeObject);
	/**
	 * 释放所有的EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象
	 */
	public void destoryAll()
	{
		destoryAll_void(this.nativeObject.pointer);
	}
	native private long createScutcheon_EVString_EVString_CGlobeControl(long pNativeObject, String name, String templateName, long control);
	/**
	 * 创建EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象
	 * @param name EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象名称
	 * @param templateName 模板名称
	 * @param styleId 样式ID
	 * @param control EarthView::World::Spatial3D::Controls::CGlobeControl对象
	 * @return EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象
	 */
	public com.earthview.industryengine.industrygraphic.ScreenScutcheon createScutcheon(String name, String templateName, com.earthview.world.spatial3d.controls.GlobeControl control)
	{
		String nameParamValue = name;
		String templateNameParamValue = templateName;
		long controlParamValue = (control == null ? 0L : control.nativeObject.pointer);
		long returnValue = createScutcheon_EVString_EVString_CGlobeControl(this.nativeObject.pointer, nameParamValue, templateNameParamValue, controlParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.industrygraphic.ScreenScutcheon __returnValue = new com.earthview.industryengine.industrygraphic.ScreenScutcheon(CreatedWhenConstruct.CWC_NotToCreate, "CScreenScutcheon");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.industrygraphic.ScreenScutcheon)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CScreenScutcheon");
		}
		return __returnValue;
	}
	native private boolean exist_EVString(long pNativeObject, String name);
	/**
	 * 容器中是否存在EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon对象
	 * @return 是否存在
	 */
	public boolean exist(String name)
	{
		String nameParamValue = name;
		boolean returnValue = exist_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private static long getSingleton_void();
	/**
	 * 单件模式获取EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager对象
	 */
	public static com.earthview.industryengine.industrygraphic.ScreenScutcheonManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.industryengine.industrygraphic.ScreenScutcheonManager __returnValue = new com.earthview.industryengine.industrygraphic.ScreenScutcheonManager(CreatedWhenConstruct.CWC_NotToCreate, "CScreenScutcheonManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.industrygraphic.ScreenScutcheonManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CScreenScutcheonManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	/**
	 * 单件模式获取EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager指针
	 */
	public static com.earthview.industryengine.industrygraphic.ScreenScutcheonManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.industrygraphic.ScreenScutcheonManager __returnValue = new com.earthview.industryengine.industrygraphic.ScreenScutcheonManager(CreatedWhenConstruct.CWC_NotToCreate, "CScreenScutcheonManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.industrygraphic.ScreenScutcheonManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CScreenScutcheonManager");
		}
		return __returnValue;
	}
	native private long getScutcheonMap_CGlobeControl(long pNativeObject, long control);
	/**
	 * 获取容器
	 */
	public com.earthview.industryengine.industrygraphic.ScutcheonMap getScutcheonMap(com.earthview.world.spatial3d.controls.GlobeControl control)
	{
		long controlParamValue = (control == null ? 0L : control.nativeObject.pointer);
		long returnValue = getScutcheonMap_CGlobeControl(this.nativeObject.pointer, controlParamValue);
		com.earthview.industryengine.industrygraphic.ScutcheonMap __returnValue = new com.earthview.industryengine.industrygraphic.ScutcheonMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CScutcheonMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.industrygraphic.ScutcheonMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CScutcheonMap");
		}
		return __returnValue;
	}
	native private void setVisible_bool(long pNativeObject, boolean value);
	/**
	 * 统一设置容器中对象的可见性
	 */
	public void setVisible(boolean value)
	{
		boolean valueParamValue = value;
		setVisible_bool(this.nativeObject.pointer, valueParamValue);
	}
	public ScreenScutcheonManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScreenScutcheonManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ScreenScutcheonManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScreenScutcheonManager obj = null;
 		if(baseObj instanceof ScreenScutcheonManager)
		{
			obj = (ScreenScutcheonManager)baseObj;
		} else {
			obj = new ScreenScutcheonManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScreenScutcheonManager");
			obj.increaseCast();
		}

		return obj;
	}
}
