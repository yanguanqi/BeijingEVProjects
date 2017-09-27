package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGC地图渲染风格描述类
 */
public class Ogcwebservicestyle extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWebServiceStyle", new OgcwebservicestyleClassFactory());
	}

	native private long getTitleCount_void(long pNativeObject);
	/**
	 * 获取风格标题数目
	 * @return 风格标题数目
	 */
	public long getTitleCount()
	{
		long returnValue = getTitleCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getKeywordCount_void(long pNativeObject);
	/**
	 * 获取风格关键词数目
	 * @return 风格关键词数目
	 */
	public long getKeywordCount()
	{
		long returnValue = getKeywordCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getAbstractCount_void(long pNativeObject);
	/**
	 * 获取风格描述数目
	 * @return 风格描述数目
	 */
	public long getAbstractCount()
	{
		long returnValue = getAbstractCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLegendURLCount_void(long pNativeObject);
	/**
	 * 获取风格图例数目
	 * @return 风格图例数目
	 */
	public long getLegendURLCount()
	{
		long returnValue = getLegendURLCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getStyleSheetURL_void(long pNativeObject);
	/**
	 * 获取风格页数目
	 * @return 风格页数目
	 */
	public long getStyleSheetURL()
	{
		long returnValue = getStyleSheetURL_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getIdentifier_void(long pNativeObject);
	/**
	 * 获取风格标识
	 * @return 风格标识
	 */
	public StringPointer getIdentifier()
	{
		long returnValue = getIdentifier_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long isDefault_void(long pNativeObject);
	/**
	 * 检测该风格是否默认
	 * @return 该风格是否默认
	 */
	public BooleanPointer isDefault()
	{
		long returnValue = isDefault_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		BooleanPointer __returnValue = new BooleanPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private String getTitle_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定的风格标题
	 * @param index 索引
	 * @return 指定的风格标题
	 */
	public String getTitle(long index)
	{
		long indexParamValue = index;
		String returnValue = getTitle_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private String getAbstract_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定的风格描述
	 * @param index 索引
	 * @return 指定的风格描述
	 */
	public String getAbstract(long index)
	{
		long indexParamValue = index;
		String returnValue = getAbstract_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private String getKeyword_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定的描述关键词
	 * @param index 索引
	 * @return 指定的描述关键词
	 */
	public String getKeyword(long index)
	{
		long indexParamValue = index;
		String returnValue = getKeyword_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private long getLegendURLRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定的风格图例引用
	 * @param index 索引
	 * @return 指定的风格图例引用
	 */
	public com.earthview.world.spatial.Ogcwebservicelegendurl getLegendURLRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getLegendURLRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcwebservicelegendurl __returnValue = new com.earthview.world.spatial.Ogcwebservicelegendurl(CreatedWhenConstruct.CWC_NotToCreate, "COGCWebServiceLegendURL");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcwebservicelegendurl)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COGCWebServiceLegendURL");
		}
		return __returnValue;
	}
	native private long getStyleSheetURLRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定风格页引用
	 * @param index 索引
	 * @return 获取指定风格页引用
	 */
	public com.earthview.world.spatial.Ogcmetadataurlinfo getStyleSheetURLRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getStyleSheetURLRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcmetadataurlinfo __returnValue = new com.earthview.world.spatial.Ogcmetadataurlinfo(CreatedWhenConstruct.CWC_NotToCreate, "COGCMetaDataURLInfo");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcmetadataurlinfo)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COGCMetaDataURLInfo");
		}
		return __returnValue;
	}
	/**
	 * 构造函数
	 */
	public Ogcwebservicestyle() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("COGCWebServiceStyle", null);
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 复制
	 * @return 新对象的指针
	 */
	public com.earthview.world.spatial.Ogcwebservicestyle ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcwebservicestyle __returnValue = new com.earthview.world.spatial.Ogcwebservicestyle(CreatedWhenConstruct.CWC_NotToCreate, "COGCWebServiceStyle");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcwebservicestyle)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "COGCWebServiceStyle");
		}
		return __returnValue;
	}
	public Ogcwebservicestyle(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ogcwebservicestyle(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Ogcwebservicestyle fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ogcwebservicestyle obj = null;
 		if(baseObj instanceof Ogcwebservicestyle)
		{
			obj = (Ogcwebservicestyle)baseObj;
		} else {
			obj = new Ogcwebservicestyle(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COGCWebServiceStyle");
			obj.increaseCast();
		}

		return obj;
	}
}
