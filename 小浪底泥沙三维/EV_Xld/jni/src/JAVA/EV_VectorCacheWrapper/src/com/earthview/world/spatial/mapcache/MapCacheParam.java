package com.earthview.world.spatial.mapcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MapCacheParam extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::MapCache::CMapCacheParam", new MapCacheParamClassFactory());
	}

	public MapCacheParam() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMapCacheParam", null);
	}

	native private void setClipMap_EVString(long pNativeObject, String name);
	public void setClipMap(String name)
	{
		String nameParamValue = name;
		setClipMap_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private String getClipMap_void(long pNativeObject);
	public String getClipMap()
	{
		String returnValue = getClipMap_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setClipRect_IEnvelope(long pNativeObject, long rect);
	public void setClipRect(com.earthview.world.spatial.geometry.Ienvelope rect)
	{
		long rectParamValue = (rect == null ? 0L : rect.nativeObject.pointer);
		setClipRect_IEnvelope(this.nativeObject.pointer, rectParamValue);
	}
	native private long getClipRect_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Ienvelope getClipRect()
	{
		long returnValue = getClipRect_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}
	native private void setMinRange_ev_int16(long pNativeObject, short minRange);
	public void setMinRange(short minRange)
	{
		short minRangeParamValue = minRange;
		setMinRange_ev_int16(this.nativeObject.pointer, minRangeParamValue);
	}
	native private short getMinRange_void(long pNativeObject);
	public short getMinRange()
	{
		short returnValue = getMinRange_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMaxRange_ev_int16(long pNativeObject, short maxRange);
	public void setMaxRange(short maxRange)
	{
		short maxRangeParamValue = maxRange;
		setMaxRange_ev_int16(this.nativeObject.pointer, maxRangeParamValue);
	}
	native private short getMaxRange_void(long pNativeObject);
	public short getMaxRange()
	{
		short returnValue = getMaxRange_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMode_EVMapCacheMode(long pNativeObject, int mode);
	public void setMode(com.earthview.world.spatial.mapcache.EVMapCacheMode mode)
	{
		int modeParamValue = mode.getValue();
		setMode_EVMapCacheMode(this.nativeObject.pointer, modeParamValue);
	}
	native private int getMode_void(long pNativeObject);
	public com.earthview.world.spatial.mapcache.EVMapCacheMode getMode()
	{
		int returnValue = getMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.mapcache.EVMapCacheMode.toEnum(returnValue);
	}
	native private void setNodeCount_ev_int16(long pNativeObject, short nodeCount);
	public void setNodeCount(short nodeCount)
	{
		short nodeCountParamValue = nodeCount;
		setNodeCount_ev_int16(this.nativeObject.pointer, nodeCountParamValue);
	}
	native private int getNodeCount_void(long pNativeObject);
	public int getNodeCount()
	{
		int returnValue = getNodeCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setXMLFolderPath_EVString(long pNativeObject, String path);
	///获取分布式节点的个数
	public void setXMLFolderPath(String path)
	{
		String pathParamValue = path;
		setXMLFolderPath_EVString(this.nativeObject.pointer, pathParamValue);
	}
	native private String getXMLFolderPath_void(long pNativeObject);
	public String getXMLFolderPath()
	{
		String returnValue = getXMLFolderPath_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCacheType_EVMapCacheDataFormat(long pNativeObject, int type);
	public void setCacheType(com.earthview.world.spatial.mapcache.EVMapCacheDataFormat type)
	{
		int typeParamValue = type.getValue();
		setCacheType_EVMapCacheDataFormat(this.nativeObject.pointer, typeParamValue);
	}
	native private int getMapCacheType_void(long pNativeObject);
	/// 设置切割结果的存储格式
	public com.earthview.world.spatial.mapcache.EVMapCacheDataFormat getMapCacheType()
	{
		int returnValue = getMapCacheType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.mapcache.EVMapCacheDataFormat.toEnum(returnValue);
	}
	native private void setTilePrecision_ev_real64(long pNativeObject, double precision);
	/// 获取切割结果的存储格式
	public void setTilePrecision(double precision)
	{
		double precisionParamValue = precision;
		setTilePrecision_ev_real64(this.nativeObject.pointer, precisionParamValue);
	}
	native private double getTilePrecision_void(long pNativeObject);
	public double getTilePrecision()
	{
		double returnValue = getTilePrecision_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setClipTime_EVString(long pNativeObject, String time);
	public void setClipTime(String time)
	{
		String timeParamValue = time;
		setClipTime_EVString(this.nativeObject.pointer, timeParamValue);
	}
	native private String getClipTime_void(long pNativeObject);
	public String getClipTime()
	{
		String returnValue = getClipTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setFirstFolderName_EVString(long pNativeObject, String name);
	public void setFirstFolderName(String name)
	{
		String nameParamValue = name;
		setFirstFolderName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private String getFirstFolderName_void(long pNativeObject);
	public String getFirstFolderName()
	{
		String returnValue = getFirstFolderName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSecondFolderName_EVString(long pNativeObject, String name);
	public void setSecondFolderName(String name)
	{
		String nameParamValue = name;
		setSecondFolderName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private String getSecondFolderName_void(long pNativeObject);
	public String getSecondFolderName()
	{
		String returnValue = getSecondFolderName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTargetCatalogue_EVString(long pNativeObject, String name);
	public void setTargetCatalogue(String name)
	{
		String nameParamValue = name;
		setTargetCatalogue_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private String getTargetCatalogue_void(long pNativeObject);
	public String getTargetCatalogue()
	{
		String returnValue = getTargetCatalogue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRemarkText_EVString(long pNativeObject, String text);
	public void setRemarkText(String text)
	{
		String textParamValue = text;
		setRemarkText_EVString(this.nativeObject.pointer, textParamValue);
	}
	native private String getRemarkText_void(long pNativeObject);
	public String getRemarkText()
	{
		String returnValue = getRemarkText_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isUpdate_void(long pNativeObject);
	public boolean isUpdate()
	{
		boolean returnValue = isUpdate_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIsUpdate_ev_bool(long pNativeObject, boolean flag);
	public void setIsUpdate(boolean flag)
	{
		boolean flagParamValue = flag;
		setIsUpdate_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private void setIsCreateETM_ev_bool(long pNativeObject, boolean flag);
	public void setIsCreateETM(boolean flag)
	{
		boolean flagParamValue = flag;
		setIsCreateETM_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private boolean isCreateETM_void(long pNativeObject);
	public boolean isCreateETM()
	{
		boolean returnValue = isCreateETM_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long ev_clone_void(long pNativeObject);
	public com.earthview.world.spatial.mapcache.MapCacheParam ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.mapcache.MapCacheParam __returnValue = new com.earthview.world.spatial.mapcache.MapCacheParam(CreatedWhenConstruct.CWC_NotToCreate, "CMapCacheParam");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.mapcache.MapCacheParam)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMapCacheParam");
		}
		return __returnValue;
	}
	native private boolean readEtm_EVString(long pNativeObject, String etmpath);
	public boolean readEtm(String etmpath)
	{
		String etmpathParamValue = etmpath;
		boolean returnValue = readEtm_EVString(this.nativeObject.pointer, etmpathParamValue);
		return returnValue;
	}
	native private boolean fromXmlElement_CXmlElement(long pNativeObject, long element);
	public boolean fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		boolean returnValue = fromXmlElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
		return returnValue;
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
	public MapCacheParam(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MapCacheParam(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MapCacheParam fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MapCacheParam obj = null;
 		if(baseObj instanceof MapCacheParam)
		{
			obj = (MapCacheParam)baseObj;
		} else {
			obj = new MapCacheParam(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMapCacheParam");
			obj.increaseCast();
		}

		return obj;
	}
}
