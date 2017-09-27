package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 纯色地形信息类
 */
public class TerrainColorInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CTerrainColorInfo", new TerrainColorInfoClassFactory());
	}

	/**
	 * 纯色地形信息单位类
	 */
	public static class TerrainColorUnit extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit", new TerrainColorUnitClassFactory());
		}

		native private int get_Altitude_void(long pNativeObject);
		public int get_Altitude()
		{
			int jniValue = get_Altitude_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_Altitude_ev_int32 (long pNativeObject, int value);
		public void set_Altitude(int Altitude)
		{
			int AltitudeParamValue = Altitude;
			
			set_Altitude_ev_int32(this.nativeObject.pointer, AltitudeParamValue);
		}
		
		native private short get_G_void(long pNativeObject);
		public short get_G()
		{
			short jniValue = get_G_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_G_ev_uint8 (long pNativeObject, short value);
		public void set_G(short G)
		{
			short GParamValue = G;
			
			set_G_ev_uint8(this.nativeObject.pointer, GParamValue);
		}
		
		native private short get_B_void(long pNativeObject);
		public short get_B()
		{
			short jniValue = get_B_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_B_ev_uint8 (long pNativeObject, short value);
		public void set_B(short B)
		{
			short BParamValue = B;
			
			set_B_ev_uint8(this.nativeObject.pointer, BParamValue);
		}
		
		native private short get_R_void(long pNativeObject);
		public short get_R()
		{
			short jniValue = get_R_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_R_ev_uint8 (long pNativeObject, short value);
		public void set_R(short R)
		{
			short RParamValue = R;
			
			set_R_ev_uint8(this.nativeObject.pointer, RParamValue);
		}
		
		native private int get_PixelY_void(long pNativeObject);
		public int get_PixelY()
		{
			int jniValue = get_PixelY_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_PixelY_ev_uint16 (long pNativeObject, int value);
		public void set_PixelY(int PixelY)
		{
			int PixelYParamValue = PixelY;
			
			set_PixelY_ev_uint16(this.nativeObject.pointer, PixelYParamValue);
		}
		
		/**
		 * 构造函数
		 * @param  
		 */
		public TerrainColorUnit() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("TerrainColorUnit", null);
		}

		native private boolean OperatorLessThan_TerrainColorUnit(long pNativeObject, long rhs);
		/// <summary>
		/// 重写<操作符
		/// </summary>
		/// <param name="rhs">纯色地形单位</param>
		/// <returns></returns>
		public boolean OperatorLessThan(com.earthview.world.spatial3d.TerrainColorInfo.TerrainColorUnit rhs)
		{
			long rhsParamValue = rhs.nativeObject.pointer;
			boolean returnValue = OperatorLessThan_TerrainColorUnit(this.nativeObject.pointer, rhsParamValue);
			return returnValue;
		}
		native private boolean OperatorGreaterThan_TerrainColorUnit(long pNativeObject, long rhs);
		/**
		 * 重写>操作符
		 * @param rhs 纯色地形单位
		 */
		public boolean OperatorGreaterThan(com.earthview.world.spatial3d.TerrainColorInfo.TerrainColorUnit rhs)
		{
			long rhsParamValue = rhs.nativeObject.pointer;
			boolean returnValue = OperatorGreaterThan_TerrainColorUnit(this.nativeObject.pointer, rhsParamValue);
			return returnValue;
		}
		native private boolean OperatorEquals_TerrainColorUnit(long pNativeObject, long rhs);
		/**
		 * 重写==操作符
		 * @param rhs 纯色地形单位
		 */
		public boolean OperatorEquals(com.earthview.world.spatial3d.TerrainColorInfo.TerrainColorUnit rhs)
		{
			long rhsParamValue = rhs.nativeObject.pointer;
			boolean returnValue = OperatorEquals_TerrainColorUnit(this.nativeObject.pointer, rhsParamValue);
			return returnValue;
		}
		native private boolean OperatorNotEquals_TerrainColorUnit(long pNativeObject, long rhs);
		/**
		 * 重写!=操作符
		 * @param rhs 纯色地形单位
		 */
		public boolean OperatorNotEquals(com.earthview.world.spatial3d.TerrainColorInfo.TerrainColorUnit rhs)
		{
			long rhsParamValue = rhs.nativeObject.pointer;
			boolean returnValue = OperatorNotEquals_TerrainColorUnit(this.nativeObject.pointer, rhsParamValue);
			return returnValue;
		}
		public TerrainColorUnit(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public TerrainColorUnit(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static TerrainColorUnit fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			TerrainColorUnit obj = null;
 			if(baseObj instanceof TerrainColorUnit)
			{
				obj = (TerrainColorUnit)baseObj;
			} else {
				obj = new TerrainColorUnit(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "TerrainColorUnit");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TerrainColorUnitClassFactory implements IClassFactory {
		public BaseObject create()
		{
			TerrainColorUnit emptyInstance = new TerrainColorUnit(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 构造函数
	 * @param  
	 */
	public TerrainColorInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTerrainColorInfo", null);
	}

	public TerrainColorInfo(com.earthview.world.spatial3d.TerrainColorInfo rhs) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		Create("CTerrainColorInfo", list);
	}

	native private short getColorImageHeight_void(long pNativeObject);
	/**
	 * 获取颜色影像高度
	 * @param  
	 * @return 颜色影像高度
	 */
	public short getColorImageHeight()
	{
		short returnValue = getColorImageHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMax_void(long pNativeObject);
	/**
	 * 获取最大单位
	 * @param  
	 * @return 最大单位
	 */
	public com.earthview.world.spatial3d.TerrainColorInfo.TerrainColorUnit getMax()
	{
		long returnValue = getMax_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.TerrainColorInfo.TerrainColorUnit __returnValue = new com.earthview.world.spatial3d.TerrainColorInfo.TerrainColorUnit(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "TerrainColorUnit");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.TerrainColorInfo.TerrainColorUnit)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "TerrainColorUnit");
		}
		return __returnValue;
	}
	native private void setMax_ev_int32_ev_uint8_ev_uint8_ev_uint8(long pNativeObject, int altitude, short r, short g, short b);
	/**
	 * 设置最大单位
	 * @param altitude 高程
	 * @param r r
	 * @param g g
	 * @param b b
	 */
	public void setMax(int altitude, short r, short g, short b)
	{
		int altitudeParamValue = altitude;
		short rParamValue = r;
		short gParamValue = g;
		short bParamValue = b;
		setMax_ev_int32_ev_uint8_ev_uint8_ev_uint8(this.nativeObject.pointer, altitudeParamValue, rParamValue, gParamValue, bParamValue);
	}
	native private long getMin_void(long pNativeObject);
	/**
	 * 获取最小单位
	 * @param  
	 * @return 最大单位
	 */
	public com.earthview.world.spatial3d.TerrainColorInfo.TerrainColorUnit getMin()
	{
		long returnValue = getMin_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.TerrainColorInfo.TerrainColorUnit __returnValue = new com.earthview.world.spatial3d.TerrainColorInfo.TerrainColorUnit(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "TerrainColorUnit");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.TerrainColorInfo.TerrainColorUnit)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "TerrainColorUnit");
		}
		return __returnValue;
	}
	native private void setMin_ev_int32_ev_uint8_ev_uint8_ev_uint8(long pNativeObject, int altitude, short r, short g, short b);
	/**
	 * 设置最小单位
	 * @param altitude 高程
	 * @param r r
	 * @param g g
	 * @param b b
	 */
	public void setMin(int altitude, short r, short g, short b)
	{
		int altitudeParamValue = altitude;
		short rParamValue = r;
		short gParamValue = g;
		short bParamValue = b;
		setMin_ev_int32_ev_uint8_ev_uint8_ev_uint8(this.nativeObject.pointer, altitudeParamValue, rParamValue, gParamValue, bParamValue);
	}
	native private boolean insertUnit_TerrainColorUnit(long pNativeObject, long unit);
	/**
	 * 获取单位
	 * @param unit 单位
	 */
	public boolean insertUnit(com.earthview.world.spatial3d.TerrainColorInfo.TerrainColorUnit unit)
	{
		long unitParamValue = unit.nativeObject.pointer;
		boolean returnValue = insertUnit_TerrainColorUnit(this.nativeObject.pointer, unitParamValue);
		return returnValue;
	}
	native private boolean existUnit_ev_int32(long pNativeObject, int altitude);
	/**
	 * 判断是否存在单位
	 * @param altitude 高程
	 * @return 是否存在
	 */
	public boolean existUnit(int altitude)
	{
		int altitudeParamValue = altitude;
		boolean returnValue = existUnit_ev_int32(this.nativeObject.pointer, altitudeParamValue);
		return returnValue;
	}
	native private boolean removeUnit_ev_int32(long pNativeObject, int altitude);
	/**
	 * 移除单位
	 * @param altitude 高程
	 * @return 是否成功移除
	 */
	public boolean removeUnit(int altitude)
	{
		int altitudeParamValue = altitude;
		boolean returnValue = removeUnit_ev_int32(this.nativeObject.pointer, altitudeParamValue);
		return returnValue;
	}
	native private void clearUnits_void(long pNativeObject);
	/**
	 * 清除单位
	 * @param  
	 */
	public void clearUnits()
	{
		clearUnits_void(this.nativeObject.pointer);
	}
	native private int getUnitCount_void(long pNativeObject);
	/**
	 * 获取单位数量
	 * @param  
	 * @return 单位数量
	 */
	public int getUnitCount()
	{
		int returnValue = getUnitCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getUnit_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取单位
	 * @param index 索引
	 * @return 单位
	 */
	public com.earthview.world.spatial3d.TerrainColorInfo.TerrainColorUnit getUnit(long index)
	{
		long indexParamValue = index;
		long returnValue = getUnit_ev_uint32(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial3d.TerrainColorInfo.TerrainColorUnit __returnValue = new com.earthview.world.spatial3d.TerrainColorInfo.TerrainColorUnit(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "TerrainColorUnit");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.TerrainColorInfo.TerrainColorUnit)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "TerrainColorUnit");
		}
		return __returnValue;
	}
	native private boolean getExtent_ev_int32_ev_uint16_ev_uint16(long pNativeObject, int altitude, long minPixel, long maxPixel);
	/**
	 * 设置像素范围
	 * @param altitude 高程
	 * @param minPixel 最小像素
	 * @param maxPixel 最大像素
	 * @return 是否成功
	 */
	public boolean getExtent(int altitude, UShortPointer minPixel, UShortPointer maxPixel)
	{
		int altitudeParamValue = altitude;
		long minPixelParamValue = minPixel.nativeObject.pointer;
		long maxPixelParamValue = maxPixel.nativeObject.pointer;
		boolean returnValue = getExtent_ev_int32_ev_uint16_ev_uint16(this.nativeObject.pointer, altitudeParamValue, minPixelParamValue, maxPixelParamValue);
		return returnValue;
	}
	native private void reset_void(long pNativeObject);
	/**
	 * 重置
	 * @param  
	 */
	public void reset()
	{
		reset_void(this.nativeObject.pointer);
	}
	native private String toXml_void(long pNativeObject);
	/**
	 * 写入XML元素
	 * @param  
	 * @return XML字符串
	 */
	public String toXml()
	{
		String returnValue = toXml_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean fromXml_CXmlElement(long pNativeObject, long xmlElement);
	/**
	 * 从XML元素中恢复
	 * @param xmlElement XML字符串
	 * @return 是否成功
	 */
	public boolean fromXml(com.earthview.world.core.XmlElement xmlElement)
	{
		long xmlElementParamValue = xmlElement.nativeObject.pointer;
		boolean returnValue = fromXml_CXmlElement(this.nativeObject.pointer, xmlElementParamValue);
		return returnValue;
	}
	native private float locate_ev_real32(long pNativeObject, float altitude);
	/**
	 * 根据高程返回距离比例
	 * @param altitude 高程
	 * @return 距离比例
	 */
	public float locate(float altitude)
	{
		float altitudeParamValue = altitude;
		float returnValue = locate_ev_real32(this.nativeObject.pointer, altitudeParamValue);
		return returnValue;
	}
	native private long render_EVString(long pNativeObject, String imageType);
	/**
	 * 绘制成图片
	 * @param imageType 图片类型
	 * @return 图片流
	 */
	public com.earthview.world.core.MemoryDataStreamPtr render(String imageType)
	{
		String imageTypeParamValue = imageType;
		long returnValue = render_EVString(this.nativeObject.pointer, imageTypeParamValue);
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
	native private static long drawGrid_EVString_ev_uint32_ev_uint32(String imageType, long width, long height);
	/**
	 * 绘制成栅格图片
	 * @param imageType 图片类型
	 * @param width 图片宽度
	 * @param height 图片高度
	 * @return 图片流
	 */
	public static com.earthview.world.core.MemoryDataStreamPtr drawGrid(String imageType, long width, long height)
	{
		String imageTypeParamValue = imageType;
		long widthParamValue = width;
		long heightParamValue = height;
		long returnValue = drawGrid_EVString_ev_uint32_ev_uint32(imageTypeParamValue, widthParamValue, heightParamValue);
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
	native private boolean OperatorEquals_CTerrainColorInfo(long pNativeObject, long rhs);
	/**
	 * 重写==操作符
	 * @param rhs 纯色地形信息
	 */
	public boolean OperatorEquals(com.earthview.world.spatial3d.TerrainColorInfo rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CTerrainColorInfo(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CTerrainColorInfo(long pNativeObject, long rhs);
	/**
	 * 重写！=操作符
	 * @param rhs 纯色地形信息
	 */
	public boolean OperatorNotEquals(com.earthview.world.spatial3d.TerrainColorInfo rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CTerrainColorInfo(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	public TerrainColorInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TerrainColorInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TerrainColorInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TerrainColorInfo obj = null;
 		if(baseObj instanceof TerrainColorInfo)
		{
			obj = (TerrainColorInfo)baseObj;
		} else {
			obj = new TerrainColorInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTerrainColorInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
