package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 方便地遍历粒子系统中的所有粒子
 */
public class ParticleIterator extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CParticleIterator", new ParticleIteratorClassFactory());
	}

	native private boolean end_void(long pNativeObject);
	/**
	 * 判断是否是粒子列表的末端
	 * @param  
	 * @return 如果是粒子列表的末端返回true，否则返回false
	 */
	public boolean end()
	{
		boolean returnValue = end_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getNext_void(long pNativeObject);
	/**
	 * 返回一个指向下一个粒子的指针，移动迭代器一个元素
	 * @param  
	 * @return 返回指向下一个粒子的指针
	 */
	public com.earthview.world.graphic.Particle getNext()
	{
		long returnValue = getNext_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Particle __returnValue = new com.earthview.world.graphic.Particle(CreatedWhenConstruct.CWC_NotToCreate, "CParticle");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Particle)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParticle");
		}
		return __returnValue;
	}
	public ParticleIterator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ParticleIterator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ParticleIterator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ParticleIterator obj = null;
 		if(baseObj instanceof ParticleIterator)
		{
			obj = (ParticleIterator)baseObj;
		} else {
			obj = new ParticleIterator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CParticleIterator");
			obj.increaseCast();
		}

		return obj;
	}
}
