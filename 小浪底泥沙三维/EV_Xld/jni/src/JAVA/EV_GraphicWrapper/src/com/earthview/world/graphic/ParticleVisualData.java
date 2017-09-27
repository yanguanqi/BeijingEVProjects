package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 抽象类包含了任何和粒子相关完成渲染的附加数据
 */
public class ParticleVisualData extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleVisualData", new ParticleVisualDataClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public ParticleVisualData() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CParticleVisualData", null);
	}

	public ParticleVisualData(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ParticleVisualData(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ParticleVisualData fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ParticleVisualData obj = null;
 		if(baseObj instanceof ParticleVisualData)
		{
			obj = (ParticleVisualData)baseObj;
		} else {
			obj = new ParticleVisualData(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CParticleVisualData");
			obj.increaseCast();
		}

		return obj;
	}
}
