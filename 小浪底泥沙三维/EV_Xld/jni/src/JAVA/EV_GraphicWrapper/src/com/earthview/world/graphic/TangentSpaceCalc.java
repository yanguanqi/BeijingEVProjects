package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TangentSpaceCalc extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CTangentSpaceCalc", new TangentSpaceCalcClassFactory());
	}

	public TangentSpaceCalc() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTangentSpaceCalc", null);
	}

	////typedef std::pair<ev_size_t, ev_size_t> EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit;
	public static class VertexSplit extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit", new VertexSplitClassFactory());
		}

		native private long get_first_void(long pNativeObject);
		public long get_first()
		{
			long jniValue = get_first_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_first_ev_size_t (long pNativeObject, long value);
		public void set_first(long first)
		{
			long firstParamValue = first;
			
			set_first_ev_size_t(this.nativeObject.pointer, firstParamValue);
		}
		
		native private long get_second_void(long pNativeObject);
		public long get_second()
		{
			long jniValue = get_second_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_second_ev_size_t (long pNativeObject, long value);
		public void set_second(long second)
		{
			long secondParamValue = second;
			
			set_second_ev_size_t(this.nativeObject.pointer, secondParamValue);
		}
		
		public VertexSplit() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("VertexSplit", null);
		}

		public VertexSplit(long f, long s) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer fPtr = new BasePointer(f);
			list.add("f", fPtr.get());
			BasePointer sPtr = new BasePointer(s);
			list.add("s", sPtr.get());
			Create("VertexSplit", list);
		}

		public VertexSplit(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public VertexSplit(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static VertexSplit fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			VertexSplit obj = null;
 			if(baseObj instanceof VertexSplit)
			{
				obj = (VertexSplit)baseObj;
			} else {
				obj = new VertexSplit(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "VertexSplit");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class VertexSplitClassFactory implements IClassFactory {
		public BaseObject create()
		{
			VertexSplit emptyInstance = new VertexSplit(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// Information about a remapped index
	public static class IndexRemap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap", new IndexRemapClassFactory());
		}

		native private long get_indexSet_void(long pNativeObject);
		public long get_indexSet()
		{
			long jniValue = get_indexSet_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_indexSet_ev_size_t (long pNativeObject, long value);
		public void set_indexSet(long indexSet)
		{
			long indexSetParamValue = indexSet;
			
			set_indexSet_ev_size_t(this.nativeObject.pointer, indexSetParamValue);
		}
		
		native private long get_faceIndex_void(long pNativeObject);
		public long get_faceIndex()
		{
			long jniValue = get_faceIndex_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_faceIndex_ev_size_t (long pNativeObject, long value);
		public void set_faceIndex(long faceIndex)
		{
			long faceIndexParamValue = faceIndex;
			
			set_faceIndex_ev_size_t(this.nativeObject.pointer, faceIndexParamValue);
		}
		
		native private long get_splitVertex_void(long pNativeObject);
		public com.earthview.world.graphic.TangentSpaceCalc.VertexSplit get_splitVertex()
		{
			long jniValue = get_splitVertex_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.TangentSpaceCalc.VertexSplit __returnValue = new com.earthview.world.graphic.TangentSpaceCalc.VertexSplit(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "VertexSplit");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.TangentSpaceCalc.VertexSplit)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "VertexSplit");
			}
			return __returnValue;
		}
		
		native private void set_splitVertex_VertexSplit (long pNativeObject, long value);
		public void set_splitVertex(com.earthview.world.graphic.TangentSpaceCalc.VertexSplit splitVertex)
		{
			long splitVertexParamValue = splitVertex.nativeObject.pointer;
			
			set_splitVertex_VertexSplit(this.nativeObject.pointer, splitVertexParamValue);
		}
		
		public IndexRemap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("IndexRemap", null);
		}

		//// to keep container happy
		public IndexRemap(long i, long f, com.earthview.world.graphic.TangentSpaceCalc.VertexSplit s) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer iPtr = new BasePointer(i);
			list.add("i", iPtr.get());
			BasePointer fPtr = new BasePointer(f);
			list.add("f", fPtr.get());
			BasePointer sPtr = new BasePointer(s);
			list.add("s", sPtr.get());
			Create("IndexRemap", list);
		}

		public IndexRemap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public IndexRemap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static IndexRemap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			IndexRemap obj = null;
 			if(baseObj instanceof IndexRemap)
			{
				obj = (IndexRemap)baseObj;
			} else {
				obj = new IndexRemap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "IndexRemap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class IndexRemapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			IndexRemap emptyInstance = new IndexRemap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	////typedef list<EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap> EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList;
	public static class IndexRemapList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList", new IndexRemapListClassFactory());
		}

		public IndexRemapList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("IndexRemapList", null);
		}

		native private void push_back_IndexRemap(long pNativeObject, long t);
		public void push_back(com.earthview.world.graphic.TangentSpaceCalc.IndexRemap t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_IndexRemap(this.nativeObject.pointer, tParamValue);
		}
		native private void push_front_IndexRemap(long pNativeObject, long t);
		public void push_front(com.earthview.world.graphic.TangentSpaceCalc.IndexRemap t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_front_IndexRemap(this.nativeObject.pointer, tParamValue);
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
		public com.earthview.world.graphic.TangentSpaceCalc.IndexRemap front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			com.earthview.world.graphic.TangentSpaceCalc.IndexRemap __returnValue = new com.earthview.world.graphic.TangentSpaceCalc.IndexRemap(CreatedWhenConstruct.CWC_NotToCreate, "IndexRemap");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.TangentSpaceCalc.IndexRemap)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "IndexRemap");
			}
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public com.earthview.world.graphic.TangentSpaceCalc.IndexRemap back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			com.earthview.world.graphic.TangentSpaceCalc.IndexRemap __returnValue = new com.earthview.world.graphic.TangentSpaceCalc.IndexRemap(CreatedWhenConstruct.CWC_NotToCreate, "IndexRemap");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.TangentSpaceCalc.IndexRemap)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "IndexRemap");
			}
			return __returnValue;
		}
		native private long at_ev_uint32(long pNativeObject, long pos);
		public com.earthview.world.graphic.TangentSpaceCalc.IndexRemap at(long pos)
		{
			long posParamValue = pos;
			long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
			com.earthview.world.graphic.TangentSpaceCalc.IndexRemap __returnValue = new com.earthview.world.graphic.TangentSpaceCalc.IndexRemap(CreatedWhenConstruct.CWC_NotToCreate, "IndexRemap");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.TangentSpaceCalc.IndexRemap)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "IndexRemap");
			}
			return __returnValue;
		}
		native private void insert_ev_uint32_IndexRemap(long pNativeObject, long pos, long t);
		public void insert(long pos, com.earthview.world.graphic.TangentSpaceCalc.IndexRemap t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_IndexRemap(this.nativeObject.pointer, posParamValue, tParamValue);
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
		public IndexRemapList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public IndexRemapList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static IndexRemapList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			IndexRemapList obj = null;
 			if(baseObj instanceof IndexRemapList)
			{
				obj = (IndexRemapList)baseObj;
			} else {
				obj = new IndexRemapList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "IndexRemapList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class IndexRemapListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			IndexRemapList emptyInstance = new IndexRemapList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	////typedef list<EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit> EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits;
	public static class VertexSplits extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits", new VertexSplitsClassFactory());
		}

		public VertexSplits() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("VertexSplits", null);
		}

		native private void push_back_VertexSplit(long pNativeObject, long t);
		public void push_back(com.earthview.world.graphic.TangentSpaceCalc.VertexSplit t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_VertexSplit(this.nativeObject.pointer, tParamValue);
		}
		native private void push_front_VertexSplit(long pNativeObject, long t);
		public void push_front(com.earthview.world.graphic.TangentSpaceCalc.VertexSplit t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_front_VertexSplit(this.nativeObject.pointer, tParamValue);
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
		public com.earthview.world.graphic.TangentSpaceCalc.VertexSplit front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			com.earthview.world.graphic.TangentSpaceCalc.VertexSplit __returnValue = new com.earthview.world.graphic.TangentSpaceCalc.VertexSplit(CreatedWhenConstruct.CWC_NotToCreate, "VertexSplit");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.TangentSpaceCalc.VertexSplit)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "VertexSplit");
			}
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public com.earthview.world.graphic.TangentSpaceCalc.VertexSplit back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			com.earthview.world.graphic.TangentSpaceCalc.VertexSplit __returnValue = new com.earthview.world.graphic.TangentSpaceCalc.VertexSplit(CreatedWhenConstruct.CWC_NotToCreate, "VertexSplit");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.TangentSpaceCalc.VertexSplit)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "VertexSplit");
			}
			return __returnValue;
		}
		native private long at_ev_uint32(long pNativeObject, long pos);
		public com.earthview.world.graphic.TangentSpaceCalc.VertexSplit at(long pos)
		{
			long posParamValue = pos;
			long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
			com.earthview.world.graphic.TangentSpaceCalc.VertexSplit __returnValue = new com.earthview.world.graphic.TangentSpaceCalc.VertexSplit(CreatedWhenConstruct.CWC_NotToCreate, "VertexSplit");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.TangentSpaceCalc.VertexSplit)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "VertexSplit");
			}
			return __returnValue;
		}
		native private void insert_ev_uint32_VertexSplit(long pNativeObject, long pos, long t);
		public void insert(long pos, com.earthview.world.graphic.TangentSpaceCalc.VertexSplit t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_VertexSplit(this.nativeObject.pointer, posParamValue, tParamValue);
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
		public VertexSplits(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public VertexSplits(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static VertexSplits fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			VertexSplits obj = null;
 			if(baseObj instanceof VertexSplits)
			{
				obj = (VertexSplits)baseObj;
			} else {
				obj = new VertexSplits(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "VertexSplits");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class VertexSplitsClassFactory implements IClassFactory {
		public BaseObject create()
		{
			VertexSplits emptyInstance = new VertexSplits(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// The result of having built a tangent space basis
	public static class Result extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CTangentSpaceCalc::Result", new ResultClassFactory());
		}

		public Result() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("Result", null);
		}

		native private long get_vertexSplits_void(long pNativeObject);
		public com.earthview.world.graphic.TangentSpaceCalc.VertexSplits get_vertexSplits()
		{
			long jniValue = get_vertexSplits_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.TangentSpaceCalc.VertexSplits __returnValue = new com.earthview.world.graphic.TangentSpaceCalc.VertexSplits(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "VertexSplits");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.TangentSpaceCalc.VertexSplits)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "VertexSplits");
			}
			return __returnValue;
		}
		
		native private void set_vertexSplits_VertexSplits (long pNativeObject, long value);
		public void set_vertexSplits(com.earthview.world.graphic.TangentSpaceCalc.VertexSplits vertexSplits)
		{
			long vertexSplitsParamValue = vertexSplits.nativeObject.pointer;
			
			set_vertexSplits_VertexSplits(this.nativeObject.pointer, vertexSplitsParamValue);
		}
		
		native private long get_indexesRemapped_void(long pNativeObject);
		public com.earthview.world.graphic.TangentSpaceCalc.IndexRemapList get_indexesRemapped()
		{
			long jniValue = get_indexesRemapped_void(this.nativeObject.pointer);
			
			com.earthview.world.graphic.TangentSpaceCalc.IndexRemapList __returnValue = new com.earthview.world.graphic.TangentSpaceCalc.IndexRemapList(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "IndexRemapList");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.TangentSpaceCalc.IndexRemapList)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "IndexRemapList");
			}
			return __returnValue;
		}
		
		native private void set_indexesRemapped_IndexRemapList (long pNativeObject, long value);
		public void set_indexesRemapped(com.earthview.world.graphic.TangentSpaceCalc.IndexRemapList indexesRemapped)
		{
			long indexesRemappedParamValue = indexesRemapped.nativeObject.pointer;
			
			set_indexesRemapped_IndexRemapList(this.nativeObject.pointer, indexesRemappedParamValue);
		}
		
		public Result(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Result(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static Result fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Result obj = null;
 			if(baseObj instanceof Result)
			{
				obj = (Result)baseObj;
			} else {
				obj = new Result(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "Result");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ResultClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Result emptyInstance = new Result(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private void clear_void(long pNativeObject);
	//// Reset the calculation object
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private void setVertexData_CVertexData(long pNativeObject, long v_in);
	public void setVertexData(com.earthview.world.graphic.VertexData v_in)
	{
		long v_inParamValue = (v_in == null ? 0L : v_in.nativeObject.pointer);
		setVertexData_CVertexData(this.nativeObject.pointer, v_inParamValue);
	}
	native private void addIndexData_CIndexData(long pNativeObject, long i_in);
	public void addIndexData(com.earthview.world.graphic.IndexData i_in)
	{
		long i_inParamValue = (i_in == null ? 0L : i_in.nativeObject.pointer);
		addIndexData_CIndexData(this.nativeObject.pointer, i_inParamValue);
	}
	native private void addIndexData_CIndexData_OperationType(long pNativeObject, long i_in, int opType);
	public void addIndexData(com.earthview.world.graphic.IndexData i_in, com.earthview.world.graphic.RenderOperation.OperationType opType)
	{
		long i_inParamValue = (i_in == null ? 0L : i_in.nativeObject.pointer);
		int opTypeParamValue = opType.getValue();
		addIndexData_CIndexData_OperationType(this.nativeObject.pointer, i_inParamValue, opTypeParamValue);
	}
	native private void setStoreParityInW_ev_bool(long pNativeObject, boolean enabled);
	public void setStoreParityInW(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setStoreParityInW_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private boolean getStoreParityInW_void(long pNativeObject);
	public boolean getStoreParityInW()
	{
		boolean returnValue = getStoreParityInW_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSplitMirrored_ev_bool(long pNativeObject, boolean split);
	public void setSplitMirrored(boolean split)
	{
		boolean splitParamValue = split;
		setSplitMirrored_ev_bool(this.nativeObject.pointer, splitParamValue);
	}
	native private boolean getSplitMirrored_void(long pNativeObject);
	public boolean getSplitMirrored()
	{
		boolean returnValue = getSplitMirrored_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSplitRotated_ev_bool(long pNativeObject, boolean split);
	public void setSplitRotated(boolean split)
	{
		boolean splitParamValue = split;
		setSplitRotated_ev_bool(this.nativeObject.pointer, splitParamValue);
	}
	native private boolean getSplitRotated_void(long pNativeObject);
	public boolean getSplitRotated()
	{
		boolean returnValue = getSplitRotated_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long build_void(long pNativeObject);
	public com.earthview.world.graphic.TangentSpaceCalc.Result build()
	{
		long returnValue = build_void(this.nativeObject.pointer);
		com.earthview.world.graphic.TangentSpaceCalc.Result __returnValue = new com.earthview.world.graphic.TangentSpaceCalc.Result(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "Result");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TangentSpaceCalc.Result)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "Result");
		}
		return __returnValue;
	}
	native private long build_VertexElementSemantic(long pNativeObject, int targetSemantic);
	public com.earthview.world.graphic.TangentSpaceCalc.Result build(com.earthview.world.graphic.VertexElementSemantic targetSemantic)
	{
		int targetSemanticParamValue = targetSemantic.getValue();
		long returnValue = build_VertexElementSemantic(this.nativeObject.pointer, targetSemanticParamValue);
		com.earthview.world.graphic.TangentSpaceCalc.Result __returnValue = new com.earthview.world.graphic.TangentSpaceCalc.Result(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "Result");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TangentSpaceCalc.Result)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "Result");
		}
		return __returnValue;
	}
	native private long build_VertexElementSemantic_ev_uint16(long pNativeObject, int targetSemantic, int sourceTexCoordSet);
	public com.earthview.world.graphic.TangentSpaceCalc.Result build(com.earthview.world.graphic.VertexElementSemantic targetSemantic, int sourceTexCoordSet)
	{
		int targetSemanticParamValue = targetSemantic.getValue();
		int sourceTexCoordSetParamValue = sourceTexCoordSet;
		long returnValue = build_VertexElementSemantic_ev_uint16(this.nativeObject.pointer, targetSemanticParamValue, sourceTexCoordSetParamValue);
		com.earthview.world.graphic.TangentSpaceCalc.Result __returnValue = new com.earthview.world.graphic.TangentSpaceCalc.Result(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "Result");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TangentSpaceCalc.Result)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "Result");
		}
		return __returnValue;
	}
	native private long build_VertexElementSemantic_ev_uint16_ev_uint16(long pNativeObject, int targetSemantic, int sourceTexCoordSet, int index);
	public com.earthview.world.graphic.TangentSpaceCalc.Result build(com.earthview.world.graphic.VertexElementSemantic targetSemantic, int sourceTexCoordSet, int index)
	{
		int targetSemanticParamValue = targetSemantic.getValue();
		int sourceTexCoordSetParamValue = sourceTexCoordSet;
		int indexParamValue = index;
		long returnValue = build_VertexElementSemantic_ev_uint16_ev_uint16(this.nativeObject.pointer, targetSemanticParamValue, sourceTexCoordSetParamValue, indexParamValue);
		com.earthview.world.graphic.TangentSpaceCalc.Result __returnValue = new com.earthview.world.graphic.TangentSpaceCalc.Result(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "Result");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TangentSpaceCalc.Result)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "Result");
		}
		return __returnValue;
	}
	public TangentSpaceCalc(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TangentSpaceCalc(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TangentSpaceCalc fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TangentSpaceCalc obj = null;
 		if(baseObj instanceof TangentSpaceCalc)
		{
			obj = (TangentSpaceCalc)baseObj;
		} else {
			obj = new TangentSpaceCalc(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTangentSpaceCalc");
			obj.increaseCast();
		}

		return obj;
	}
}
