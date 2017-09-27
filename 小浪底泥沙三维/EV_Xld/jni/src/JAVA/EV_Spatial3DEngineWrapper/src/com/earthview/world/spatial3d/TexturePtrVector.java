package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TexturePtrVector extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::TexturePtrVector", new TexturePtrVectorClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public TexturePtrVector() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("TexturePtrVector", null);
	}

	native private void push_back_CTexturePtr(long pNativeObject, long t);
	/**
	 * 在容器末尾添加元素
	 * @param t 元素值
	 */
	public void push_back(com.earthview.world.graphic.TexturePtr t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_CTexturePtr(this.nativeObject.pointer, tParamValue);
	}
	native private void pop_back_void(long pNativeObject);
	/**
	 * 删除最后元素
	 * @param  
	 */
	public void pop_back()
	{
		pop_back_void(this.nativeObject.pointer);
	}
	native private long front_void(long pNativeObject);
	/**
	 * 返回第一个元素
	 * @param  
	 * @return 第一个元素值
	 */
	public com.earthview.world.graphic.TexturePtr front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate, "CTexturePtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	/**
	 * 返回最后元素
	 * @param  
	 * @return 最后元素值
	 */
	public com.earthview.world.graphic.TexturePtr back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate, "CTexturePtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private long at_ev_uint32(long pNativeObject, long pos);
	/**
	 * 返回中间某元素
	 * @param  
	 * @return 元素值
	 */
	public com.earthview.world.graphic.TexturePtr at(long pos)
	{
		long posParamValue = pos;
		long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
		com.earthview.world.graphic.TexturePtr __returnValue = new com.earthview.world.graphic.TexturePtr(CreatedWhenConstruct.CWC_NotToCreate, "CTexturePtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TexturePtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTexturePtr");
		}
		return __returnValue;
	}
	native private void insert_ev_uint32_CTexturePtr(long pNativeObject, long pos, long t);
	/**
	 * 插入元素
	 * @param pos 插入位置
	 * @param t 元素值
	 */
	public void insert(long pos, com.earthview.world.graphic.TexturePtr t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_CTexturePtr(this.nativeObject.pointer, posParamValue, tParamValue);
	}
	native private boolean empty_void(long pNativeObject);
	/**
	 * 判断容器是否为空
	 * @param  
	 * @return 为空返回true，否则false
	 */
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long size_void(long pNativeObject);
	/**
	 * 返回容器中元素数量大小
	 * @param  
	 * @return 返回容器中元素数量大小
	 */
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void resize_ev_size_t(long pNativeObject, long newSize);
	/**
	 * 改变容器大小
	 * @param newSize 容器大小
	 */
	public void resize(long newSize)
	{
		long newSizeParamValue = newSize;
		resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空容器
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private void reserve_ev_size_t(long pNativeObject, long count);
	public void reserve(long count)
	{
		long countParamValue = count;
		reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
	}
	public TexturePtrVector(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TexturePtrVector(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TexturePtrVector fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TexturePtrVector obj = null;
 		if(baseObj instanceof TexturePtrVector)
		{
			obj = (TexturePtrVector)baseObj;
		} else {
			obj = new TexturePtrVector(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "TexturePtrVector");
			obj.increaseCast();
		}

		return obj;
	}
}
