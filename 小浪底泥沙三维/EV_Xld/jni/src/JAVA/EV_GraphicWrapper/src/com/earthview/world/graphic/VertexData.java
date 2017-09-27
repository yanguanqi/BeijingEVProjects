package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VertexData extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CVertexData", new VertexDataClassFactory());
	}

	public VertexData() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CVertexData", null);
	}

	///CVertexData( EarthView::World::Graphic::CHardwareBufferManagerBase* mgr=0);
	public VertexData(com.earthview.world.graphic.HardwareBufferManagerBase mgr) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer mgrPtr = new BasePointer(mgr);
		list.add("mgr", mgrPtr.get());
		Create("CVertexData", list);
	}

	public VertexData(com.earthview.world.graphic.VertexDeclaration dcl, com.earthview.world.graphic.VertexBufferBinding bind) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer dclPtr = new BasePointer(dcl);
		list.add("dcl", dclPtr.get());
		BasePointer bindPtr = new BasePointer(bind);
		list.add("bind", bindPtr.get());
		Create("CVertexData", list);
	}

	native private long get_vertexDeclaration_void(long pNativeObject);
	public com.earthview.world.graphic.VertexDeclaration get_vertexDeclaration()
	{
		long jniValue = get_vertexDeclaration_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexDeclaration __returnValue = new com.earthview.world.graphic.VertexDeclaration(CreatedWhenConstruct.CWC_NotToCreate, "CVertexDeclaration");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexDeclaration)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexDeclaration");
		}
		return __returnValue;
	}
	
	native private void set_vertexDeclaration_CVertexDeclaration (long pNativeObject, long value);
	public void set_vertexDeclaration(com.earthview.world.graphic.VertexDeclaration vertexDeclaration)
	{
		long vertexDeclarationParamValue = (vertexDeclaration == null ? 0L : vertexDeclaration.nativeObject.pointer);
		
		set_vertexDeclaration_CVertexDeclaration(this.nativeObject.pointer, vertexDeclarationParamValue);
	}
	
	native private long get_vertexBufferBinding_void(long pNativeObject);
	public com.earthview.world.graphic.VertexBufferBinding get_vertexBufferBinding()
	{
		long jniValue = get_vertexBufferBinding_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexBufferBinding __returnValue = new com.earthview.world.graphic.VertexBufferBinding(CreatedWhenConstruct.CWC_NotToCreate, "CVertexBufferBinding");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexBufferBinding)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVertexBufferBinding");
		}
		return __returnValue;
	}
	
	native private void set_vertexBufferBinding_CVertexBufferBinding (long pNativeObject, long value);
	public void set_vertexBufferBinding(com.earthview.world.graphic.VertexBufferBinding vertexBufferBinding)
	{
		long vertexBufferBindingParamValue = (vertexBufferBinding == null ? 0L : vertexBufferBinding.nativeObject.pointer);
		
		set_vertexBufferBinding_CVertexBufferBinding(this.nativeObject.pointer, vertexBufferBindingParamValue);
	}
	
	native private boolean get_mDeleteDclBinding_void(long pNativeObject);
	public boolean get_mDeleteDclBinding()
	{
		boolean jniValue = get_mDeleteDclBinding_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mDeleteDclBinding_ev_bool (long pNativeObject, boolean value);
	public void set_mDeleteDclBinding(boolean mDeleteDclBinding)
	{
		boolean mDeleteDclBindingParamValue = mDeleteDclBinding;
		
		set_mDeleteDclBinding_ev_bool(this.nativeObject.pointer, mDeleteDclBindingParamValue);
	}
	
	native private long get_vertexStart_void(long pNativeObject);
	public long get_vertexStart()
	{
		long jniValue = get_vertexStart_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_vertexStart_ev_size_t (long pNativeObject, long value);
	public void set_vertexStart(long vertexStart)
	{
		long vertexStartParamValue = vertexStart;
		
		set_vertexStart_ev_size_t(this.nativeObject.pointer, vertexStartParamValue);
	}
	
	native private long get_vertexCount_void(long pNativeObject);
	public long get_vertexCount()
	{
		long jniValue = get_vertexCount_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_vertexCount_ev_size_t (long pNativeObject, long value);
	public void set_vertexCount(long vertexCount)
	{
		long vertexCountParamValue = vertexCount;
		
		set_vertexCount_ev_size_t(this.nativeObject.pointer, vertexCountParamValue);
	}
	
	//// Struct used to hold hardware morph / pose vertex data information
	public static class HardwareAnimationData extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CVertexData::CHardwareAnimationData", new HardwareAnimationDataClassFactory());
		}

		public HardwareAnimationData() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CHardwareAnimationData", null);
		}

		native private int get_targetBufferIndex_void(long pNativeObject);
		public int get_targetBufferIndex()
		{
			int jniValue = get_targetBufferIndex_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_targetBufferIndex_ev_uint16 (long pNativeObject, int value);
		public void set_targetBufferIndex(int targetBufferIndex)
		{
			int targetBufferIndexParamValue = targetBufferIndex;
			
			set_targetBufferIndex_ev_uint16(this.nativeObject.pointer, targetBufferIndexParamValue);
		}
		
		native private double get_parametric_void(long pNativeObject);
		public double get_parametric()
		{
			double jniValue = get_parametric_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_parametric_Real (long pNativeObject, double value);
		public void set_parametric(double parametric)
		{
			double parametricParamValue = parametric;
			
			set_parametric_Real(this.nativeObject.pointer, parametricParamValue);
		}
		
		public HardwareAnimationData(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public HardwareAnimationData(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static HardwareAnimationData fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			HardwareAnimationData obj = null;
 			if(baseObj instanceof HardwareAnimationData)
			{
				obj = (HardwareAnimationData)baseObj;
			} else {
				obj = new HardwareAnimationData(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CHardwareAnimationData");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class HardwareAnimationDataClassFactory implements IClassFactory {
		public BaseObject create()
		{
			HardwareAnimationData emptyInstance = new HardwareAnimationData(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	///typedef vector<HardwareAnimationData> EarthView::World::Graphic::CVertexData::HardwareAnimationDataList;
	public static class HardwareAnimationDataList extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CVertexData::HardwareAnimationDataList", new HardwareAnimationDataListClassFactory());
		}

		public HardwareAnimationDataList() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("HardwareAnimationDataList", null);
		}

		native private void push_back_CHardwareAnimationData(long pNativeObject, long t);
		public void push_back(com.earthview.world.graphic.VertexData.HardwareAnimationData t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_CHardwareAnimationData(this.nativeObject.pointer, tParamValue);
		}
		native private void insert_ev_uint32_CHardwareAnimationData(long pNativeObject, long pos, long t);
		public void insert(long pos, com.earthview.world.graphic.VertexData.HardwareAnimationData t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_CHardwareAnimationData(this.nativeObject.pointer, posParamValue, tParamValue);
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
		native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.VertexData.HardwareAnimationData OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.VertexData.HardwareAnimationData __returnValue = new com.earthview.world.graphic.VertexData.HardwareAnimationData(CreatedWhenConstruct.CWC_NotToCreate, "CHardwareAnimationData");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.VertexData.HardwareAnimationData)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CHardwareAnimationData");
			}
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.VertexData.HardwareAnimationData at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.VertexData.HardwareAnimationData __returnValue = new com.earthview.world.graphic.VertexData.HardwareAnimationData(CreatedWhenConstruct.CWC_NotToCreate, "CHardwareAnimationData");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.VertexData.HardwareAnimationData)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CHardwareAnimationData");
			}
			return __returnValue;
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
		native private void reserve_ev_size_t(long pNativeObject, long count);
		public void reserve(long count)
		{
			long countParamValue = count;
			reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		public HardwareAnimationDataList(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public HardwareAnimationDataList(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static HardwareAnimationDataList fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			HardwareAnimationDataList obj = null;
 			if(baseObj instanceof HardwareAnimationDataList)
			{
				obj = (HardwareAnimationDataList)baseObj;
			} else {
				obj = new HardwareAnimationDataList(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "HardwareAnimationDataList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class HardwareAnimationDataListClassFactory implements IClassFactory {
		public BaseObject create()
		{
			HardwareAnimationDataList emptyInstance = new HardwareAnimationDataList(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long get_hwAnimationDataList_void(long pNativeObject);
	public com.earthview.world.graphic.VertexData.HardwareAnimationDataList get_hwAnimationDataList()
	{
		long jniValue = get_hwAnimationDataList_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.VertexData.HardwareAnimationDataList __returnValue = new com.earthview.world.graphic.VertexData.HardwareAnimationDataList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "HardwareAnimationDataList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexData.HardwareAnimationDataList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "HardwareAnimationDataList");
		}
		return __returnValue;
	}
	
	native private void set_hwAnimationDataList_HardwareAnimationDataList (long pNativeObject, long value);
	public void set_hwAnimationDataList(com.earthview.world.graphic.VertexData.HardwareAnimationDataList hwAnimationDataList)
	{
		long hwAnimationDataListParamValue = hwAnimationDataList.nativeObject.pointer;
		
		set_hwAnimationDataList_HardwareAnimationDataList(this.nativeObject.pointer, hwAnimationDataListParamValue);
	}
	
	native private long get_hwAnimDataItemsUsed_void(long pNativeObject);
	public long get_hwAnimDataItemsUsed()
	{
		long jniValue = get_hwAnimDataItemsUsed_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_hwAnimDataItemsUsed_ev_size_t (long pNativeObject, long value);
	public void set_hwAnimDataItemsUsed(long hwAnimDataItemsUsed)
	{
		long hwAnimDataItemsUsedParamValue = hwAnimDataItemsUsed;
		
		set_hwAnimDataItemsUsed_ev_size_t(this.nativeObject.pointer, hwAnimDataItemsUsedParamValue);
	}
	
	native private long ev_clone_ev_bool_CHardwareBufferManagerBase(long pNativeObject, boolean copyData, long mgr);
	///EarthView::World::Graphic::CVertexData* clone(ev_bool copyData = true, EarthView::World::Graphic::CHardwareBufferManagerBase* mgr = 0) const;
	public com.earthview.world.graphic.VertexData ev_clone(boolean copyData, com.earthview.world.graphic.HardwareBufferManagerBase mgr)
	{
		boolean copyDataParamValue = copyData;
		long mgrParamValue = (mgr == null ? 0L : mgr.nativeObject.pointer);
		long returnValue = ev_clone_ev_bool_CHardwareBufferManagerBase(this.nativeObject.pointer, copyDataParamValue, mgrParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexData __returnValue = new com.earthview.world.graphic.VertexData(CreatedWhenConstruct.CWC_NotToCreate, "CVertexData");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVertexData");
		}
		return __returnValue;
	}
	native private long ev_clone_ev_bool(long pNativeObject, boolean copyData);
	public com.earthview.world.graphic.VertexData ev_clone(boolean copyData)
	{
		boolean copyDataParamValue = copyData;
		long returnValue = ev_clone_ev_bool(this.nativeObject.pointer, copyDataParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexData __returnValue = new com.earthview.world.graphic.VertexData(CreatedWhenConstruct.CWC_NotToCreate, "CVertexData");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVertexData");
		}
		return __returnValue;
	}
	native private long ev_clone_void(long pNativeObject);
	public com.earthview.world.graphic.VertexData ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.VertexData __returnValue = new com.earthview.world.graphic.VertexData(CreatedWhenConstruct.CWC_NotToCreate, "CVertexData");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVertexData");
		}
		return __returnValue;
	}
	native private void prepareForShadowVolume_void(long pNativeObject);
	public void prepareForShadowVolume()
	{
		prepareForShadowVolume_void(this.nativeObject.pointer);
	}
	native private long get_hardwareShadowVolWBuffer_void(long pNativeObject);
	public com.earthview.world.graphic.HardwareVertexBufferSharedPtr get_hardwareShadowVolWBuffer()
	{
		long jniValue = get_hardwareShadowVolWBuffer_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
		}
		return __returnValue;
	}
	
	native private void set_hardwareShadowVolWBuffer_CHardwareVertexBufferSharedPtr (long pNativeObject, long value);
	public void set_hardwareShadowVolWBuffer(com.earthview.world.graphic.HardwareVertexBufferSharedPtr hardwareShadowVolWBuffer)
	{
		long hardwareShadowVolWBufferParamValue = hardwareShadowVolWBuffer.nativeObject.pointer;
		
		set_hardwareShadowVolWBuffer_CHardwareVertexBufferSharedPtr(this.nativeObject.pointer, hardwareShadowVolWBufferParamValue);
	}
	
	native private void reorganiseBuffers_CVertexDeclaration_BufferUsageList_CHardwareBufferManagerBase(long pNativeObject, long newDeclaration, long bufferUsage, long mgr);
	public void reorganiseBuffers(com.earthview.world.graphic.VertexDeclaration newDeclaration, com.earthview.world.graphic.BufferUsageList bufferUsage, com.earthview.world.graphic.HardwareBufferManagerBase mgr)
	{
		long newDeclarationParamValue = (newDeclaration == null ? 0L : newDeclaration.nativeObject.pointer);
		long bufferUsageParamValue = bufferUsage.nativeObject.pointer;
		long mgrParamValue = (mgr == null ? 0L : mgr.nativeObject.pointer);
		reorganiseBuffers_CVertexDeclaration_BufferUsageList_CHardwareBufferManagerBase(this.nativeObject.pointer, newDeclarationParamValue, bufferUsageParamValue, mgrParamValue);
	}
	native private void reorganiseBuffers_CVertexDeclaration_BufferUsageList(long pNativeObject, long newDeclaration, long bufferUsage);
	public void reorganiseBuffers(com.earthview.world.graphic.VertexDeclaration newDeclaration, com.earthview.world.graphic.BufferUsageList bufferUsage)
	{
		long newDeclarationParamValue = (newDeclaration == null ? 0L : newDeclaration.nativeObject.pointer);
		long bufferUsageParamValue = bufferUsage.nativeObject.pointer;
		reorganiseBuffers_CVertexDeclaration_BufferUsageList(this.nativeObject.pointer, newDeclarationParamValue, bufferUsageParamValue);
	}
	native private void reorganiseBuffers_CVertexDeclaration_CHardwareBufferManagerBase(long pNativeObject, long newDeclaration, long mgr);
	///void reorganiseBuffers(EarthView::World::Graphic::CVertexDeclaration* newDeclaration, EarthView::World::Graphic::CHardwareBufferManagerBase* mgr = 0);
	public void reorganiseBuffers(com.earthview.world.graphic.VertexDeclaration newDeclaration, com.earthview.world.graphic.HardwareBufferManagerBase mgr)
	{
		long newDeclarationParamValue = (newDeclaration == null ? 0L : newDeclaration.nativeObject.pointer);
		long mgrParamValue = (mgr == null ? 0L : mgr.nativeObject.pointer);
		reorganiseBuffers_CVertexDeclaration_CHardwareBufferManagerBase(this.nativeObject.pointer, newDeclarationParamValue, mgrParamValue);
	}
	native private void reorganiseBuffers_CVertexDeclaration(long pNativeObject, long newDeclaration);
	public void reorganiseBuffers(com.earthview.world.graphic.VertexDeclaration newDeclaration)
	{
		long newDeclarationParamValue = (newDeclaration == null ? 0L : newDeclaration.nativeObject.pointer);
		reorganiseBuffers_CVertexDeclaration(this.nativeObject.pointer, newDeclarationParamValue);
	}
	native private void closeGapsInBindings_void(long pNativeObject);
	public void closeGapsInBindings()
	{
		closeGapsInBindings_void(this.nativeObject.pointer);
	}
	native private void removeUnusedBuffers_void(long pNativeObject);
	public void removeUnusedBuffers()
	{
		removeUnusedBuffers_void(this.nativeObject.pointer);
	}
	native private void convertPackedColour_VertexElementType_VertexElementType(long pNativeObject, int srcType, int destType);
	public void convertPackedColour(com.earthview.world.graphic.VertexElementType srcType, com.earthview.world.graphic.VertexElementType destType)
	{
		int srcTypeParamValue = srcType.getValue();
		int destTypeParamValue = destType.getValue();
		convertPackedColour_VertexElementType_VertexElementType(this.nativeObject.pointer, srcTypeParamValue, destTypeParamValue);
	}
	native private int allocateHardwareAnimationElements_ev_uint16_bool(long pNativeObject, int count, boolean animateNormals);
	///void allocateHardwareAnimationElements(ev_uint16 count);
	public int allocateHardwareAnimationElements(int count, boolean animateNormals)
	{
		int countParamValue = count;
		boolean animateNormalsParamValue = animateNormals;
		int returnValue = allocateHardwareAnimationElements_ev_uint16_bool(this.nativeObject.pointer, countParamValue, animateNormalsParamValue);
		return returnValue;
	}
	public VertexData(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VertexData(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static VertexData fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VertexData obj = null;
 		if(baseObj instanceof VertexData)
		{
			obj = (VertexData)baseObj;
		} else {
			obj = new VertexData(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVertexData");
			obj.increaseCast();
		}

		return obj;
	}
}
