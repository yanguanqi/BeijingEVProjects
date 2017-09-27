package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FltBaseNode extends com.earthview.world.graphic.OctreeNode {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::CFltBaseNode", new FltBaseNodeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::JCFltBaseNodeProxy", new FltBaseNodeClassFactory());
	}

	public enum EVFltNodeType implements INativeEnum<EVFltNodeType> {
		FLT_BASENODE(EVFltNodeTypeHelper.ENUM_VALUES[0]),
		FLT_GROUP(EVFltNodeTypeHelper.ENUM_VALUES[1]),
		FLT_SEQUENCE(EVFltNodeTypeHelper.ENUM_VALUES[2]),
		FLT_SWITCH(EVFltNodeTypeHelper.ENUM_VALUES[3]),
		FLT_MUTISWITCH(EVFltNodeTypeHelper.ENUM_VALUES[4]),
		FLT_LIGHTPOINT(EVFltNodeTypeHelper.ENUM_VALUES[5]),
		FLT_LOD(EVFltNodeTypeHelper.ENUM_VALUES[6]),
		FLT_DOF(EVFltNodeTypeHelper.ENUM_VALUES[7]);
		private int value;
		EVFltNodeType(int i) {
			this.value = i;
		}
		public EVFltNodeType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVFltNodeType toEnum(int retval) {
			if(retval == FLT_BASENODE.value){
				return FLT_BASENODE;
			}
			else if(retval == FLT_GROUP.value){
				return FLT_GROUP;
			}
			else if(retval == FLT_SEQUENCE.value){
				return FLT_SEQUENCE;
			}
			else if(retval == FLT_SWITCH.value){
				return FLT_SWITCH;
			}
			else if(retval == FLT_MUTISWITCH.value){
				return FLT_MUTISWITCH;
			}
			else if(retval == FLT_LIGHTPOINT.value){
				return FLT_LIGHTPOINT;
			}
			else if(retval == FLT_LOD.value){
				return FLT_LOD;
			}
			else if(retval == FLT_DOF.value){
				return FLT_DOF;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVFltNodeTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 构造函数
	 * @param name 分配的节点名称
	 */
	public FltBaseNode(String name, com.earthview.world.graphic.SceneManager ref_creator) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer ref_creatorPtr = new BasePointer(ref_creator);
		list.add("ref_creator", ref_creatorPtr.get());
		Create("JCFltBaseNodeProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.modelmanager.FltBaseNode".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取FLT节点类型
	 * @param updateChildren 为真，逐级更新所有子节点
	 * @param parentHasChanged 为true，表明父节点位置改变，子节点继承父节点变化
	 * @return 节点类型
	 */
	public com.earthview.world.spatial3d.modelmanager.FltBaseNode.EVFltNodeType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.modelmanager.FltBaseNode.EVFltNodeType.toEnum(returnValue);
	}
	protected  void serializerAttributes_CommonStringPairList_callback(long attributes)
	{
		com.earthview.world.core.CommonStringPairList attributesParamValue = new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
		attributesParamValue.setDelegate(true);
		attributesParamValue.setInstancePointer(new InstancePointer(attributes));
		IClassFactory attributesParamValueClassFactory = GlobalClassFactoryMap.get(attributesParamValue.getCppInstanceTypeName());
		if (attributesParamValueClassFactory != null)
		{
			attributesParamValue.setDelegate(true);
			attributesParamValue = (com.earthview.world.core.CommonStringPairList)attributesParamValueClassFactory.create();
			attributesParamValue.setDelegate(true);
			attributesParamValue.setInstancePointer(new InstancePointer(attributes));
		}
		serializerAttributes(attributesParamValue);
	}

	native private void serializerAttributes_CommonStringPairList(long pNativeObject, long attributes);
	public void serializerAttributes(com.earthview.world.core.CommonStringPairList attributes)
	{
		long attributesParamValue = attributes.nativeObject.pointer;
		serializerAttributes_CommonStringPairList(this.nativeObject.pointer, attributesParamValue);
	}
	native private void serializerAttributes_CommonStringPairList_NoVirtual(long pNativeObject, long attributes);
	protected void serializerAttributes_NoVirtual(com.earthview.world.core.CommonStringPairList attributes)
	{
		long attributesParamValue = attributes.nativeObject.pointer;
		serializerAttributes_CommonStringPairList_NoVirtual(this.nativeObject.pointer, attributesParamValue);
	}

	protected  void setRefInstancedEntityVector_InstancedEntityVector_callback(long refInstancedEntityVector)
	{
		com.earthview.world.spatial3d.InstancedEntityVector refInstancedEntityVectorParamValue = new com.earthview.world.spatial3d.InstancedEntityVector(CreatedWhenConstruct.CWC_NotToCreate);
		refInstancedEntityVectorParamValue.setDelegate(true);
		refInstancedEntityVectorParamValue.setInstancePointer(new InstancePointer(refInstancedEntityVector));
		IClassFactory refInstancedEntityVectorParamValueClassFactory = GlobalClassFactoryMap.get(refInstancedEntityVectorParamValue.getCppInstanceTypeName());
		if (refInstancedEntityVectorParamValueClassFactory != null)
		{
			refInstancedEntityVectorParamValue.setDelegate(true);
			refInstancedEntityVectorParamValue = (com.earthview.world.spatial3d.InstancedEntityVector)refInstancedEntityVectorParamValueClassFactory.create();
			refInstancedEntityVectorParamValue.setDelegate(true);
			refInstancedEntityVectorParamValue.setInstancePointer(new InstancePointer(refInstancedEntityVector));
		}
		setRefInstancedEntityVector(refInstancedEntityVectorParamValue);
	}

	native private void setRefInstancedEntityVector_InstancedEntityVector(long pNativeObject, long refInstancedEntityVector);
	public void setRefInstancedEntityVector(com.earthview.world.spatial3d.InstancedEntityVector refInstancedEntityVector)
	{
		long refInstancedEntityVectorParamValue = refInstancedEntityVector.nativeObject.pointer;
		setRefInstancedEntityVector_InstancedEntityVector(this.nativeObject.pointer, refInstancedEntityVectorParamValue);
	}
	native private void setRefInstancedEntityVector_InstancedEntityVector_NoVirtual(long pNativeObject, long refInstancedEntityVector);
	protected void setRefInstancedEntityVector_NoVirtual(com.earthview.world.spatial3d.InstancedEntityVector refInstancedEntityVector)
	{
		long refInstancedEntityVectorParamValue = refInstancedEntityVector.nativeObject.pointer;
		setRefInstancedEntityVector_InstancedEntityVector_NoVirtual(this.nativeObject.pointer, refInstancedEntityVectorParamValue);
	}

	protected  long getRefInstancedEntityVector_void_callback()
	{
		com.earthview.world.spatial3d.InstancedEntityVector returnValue = getRefInstancedEntityVector();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRefInstancedEntityVector_void(long pNativeObject);
	public com.earthview.world.spatial3d.InstancedEntityVector getRefInstancedEntityVector()
	{
		long returnValue = getRefInstancedEntityVector_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.InstancedEntityVector __returnValue = new com.earthview.world.spatial3d.InstancedEntityVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "InstancedEntityVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.InstancedEntityVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "InstancedEntityVector");
		}
		return __returnValue;
	}
	native private long getRefInstancedEntityVector_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.InstancedEntityVector getRefInstancedEntityVector_NoVirtual()
	{
		long returnValue = getRefInstancedEntityVector_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial3d.InstancedEntityVector __returnValue = new com.earthview.world.spatial3d.InstancedEntityVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "InstancedEntityVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.InstancedEntityVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "InstancedEntityVector");
		}
		return __returnValue;
	}

	protected  void setRefEntity_CEntity_callback(long refEntity)
	{
		com.earthview.world.graphic.Entity refEntityParamValue = (refEntity == 0L ? null : new com.earthview.world.graphic.Entity(CreatedWhenConstruct.CWC_NotToCreate));
		if(refEntityParamValue != null)
		{
		refEntityParamValue.setDelegate(true);
		refEntityParamValue.setInstancePointer(new InstancePointer(refEntity));
		IClassFactory refEntityParamValueClassFactory = GlobalClassFactoryMap.get(refEntityParamValue.getCppInstanceTypeName());
		if (refEntityParamValueClassFactory != null)
		{
			refEntityParamValue.setDelegate(true);
			refEntityParamValue = (com.earthview.world.graphic.Entity)refEntityParamValueClassFactory.create();
			refEntityParamValue.setDelegate(true);
			refEntityParamValue.setInstancePointer(new InstancePointer(refEntity));
		}
		}
		setRefEntity(refEntityParamValue);
	}

	native private void setRefEntity_CEntity(long pNativeObject, long refEntity);
	public void setRefEntity(com.earthview.world.graphic.Entity refEntity)
	{
		long refEntityParamValue = (refEntity == null ? 0L : refEntity.nativeObject.pointer);
		setRefEntity_CEntity(this.nativeObject.pointer, refEntityParamValue);
	}
	native private void setRefEntity_CEntity_NoVirtual(long pNativeObject, long refEntity);
	protected void setRefEntity_NoVirtual(com.earthview.world.graphic.Entity refEntity)
	{
		long refEntityParamValue = (refEntity == null ? 0L : refEntity.nativeObject.pointer);
		setRefEntity_CEntity_NoVirtual(this.nativeObject.pointer, refEntityParamValue);
	}

	protected  void addRefSubEntityIndex_ev_uint32_callback(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		addRefSubEntityIndex(subEntityIndexParamValue);
	}

	native private void addRefSubEntityIndex_ev_uint32(long pNativeObject, long subEntityIndex);
	public void addRefSubEntityIndex(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		addRefSubEntityIndex_ev_uint32(this.nativeObject.pointer, subEntityIndexParamValue);
	}
	native private void addRefSubEntityIndex_ev_uint32_NoVirtual(long pNativeObject, long subEntityIndex);
	protected void addRefSubEntityIndex_NoVirtual(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		addRefSubEntityIndex_ev_uint32_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue);
	}

	protected  void addHideRefSubEntityIndex_ev_uint32_callback(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		addHideRefSubEntityIndex(subEntityIndexParamValue);
	}

	native private void addHideRefSubEntityIndex_ev_uint32(long pNativeObject, long subEntityIndex);
	public void addHideRefSubEntityIndex(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		addHideRefSubEntityIndex_ev_uint32(this.nativeObject.pointer, subEntityIndexParamValue);
	}
	native private void addHideRefSubEntityIndex_ev_uint32_NoVirtual(long pNativeObject, long subEntityIndex);
	protected void addHideRefSubEntityIndex_NoVirtual(long subEntityIndex)
	{
		long subEntityIndexParamValue = subEntityIndex;
		addHideRefSubEntityIndex_ev_uint32_NoVirtual(this.nativeObject.pointer, subEntityIndexParamValue);
	}

	protected  int getSubEntityIndex_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		int returnValue = getSubEntityIndex(indexParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getSubEntityIndex_ev_uint32(long pNativeObject, long index);
	public int getSubEntityIndex(long index)
	{
		long indexParamValue = index;
		int returnValue = getSubEntityIndex_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private int getSubEntityIndex_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected int getSubEntityIndex_NoVirtual(long index)
	{
		long indexParamValue = index;
		int returnValue = getSubEntityIndex_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  int getHideSubEntityIndex_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		int returnValue = getHideSubEntityIndex(indexParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getHideSubEntityIndex_ev_uint32(long pNativeObject, long index);
	public int getHideSubEntityIndex(long index)
	{
		long indexParamValue = index;
		int returnValue = getHideSubEntityIndex_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private int getHideSubEntityIndex_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected int getHideSubEntityIndex_NoVirtual(long index)
	{
		long indexParamValue = index;
		int returnValue = getHideSubEntityIndex_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  long numSubEntity_void_callback()
	{
		long returnValue = numSubEntity();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long numSubEntity_void(long pNativeObject);
	public long numSubEntity()
	{
		long returnValue = numSubEntity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long numSubEntity_void_NoVirtual(long pNativeObject);
	protected long numSubEntity_NoVirtual()
	{
		long returnValue = numSubEntity_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long numHideSubEntity_void_callback()
	{
		long returnValue = numHideSubEntity();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long numHideSubEntity_void(long pNativeObject);
	public long numHideSubEntity()
	{
		long returnValue = numHideSubEntity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long numHideSubEntity_void_NoVirtual(long pNativeObject);
	protected long numHideSubEntity_NoVirtual()
	{
		long returnValue = numHideSubEntity_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void clearHideEntityIndex_void_callback()
	{
		clearHideEntityIndex();
	}

	native private void clearHideEntityIndex_void(long pNativeObject);
	public void clearHideEntityIndex()
	{
		clearHideEntityIndex_void(this.nativeObject.pointer);
	}
	native private void clearHideEntityIndex_void_NoVirtual(long pNativeObject);
	protected void clearHideEntityIndex_NoVirtual()
	{
		clearHideEntityIndex_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long getEntity_void_callback()
	{
		com.earthview.world.graphic.Entity returnValue = getEntity();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getEntity_void(long pNativeObject);
	public com.earthview.world.graphic.Entity getEntity()
	{
		long returnValue = getEntity_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Entity __returnValue = new com.earthview.world.graphic.Entity(CreatedWhenConstruct.CWC_NotToCreate, "CEntity");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Entity)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEntity");
		}
		return __returnValue;
	}
	native private long getEntity_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Entity getEntity_NoVirtual()
	{
		long returnValue = getEntity_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Entity __returnValue = new com.earthview.world.graphic.Entity(CreatedWhenConstruct.CWC_NotToCreate, "CEntity");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Entity)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEntity");
		}
		return __returnValue;
	}

	native private void setVisible_ev_bool_ev_bool(long pNativeObject, boolean visible, boolean cascade);
	public void setVisible(boolean visible, boolean cascade)
	{
		boolean visibleParamValue = visible;
		boolean cascadeParamValue = cascade;
		setVisible_ev_bool_ev_bool(this.nativeObject.pointer, visibleParamValue, cascadeParamValue);
	}
	native private void setVisible_ev_bool_ev_bool_NoVirtual(long pNativeObject, boolean visible, boolean cascade);
	protected void setVisible_NoVirtual(boolean visible, boolean cascade)
	{
		boolean visibleParamValue = visible;
		boolean cascadeParamValue = cascade;
		setVisible_ev_bool_ev_bool_NoVirtual(this.nativeObject.pointer, visibleParamValue, cascadeParamValue);
	}

	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private void setVisible_ev_bool_NoVirtual(long pNativeObject, boolean visible);
	protected void setVisible_NoVirtual(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool_NoVirtual(this.nativeObject.pointer, visibleParamValue);
	}

	native private void _findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool(long pNativeObject, long cam, long queue, long visibleBounds, boolean includeChildren, boolean displayNodes, boolean onlyShadowCasters);
	public void _findVisibleObjects(com.earthview.world.graphic.Camera cam, com.earthview.world.graphic.RenderQueue queue, com.earthview.world.graphic.VisibleObjectsBoundsInfo visibleBounds, boolean includeChildren, boolean displayNodes, boolean onlyShadowCasters)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		long visibleBoundsParamValue = (visibleBounds == null ? 0L : visibleBounds.nativeObject.pointer);
		boolean includeChildrenParamValue = includeChildren;
		boolean displayNodesParamValue = displayNodes;
		boolean onlyShadowCastersParamValue = onlyShadowCasters;
		_findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool(this.nativeObject.pointer, camParamValue, queueParamValue, visibleBoundsParamValue, includeChildrenParamValue, displayNodesParamValue, onlyShadowCastersParamValue);
	}
	native private void _findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_NoVirtual(long pNativeObject, long cam, long queue, long visibleBounds, boolean includeChildren, boolean displayNodes, boolean onlyShadowCasters);
	protected void _findVisibleObjects_NoVirtual(com.earthview.world.graphic.Camera cam, com.earthview.world.graphic.RenderQueue queue, com.earthview.world.graphic.VisibleObjectsBoundsInfo visibleBounds, boolean includeChildren, boolean displayNodes, boolean onlyShadowCasters)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		long visibleBoundsParamValue = (visibleBounds == null ? 0L : visibleBounds.nativeObject.pointer);
		boolean includeChildrenParamValue = includeChildren;
		boolean displayNodesParamValue = displayNodes;
		boolean onlyShadowCastersParamValue = onlyShadowCasters;
		_findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_NoVirtual(this.nativeObject.pointer, camParamValue, queueParamValue, visibleBoundsParamValue, includeChildrenParamValue, displayNodesParamValue, onlyShadowCastersParamValue);
	}

	native private void removeAndDestroyChild_EVString(long pNativeObject, String name);
	/**
	 * 通过名称删除指定子节点及其它的字节点
	 * @param name 名称
	 */
	public void removeAndDestroyChild(String name)
	{
		String nameParamValue = name;
		removeAndDestroyChild_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void removeAndDestroyChild_EVString_NoVirtual(long pNativeObject, String name);
	protected void removeAndDestroyChild_NoVirtual(String name)
	{
		String nameParamValue = name;
		removeAndDestroyChild_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	native private void removeAndDestroyChild_ev_uint16(long pNativeObject, int index);
	/**
	 * 通过检索删除指定子节点及其它的字节点
	 * @param index 检索
	 */
	public void removeAndDestroyChild(int index)
	{
		int indexParamValue = index;
		removeAndDestroyChild_ev_uint16(this.nativeObject.pointer, indexParamValue);
	}
	native private void removeAndDestroyChild_ev_uint16_NoVirtual(long pNativeObject, int index);
	protected void removeAndDestroyChild_NoVirtual(int index)
	{
		int indexParamValue = index;
		removeAndDestroyChild_ev_uint16_NoVirtual(this.nativeObject.pointer, indexParamValue);
	}

	native private void removeAndDestroyAllChildren_void(long pNativeObject);
	/**
	 * 删除此节点的所有子节点
	 * @param  
	 */
	public void removeAndDestroyAllChildren()
	{
		removeAndDestroyAllChildren_void(this.nativeObject.pointer);
	}
	native private void removeAndDestroyAllChildren_void_NoVirtual(long pNativeObject);
	protected void removeAndDestroyAllChildren_NoVirtual()
	{
		removeAndDestroyAllChildren_void_NoVirtual(this.nativeObject.pointer);
	}

	native private boolean getVisible_void(long pNativeObject);
	public boolean getVisible()
	{
		boolean returnValue = getVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getVisible_void_NoVirtual(long pNativeObject);
	protected boolean getVisible_NoVirtual()
	{
		boolean returnValue = getVisible_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean getDerivedVisible_void_callback()
	{
		boolean returnValue = getDerivedVisible();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getDerivedVisible_void(long pNativeObject);
	public boolean getDerivedVisible()
	{
		boolean returnValue = getDerivedVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getDerivedVisible_void_NoVirtual(long pNativeObject);
	protected boolean getDerivedVisible_NoVirtual()
	{
		boolean returnValue = getDerivedVisible_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void addChildOrder_ev_uint32_EVString_callback(long indexOrder, String nodeName)
	{
		long indexOrderParamValue = indexOrder;
		String nodeNameParamValue = nodeName;
		addChildOrder(indexOrderParamValue, nodeNameParamValue);
	}

	native private void addChildOrder_ev_uint32_EVString(long pNativeObject, long indexOrder, String nodeName);
	public void addChildOrder(long indexOrder, String nodeName)
	{
		long indexOrderParamValue = indexOrder;
		String nodeNameParamValue = nodeName;
		addChildOrder_ev_uint32_EVString(this.nativeObject.pointer, indexOrderParamValue, nodeNameParamValue);
	}
	native private void addChildOrder_ev_uint32_EVString_NoVirtual(long pNativeObject, long indexOrder, String nodeName);
	protected void addChildOrder_NoVirtual(long indexOrder, String nodeName)
	{
		long indexOrderParamValue = indexOrder;
		String nodeNameParamValue = nodeName;
		addChildOrder_ev_uint32_EVString_NoVirtual(this.nativeObject.pointer, indexOrderParamValue, nodeNameParamValue);
	}

	protected  void updateEntitySelectable_ev_bool_callback(boolean flag)
	{
		boolean flagParamValue = flag;
		updateEntitySelectable(flagParamValue);
	}

	native private void updateEntitySelectable_ev_bool(long pNativeObject, boolean flag);
	public void updateEntitySelectable(boolean flag)
	{
		boolean flagParamValue = flag;
		updateEntitySelectable_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private void updateEntitySelectable_ev_bool_NoVirtual(long pNativeObject, boolean flag);
	protected void updateEntitySelectable_NoVirtual(boolean flag)
	{
		boolean flagParamValue = flag;
		updateEntitySelectable_ev_bool_NoVirtual(this.nativeObject.pointer, flagParamValue);
	}

	protected  void updateSubEntityVisible_ev_bool_ev_bool_callback(boolean flag, boolean updateChild)
	{
		boolean flagParamValue = flag;
		boolean updateChildParamValue = updateChild;
		updateSubEntityVisible(flagParamValue, updateChildParamValue);
	}

	native private void updateSubEntityVisible_ev_bool_ev_bool(long pNativeObject, boolean flag, boolean updateChild);
	public void updateSubEntityVisible(boolean flag, boolean updateChild)
	{
		boolean flagParamValue = flag;
		boolean updateChildParamValue = updateChild;
		updateSubEntityVisible_ev_bool_ev_bool(this.nativeObject.pointer, flagParamValue, updateChildParamValue);
	}
	native private void updateSubEntityVisible_ev_bool_ev_bool_NoVirtual(long pNativeObject, boolean flag, boolean updateChild);
	protected void updateSubEntityVisible_NoVirtual(boolean flag, boolean updateChild)
	{
		boolean flagParamValue = flag;
		boolean updateChildParamValue = updateChild;
		updateSubEntityVisible_ev_bool_ev_bool_NoVirtual(this.nativeObject.pointer, flagParamValue, updateChildParamValue);
	}

	native private void _addToRenderQueue_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo(long pNativeObject, long cam, long q, boolean onlyShadowCasters, long visibleBounds);
	public void _addToRenderQueue(com.earthview.world.graphic.Camera cam, com.earthview.world.graphic.RenderQueue q, boolean onlyShadowCasters, com.earthview.world.graphic.VisibleObjectsBoundsInfo visibleBounds)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		long qParamValue = (q == null ? 0L : q.nativeObject.pointer);
		boolean onlyShadowCastersParamValue = onlyShadowCasters;
		long visibleBoundsParamValue = (visibleBounds == null ? 0L : visibleBounds.nativeObject.pointer);
		_addToRenderQueue_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo(this.nativeObject.pointer, camParamValue, qParamValue, onlyShadowCastersParamValue, visibleBoundsParamValue);
	}
	native private void _addToRenderQueue_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo_NoVirtual(long pNativeObject, long cam, long q, boolean onlyShadowCasters, long visibleBounds);
	protected void _addToRenderQueue_NoVirtual(com.earthview.world.graphic.Camera cam, com.earthview.world.graphic.RenderQueue q, boolean onlyShadowCasters, com.earthview.world.graphic.VisibleObjectsBoundsInfo visibleBounds)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		long qParamValue = (q == null ? 0L : q.nativeObject.pointer);
		boolean onlyShadowCastersParamValue = onlyShadowCasters;
		long visibleBoundsParamValue = (visibleBounds == null ? 0L : visibleBounds.nativeObject.pointer);
		_addToRenderQueue_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo_NoVirtual(this.nativeObject.pointer, camParamValue, qParamValue, onlyShadowCastersParamValue, visibleBoundsParamValue);
	}

	native private long createChildImpl_void(long pNativeObject);
	public com.earthview.world.graphic.Node createChildImpl()
	{
		long returnValue = createChildImpl_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}
	native private long createChildImpl_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Node createChildImpl_NoVirtual()
	{
		long returnValue = createChildImpl_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}

	native private long createChildImpl_EVString(long pNativeObject, String name);
	public com.earthview.world.graphic.Node createChildImpl(String name)
	{
		String nameParamValue = name;
		long returnValue = createChildImpl_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}
	native private long createChildImpl_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.graphic.Node createChildImpl_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = createChildImpl_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}

	public FltBaseNode(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FltBaseNode(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public void getRenderOperation(com.earthview.world.graphic.RenderOperation op)
	{
		super.getRenderOperation_NoVirtual(op);
	}
	/**
	 * 设置节点是否在场景图中内部方法
	 * @param inGraph 是否在场景图中
	 */
	public void setInSceneGraph(boolean inGraph)
	{
		super.setInSceneGraph_NoVirtual(inGraph);
	}
	/**
	 * 确定此节点是否在场景图中此节点是否继承自根场景节点
	 * @param  
	 */
	public boolean isInSceneGraph()
	{
		return super.isInSceneGraph_NoVirtual();
	}
	/**
	 * 通知此节点作为场景根节点内部方法
	 * @param  
	 */
	public void _notifyRootNode()
	{
		super._notifyRootNode_NoVirtual();
	}
	/**
	 * 通知场景节点更新包围盒
	 * @param  
	 */
	public void _updateBounds()
	{
		super._updateBounds_NoVirtual();
	}
	public void _findVisibleObjects(com.earthview.world.graphic.Camera cam, com.earthview.world.graphic.RenderQueue queue, com.earthview.world.graphic.VisibleObjectsBoundsInfo visibleBounds, boolean includeChildren, boolean displayNodes)
	{
		super._findVisibleObjects_NoVirtual(cam, queue, visibleBounds, includeChildren, displayNodes);
	}
	public void _findVisibleObjects(com.earthview.world.graphic.Camera cam, com.earthview.world.graphic.RenderQueue queue, com.earthview.world.graphic.VisibleObjectsBoundsInfo visibleBounds, boolean includeChildren)
	{
		super._findVisibleObjects_NoVirtual(cam, queue, visibleBounds, includeChildren);
	}
	public void _findVisibleObjects(com.earthview.world.graphic.Camera cam, com.earthview.world.graphic.RenderQueue queue, com.earthview.world.graphic.VisibleObjectsBoundsInfo visibleBounds)
	{
		super._findVisibleObjects_NoVirtual(cam, queue, visibleBounds);
	}
	/**
	 * 获取指定节点的世界坐标系下的边框盒
	 * @param  
	 * @return 边框盒
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox _getWorldAABB()
	{
		return super._getWorldAABB_NoVirtual();
	}
	/**
	 * 获取一个迭代器遍历节点上的附属物
	 * @param  
	 * @return 对象迭代器
	 */
	public com.earthview.world.graphic.SceneNode.ObjectIterator getAttachedObjectIterator()
	{
		return super.getAttachedObjectIterator_NoVirtual();
	}
	/**
	 * 显示此节点的边界盒
	 * @param bShow 是否显示
	 */
	public void showBoundingBox(boolean bShow)
	{
		super.showBoundingBox_NoVirtual(bShow);
	}
	public void showBoundingBox(boolean bShow, com.earthview.world.graphic.MaterialPtr redPtr)
	{
		super.showBoundingBox_NoVirtual(bShow, redPtr);
	}
	/**
	 * 隐藏此节点的包围盒
	 * @param bHide 是否隐藏
	 */
	public void hideBoundingBox(boolean bHide)
	{
		super.hideBoundingBox_NoVirtual(bHide);
	}
	/**
	 * 将边界盒添加到渲染队列内部方法
	 * @param queue 渲染队列
	 */
	public void _addBoundingBoxToQueue(com.earthview.world.graphic.RenderQueue queue)
	{
		super._addBoundingBoxToQueue_NoVirtual(queue);
	}
	/**
	 * 获取此节点的包围盒是否显示
	 * @param  
	 */
	public boolean getShowBoundingBox()
	{
		return super.getShowBoundingBox_NoVirtual();
	}
	/**
	 * 从当前节点创建子节点系统自动为子节点命名
	 * @param translate 子节点相对当前节点的位移，默认为EarthView::World::Spatial::Math::CVector3::ZERO
	 * @param rotate 子节点相对当前节点的旋转，默认为EarthView::World::Spatial::Math::CQuaternion::IDENTITY
	 * @return 返回子节点
	 */
	public com.earthview.world.graphic.SceneNode createChildSceneNode(com.earthview.world.spatial.math.Vector3 translate, com.earthview.world.spatial.math.Quaternion rotate)
	{
		return super.createChildSceneNode_NoVirtual(translate, rotate);
	}
	public com.earthview.world.graphic.SceneNode createChildSceneNode(com.earthview.world.spatial.math.Vector3 translate)
	{
		return super.createChildSceneNode_NoVirtual(translate);
	}
	public com.earthview.world.graphic.SceneNode createChildSceneNode()
	{
		return super.createChildSceneNode_NoVirtual();
	}
	/**
	 * 从当前节点创建子节点系统自动为子节点命名
	 * @param name 子节点的名称
	 * @param translate 子节点相对当前节点的位移
	 * @param rotate 子节点相对当前节点的旋转
	 * @return 返回子节点
	 */
	public com.earthview.world.graphic.SceneNode createChildSceneNode(String name, com.earthview.world.spatial.math.Vector3 translate, com.earthview.world.spatial.math.Quaternion rotate)
	{
		return super.createChildSceneNode_NoVirtual(name, translate, rotate);
	}
	public com.earthview.world.graphic.SceneNode createChildSceneNode(String name, com.earthview.world.spatial.math.Vector3 translate)
	{
		return super.createChildSceneNode_NoVirtual(name, translate);
	}
	public com.earthview.world.graphic.SceneNode createChildSceneNode(String name)
	{
		return super.createChildSceneNode_NoVirtual(name);
	}
	/**
	 * 查找里场景节点中心最近的光源CMovableObject::queryLightsandCRenderable::getLights可以使用检索的光源
	 * @param destList 有序的填充光源
	 * @param radius 半径
	 * @param lightMask 光源是否设置模糊
	 */
	public void findLights(com.earthview.world.graphic.LightList destList, double radius, long lightMask)
	{
		super.findLights_NoVirtual(destList, radius, lightMask);
	}
	public void findLights(com.earthview.world.graphic.LightList destList, double radius)
	{
		super.findLights_NoVirtual(destList, radius);
	}
	/**
	 * 选择节点绕Y轴旋转地坐标系
	 * @param useFixed 为false，使用默认轴
	 * @param fixedAxis 是否使用坐标系
	 */
	public void setFixedYawAxis(boolean useFixed, com.earthview.world.spatial.math.Vector3 fixedAxis)
	{
		super.setFixedYawAxis_NoVirtual(useFixed, fixedAxis);
	}
	public void setFixedYawAxis(boolean useFixed)
	{
		super.setFixedYawAxis_NoVirtual(useFixed);
	}
	/**
	 * 设置节点方向矢量
	 * @param x 
	 * @param y 
	 * @param z 
	 * @param relativeTo 空间缩放关系
	 * @param localDirectionVector 当前方向矢量，默认为-Z
	 */
	public void setDirection(double x, double y, double z, com.earthview.world.graphic.Node.TransformSpace relativeTo, com.earthview.world.spatial.math.Vector3 localDirectionVector)
	{
		super.setDirection_NoVirtual(x, y, z, relativeTo, localDirectionVector);
	}
	public void setDirection(double x, double y, double z, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.setDirection_NoVirtual(x, y, z, relativeTo);
	}
	public void setDirection(double x, double y, double z)
	{
		super.setDirection_NoVirtual(x, y, z);
	}
	/**
	 * 设置节点方向矢量
	 * @param vec 方向矢量
	 * @param relativeTo 空间缩放关系
	 * @param localDirectionVector 当前方向矢量，默认为-Z
	 */
	public void setDirection(com.earthview.world.spatial.math.Vector3 vec, com.earthview.world.graphic.Node.TransformSpace relativeTo, com.earthview.world.spatial.math.Vector3 localDirectionVector)
	{
		super.setDirection_NoVirtual(vec, relativeTo, localDirectionVector);
	}
	public void setDirection(com.earthview.world.spatial.math.Vector3 vec, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.setDirection_NoVirtual(vec, relativeTo);
	}
	public void setDirection(com.earthview.world.spatial.math.Vector3 vec)
	{
		super.setDirection_NoVirtual(vec);
	}
	/**
	 * 调整节点方向使其朝向某点
	 * @param targetPoint 目标点
	 * @param relativeTo 变换空间类型
	 * @param localDirectionVector 当前方向矢量
	 */
	public void lookAt(com.earthview.world.spatial.math.Vector3 targetPoint, com.earthview.world.graphic.Node.TransformSpace relativeTo, com.earthview.world.spatial.math.Vector3 localDirectionVector)
	{
		super.lookAt_NoVirtual(targetPoint, relativeTo, localDirectionVector);
	}
	public void lookAt(com.earthview.world.spatial.math.Vector3 targetPoint, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.lookAt_NoVirtual(targetPoint, relativeTo);
	}
	/**
	 * 是否设置自动追踪
	 * @param enabled 是否自动追踪
	 * @param ref_target 追踪的场景节点目标
	 * @param localDirectionVector 当前方向矢量
	 * @param offset 偏移量
	 */
	public void setAutoTracking(boolean enabled)
	{
		super.setAutoTracking_NoVirtual(enabled);
	}
	public void setAutoTracking(boolean enabled, com.earthview.world.graphic.SceneNode ref_target)
	{
		super.setAutoTracking_NoVirtual(enabled, ref_target);
	}
	public void setAutoTracking(boolean enabled, com.earthview.world.graphic.SceneNode ref_target, com.earthview.world.spatial.math.Vector3 localDirectionVecto)
	{
		super.setAutoTracking_NoVirtual(enabled, ref_target, localDirectionVecto);
	}
	public void setAutoTracking(boolean enabled, com.earthview.world.graphic.SceneNode ref_target, com.earthview.world.spatial.math.Vector3 localDirectionVector, com.earthview.world.spatial.math.Vector3 offset)
	{
		super.setAutoTracking_NoVirtual(enabled, ref_target, localDirectionVector, offset);
	}
	/**
	 * 获取此节点自动追踪的节点
	 * @param  
	 * @return 节点
	 */
	public com.earthview.world.graphic.SceneNode getAutoTrackTarget()
	{
		return super.getAutoTrackTarget_NoVirtual();
	}
	/**
	 * 如果自动追踪，获取相对于被跟踪节点的偏移量
	 * @param  
	 * @return 矢量值
	 */
	public com.earthview.world.spatial.math.Vector3 getAutoTrackOffset()
	{
		return super.getAutoTrackOffset_NoVirtual();
	}
	/**
	 * 如果自动追踪，获取节点当前方向矢量
	 * @param  
	 * @return 矢量值
	 */
	public com.earthview.world.spatial.math.Vector3 getAutoTrackLocalDirection()
	{
		return super.getAutoTrackLocalDirection_NoVirtual();
	}
	/**
	 * 判断是否挂接了可见的MovableObject(判断Visible属性)
	 * @param  
	 */
	public boolean hasAnyVisibleObject()
	{
		return super.hasAnyVisibleObject_NoVirtual();
	}
	/**
	 * 判断是否挂接了可见的MovableObject(判断VisibilityFlags属性)
	 * @param  
	 */
	public boolean hasAnyVisibleObject2()
	{
		return super.hasAnyVisibleObject2_NoVirtual();
	}
	/**
	 * 判断是否挂接了可见的投射阴影的MovableObject(判断Visible属性)
	 * @param  
	 */
	public boolean hasAnyVisibleShadowCaster()
	{
		return super.hasAnyVisibleShadowCaster_NoVirtual();
	}
	/**
	 * 判断是否挂接了可见的投射阴影的MovableObject(判断VisibilityFlags属性)
	 * @param  
	 */
	public boolean hasAnyVisibleShadowCaster2()
	{
		return super.hasAnyVisibleShadowCaster2_NoVirtual();
	}
	/**
	 * 反向设置挂接在节点上的对象可见性(可见的变为不可见，不可见的变为可见)
	 * @param cascade 是否递归设置子节点，默认为true
	 */
	public void flipVisibility(boolean cascade)
	{
		super.flipVisibility_NoVirtual(cascade);
	}
	public void flipVisibility()
	{
		super.flipVisibility_NoVirtual();
	}
	/**
	 * 设置所有对象的节点是否显示他们的调试信息
	 * @param enabled 是否所有的对象显示调试信息
	 * @param cascade 是否逐级检查子节点
	 */
	public void setDebugDisplayEnabled(boolean enabled, boolean cascade)
	{
		super.setDebugDisplayEnabled_NoVirtual(enabled, cascade);
	}
	public void setDebugDisplayEnabled(boolean enabled)
	{
		super.setDebugDisplayEnabled_NoVirtual(enabled);
	}
	/**
	 * 获得调试用的可渲染对象
	 * @param  
	 */
	public com.earthview.world.graphic.Node.DebugRenderable getDebugRenderable()
	{
		return super.getDebugRenderable_NoVirtual();
	}
	///public:
	///	mutable EarthView::World::Spatial::Math::CMatrix4 mMatrix;
	///mutable EarthView::World::Spatial::Math::CMatrix4 mDerivedMatrix;
	public void _updateFromParent()
	{
		super._updateFromParent_NoVirtual();
	}
	//// Only available internally - notification of parent.
	public void setParent(com.earthview.world.graphic.Node ref_parent)
	{
		super.setParent_NoVirtual(ref_parent);
	}
	public void updateFromParentImpl()
	{
		super.updateFromParentImpl_NoVirtual();
	}
	public void notifyMoved()
	{
		super.notifyMoved_NoVirtual();
	}
	/**
	 * 获取父节点如果父节点为空，表示此节点为根节点
	 * @param  
	 * @return 父节点名称
	 */
	public com.earthview.world.graphic.Node getParent()
	{
		return super.getParent_NoVirtual();
	}
	/**
	 * 获取四元数表示此节点的方向
	 * @param  
	 * @return 四元数值
	 */
	public com.earthview.world.spatial.math.Quaternion getOrientation()
	{
		return super.getOrientation_NoVirtual();
	}
	/**
	 * 设置方向通过四元数设置
	 * @param q 四元数值，节点旋转围绕着节点原点
	 */
	public void setOrientation(com.earthview.world.spatial.math.Quaternion q)
	{
		super.setOrientation_NoVirtual(q);
	}
	public void setOrientation(com.earthview.world.spatial.math.Quaternion q, boolean notify)
	{
		super.setOrientation_NoVirtual(q, notify);
	}
	/**
	 * 设置方向通过四元数设置
	 * @param w 从四个实数构造
	 * @param x 从四个实数构造
	 * @param y 从四个实数构造
	 * @param z 从四个实数构造
	 */
	public void setOrientation(double w, double x, double y, double z)
	{
		super.setOrientation_NoVirtual(w, x, y, z);
	}
	public void setOrientation(double w, double x, double y, double z, boolean notify)
	{
		super.setOrientation_NoVirtual(w, x, y, z, notify);
	}
	/**
	 * 重置四元数本地坐标轴为世界坐标轴，不旋转
	 * @param  
	 */
	public void resetOrientation()
	{
		super.resetOrientation_NoVirtual();
	}
	/**
	 * 设置节点位置
	 * @param pos 三维向量
	 */
	public void setPosition(com.earthview.world.spatial.math.Vector3 pos)
	{
		super.setPosition_NoVirtual(pos);
	}
	public void setPosition(com.earthview.world.spatial.math.Vector3 pos, boolean notify)
	{
		super.setPosition_NoVirtual(pos, notify);
	}
	/**
	 * 设置节点位置
	 * @param x 从三个实数构造三维向量
	 * @param y 从三个实数构造三维向量
	 * @param z 从三个实数构造三维向量
	 */
	public void setPosition(double x, double y, double z)
	{
		super.setPosition_NoVirtual(x, y, z);
	}
	public void setPosition(double x, double y, double z, boolean notify)
	{
		super.setPosition_NoVirtual(x, y, z, notify);
	}
	/**
	 * 获得节点位置
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getPosition()
	{
		return super.getPosition_NoVirtual();
	}
	/**
	 * 设置缩放因子
	 * @param scale 
	 */
	public void setScale(com.earthview.world.spatial.math.Vector3 scale)
	{
		super.setScale_NoVirtual(scale);
	}
	public void setScale(com.earthview.world.spatial.math.Vector3 scale, boolean notify)
	{
		super.setScale_NoVirtual(scale, notify);
	}
	/**
	 * 设置缩放因子
	 * @param x 实数
	 * @param y 实数
	 * @param z 实数
	 */
	public void setScale(double x, double y, double z)
	{
		super.setScale_NoVirtual(x, y, z);
	}
	public void setScale(double x, double y, double z, boolean notify)
	{
		super.setScale_NoVirtual(x, y, z, notify);
	}
	/// <summary>
	///获取缩放因子
	/// </summary>
	/// <param name></param>
	/// <returns>缩放因子</returns>
	public com.earthview.world.spatial.math.Vector3 getScale()
	{
		return super.getScale_NoVirtual();
	}
	/**
	 * 设置是否继承父节点的方向属性
	 * @param inherit 继承
	 */
	public void setInheritOrientation(boolean inherit)
	{
		super.setInheritOrientation_NoVirtual(inherit);
	}
	/**
	 * 判断是否继承父节点的方向属性
	 * @param  
	 * @return 继承返回true，不继承则否则返回false
	 */
	public boolean getInheritOrientation()
	{
		return super.getInheritOrientation_NoVirtual();
	}
	/**
	 * 设置是否继承父节点的缩放因子
	 * @param inherit 继承
	 */
	public void setInheritScale(boolean inherit)
	{
		super.setInheritScale_NoVirtual(inherit);
	}
	/**
	 * 判断是否继承父节点的缩放因子
	 * @param  
	 * @return 继承返回true，不继承则否则返回false
	 */
	public boolean getInheritScale()
	{
		return super.getInheritScale_NoVirtual();
	}
	/**
	 * 缩放因子
	 * @param scale 缩放向量
	 */
	public void scale(com.earthview.world.spatial.math.Vector3 scale)
	{
		super.scale_NoVirtual(scale);
	}
	/**
	 * 缩放因子
	 * @param x 常数
	 * @param y 常数
	 * @param z 常数
	 */
	public void scale(double x, double y, double z)
	{
		super.scale_NoVirtual(x, y, z);
	}
	/**
	 * 平移节点
	 * @param d 三维矢量
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void translate(com.earthview.world.spatial.math.Vector3 d, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.translate_NoVirtual(d, relativeTo);
	}
	/**
	 * 平移节点
	 * @param d 三维矢量
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void translate(com.earthview.world.spatial.math.Vector3 d)
	{
		super.translate_NoVirtual(d);
	}
	/**
	 * 平移节点
	 * @param x 实数
	 * @param y 实数
	 * @param z 实数
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void translate(double x, double y, double z, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.translate_NoVirtual(x, y, z, relativeTo);
	}
	/**
	 * 平移节点
	 * @param x 实数
	 * @param y 实数
	 * @param z 实数
	 */
	public void translate(double x, double y, double z)
	{
		super.translate_NoVirtual(x, y, z);
	}
	/**
	 * 平移节点
	 * @param axes 三维矩阵
	 * @param move 三维矢量
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void translate(com.earthview.world.spatial.math.Matrix3 axes, com.earthview.world.spatial.math.Vector3 move, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.translate_NoVirtual(axes, move, relativeTo);
	}
	/**
	 * 平移节点
	 * @param axes 三维矩阵
	 * @param move 三维矢量
	 */
	public void translate(com.earthview.world.spatial.math.Matrix3 axes, com.earthview.world.spatial.math.Vector3 move)
	{
		super.translate_NoVirtual(axes, move);
	}
	/**
	 * 平移节点
	 * @param axes 三维矩阵
	 * @param x 实数
	 * @param y 实数
	 * @param z 实数
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void translate(com.earthview.world.spatial.math.Matrix3 axes, double x, double y, double z, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.translate_NoVirtual(axes, x, y, z, relativeTo);
	}
	/**
	 * 平移节点
	 * @param axes 三维矩阵
	 * @param x 实数
	 * @param y 实数
	 * @param z 实数
	 */
	public void translate(com.earthview.world.spatial.math.Matrix3 axes, double x, double y, double z)
	{
		super.translate_NoVirtual(axes, x, y, z);
	}
	/**
	 * 沿Z轴旋转节点
	 * @param angle 弧度，角度
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void roll(com.earthview.world.spatial.math.Radian angle, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.roll_NoVirtual(angle, relativeTo);
	}
	public void roll(com.earthview.world.spatial.math.Radian angle)
	{
		super.roll_NoVirtual(angle);
	}
	/**
	 * 沿X轴旋转节点
	 * @param angle 弧度，角度
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void pitch(com.earthview.world.spatial.math.Radian angle, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.pitch_NoVirtual(angle, relativeTo);
	}
	public void pitch(com.earthview.world.spatial.math.Radian angle)
	{
		super.pitch_NoVirtual(angle);
	}
	/**
	 * 沿Y轴旋转节点
	 * @param angle 弧度，角度
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void yaw(com.earthview.world.spatial.math.Radian angle, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.yaw_NoVirtual(angle, relativeTo);
	}
	public void yaw(com.earthview.world.spatial.math.Radian angle)
	{
		super.yaw_NoVirtual(angle);
	}
	/**
	 * 根据指定的坐标轴旋转节点
	 * @param axis 三维矩阵
	 * @param angle 角度，弧度
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void rotate(com.earthview.world.spatial.math.Vector3 axis, com.earthview.world.spatial.math.Radian angle, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.rotate_NoVirtual(axis, angle, relativeTo);
	}
	public void rotate(com.earthview.world.spatial.math.Vector3 axis, com.earthview.world.spatial.math.Radian angle)
	{
		super.rotate_NoVirtual(axis, angle);
	}
	/**
	 * 使用指定的四元数旋转节点
	 * @param q 四元数
	 * @param relativeTo 选择哪种空间关系转换，共三种
	 */
	public void rotate(com.earthview.world.spatial.math.Quaternion q, com.earthview.world.graphic.Node.TransformSpace relativeTo)
	{
		super.rotate_NoVirtual(q, relativeTo);
	}
	public void rotate(com.earthview.world.spatial.math.Quaternion q)
	{
		super.rotate_NoVirtual(q);
	}
	/**
	 * 设置世界变换矩阵
	 * @param mat 世界变换矩阵
	 */
	public void setMatrix(com.earthview.world.spatial.math.Matrix4 mat)
	{
		super.setMatrix_NoVirtual(mat);
	}
	/**
	 * 获得世界变换矩阵
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 getMatrix()
	{
		return super.getMatrix_NoVirtual();
	}
	/**
	 * 设置相对于父节点的局部变换矩阵
	 * @param mat 局部变换矩阵
	 */
	public void setLocalMatrix(com.earthview.world.spatial.math.Matrix4 mat)
	{
		super.setLocalMatrix_NoVirtual(mat);
	}
	/**
	 * 获得相对于父节点的局部变换矩阵
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 getLocalMatrix()
	{
		return super.getLocalMatrix_NoVirtual();
	}
	/**
	 * 获取本地坐标轴获取一个矩阵，其列是基于当前坐标系，它的节点继承他的父类。
	 */
	public com.earthview.world.spatial.math.Matrix3 getLocalAxes()
	{
		return super.getLocalAxes_NoVirtual();
	}
	/**
	 * 创建子节点创建一个新的节点作为当前节点的子节点
	 * @param translate 平移量
	 * @param rotate 旋转四元数
	 * @return 节点
	 */
	public com.earthview.world.graphic.Node createChild(com.earthview.world.spatial.math.Vector3 translate, com.earthview.world.spatial.math.Quaternion rotate)
	{
		return super.createChild_NoVirtual(translate, rotate);
	}
	public com.earthview.world.graphic.Node createChild(com.earthview.world.spatial.math.Vector3 translate)
	{
		return super.createChild_NoVirtual(translate);
	}
	public com.earthview.world.graphic.Node createChild()
	{
		return super.createChild_NoVirtual();
	}
	/**
	 * 创建子节点创建一个新的节点作为当前节点的子节点
	 * @param name 名称
	 * @param translate 平移量
	 * @param rotate 旋转四元数
	 * @return 节点
	 */
	public com.earthview.world.graphic.Node createChild(String name, com.earthview.world.spatial.math.Vector3 translate, com.earthview.world.spatial.math.Quaternion rotate)
	{
		return super.createChild_NoVirtual(name, translate, rotate);
	}
	public com.earthview.world.graphic.Node createChild(String name, com.earthview.world.spatial.math.Vector3 translate)
	{
		return super.createChild_NoVirtual(name, translate);
	}
	public com.earthview.world.graphic.Node createChild(String name)
	{
		return super.createChild_NoVirtual(name);
	}
	/**
	 * 添加子节点
	 * @param name 名称
	 */
	public void addChild(com.earthview.world.graphic.Node ref_child)
	{
		super.addChild_NoVirtual(ref_child);
	}
	/**
	 * 子节点数量
	 * @param name 名称
	 * @return 无符号的双字节整型
	 */
	public int numChildren()
	{
		return super.numChildren_NoVirtual();
	}
	/**
	 * 获取子节点获取子节点指针
	 * @param index 指针
	 * @return 节点指针
	 */
	public com.earthview.world.graphic.Node getChild(int index)
	{
		return super.getChild_NoVirtual(index);
	}
	/**
	 * 获取子节点为指定名称的节点获取指针
	 * @param name 名称
	 * @return 节点指针
	 */
	public com.earthview.world.graphic.Node getChild(String name)
	{
		return super.getChild_NoVirtual(name);
	}
	/**
	 * 判断子节点是否存在				
	 * @param name 名称
	 */
	public boolean existChild(String name)
	{
		return super.existChild_NoVirtual(name);
	}
	/**
	 * 获取一个迭代器遍历此节点的所有子节点
	 * @param  
	 */
	public com.earthview.world.graphic.Node.ChildNodeIterator getChildIterator()
	{
		return super.getChildIterator_NoVirtual();
	}
	/**
	 * 检索将指定子节点从父节点分离没有删除此子节点，在其他地方也许继续挂接
	 * @param index 
	 */
	public com.earthview.world.graphic.Node removeChild(int index)
	{
		return super.removeChild_NoVirtual(index);
	}
	/**
	 * 将指定子节点从父节点分离没有删除此子节点，在其他地方也许继续挂接
	 * @param child 
	 */
	public com.earthview.world.graphic.Node removeChild(com.earthview.world.graphic.Node child)
	{
		return super.removeChild_NoVirtual(child);
	}
	/**
	 * 通过名称将指定子节点从父节点分离没有删除此子节点，在其他地方也许继续挂接
	 * @param name 
	 */
	public com.earthview.world.graphic.Node removeChild(String name)
	{
		return super.removeChild_NoVirtual(name);
	}
	/**
	 * 移除所有子节点没有删除此子节点，在其他地方也许继续挂接
	 * @param  
	 */
	public void removeAllChildren()
	{
		super.removeAllChildren_NoVirtual();
	}
	/**
	 * 直接设置节点累积的世界坐标
	 * @param pos 
	 */
	public void _setDerivedPosition(com.earthview.world.spatial.math.Vector3 pos)
	{
		super._setDerivedPosition_NoVirtual(pos);
	}
	public void _setDerivedPosition(com.earthview.world.spatial.math.Vector3 pos, boolean notify)
	{
		super._setDerivedPosition_NoVirtual(pos, notify);
	}
	/**
	 * 直接设置节点累积的世界方向
	 * @param q 
	 */
	public void _setDerivedOrientation(com.earthview.world.spatial.math.Quaternion q)
	{
		super._setDerivedOrientation_NoVirtual(q);
	}
	public void _setDerivedOrientation(com.earthview.world.spatial.math.Quaternion q, boolean notify)
	{
		super._setDerivedOrientation_NoVirtual(q, notify);
	}
	/**
	 * 获取节点累积的方向
	 * @param  
	 */
	public com.earthview.world.spatial.math.Quaternion _getDerivedOrientation()
	{
		return super._getDerivedOrientation_NoVirtual();
	}
	/**
	 * 获取节点累积的坐标
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 _getDerivedPosition()
	{
		return super._getDerivedPosition_NoVirtual();
	}
	/**
	 * 获取节点累积的缩放比例
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 _getDerivedScale()
	{
		return super._getDerivedScale_NoVirtual();
	}
	/**
	 * 获取该节点累积的世界变换矩阵
	 * @param  
	 */
	public com.earthview.world.spatial.math.Matrix4 _getFullTransform()
	{
		return super._getFullTransform_NoVirtual();
	}
	/**
	 * 更新节点内部方法
	 * @param updateChildren 为真，逐级更新所有子节点
	 * @param parentHasChanged 为true，表明父节点位置改变，子节点继承父节点变化
	 */
	public void _update(boolean updateChildren, boolean parentHasChanged)
	{
		super._update_NoVirtual(updateChildren, parentHasChanged);
	}
	/**
	 * 为节点设置监听器
	 * @param listener 
	 */
	public void addListener(com.earthview.world.graphic.Node.NodeListener listener)
	{
		super.addListener_NoVirtual(listener);
	}
	/**
	 * 移除监听器
	 * @param listener 
	 */
	public void removeListener(com.earthview.world.graphic.Node.NodeListener listener)
	{
		super.removeListener_NoVirtual(listener);
	}
	/**
	 * 获取节点当前的监听器
	 * @param  
	 */
	public com.earthview.world.graphic.Node.NodeListener getListener(long index)
	{
		return super.getListener_NoVirtual(index);
	}
	/**
	 * 获取监听器数目
	 * @param  
	 */
	public long getNumListener(long index)
	{
		return super.getNumListener_NoVirtual(index);
	}
	/**
	 * 设置初始状态当前节点变换为基点设置一键还原，变换包括位置，方向，缩放比例除非你想初始化节点，不然你可以不调用此方法
	 * @param  
	 */
	public void setInitialState()
	{
		super.setInitialState_NoVirtual();
	}
	/**
	 * 重置初始状态当前节点变换为基点设置一键还原，变换包括位置，方向，缩放比例除非你想初始化节点，不然你可以不调用此方法
	 * @param  
	 */
	public void resetToInitialState()
	{
		super.resetToInitialState_NoVirtual();
	}
	/**
	 * 设置节点初始位置
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getInitialPosition()
	{
		return super.getInitialPosition_NoVirtual();
	}
	/**
	 * 世界坐标转换当地坐标获得当前位置在所给空间中相对于这个节点的位置
	 * @param worldPos 
	 */
	public com.earthview.world.spatial.math.Vector3 convertWorldToLocalPosition(com.earthview.world.spatial.math.Vector3 worldPos)
	{
		return super.convertWorldToLocalPosition_NoVirtual(worldPos);
	}
	/**
	 * 当地坐标转换世界坐标获得当前空间下的节点的世界坐标进行简单转换，不需要此节点的子节点
	 * @param localPos 
	 */
	public com.earthview.world.spatial.math.Vector3 convertLocalToWorldPosition(com.earthview.world.spatial.math.Vector3 localPos)
	{
		return super.convertLocalToWorldPosition_NoVirtual(localPos);
	}
	/**
	 * 世界方向向量转换当地方向向量获得当前位置方向在所给空间中相对于这个节点的位置方向
	 * @param worldOrientation 
	 */
	public com.earthview.world.spatial.math.Quaternion convertWorldToLocalOrientation(com.earthview.world.spatial.math.Quaternion worldOrientation)
	{
		return super.convertWorldToLocalOrientation_NoVirtual(worldOrientation);
	}
	/**
	 * 当前方向向量转换世界方向向量获得当前空间下的节点的世界方向向量进行简单转换，不需要此节点的子节点
	 * @param worldOrientation 
	 */
	public com.earthview.world.spatial.math.Quaternion convertLocalToWorldOrientation(com.earthview.world.spatial.math.Quaternion localOrientation)
	{
		return super.convertLocalToWorldOrientation_NoVirtual(localOrientation);
	}
	/**
	 * 获取节点初始方向向量
	 * @param  
	 */
	public com.earthview.world.spatial.math.Quaternion getInitialOrientation()
	{
		return super.getInitialOrientation_NoVirtual();
	}
	/**
	 * 获取节点初始缩放比例
	 * @param  
	 */
	public com.earthview.world.spatial.math.Vector3 getInitialScale()
	{
		return super.getInitialScale_NoVirtual();
	}
	/**
	 * 获得摄像机视场深度的平方帮助方法
	 * @param cam 摄像机视场
	 * @return 视场大小的值
	 */
	public double getSquaredViewDepth(com.earthview.world.graphic.Camera cam)
	{
		return super.getSquaredViewDepth_NoVirtual(cam);
	}
	/**
	 * 通知节点更新
	 * @param forceParentUpdate 默认为false，是否更新标识
	 */
	public void needUpdate(boolean forceParentUpdate)
	{
		super.needUpdate_NoVirtual(forceParentUpdate);
	}
	public void needUpdate()
	{
		super.needUpdate_NoVirtual();
	}
	/**
	 * 通知父节点更新子节点
	 * @param  
	 * @param child 
	 * @param forceParentUpdate 默认问false
	 */
	public void requestUpdate(com.earthview.world.graphic.Node ref_child, boolean forceParentUpdate)
	{
		super.requestUpdate_NoVirtual(ref_child, forceParentUpdate);
	}
	public void requestUpdate(com.earthview.world.graphic.Node ref_child)
	{
		super.requestUpdate_NoVirtual(ref_child);
	}
	/**
	 * 停止更新
	 * @param  
	 * @param child 
	 */
	public void cancelUpdate(com.earthview.world.graphic.Node child)
	{
		super.cancelUpdate_NoVirtual(child);
	}
	/**
	 * 获取渲染节点的渲染调试
	 * @param scaling 
	 */
	public com.earthview.world.graphic.Node.DebugRenderable getDebugRenderable(double scaling)
	{
		return super.getDebugRenderable_NoVirtual(scaling);
	}
	/**
	 * 在当前节点下挂接一个移动对象
	 * @param obj 移动对象
	 */
	public void attachObject(com.earthview.world.graphic.MovableObject obj)
	{
		super.attachObject_NoVirtual(obj);
	}
	/**
	 * 挂接在当前节点下的对象个数
	 * @param  
	 */
	public int numAttachedObjects()
	{
		return super.numAttachedObjects_NoVirtual();
	}
	/**
	 * 按索引号获取挂接对象
	 * @param index 索引
	 */
	public com.earthview.world.graphic.MovableObject getAttachedObject(int index)
	{
		return super.getAttachedObject_NoVirtual(index);
	}
	/**
	 * 按名称获取挂接对象
	 * @param name 名称
	 */
	public com.earthview.world.graphic.MovableObject getAttachedObject(String name)
	{
		return super.getAttachedObject_NoVirtual(name);
	}
	/**
	 * 反挂接指定索引号的移动对象
	 * @param index 索引
	 */
	public com.earthview.world.graphic.MovableObject detachObject(int index)
	{
		return super.detachObject_NoVirtual(index);
	}
	/**
	 * 反挂接指定的移动对象
	 * @param obj 移动对象
	 */
	public void detachObject(com.earthview.world.graphic.MovableObject obj)
	{
		super.detachObject_NoVirtual(obj);
	}
	/**
	 * 反挂接指定名称的移动对象
	 * @param name 名称
	 */
	public com.earthview.world.graphic.MovableObject detachObject(String name)
	{
		return super.detachObject_NoVirtual(name);
	}
	/**
	 * 反挂接所有对象
	 * @param name 名称
	 */
	public void detachAllObjects()
	{
		super.detachAllObjects_NoVirtual();
	}
	
	native protected void register_serializerAttributes_CommonStringPairList(long pNativeObject, String method);
	native protected void register_setRefInstancedEntityVector_InstancedEntityVector(long pNativeObject, String method);
	native protected void register_getRefInstancedEntityVector_void(long pNativeObject, String method);
	native protected void register_setRefEntity_CEntity(long pNativeObject, String method);
	native protected void register_addRefSubEntityIndex_ev_uint32(long pNativeObject, String method);
	native protected void register_addHideRefSubEntityIndex_ev_uint32(long pNativeObject, String method);
	native protected void register_getSubEntityIndex_ev_uint32(long pNativeObject, String method);
	native protected void register_getHideSubEntityIndex_ev_uint32(long pNativeObject, String method);
	native protected void register_numSubEntity_void(long pNativeObject, String method);
	native protected void register_numHideSubEntity_void(long pNativeObject, String method);
	native protected void register_clearHideEntityIndex_void(long pNativeObject, String method);
	native protected void register_getEntity_void(long pNativeObject, String method);
	native protected void register_getDerivedVisible_void(long pNativeObject, String method);
	native protected void register_addChildOrder_ev_uint32_EVString(long pNativeObject, String method);
	native protected void register_updateEntitySelectable_ev_bool(long pNativeObject, String method);
	native protected void register_updateSubEntityVisible_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register__addToRenderQueue_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo(long pNativeObject, String method);
	native protected void register_getRenderOperation_CRenderOperation(long pNativeObject, String method);
	native protected void register_setInSceneGraph_ev_bool(long pNativeObject, String method);
	native protected void register_isInSceneGraph_void(long pNativeObject, String method);
	native protected void register__notifyRootNode_void(long pNativeObject, String method);
	native protected void register__updateBounds_void(long pNativeObject, String method);
	native protected void register__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool(long pNativeObject, String method);
	native protected void register__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo(long pNativeObject, String method);
	native protected void register__getWorldAABB_void(long pNativeObject, String method);
	native protected void register_getAttachedObjectIterator_void(long pNativeObject, String method);
	native protected void register_showBoundingBox_ev_bool(long pNativeObject, String method);
	native protected void register_showBoundingBox_ev_bool_CMaterialPtr(long pNativeObject, String method);
	native protected void register_hideBoundingBox_ev_bool(long pNativeObject, String method);
	native protected void register__addBoundingBoxToQueue_CRenderQueue(long pNativeObject, String method);
	native protected void register_getShowBoundingBox_void(long pNativeObject, String method);
	native protected void register_createChildSceneNode_CVector3_CQuaternion(long pNativeObject, String method);
	native protected void register_createChildSceneNode_CVector3(long pNativeObject, String method);
	native protected void register_createChildSceneNode_void(long pNativeObject, String method);
	native protected void register_createChildSceneNode_EVString_CVector3_CQuaternion(long pNativeObject, String method);
	native protected void register_createChildSceneNode_EVString_CVector3(long pNativeObject, String method);
	native protected void register_createChildSceneNode_EVString(long pNativeObject, String method);
	native protected void register_findLights_LightList_Real_ev_uint32(long pNativeObject, String method);
	native protected void register_findLights_LightList_Real(long pNativeObject, String method);
	native protected void register_setFixedYawAxis_ev_bool_CVector3(long pNativeObject, String method);
	native protected void register_setFixedYawAxis_ev_bool(long pNativeObject, String method);
	native protected void register_setDirection_Real_Real_Real_TransformSpace_CVector3(long pNativeObject, String method);
	native protected void register_setDirection_Real_Real_Real_TransformSpace(long pNativeObject, String method);
	native protected void register_setDirection_Real_Real_Real(long pNativeObject, String method);
	native protected void register_setDirection_CVector3_TransformSpace_CVector3(long pNativeObject, String method);
	native protected void register_setDirection_CVector3_TransformSpace(long pNativeObject, String method);
	native protected void register_setDirection_CVector3(long pNativeObject, String method);
	native protected void register_lookAt_CVector3_TransformSpace_CVector3(long pNativeObject, String method);
	native protected void register_lookAt_CVector3_TransformSpace(long pNativeObject, String method);
	native protected void register_setAutoTracking_ev_bool(long pNativeObject, String method);
	native protected void register_setAutoTracking_ev_bool_CSceneNode(long pNativeObject, String method);
	native protected void register_setAutoTracking_ev_bool_CSceneNode_CVector3(long pNativeObject, String method);
	native protected void register_setAutoTracking_ev_bool_CSceneNode_CVector3_CVector3(long pNativeObject, String method);
	native protected void register_getAutoTrackTarget_void(long pNativeObject, String method);
	native protected void register_getAutoTrackOffset_void(long pNativeObject, String method);
	native protected void register_getAutoTrackLocalDirection_void(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_getVisible_void(long pNativeObject, String method);
	native protected void register_hasAnyVisibleObject_void(long pNativeObject, String method);
	native protected void register_hasAnyVisibleObject2_void(long pNativeObject, String method);
	native protected void register_hasAnyVisibleShadowCaster_void(long pNativeObject, String method);
	native protected void register_hasAnyVisibleShadowCaster2_void(long pNativeObject, String method);
	native protected void register_flipVisibility_ev_bool(long pNativeObject, String method);
	native protected void register_flipVisibility_void(long pNativeObject, String method);
	native protected void register_setDebugDisplayEnabled_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_setDebugDisplayEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_getDebugRenderable_void(long pNativeObject, String method);
	native protected void register__updateFromParent_void(long pNativeObject, String method);
	native protected void register_setParent_CNode(long pNativeObject, String method);
	native protected void register_updateFromParentImpl_void(long pNativeObject, String method);
	native protected void register_createChildImpl_void(long pNativeObject, String method);
	native protected void register_createChildImpl_EVString(long pNativeObject, String method);
	native protected void register_notifyMoved_void(long pNativeObject, String method);
	native protected void register_getParent_void(long pNativeObject, String method);
	native protected void register_getOrientation_void(long pNativeObject, String method);
	native protected void register_setOrientation_CQuaternion(long pNativeObject, String method);
	native protected void register_setOrientation_CQuaternion_ev_bool(long pNativeObject, String method);
	native protected void register_setOrientation_Real_Real_Real_Real(long pNativeObject, String method);
	native protected void register_setOrientation_Real_Real_Real_Real_ev_bool(long pNativeObject, String method);
	native protected void register_resetOrientation_void(long pNativeObject, String method);
	native protected void register_setPosition_CVector3(long pNativeObject, String method);
	native protected void register_setPosition_CVector3_ev_bool(long pNativeObject, String method);
	native protected void register_setPosition_Real_Real_Real(long pNativeObject, String method);
	native protected void register_setPosition_Real_Real_Real_ev_bool(long pNativeObject, String method);
	native protected void register_getPosition_void(long pNativeObject, String method);
	native protected void register_setScale_CVector3(long pNativeObject, String method);
	native protected void register_setScale_CVector3_ev_bool(long pNativeObject, String method);
	native protected void register_setScale_Real_Real_Real(long pNativeObject, String method);
	native protected void register_setScale_Real_Real_Real_ev_bool(long pNativeObject, String method);
	native protected void register_getScale_void(long pNativeObject, String method);
	native protected void register_setInheritOrientation_ev_bool(long pNativeObject, String method);
	native protected void register_getInheritOrientation_void(long pNativeObject, String method);
	native protected void register_setInheritScale_ev_bool(long pNativeObject, String method);
	native protected void register_getInheritScale_void(long pNativeObject, String method);
	native protected void register_scale_CVector3(long pNativeObject, String method);
	native protected void register_scale_Real_Real_Real(long pNativeObject, String method);
	native protected void register_translate_CVector3_TransformSpace(long pNativeObject, String method);
	native protected void register_translate_CVector3(long pNativeObject, String method);
	native protected void register_translate_Real_Real_Real_TransformSpace(long pNativeObject, String method);
	native protected void register_translate_Real_Real_Real(long pNativeObject, String method);
	native protected void register_translate_CMatrix3_CVector3_TransformSpace(long pNativeObject, String method);
	native protected void register_translate_CMatrix3_CVector3(long pNativeObject, String method);
	native protected void register_translate_CMatrix3_Real_Real_Real_TransformSpace(long pNativeObject, String method);
	native protected void register_translate_CMatrix3_Real_Real_Real(long pNativeObject, String method);
	native protected void register_roll_CRadian_TransformSpace(long pNativeObject, String method);
	native protected void register_roll_CRadian(long pNativeObject, String method);
	native protected void register_pitch_CRadian_TransformSpace(long pNativeObject, String method);
	native protected void register_pitch_CRadian(long pNativeObject, String method);
	native protected void register_yaw_CRadian_TransformSpace(long pNativeObject, String method);
	native protected void register_yaw_CRadian(long pNativeObject, String method);
	native protected void register_rotate_CVector3_CRadian_TransformSpace(long pNativeObject, String method);
	native protected void register_rotate_CVector3_CRadian(long pNativeObject, String method);
	native protected void register_rotate_CQuaternion_TransformSpace(long pNativeObject, String method);
	native protected void register_rotate_CQuaternion(long pNativeObject, String method);
	native protected void register_setMatrix_CMatrix4(long pNativeObject, String method);
	native protected void register_getMatrix_void(long pNativeObject, String method);
	native protected void register_setLocalMatrix_CMatrix4(long pNativeObject, String method);
	native protected void register_getLocalMatrix_void(long pNativeObject, String method);
	native protected void register_getLocalAxes_void(long pNativeObject, String method);
	native protected void register_createChild_CVector3_CQuaternion(long pNativeObject, String method);
	native protected void register_createChild_CVector3(long pNativeObject, String method);
	native protected void register_createChild_void(long pNativeObject, String method);
	native protected void register_createChild_EVString_CVector3_CQuaternion(long pNativeObject, String method);
	native protected void register_createChild_EVString_CVector3(long pNativeObject, String method);
	native protected void register_createChild_EVString(long pNativeObject, String method);
	native protected void register_addChild_CNode(long pNativeObject, String method);
	native protected void register_numChildren_void(long pNativeObject, String method);
	native protected void register_getChild_ev_uint16(long pNativeObject, String method);
	native protected void register_getChild_EVString(long pNativeObject, String method);
	native protected void register_existChild_EVString(long pNativeObject, String method);
	native protected void register_getChildIterator_void(long pNativeObject, String method);
	native protected void register_removeChild_ev_uint16(long pNativeObject, String method);
	native protected void register_removeChild_CNode(long pNativeObject, String method);
	native protected void register_removeChild_EVString(long pNativeObject, String method);
	native protected void register_removeAllChildren_void(long pNativeObject, String method);
	native protected void register__setDerivedPosition_CVector3(long pNativeObject, String method);
	native protected void register__setDerivedPosition_CVector3_ev_bool(long pNativeObject, String method);
	native protected void register__setDerivedOrientation_CQuaternion(long pNativeObject, String method);
	native protected void register__setDerivedOrientation_CQuaternion_ev_bool(long pNativeObject, String method);
	native protected void register__getDerivedOrientation_void(long pNativeObject, String method);
	native protected void register__getDerivedPosition_void(long pNativeObject, String method);
	native protected void register__getDerivedScale_void(long pNativeObject, String method);
	native protected void register__getFullTransform_void(long pNativeObject, String method);
	native protected void register__update_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_addListener_CNodeListener(long pNativeObject, String method);
	native protected void register_removeListener_CNodeListener(long pNativeObject, String method);
	native protected void register_getListener_ev_uint32(long pNativeObject, String method);
	native protected void register_getNumListener_ev_uint32(long pNativeObject, String method);
	native protected void register_setInitialState_void(long pNativeObject, String method);
	native protected void register_resetToInitialState_void(long pNativeObject, String method);
	native protected void register_getInitialPosition_void(long pNativeObject, String method);
	native protected void register_convertWorldToLocalPosition_CVector3(long pNativeObject, String method);
	native protected void register_convertLocalToWorldPosition_CVector3(long pNativeObject, String method);
	native protected void register_convertWorldToLocalOrientation_CQuaternion(long pNativeObject, String method);
	native protected void register_convertLocalToWorldOrientation_CQuaternion(long pNativeObject, String method);
	native protected void register_getInitialOrientation_void(long pNativeObject, String method);
	native protected void register_getInitialScale_void(long pNativeObject, String method);
	native protected void register_getSquaredViewDepth_CCamera(long pNativeObject, String method);
	native protected void register_needUpdate_ev_bool(long pNativeObject, String method);
	native protected void register_needUpdate_void(long pNativeObject, String method);
	native protected void register_requestUpdate_CNode_ev_bool(long pNativeObject, String method);
	native protected void register_requestUpdate_CNode(long pNativeObject, String method);
	native protected void register_cancelUpdate_CNode(long pNativeObject, String method);
	native protected void register_getDebugRenderable_Real(long pNativeObject, String method);
	native protected void register_attachObject_CMovableObject(long pNativeObject, String method);
	native protected void register_numAttachedObjects_void(long pNativeObject, String method);
	native protected void register_getAttachedObject_ev_uint16(long pNativeObject, String method);
	native protected void register_getAttachedObject_EVString(long pNativeObject, String method);
	native protected void register_detachObject_ev_uint16(long pNativeObject, String method);
	native protected void register_detachObject_CMovableObject(long pNativeObject, String method);
	native protected void register_detachObject_EVString(long pNativeObject, String method);
	native protected void register_detachAllObjects_void(long pNativeObject, String method);
	native protected void register_removeAndDestroyChild_EVString(long pNativeObject, String method);
	native protected void register_removeAndDestroyChild_ev_uint16(long pNativeObject, String method);
	native protected void register_removeAndDestroyAllChildren_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_serializerAttributes_CommonStringPairList(this.nativeObject.pointer, "serializerAttributes_CommonStringPairList_callback");
			this.register_setRefInstancedEntityVector_InstancedEntityVector(this.nativeObject.pointer, "setRefInstancedEntityVector_InstancedEntityVector_callback");
			this.register_getRefInstancedEntityVector_void(this.nativeObject.pointer, "getRefInstancedEntityVector_void_callback");
			this.register_setRefEntity_CEntity(this.nativeObject.pointer, "setRefEntity_CEntity_callback");
			this.register_addRefSubEntityIndex_ev_uint32(this.nativeObject.pointer, "addRefSubEntityIndex_ev_uint32_callback");
			this.register_addHideRefSubEntityIndex_ev_uint32(this.nativeObject.pointer, "addHideRefSubEntityIndex_ev_uint32_callback");
			this.register_getSubEntityIndex_ev_uint32(this.nativeObject.pointer, "getSubEntityIndex_ev_uint32_callback");
			this.register_getHideSubEntityIndex_ev_uint32(this.nativeObject.pointer, "getHideSubEntityIndex_ev_uint32_callback");
			this.register_numSubEntity_void(this.nativeObject.pointer, "numSubEntity_void_callback");
			this.register_numHideSubEntity_void(this.nativeObject.pointer, "numHideSubEntity_void_callback");
			this.register_clearHideEntityIndex_void(this.nativeObject.pointer, "clearHideEntityIndex_void_callback");
			this.register_getEntity_void(this.nativeObject.pointer, "getEntity_void_callback");
			this.register_getDerivedVisible_void(this.nativeObject.pointer, "getDerivedVisible_void_callback");
			this.register_addChildOrder_ev_uint32_EVString(this.nativeObject.pointer, "addChildOrder_ev_uint32_EVString_callback");
			this.register_updateEntitySelectable_ev_bool(this.nativeObject.pointer, "updateEntitySelectable_ev_bool_callback");
			this.register_updateSubEntityVisible_ev_bool_ev_bool(this.nativeObject.pointer, "updateSubEntityVisible_ev_bool_ev_bool_callback");
			this.register__addToRenderQueue_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo(this.nativeObject.pointer, "_addToRenderQueue_CCamera_CRenderQueue_ev_bool_VisibleObjectsBoundsInfo_callback");
			this.register_getRenderOperation_CRenderOperation(this.nativeObject.pointer, "getRenderOperation_CRenderOperation_callback");
			this.register_setInSceneGraph_ev_bool(this.nativeObject.pointer, "setInSceneGraph_ev_bool_callback");
			this.register_isInSceneGraph_void(this.nativeObject.pointer, "isInSceneGraph_void_callback");
			this.register__notifyRootNode_void(this.nativeObject.pointer, "_notifyRootNode_void_callback");
			this.register__updateBounds_void(this.nativeObject.pointer, "_updateBounds_void_callback");
			this.register__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool(this.nativeObject.pointer, "_findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool_callback");
			this.register__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool(this.nativeObject.pointer, "_findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_ev_bool_callback");
			this.register__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool(this.nativeObject.pointer, "_findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_ev_bool_callback");
			this.register__findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo(this.nativeObject.pointer, "_findVisibleObjects_CCamera_CRenderQueue_VisibleObjectsBoundsInfo_callback");
			this.register__getWorldAABB_void(this.nativeObject.pointer, "_getWorldAABB_void_callback");
			this.register_getAttachedObjectIterator_void(this.nativeObject.pointer, "getAttachedObjectIterator_void_callback");
			this.register_showBoundingBox_ev_bool(this.nativeObject.pointer, "showBoundingBox_ev_bool_callback");
			this.register_showBoundingBox_ev_bool_CMaterialPtr(this.nativeObject.pointer, "showBoundingBox_ev_bool_CMaterialPtr_callback");
			this.register_hideBoundingBox_ev_bool(this.nativeObject.pointer, "hideBoundingBox_ev_bool_callback");
			this.register__addBoundingBoxToQueue_CRenderQueue(this.nativeObject.pointer, "_addBoundingBoxToQueue_CRenderQueue_callback");
			this.register_getShowBoundingBox_void(this.nativeObject.pointer, "getShowBoundingBox_void_callback");
			this.register_createChildSceneNode_CVector3_CQuaternion(this.nativeObject.pointer, "createChildSceneNode_CVector3_CQuaternion_callback");
			this.register_createChildSceneNode_CVector3(this.nativeObject.pointer, "createChildSceneNode_CVector3_callback");
			this.register_createChildSceneNode_void(this.nativeObject.pointer, "createChildSceneNode_void_callback");
			this.register_createChildSceneNode_EVString_CVector3_CQuaternion(this.nativeObject.pointer, "createChildSceneNode_EVString_CVector3_CQuaternion_callback");
			this.register_createChildSceneNode_EVString_CVector3(this.nativeObject.pointer, "createChildSceneNode_EVString_CVector3_callback");
			this.register_createChildSceneNode_EVString(this.nativeObject.pointer, "createChildSceneNode_EVString_callback");
			this.register_findLights_LightList_Real_ev_uint32(this.nativeObject.pointer, "findLights_LightList_Real_ev_uint32_callback");
			this.register_findLights_LightList_Real(this.nativeObject.pointer, "findLights_LightList_Real_callback");
			this.register_setFixedYawAxis_ev_bool_CVector3(this.nativeObject.pointer, "setFixedYawAxis_ev_bool_CVector3_callback");
			this.register_setFixedYawAxis_ev_bool(this.nativeObject.pointer, "setFixedYawAxis_ev_bool_callback");
			this.register_setDirection_Real_Real_Real_TransformSpace_CVector3(this.nativeObject.pointer, "setDirection_Real_Real_Real_TransformSpace_CVector3_callback");
			this.register_setDirection_Real_Real_Real_TransformSpace(this.nativeObject.pointer, "setDirection_Real_Real_Real_TransformSpace_callback");
			this.register_setDirection_Real_Real_Real(this.nativeObject.pointer, "setDirection_Real_Real_Real_callback");
			this.register_setDirection_CVector3_TransformSpace_CVector3(this.nativeObject.pointer, "setDirection_CVector3_TransformSpace_CVector3_callback");
			this.register_setDirection_CVector3_TransformSpace(this.nativeObject.pointer, "setDirection_CVector3_TransformSpace_callback");
			this.register_setDirection_CVector3(this.nativeObject.pointer, "setDirection_CVector3_callback");
			this.register_lookAt_CVector3_TransformSpace_CVector3(this.nativeObject.pointer, "lookAt_CVector3_TransformSpace_CVector3_callback");
			this.register_lookAt_CVector3_TransformSpace(this.nativeObject.pointer, "lookAt_CVector3_TransformSpace_callback");
			this.register_setAutoTracking_ev_bool(this.nativeObject.pointer, "setAutoTracking_ev_bool_callback");
			this.register_setAutoTracking_ev_bool_CSceneNode(this.nativeObject.pointer, "setAutoTracking_ev_bool_CSceneNode_callback");
			this.register_setAutoTracking_ev_bool_CSceneNode_CVector3(this.nativeObject.pointer, "setAutoTracking_ev_bool_CSceneNode_CVector3_callback");
			this.register_setAutoTracking_ev_bool_CSceneNode_CVector3_CVector3(this.nativeObject.pointer, "setAutoTracking_ev_bool_CSceneNode_CVector3_CVector3_callback");
			this.register_getAutoTrackTarget_void(this.nativeObject.pointer, "getAutoTrackTarget_void_callback");
			this.register_getAutoTrackOffset_void(this.nativeObject.pointer, "getAutoTrackOffset_void_callback");
			this.register_getAutoTrackLocalDirection_void(this.nativeObject.pointer, "getAutoTrackLocalDirection_void_callback");
			this.register_setVisible_ev_bool_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_ev_bool_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_getVisible_void(this.nativeObject.pointer, "getVisible_void_callback");
			this.register_hasAnyVisibleObject_void(this.nativeObject.pointer, "hasAnyVisibleObject_void_callback");
			this.register_hasAnyVisibleObject2_void(this.nativeObject.pointer, "hasAnyVisibleObject2_void_callback");
			this.register_hasAnyVisibleShadowCaster_void(this.nativeObject.pointer, "hasAnyVisibleShadowCaster_void_callback");
			this.register_hasAnyVisibleShadowCaster2_void(this.nativeObject.pointer, "hasAnyVisibleShadowCaster2_void_callback");
			this.register_flipVisibility_ev_bool(this.nativeObject.pointer, "flipVisibility_ev_bool_callback");
			this.register_flipVisibility_void(this.nativeObject.pointer, "flipVisibility_void_callback");
			this.register_setDebugDisplayEnabled_ev_bool_ev_bool(this.nativeObject.pointer, "setDebugDisplayEnabled_ev_bool_ev_bool_callback");
			this.register_setDebugDisplayEnabled_ev_bool(this.nativeObject.pointer, "setDebugDisplayEnabled_ev_bool_callback");
			this.register_getDebugRenderable_void(this.nativeObject.pointer, "getDebugRenderable_void_callback");
			this.register__updateFromParent_void(this.nativeObject.pointer, "_updateFromParent_void_callback");
			this.register_setParent_CNode(this.nativeObject.pointer, "setParent_CNode_callback");
			this.register_updateFromParentImpl_void(this.nativeObject.pointer, "updateFromParentImpl_void_callback");
			this.register_createChildImpl_void(this.nativeObject.pointer, "createChildImpl_void_callback");
			this.register_createChildImpl_EVString(this.nativeObject.pointer, "createChildImpl_EVString_callback");
			this.register_notifyMoved_void(this.nativeObject.pointer, "notifyMoved_void_callback");
			this.register_getParent_void(this.nativeObject.pointer, "getParent_void_callback");
			this.register_getOrientation_void(this.nativeObject.pointer, "getOrientation_void_callback");
			this.register_setOrientation_CQuaternion(this.nativeObject.pointer, "setOrientation_CQuaternion_callback");
			this.register_setOrientation_CQuaternion_ev_bool(this.nativeObject.pointer, "setOrientation_CQuaternion_ev_bool_callback");
			this.register_setOrientation_Real_Real_Real_Real(this.nativeObject.pointer, "setOrientation_Real_Real_Real_Real_callback");
			this.register_setOrientation_Real_Real_Real_Real_ev_bool(this.nativeObject.pointer, "setOrientation_Real_Real_Real_Real_ev_bool_callback");
			this.register_resetOrientation_void(this.nativeObject.pointer, "resetOrientation_void_callback");
			this.register_setPosition_CVector3(this.nativeObject.pointer, "setPosition_CVector3_callback");
			this.register_setPosition_CVector3_ev_bool(this.nativeObject.pointer, "setPosition_CVector3_ev_bool_callback");
			this.register_setPosition_Real_Real_Real(this.nativeObject.pointer, "setPosition_Real_Real_Real_callback");
			this.register_setPosition_Real_Real_Real_ev_bool(this.nativeObject.pointer, "setPosition_Real_Real_Real_ev_bool_callback");
			this.register_getPosition_void(this.nativeObject.pointer, "getPosition_void_callback");
			this.register_setScale_CVector3(this.nativeObject.pointer, "setScale_CVector3_callback");
			this.register_setScale_CVector3_ev_bool(this.nativeObject.pointer, "setScale_CVector3_ev_bool_callback");
			this.register_setScale_Real_Real_Real(this.nativeObject.pointer, "setScale_Real_Real_Real_callback");
			this.register_setScale_Real_Real_Real_ev_bool(this.nativeObject.pointer, "setScale_Real_Real_Real_ev_bool_callback");
			this.register_getScale_void(this.nativeObject.pointer, "getScale_void_callback");
			this.register_setInheritOrientation_ev_bool(this.nativeObject.pointer, "setInheritOrientation_ev_bool_callback");
			this.register_getInheritOrientation_void(this.nativeObject.pointer, "getInheritOrientation_void_callback");
			this.register_setInheritScale_ev_bool(this.nativeObject.pointer, "setInheritScale_ev_bool_callback");
			this.register_getInheritScale_void(this.nativeObject.pointer, "getInheritScale_void_callback");
			this.register_scale_CVector3(this.nativeObject.pointer, "scale_CVector3_callback");
			this.register_scale_Real_Real_Real(this.nativeObject.pointer, "scale_Real_Real_Real_callback");
			this.register_translate_CVector3_TransformSpace(this.nativeObject.pointer, "translate_CVector3_TransformSpace_callback");
			this.register_translate_CVector3(this.nativeObject.pointer, "translate_CVector3_callback");
			this.register_translate_Real_Real_Real_TransformSpace(this.nativeObject.pointer, "translate_Real_Real_Real_TransformSpace_callback");
			this.register_translate_Real_Real_Real(this.nativeObject.pointer, "translate_Real_Real_Real_callback");
			this.register_translate_CMatrix3_CVector3_TransformSpace(this.nativeObject.pointer, "translate_CMatrix3_CVector3_TransformSpace_callback");
			this.register_translate_CMatrix3_CVector3(this.nativeObject.pointer, "translate_CMatrix3_CVector3_callback");
			this.register_translate_CMatrix3_Real_Real_Real_TransformSpace(this.nativeObject.pointer, "translate_CMatrix3_Real_Real_Real_TransformSpace_callback");
			this.register_translate_CMatrix3_Real_Real_Real(this.nativeObject.pointer, "translate_CMatrix3_Real_Real_Real_callback");
			this.register_roll_CRadian_TransformSpace(this.nativeObject.pointer, "roll_CRadian_TransformSpace_callback");
			this.register_roll_CRadian(this.nativeObject.pointer, "roll_CRadian_callback");
			this.register_pitch_CRadian_TransformSpace(this.nativeObject.pointer, "pitch_CRadian_TransformSpace_callback");
			this.register_pitch_CRadian(this.nativeObject.pointer, "pitch_CRadian_callback");
			this.register_yaw_CRadian_TransformSpace(this.nativeObject.pointer, "yaw_CRadian_TransformSpace_callback");
			this.register_yaw_CRadian(this.nativeObject.pointer, "yaw_CRadian_callback");
			this.register_rotate_CVector3_CRadian_TransformSpace(this.nativeObject.pointer, "rotate_CVector3_CRadian_TransformSpace_callback");
			this.register_rotate_CVector3_CRadian(this.nativeObject.pointer, "rotate_CVector3_CRadian_callback");
			this.register_rotate_CQuaternion_TransformSpace(this.nativeObject.pointer, "rotate_CQuaternion_TransformSpace_callback");
			this.register_rotate_CQuaternion(this.nativeObject.pointer, "rotate_CQuaternion_callback");
			this.register_setMatrix_CMatrix4(this.nativeObject.pointer, "setMatrix_CMatrix4_callback");
			this.register_getMatrix_void(this.nativeObject.pointer, "getMatrix_void_callback");
			this.register_setLocalMatrix_CMatrix4(this.nativeObject.pointer, "setLocalMatrix_CMatrix4_callback");
			this.register_getLocalMatrix_void(this.nativeObject.pointer, "getLocalMatrix_void_callback");
			this.register_getLocalAxes_void(this.nativeObject.pointer, "getLocalAxes_void_callback");
			this.register_createChild_CVector3_CQuaternion(this.nativeObject.pointer, "createChild_CVector3_CQuaternion_callback");
			this.register_createChild_CVector3(this.nativeObject.pointer, "createChild_CVector3_callback");
			this.register_createChild_void(this.nativeObject.pointer, "createChild_void_callback");
			this.register_createChild_EVString_CVector3_CQuaternion(this.nativeObject.pointer, "createChild_EVString_CVector3_CQuaternion_callback");
			this.register_createChild_EVString_CVector3(this.nativeObject.pointer, "createChild_EVString_CVector3_callback");
			this.register_createChild_EVString(this.nativeObject.pointer, "createChild_EVString_callback");
			this.register_addChild_CNode(this.nativeObject.pointer, "addChild_CNode_callback");
			this.register_numChildren_void(this.nativeObject.pointer, "numChildren_void_callback");
			this.register_getChild_ev_uint16(this.nativeObject.pointer, "getChild_ev_uint16_callback");
			this.register_getChild_EVString(this.nativeObject.pointer, "getChild_EVString_callback");
			this.register_existChild_EVString(this.nativeObject.pointer, "existChild_EVString_callback");
			this.register_getChildIterator_void(this.nativeObject.pointer, "getChildIterator_void_callback");
			this.register_removeChild_ev_uint16(this.nativeObject.pointer, "removeChild_ev_uint16_callback");
			this.register_removeChild_CNode(this.nativeObject.pointer, "removeChild_CNode_callback");
			this.register_removeChild_EVString(this.nativeObject.pointer, "removeChild_EVString_callback");
			this.register_removeAllChildren_void(this.nativeObject.pointer, "removeAllChildren_void_callback");
			this.register__setDerivedPosition_CVector3(this.nativeObject.pointer, "_setDerivedPosition_CVector3_callback");
			this.register__setDerivedPosition_CVector3_ev_bool(this.nativeObject.pointer, "_setDerivedPosition_CVector3_ev_bool_callback");
			this.register__setDerivedOrientation_CQuaternion(this.nativeObject.pointer, "_setDerivedOrientation_CQuaternion_callback");
			this.register__setDerivedOrientation_CQuaternion_ev_bool(this.nativeObject.pointer, "_setDerivedOrientation_CQuaternion_ev_bool_callback");
			this.register__getDerivedOrientation_void(this.nativeObject.pointer, "_getDerivedOrientation_void_callback");
			this.register__getDerivedPosition_void(this.nativeObject.pointer, "_getDerivedPosition_void_callback");
			this.register__getDerivedScale_void(this.nativeObject.pointer, "_getDerivedScale_void_callback");
			this.register__getFullTransform_void(this.nativeObject.pointer, "_getFullTransform_void_callback");
			this.register__update_ev_bool_ev_bool(this.nativeObject.pointer, "_update_ev_bool_ev_bool_callback");
			this.register_addListener_CNodeListener(this.nativeObject.pointer, "addListener_CNodeListener_callback");
			this.register_removeListener_CNodeListener(this.nativeObject.pointer, "removeListener_CNodeListener_callback");
			this.register_getListener_ev_uint32(this.nativeObject.pointer, "getListener_ev_uint32_callback");
			this.register_getNumListener_ev_uint32(this.nativeObject.pointer, "getNumListener_ev_uint32_callback");
			this.register_setInitialState_void(this.nativeObject.pointer, "setInitialState_void_callback");
			this.register_resetToInitialState_void(this.nativeObject.pointer, "resetToInitialState_void_callback");
			this.register_getInitialPosition_void(this.nativeObject.pointer, "getInitialPosition_void_callback");
			this.register_convertWorldToLocalPosition_CVector3(this.nativeObject.pointer, "convertWorldToLocalPosition_CVector3_callback");
			this.register_convertLocalToWorldPosition_CVector3(this.nativeObject.pointer, "convertLocalToWorldPosition_CVector3_callback");
			this.register_convertWorldToLocalOrientation_CQuaternion(this.nativeObject.pointer, "convertWorldToLocalOrientation_CQuaternion_callback");
			this.register_convertLocalToWorldOrientation_CQuaternion(this.nativeObject.pointer, "convertLocalToWorldOrientation_CQuaternion_callback");
			this.register_getInitialOrientation_void(this.nativeObject.pointer, "getInitialOrientation_void_callback");
			this.register_getInitialScale_void(this.nativeObject.pointer, "getInitialScale_void_callback");
			this.register_getSquaredViewDepth_CCamera(this.nativeObject.pointer, "getSquaredViewDepth_CCamera_callback");
			this.register_needUpdate_ev_bool(this.nativeObject.pointer, "needUpdate_ev_bool_callback");
			this.register_needUpdate_void(this.nativeObject.pointer, "needUpdate_void_callback");
			this.register_requestUpdate_CNode_ev_bool(this.nativeObject.pointer, "requestUpdate_CNode_ev_bool_callback");
			this.register_requestUpdate_CNode(this.nativeObject.pointer, "requestUpdate_CNode_callback");
			this.register_cancelUpdate_CNode(this.nativeObject.pointer, "cancelUpdate_CNode_callback");
			this.register_getDebugRenderable_Real(this.nativeObject.pointer, "getDebugRenderable_Real_callback");
			this.register_attachObject_CMovableObject(this.nativeObject.pointer, "attachObject_CMovableObject_callback");
			this.register_numAttachedObjects_void(this.nativeObject.pointer, "numAttachedObjects_void_callback");
			this.register_getAttachedObject_ev_uint16(this.nativeObject.pointer, "getAttachedObject_ev_uint16_callback");
			this.register_getAttachedObject_EVString(this.nativeObject.pointer, "getAttachedObject_EVString_callback");
			this.register_detachObject_ev_uint16(this.nativeObject.pointer, "detachObject_ev_uint16_callback");
			this.register_detachObject_CMovableObject(this.nativeObject.pointer, "detachObject_CMovableObject_callback");
			this.register_detachObject_EVString(this.nativeObject.pointer, "detachObject_EVString_callback");
			this.register_detachAllObjects_void(this.nativeObject.pointer, "detachAllObjects_void_callback");
			this.register_removeAndDestroyChild_EVString(this.nativeObject.pointer, "removeAndDestroyChild_EVString_callback");
			this.register_removeAndDestroyChild_ev_uint16(this.nativeObject.pointer, "removeAndDestroyChild_ev_uint16_callback");
			this.register_removeAndDestroyAllChildren_void(this.nativeObject.pointer, "removeAndDestroyAllChildren_void_callback");
		}
	}
	
	public static FltBaseNode fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FltBaseNode obj = null;
 		if(baseObj instanceof FltBaseNode)
		{
			obj = (FltBaseNode)baseObj;
		} else {
			obj = new FltBaseNode(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFltBaseNode");
			obj.increaseCast();
		}

		return obj;
	}
}
