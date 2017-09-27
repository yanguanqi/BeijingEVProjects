package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 最低级水平的渲染接口集合
 */
public class QueuedRenderableCollection extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CQueuedRenderableCollection", new QueuedRenderableCollectionClassFactory());
	}

	///集合必须的组织模型
	public enum OrganisationMode implements INativeEnum<OrganisationMode> {
		OM_PASS_GROUP(OrganisationModeHelper.ENUM_VALUES[0]),
		OM_SORT_DESCENDING(OrganisationModeHelper.ENUM_VALUES[1]),
		OM_SORT_ASCENDING(OrganisationModeHelper.ENUM_VALUES[2]);
		private int value;
		OrganisationMode(int i) {
			this.value = i;
		}
		public OrganisationMode getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final OrganisationMode toEnum(int retval) {
			if(retval == OM_PASS_GROUP.value){
				return OM_PASS_GROUP;
			}
			else if(retval == OM_SORT_DESCENDING.value){
				return OM_SORT_DESCENDING;
			}
			else if(retval == OM_SORT_ASCENDING.value){
				return OM_SORT_ASCENDING;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class OrganisationModeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public QueuedRenderableCollection() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CQueuedRenderableCollection", null);
	}

	native private void clear_void(long pNativeObject);
	/**
	 * 清空集合
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private void removePassGroup_CPass(long pNativeObject, long p);
	/**
	 * 去除掉已给通路组的入口
	 * @param p 通路指针
	 */
	public void removePassGroup(com.earthview.world.graphic.Pass p)
	{
		long pParamValue = (p == null ? 0L : p.nativeObject.pointer);
		removePassGroup_CPass(this.nativeObject.pointer, pParamValue);
	}
	native private void resetOrganisationModes_void(long pNativeObject);
	/**
	 * 重新设置集合需要的organisation模型
	 * @param  
	 */
	public void resetOrganisationModes()
	{
		resetOrganisationModes_void(this.nativeObject.pointer);
	}
	native private void addOrganisationMode_OrganisationMode(long pNativeObject, int om);
	/**
	 * 当下一次用到时，添加一个必须的分类模型
	 * @param om 
	 */
	public void addOrganisationMode(com.earthview.world.graphic.QueuedRenderableCollection.OrganisationMode om)
	{
		int omParamValue = om.getValue();
		addOrganisationMode_OrganisationMode(this.nativeObject.pointer, omParamValue);
	}
	native private void addRenderable_CPass_CRenderable(long pNativeObject, long ref_pass, long ref_rend);
	/**
	 * 使用给的通路添加一个渲染接口到集合中
	 * @param pass 通路
	 * @param rend 渲染
	 */
	public void addRenderable(com.earthview.world.graphic.Pass ref_pass, com.earthview.world.graphic.Renderable ref_rend)
	{
		long ref_passParamValue = (ref_pass == null ? 0L : ref_pass.nativeObject.pointer);
		long ref_rendParamValue = (ref_rend == null ? 0L : ref_rend.nativeObject.pointer);
		addRenderable_CPass_CRenderable(this.nativeObject.pointer, ref_passParamValue, ref_rendParamValue);
	}
	native private void sort_CCamera(long pNativeObject, long cam);
	/**
	 * 执行这个集合需要的各种分类
	 * @param cam 
	 */
	public void sort(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		sort_CCamera(this.nativeObject.pointer, camParamValue);
	}
	native private void acceptVisitor_CQueuedRenderableVisitor_OrganisationMode(long pNativeObject, long visitor, int om);
	/**
	 * 接受对结合内容的访问者
	 * @param visitor 
	 * @param om 
	 */
	public void acceptVisitor(com.earthview.world.graphic.QueuedRenderableVisitor visitor, com.earthview.world.graphic.QueuedRenderableCollection.OrganisationMode om)
	{
		long visitorParamValue = (visitor == null ? 0L : visitor.nativeObject.pointer);
		int omParamValue = om.getValue();
		acceptVisitor_CQueuedRenderableVisitor_OrganisationMode(this.nativeObject.pointer, visitorParamValue, omParamValue);
	}
	native private void merge_CQueuedRenderableCollection(long pNativeObject, long rhs);
	/**
	 * 渲染结合的融合
	 * @param rhs 
	 */
	public void merge(com.earthview.world.graphic.QueuedRenderableCollection rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		merge_CQueuedRenderableCollection(this.nativeObject.pointer, rhsParamValue);
	}
	public QueuedRenderableCollection(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public QueuedRenderableCollection(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static QueuedRenderableCollection fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		QueuedRenderableCollection obj = null;
 		if(baseObj instanceof QueuedRenderableCollection)
		{
			obj = (QueuedRenderableCollection)baseObj;
		} else {
			obj = new QueuedRenderableCollection(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CQueuedRenderableCollection");
			obj.increaseCast();
		}

		return obj;
	}
}
