package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的专题信息类
 */
public class ServerTheme extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerTheme", new ServerThemeClassFactory());
	}

	/**
	 * 构造函数
	 */
	public ServerTheme() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CServerTheme", null);
	}

	native private long getThemeName_void(long pNativeObject);
	/**
	 * 获取专题名称
	 * @return 专题名称
	 */
	public StringPointer getThemeName()
	{
		long returnValue = getThemeName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private int getThemeType_void(long pNativeObject);
	/**
	 * 获取专题类型
	 * @return 专题类型
	 */
	public com.earthview.world.spatial.EVSSCThemeType getThemeType()
	{
		int returnValue = getThemeType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.EVSSCThemeType.toEnum(returnValue);
	}
	native private long getFieldName_void(long pNativeObject);
	/**
	 * 获取字段名称
	 * @return 字段名称
	 */
	public StringPointer getFieldName()
	{
		long returnValue = getFieldName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getStyleCount_void(long pNativeObject);
	/**
	 * 获取风格数目
	 * @return 风格数目
	 */
	public long getStyleCount()
	{
		long returnValue = getStyleCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getStyleRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取风格信息
	 * @param index 索引
	 * @return 风格对象指针
	 */
	public com.earthview.world.spatial.ServerStyle getStyleRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getStyleRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.ServerStyle __returnValue = new com.earthview.world.spatial.ServerStyle(CreatedWhenConstruct.CWC_NotToCreate, "CServerStyle");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.ServerStyle)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CServerStyle");
		}
		return __returnValue;
	}
	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆
	 * @return 克隆对象指针
	 */
	public com.earthview.world.spatial.ServerTheme ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.ServerTheme __returnValue = new com.earthview.world.spatial.ServerTheme(CreatedWhenConstruct.CWC_NotToCreate, "CServerTheme");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.ServerTheme)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CServerTheme");
		}
		return __returnValue;
	}
	public ServerTheme(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ServerTheme(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ServerTheme fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ServerTheme obj = null;
 		if(baseObj instanceof ServerTheme)
		{
			obj = (ServerTheme)baseObj;
		} else {
			obj = new ServerTheme(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CServerTheme");
			obj.increaseCast();
		}

		return obj;
	}
}
