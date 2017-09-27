package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VertexBufferBinding extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CVertexBufferBinding", new VertexBufferBindingClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCVertexBufferBindingProxy", new VertexBufferBindingClassFactory());
	}

	//// Defines the vertex buffer bindings used as source for vertex declarations
	///typedef map<ev_uint16, EarthView::World::Graphic::CHardwareVertexBufferSharedPtr> EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap;
	public static class VertexBufferBindingMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap", new VertexBufferBindingMapClassFactory());
		}

		public VertexBufferBindingMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("VertexBufferBindingMap", null);
		}

		native private boolean exist_ev_uint16(long pNativeObject, int key);
		public boolean exist(int key)
		{
			int keyParamValue = key;
			boolean returnValue = exist_ev_uint16(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_ev_uint16(long pNativeObject, int key);
		public com.earthview.world.graphic.HardwareVertexBufferSharedPtr OperatorIndex(int key)
		{
			int keyParamValue = key;
			long returnValue = OperatorIndex_ev_uint16(this.nativeObject.pointer, keyParamValue);
			com.earthview.world.graphic.HardwareVertexBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate, "CHardwareVertexBufferSharedPtr");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
			}
			return __returnValue;
		}
		native private long get_ev_uint16(long pNativeObject, int key);
		public com.earthview.world.graphic.HardwareVertexBufferSharedPtr get(int key)
		{
			int keyParamValue = key;
			long returnValue = get_ev_uint16(this.nativeObject.pointer, keyParamValue);
			com.earthview.world.graphic.HardwareVertexBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate, "CHardwareVertexBufferSharedPtr");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
			}
			return __returnValue;
		}
		native private void erase_ev_uint16(long pNativeObject, int key);
		public void erase(int key)
		{
			int keyParamValue = key;
			erase_ev_uint16(this.nativeObject.pointer, keyParamValue);
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void swap_VertexBufferBindingMap(long pNativeObject, long rhs);
		public void swap(com.earthview.world.graphic.VertexBufferBinding.VertexBufferBindingMap rhs)
		{
			long rhsParamValue = rhs.nativeObject.pointer;
			swap_VertexBufferBindingMap(this.nativeObject.pointer, rhsParamValue);
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		public VertexBufferBindingMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public VertexBufferBindingMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static VertexBufferBindingMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			VertexBufferBindingMap obj = null;
 			if(baseObj instanceof VertexBufferBindingMap)
			{
				obj = (VertexBufferBindingMap)baseObj;
			} else {
				obj = new VertexBufferBindingMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "VertexBufferBindingMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class VertexBufferBindingMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			VertexBufferBindingMap emptyInstance = new VertexBufferBindingMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// Constructor, should not be called direct, use CHardwareBufferManager::createVertexBufferBinding
	public VertexBufferBinding() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCVertexBufferBindingProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.VertexBufferBinding".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void setBinding_ev_uint16_CHardwareVertexBufferSharedPtr_callback(int index, long buffer)
	{
		int indexParamValue = index;
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr bufferParamValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		bufferParamValue.setDelegate(true);
		bufferParamValue.setInstancePointer(new InstancePointer(buffer));
		IClassFactory bufferParamValueClassFactory = GlobalClassFactoryMap.get(bufferParamValue.getCppInstanceTypeName());
		if (bufferParamValueClassFactory != null)
		{
			bufferParamValue.setDelegate(true);
			bufferParamValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)bufferParamValueClassFactory.create();
			bufferParamValue.setDelegate(true);
			bufferParamValue.setInstancePointer(new InstancePointer(buffer));
		}
		setBinding(indexParamValue, bufferParamValue);
	}

	native private void setBinding_ev_uint16_CHardwareVertexBufferSharedPtr(long pNativeObject, int index, long buffer);
	public void setBinding(int index, com.earthview.world.graphic.HardwareVertexBufferSharedPtr buffer)
	{
		int indexParamValue = index;
		long bufferParamValue = buffer.nativeObject.pointer;
		setBinding_ev_uint16_CHardwareVertexBufferSharedPtr(this.nativeObject.pointer, indexParamValue, bufferParamValue);
	}
	native private void setBinding_ev_uint16_CHardwareVertexBufferSharedPtr_NoVirtual(long pNativeObject, int index, long buffer);
	protected void setBinding_NoVirtual(int index, com.earthview.world.graphic.HardwareVertexBufferSharedPtr buffer)
	{
		int indexParamValue = index;
		long bufferParamValue = buffer.nativeObject.pointer;
		setBinding_ev_uint16_CHardwareVertexBufferSharedPtr_NoVirtual(this.nativeObject.pointer, indexParamValue, bufferParamValue);
	}

	protected  void unsetBinding_ev_uint16_callback(int index)
	{
		int indexParamValue = index;
		unsetBinding(indexParamValue);
	}

	native private void unsetBinding_ev_uint16(long pNativeObject, int index);
	public void unsetBinding(int index)
	{
		int indexParamValue = index;
		unsetBinding_ev_uint16(this.nativeObject.pointer, indexParamValue);
	}
	native private void unsetBinding_ev_uint16_NoVirtual(long pNativeObject, int index);
	protected void unsetBinding_NoVirtual(int index)
	{
		int indexParamValue = index;
		unsetBinding_ev_uint16_NoVirtual(this.nativeObject.pointer, indexParamValue);
	}

	protected  void unsetAllBindings_void_callback()
	{
		unsetAllBindings();
	}

	native private void unsetAllBindings_void(long pNativeObject);
	public void unsetAllBindings()
	{
		unsetAllBindings_void(this.nativeObject.pointer);
	}
	native private void unsetAllBindings_void_NoVirtual(long pNativeObject);
	protected void unsetAllBindings_NoVirtual()
	{
		unsetAllBindings_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long getBindings_void_callback()
	{
		com.earthview.world.graphic.VertexBufferBinding.VertexBufferBindingMap returnValue = getBindings();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBindings_void(long pNativeObject);
	//// Gets a read-only version of the buffer bindings
	public com.earthview.world.graphic.VertexBufferBinding.VertexBufferBindingMap getBindings()
	{
		long returnValue = getBindings_void(this.nativeObject.pointer);
		com.earthview.world.graphic.VertexBufferBinding.VertexBufferBindingMap __returnValue = new com.earthview.world.graphic.VertexBufferBinding.VertexBufferBindingMap(CreatedWhenConstruct.CWC_NotToCreate, "VertexBufferBindingMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexBufferBinding.VertexBufferBindingMap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "VertexBufferBindingMap");
		}
		return __returnValue;
	}
	native private long getBindings_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.VertexBufferBinding.VertexBufferBindingMap getBindings_NoVirtual()
	{
		long returnValue = getBindings_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.VertexBufferBinding.VertexBufferBindingMap __returnValue = new com.earthview.world.graphic.VertexBufferBinding.VertexBufferBindingMap(CreatedWhenConstruct.CWC_NotToCreate, "VertexBufferBindingMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.VertexBufferBinding.VertexBufferBindingMap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "VertexBufferBindingMap");
		}
		return __returnValue;
	}

	protected  long getBuffer_ev_uint16_callback(int index)
	{
		int indexParamValue = index;
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr returnValue = getBuffer(indexParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBuffer_ev_uint16(long pNativeObject, int index);
	//// Gets the buffer bound to the given source index
	public com.earthview.world.graphic.HardwareVertexBufferSharedPtr getBuffer(int index)
	{
		int indexParamValue = index;
		long returnValue = getBuffer_ev_uint16(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate, "CHardwareVertexBufferSharedPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
		}
		return __returnValue;
	}
	native private long getBuffer_ev_uint16_NoVirtual(long pNativeObject, int index);
	protected com.earthview.world.graphic.HardwareVertexBufferSharedPtr getBuffer_NoVirtual(int index)
	{
		int indexParamValue = index;
		long returnValue = getBuffer_ev_uint16_NoVirtual(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.graphic.HardwareVertexBufferSharedPtr __returnValue = new com.earthview.world.graphic.HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate, "CHardwareVertexBufferSharedPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwareVertexBufferSharedPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBufferSharedPtr");
		}
		return __returnValue;
	}

	protected  boolean isBufferBound_ev_uint16_callback(int index)
	{
		int indexParamValue = index;
		boolean returnValue = isBufferBound(indexParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isBufferBound_ev_uint16(long pNativeObject, int index);
	//// Gets whether a buffer is bound to the given source index
	public boolean isBufferBound(int index)
	{
		int indexParamValue = index;
		boolean returnValue = isBufferBound_ev_uint16(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private boolean isBufferBound_ev_uint16_NoVirtual(long pNativeObject, int index);
	protected boolean isBufferBound_NoVirtual(int index)
	{
		int indexParamValue = index;
		boolean returnValue = isBufferBound_ev_uint16_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  long getBufferCount_void_callback()
	{
		long returnValue = getBufferCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getBufferCount_void(long pNativeObject);
	public long getBufferCount()
	{
		long returnValue = getBufferCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getBufferCount_void_NoVirtual(long pNativeObject);
	protected long getBufferCount_NoVirtual()
	{
		long returnValue = getBufferCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getNextIndex_void_callback()
	{
		int returnValue = getNextIndex();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getNextIndex_void(long pNativeObject);
	public int getNextIndex()
	{
		int returnValue = getNextIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getNextIndex_void_NoVirtual(long pNativeObject);
	protected int getNextIndex_NoVirtual()
	{
		int returnValue = getNextIndex_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getLastBoundIndex_void_callback()
	{
		int returnValue = getLastBoundIndex();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getLastBoundIndex_void(long pNativeObject);
	public int getLastBoundIndex()
	{
		int returnValue = getLastBoundIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getLastBoundIndex_void_NoVirtual(long pNativeObject);
	protected int getLastBoundIndex_NoVirtual()
	{
		int returnValue = getLastBoundIndex_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	///typedef map<ev_uint16, ev_uint16> EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap;
	public static class BindingIndexMap extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap", new BindingIndexMapClassFactory());
		}

		public BindingIndexMap() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("BindingIndexMap", null);
		}

		native private boolean exist_ev_uint16(long pNativeObject, int key);
		public boolean exist(int key)
		{
			int keyParamValue = key;
			boolean returnValue = exist_ev_uint16(this.nativeObject.pointer, keyParamValue);
			return returnValue;
		}
		native private long OperatorIndex_ev_uint16(long pNativeObject, int key);
		public UShortPointer OperatorIndex(int key)
		{
			int keyParamValue = key;
			long returnValue = OperatorIndex_ev_uint16(this.nativeObject.pointer, keyParamValue);
			UShortPointer __returnValue = new UShortPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long get_ev_uint16(long pNativeObject, int key);
		public UShortPointer get(int key)
		{
			int keyParamValue = key;
			long returnValue = get_ev_uint16(this.nativeObject.pointer, keyParamValue);
			UShortPointer __returnValue = new UShortPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void erase_ev_uint16(long pNativeObject, int key);
		public void erase(int key)
		{
			int keyParamValue = key;
			erase_ev_uint16(this.nativeObject.pointer, keyParamValue);
		}
		native private long size_void(long pNativeObject);
		public long size()
		{
			long returnValue = size_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void swap_BindingIndexMap(long pNativeObject, long rhs);
		public void swap(com.earthview.world.graphic.VertexBufferBinding.BindingIndexMap rhs)
		{
			long rhsParamValue = rhs.nativeObject.pointer;
			swap_BindingIndexMap(this.nativeObject.pointer, rhsParamValue);
		}
		native private void clear_void(long pNativeObject);
		public void clear()
		{
			clear_void(this.nativeObject.pointer);
		}
		native private boolean empty_void(long pNativeObject);
		public boolean empty()
		{
			boolean returnValue = empty_void(this.nativeObject.pointer);
			return returnValue;
		}
		public BindingIndexMap(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public BindingIndexMap(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static BindingIndexMap fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			BindingIndexMap obj = null;
 			if(baseObj instanceof BindingIndexMap)
			{
				obj = (BindingIndexMap)baseObj;
			} else {
				obj = new BindingIndexMap(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "BindingIndexMap");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class BindingIndexMapClassFactory implements IClassFactory {
		public BaseObject create()
		{
			BindingIndexMap emptyInstance = new BindingIndexMap(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  boolean hasGaps_void_callback()
	{
		boolean returnValue = hasGaps();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean hasGaps_void(long pNativeObject);
	public boolean hasGaps()
	{
		boolean returnValue = hasGaps_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasGaps_void_NoVirtual(long pNativeObject);
	protected boolean hasGaps_NoVirtual()
	{
		boolean returnValue = hasGaps_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void closeGaps_BindingIndexMap_callback(long bindingIndexMap)
	{
		com.earthview.world.graphic.VertexBufferBinding.BindingIndexMap bindingIndexMapParamValue = new com.earthview.world.graphic.VertexBufferBinding.BindingIndexMap(CreatedWhenConstruct.CWC_NotToCreate);
		bindingIndexMapParamValue.setDelegate(true);
		bindingIndexMapParamValue.setInstancePointer(new InstancePointer(bindingIndexMap));
		IClassFactory bindingIndexMapParamValueClassFactory = GlobalClassFactoryMap.get(bindingIndexMapParamValue.getCppInstanceTypeName());
		if (bindingIndexMapParamValueClassFactory != null)
		{
			bindingIndexMapParamValue.setDelegate(true);
			bindingIndexMapParamValue = (com.earthview.world.graphic.VertexBufferBinding.BindingIndexMap)bindingIndexMapParamValueClassFactory.create();
			bindingIndexMapParamValue.setDelegate(true);
			bindingIndexMapParamValue.setInstancePointer(new InstancePointer(bindingIndexMap));
		}
		closeGaps(bindingIndexMapParamValue);
	}

	native private void closeGaps_BindingIndexMap(long pNativeObject, long bindingIndexMap);
	public void closeGaps(com.earthview.world.graphic.VertexBufferBinding.BindingIndexMap bindingIndexMap)
	{
		long bindingIndexMapParamValue = bindingIndexMap.nativeObject.pointer;
		closeGaps_BindingIndexMap(this.nativeObject.pointer, bindingIndexMapParamValue);
	}
	native private void closeGaps_BindingIndexMap_NoVirtual(long pNativeObject, long bindingIndexMap);
	protected void closeGaps_NoVirtual(com.earthview.world.graphic.VertexBufferBinding.BindingIndexMap bindingIndexMap)
	{
		long bindingIndexMapParamValue = bindingIndexMap.nativeObject.pointer;
		closeGaps_BindingIndexMap_NoVirtual(this.nativeObject.pointer, bindingIndexMapParamValue);
	}

	protected  boolean getHasInstanceData_void_callback()
	{
		boolean returnValue = getHasInstanceData();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getHasInstanceData_void(long pNativeObject);
	//// returns true if has an element that is instance data
	public boolean getHasInstanceData()
	{
		boolean returnValue = getHasInstanceData_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getHasInstanceData_void_NoVirtual(long pNativeObject);
	protected boolean getHasInstanceData_NoVirtual()
	{
		boolean returnValue = getHasInstanceData_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public VertexBufferBinding(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VertexBufferBinding(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_setBinding_ev_uint16_CHardwareVertexBufferSharedPtr(long pNativeObject, String method);
	native protected void register_unsetBinding_ev_uint16(long pNativeObject, String method);
	native protected void register_unsetAllBindings_void(long pNativeObject, String method);
	native protected void register_getBindings_void(long pNativeObject, String method);
	native protected void register_getBuffer_ev_uint16(long pNativeObject, String method);
	native protected void register_isBufferBound_ev_uint16(long pNativeObject, String method);
	native protected void register_getBufferCount_void(long pNativeObject, String method);
	native protected void register_getNextIndex_void(long pNativeObject, String method);
	native protected void register_getLastBoundIndex_void(long pNativeObject, String method);
	native protected void register_hasGaps_void(long pNativeObject, String method);
	native protected void register_closeGaps_BindingIndexMap(long pNativeObject, String method);
	native protected void register_getHasInstanceData_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setBinding_ev_uint16_CHardwareVertexBufferSharedPtr(this.nativeObject.pointer, "setBinding_ev_uint16_CHardwareVertexBufferSharedPtr_callback");
			this.register_unsetBinding_ev_uint16(this.nativeObject.pointer, "unsetBinding_ev_uint16_callback");
			this.register_unsetAllBindings_void(this.nativeObject.pointer, "unsetAllBindings_void_callback");
			this.register_getBindings_void(this.nativeObject.pointer, "getBindings_void_callback");
			this.register_getBuffer_ev_uint16(this.nativeObject.pointer, "getBuffer_ev_uint16_callback");
			this.register_isBufferBound_ev_uint16(this.nativeObject.pointer, "isBufferBound_ev_uint16_callback");
			this.register_getBufferCount_void(this.nativeObject.pointer, "getBufferCount_void_callback");
			this.register_getNextIndex_void(this.nativeObject.pointer, "getNextIndex_void_callback");
			this.register_getLastBoundIndex_void(this.nativeObject.pointer, "getLastBoundIndex_void_callback");
			this.register_hasGaps_void(this.nativeObject.pointer, "hasGaps_void_callback");
			this.register_closeGaps_BindingIndexMap(this.nativeObject.pointer, "closeGaps_BindingIndexMap_callback");
			this.register_getHasInstanceData_void(this.nativeObject.pointer, "getHasInstanceData_void_callback");
		}
	}
	
	public static VertexBufferBinding fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VertexBufferBinding obj = null;
 		if(baseObj instanceof VertexBufferBinding)
		{
			obj = (VertexBufferBinding)baseObj;
		} else {
			obj = new VertexBufferBinding(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVertexBufferBinding");
			obj.increaseCast();
		}

		return obj;
	}
}
