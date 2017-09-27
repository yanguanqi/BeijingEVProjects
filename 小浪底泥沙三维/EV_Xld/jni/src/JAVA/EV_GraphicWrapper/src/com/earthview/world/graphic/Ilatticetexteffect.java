package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Ilatticetexteffect extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::ILatticeTextEffect", new IlatticetexteffectClassFactory());
	}

	/**
	 * 构造函数
	 */
	public Ilatticetexteffect() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ILatticeTextEffect", null);
	}

	public Ilatticetexteffect(long argb) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer argbPtr = new BasePointer(argb);
		list.add("argb", argbPtr.get());
		Create("ILatticeTextEffect", list);
	}

	public Ilatticetexteffect(com.earthview.world.graphic.ColourValue color) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer colorPtr = new BasePointer(color);
		list.add("color", colorPtr.get());
		Create("ILatticeTextEffect", list);
	}

	native private void setColor_ev_uint32(long pNativeObject, long argb);
	/**
	 * 设置颜色注意:此重载版本不处理OpenGL和D3D的颜色2进制值编码顺序问题
	 * @param color 包括alpha值在内的颜色值,若值为0x0,附件效果元素的颜色将和可渲染文本一致
	 */
	public void setColor(long argb)
	{
		long argbParamValue = argb;
		setColor_ev_uint32(this.nativeObject.pointer, argbParamValue);
	}
	native private void setColor_CColourValue(long pNativeObject, long color);
	/**
	 * 设置颜色
	 * @param color 包括alpha值在内的颜色值,若值为CColourValue(0.0,0.0,0.0,0.0),附件效果元素的颜色将和可渲染文本一致
	 */
	public void setColor(com.earthview.world.graphic.ColourValue color)
	{
		long colorParamValue = color.nativeObject.pointer;
		setColor_CColourValue(this.nativeObject.pointer, colorParamValue);
	}
	native private long getColor_void(long pNativeObject);
	/**
	 * 获取颜色
	 * @return 颜色二进制值
	 */
	public long getColor()
	{
		long returnValue = getColor_void(this.nativeObject.pointer);
		return returnValue;
	}
	public Ilatticetexteffect(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ilatticetexteffect(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Ilatticetexteffect fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ilatticetexteffect obj = null;
 		if(baseObj instanceof Ilatticetexteffect)
		{
			obj = (Ilatticetexteffect)baseObj;
		} else {
			obj = new Ilatticetexteffect(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ILatticeTextEffect");
			obj.increaseCast();
		}

		return obj;
	}
}
