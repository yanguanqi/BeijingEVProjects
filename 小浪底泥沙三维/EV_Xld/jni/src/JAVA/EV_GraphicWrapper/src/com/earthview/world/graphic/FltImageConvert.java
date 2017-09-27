package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FltImageConvert extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CFltImageConvert", new FltImageConvertClassFactory());
	}

	public FltImageConvert() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CFltImageConvert", null);
	}

	native private void convertImage_EVString_CImage(long pNativeObject, String file, long img);
	/// 外部需自己判断 该函数只转换 rgb rgba，sgi int inta bw六种图片
	public void convertImage(String file, com.earthview.world.graphic.Image img)
	{
		String fileParamValue = file;
		long imgParamValue = img.nativeObject.pointer;
		convertImage_EVString_CImage(this.nativeObject.pointer, fileParamValue, imgParamValue);
	}
	public FltImageConvert(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FltImageConvert(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static FltImageConvert fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FltImageConvert obj = null;
 		if(baseObj instanceof FltImageConvert)
		{
			obj = (FltImageConvert)baseObj;
		} else {
			obj = new FltImageConvert(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFltImageConvert");
			obj.increaseCast();
		}

		return obj;
	}
}
