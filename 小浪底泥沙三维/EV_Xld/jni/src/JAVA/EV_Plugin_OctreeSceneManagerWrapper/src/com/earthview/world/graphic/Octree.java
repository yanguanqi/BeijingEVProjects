package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Octree extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::COctree", new OctreeClassFactory());
	}

	public Octree(com.earthview.world.graphic.Octree ref_parent) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		Create("COctree", list);
	}

	native private void _addNode_COctreeNode(long pNativeObject, long ref_n);
	public void _addNode(com.earthview.world.graphic.OctreeNode ref_n)
	{
		long ref_nParamValue = (ref_n == null ? 0L : ref_n.nativeObject.pointer);
		_addNode_COctreeNode(this.nativeObject.pointer, ref_nParamValue);
	}
	native private void _removeNode_COctreeNode(long pNativeObject, long n);
	public void _removeNode(com.earthview.world.graphic.OctreeNode n)
	{
		long nParamValue = (n == null ? 0L : n.nativeObject.pointer);
		_removeNode_COctreeNode(this.nativeObject.pointer, nParamValue);
	}
	native private int numNodes_void(long pNativeObject);
	public int numNodes()
	{
		int returnValue = numNodes_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long get_mBox_void(long pNativeObject);
	public com.earthview.world.spatial.math.AxisAlignedBox get_mBox()
	{
		long jniValue = get_mBox_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	
	native private void set_mBox_CAxisAlignedBox (long pNativeObject, long value);
	public void set_mBox(com.earthview.world.spatial.math.AxisAlignedBox mBox)
	{
		long mBoxParamValue = mBox.nativeObject.pointer;
		
		set_mBox_CAxisAlignedBox(this.nativeObject.pointer, mBoxParamValue);
	}
	
	native private long get_mWireBoundingBox_void(long pNativeObject);
	public com.earthview.world.graphic.WireBoundingBox get_mWireBoundingBox()
	{
		long jniValue = get_mWireBoundingBox_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.WireBoundingBox __returnValue = new com.earthview.world.graphic.WireBoundingBox(CreatedWhenConstruct.CWC_NotToCreate, "CWireBoundingBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.WireBoundingBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWireBoundingBox");
		}
		return __returnValue;
	}
	
	native private void set_mWireBoundingBox_CWireBoundingBox (long pNativeObject, long value);
	public void set_mWireBoundingBox(com.earthview.world.graphic.WireBoundingBox mWireBoundingBox)
	{
		long mWireBoundingBoxParamValue = (mWireBoundingBox == null ? 0L : mWireBoundingBox.nativeObject.pointer);
		
		set_mWireBoundingBox_CWireBoundingBox(this.nativeObject.pointer, mWireBoundingBoxParamValue);
	}
	
	native private long getWireBoundingBox_void(long pNativeObject);
	public com.earthview.world.graphic.WireBoundingBox getWireBoundingBox()
	{
		long returnValue = getWireBoundingBox_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.WireBoundingBox __returnValue = new com.earthview.world.graphic.WireBoundingBox(CreatedWhenConstruct.CWC_NotToCreate, "CWireBoundingBox");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.WireBoundingBox)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWireBoundingBox");
		}
		return __returnValue;
	}
	native private long get_mHalfSize_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mHalfSize()
	{
		long jniValue = get_mHalfSize_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	
	native private void set_mHalfSize_CVector3 (long pNativeObject, long value);
	public void set_mHalfSize(com.earthview.world.spatial.math.Vector3 mHalfSize)
	{
		long mHalfSizeParamValue = mHalfSize.nativeObject.pointer;
		
		set_mHalfSize_CVector3(this.nativeObject.pointer, mHalfSizeParamValue);
	}
	
	native private boolean _isTwiceSize_CAxisAlignedBox(long pNativeObject, long box);
	public boolean _isTwiceSize(com.earthview.world.spatial.math.AxisAlignedBox box)
	{
		long boxParamValue = box.nativeObject.pointer;
		boolean returnValue = _isTwiceSize_CAxisAlignedBox(this.nativeObject.pointer, boxParamValue);
		return returnValue;
	}
	native private void _getChildIndexes_CAxisAlignedBox_int_int_int(long pNativeObject, long box, long x, long y, long z);
	public void _getChildIndexes(com.earthview.world.spatial.math.AxisAlignedBox box, IntegerPointer x, IntegerPointer y, IntegerPointer z)
	{
		long boxParamValue = box.nativeObject.pointer;
		long xParamValue = (x == null ? 0L : x.nativeObject.pointer);
		long yParamValue = (y == null ? 0L : y.nativeObject.pointer);
		long zParamValue = (z == null ? 0L : z.nativeObject.pointer);
		_getChildIndexes_CAxisAlignedBox_int_int_int(this.nativeObject.pointer, boxParamValue, xParamValue, yParamValue, zParamValue);
	}
	native private void _getCullBounds_CAxisAlignedBox(long pNativeObject, long box);
	public void _getCullBounds(com.earthview.world.spatial.math.AxisAlignedBox box)
	{
		long boxParamValue = (box == null ? 0L : box.nativeObject.pointer);
		_getCullBounds_CAxisAlignedBox(this.nativeObject.pointer, boxParamValue);
	}
	///typedef list< EarthView::World::Graphic::COctreeNode * > NodeList;
	public static class OctreeNodeList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::COctree::OctreeNodeList", new OctreeNodeListClassFactory());
		}

		public OctreeNodeList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("OctreeNodeList", null);
		}

		native private void push_back_COctreeNode(long pNativeObject, long t);
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.OctreeNode> t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_COctreeNode(this.nativeObject.pointer, tParamValue);
		}
		native private void push_front_COctreeNode(long pNativeObject, long t);
		public void push_front(NativeObjectPointer<com.earthview.world.graphic.OctreeNode> t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_front_COctreeNode(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private void pop_front_void(long pNativeObject);
		public void pop_front()
		{
			pop_front_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.OctreeNode> front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.OctreeNode> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.OctreeNode>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.OctreeNode> back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.OctreeNode> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.OctreeNode>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_uint32(long pNativeObject, long pos);
		public NativeObjectPointer<com.earthview.world.graphic.OctreeNode> at(long pos)
		{
			long posParamValue = pos;
			long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
			NativeObjectPointer<com.earthview.world.graphic.OctreeNode> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.OctreeNode>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_COctreeNode(long pNativeObject, long pos, long t);
		public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.OctreeNode> t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_COctreeNode(this.nativeObject.pointer, posParamValue, tParamValue);
		}
		native private void remove_ev_size_t(long pNativeObject, long pos);
		public void remove(long pos)
		{
			long posParamValue = pos;
			remove_ev_size_t(this.nativeObject.pointer, posParamValue);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void resize_ev_size_t(long pNativeObject, long newSize);
		public void resize(long newSize)
		{
			long newSizeParamValue = newSize;
			resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public OctreeNodeList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public OctreeNodeList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static OctreeNodeList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			OctreeNodeList obj = null;
 			if(baseObj instanceof OctreeNodeList)
			{
				obj = (OctreeNodeList)baseObj;
			} else {
				obj = new OctreeNodeList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "OctreeNodeList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class OctreeNodeListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			OctreeNodeList emptyInstance = new OctreeNodeList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long get_mNodes_void(long pNativeObject);
	public com.earthview.world.graphic.Octree.OctreeNodeList get_mNodes()
	{
		long jniValue = get_mNodes_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.Octree.OctreeNodeList __returnValue = new com.earthview.world.graphic.Octree.OctreeNodeList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "OctreeNodeList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Octree.OctreeNodeList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "OctreeNodeList");
		}
		return __returnValue;
	}
	
	native private void set_mNodes_OctreeNodeList (long pNativeObject, long value);
	public void set_mNodes(com.earthview.world.graphic.Octree.OctreeNodeList mNodes)
	{
		long mNodesParamValue = mNodes.nativeObject.pointer;
		
		set_mNodes_OctreeNodeList(this.nativeObject.pointer, mNodesParamValue);
	}
	
	public Octree(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Octree(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Octree fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Octree obj = null;
 		if(baseObj instanceof Octree)
		{
			obj = (Octree)baseObj;
		} else {
			obj = new Octree(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COctree");
			obj.increaseCast();
		}

		return obj;
	}
}
