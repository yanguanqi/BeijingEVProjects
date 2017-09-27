package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 该类是用来更详细的表述EarthView::World::Graphic::CMaterial类
 */
public class Technique extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CTechnique", new TechniqueClassFactory());
	}

	public static class Passes extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CTechnique::Passes", new PassesClassFactory());
		}

		public Passes() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("Passes", null);
		}

		native private void push_back_CPass(long pNativeObject, long ref_t);
		public void push_back(NativeObjectPointer<com.earthview.world.graphic.Pass> ref_t)
		{
			long ref_tParamValue = ref_t.nativeObject.pointer;
			push_back_CPass(this.nativeObject.pointer, ref_tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.Pass> front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.Pass> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Pass>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public NativeObjectPointer<com.earthview.world.graphic.Pass> back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			NativeObjectPointer<com.earthview.world.graphic.Pass> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Pass>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void insert_ev_uint32_CPass(long pNativeObject, long pos, long ref_t);
		public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.Pass> ref_t)
		{
			long posParamValue = pos;
			long ref_tParamValue = ref_t.nativeObject.pointer;
			insert_ev_uint32_CPass(this.nativeObject.pointer, posParamValue, ref_tParamValue);
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
		public NativeObjectPointer<com.earthview.world.graphic.Pass> OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.Pass> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Pass>(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public NativeObjectPointer<com.earthview.world.graphic.Pass> at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			NativeObjectPointer<com.earthview.world.graphic.Pass> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Pass>(new InstancePointer(returnValue));
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
		public Passes(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Passes(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static Passes fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Passes obj = null;
 			if(baseObj instanceof Passes)
			{
				obj = (Passes)baseObj;
			} else {
				obj = new Passes(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "Passes");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class PassesClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Passes emptyInstance = new Passes(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public enum IncludeOrExclude implements INativeEnum<IncludeOrExclude> {
		INCLUDE(IncludeOrExcludeHelper.ENUM_VALUES[0]),
		EXCLUDE(IncludeOrExcludeHelper.ENUM_VALUES[1]);
		private int value;
		IncludeOrExclude(int i) {
			this.value = i;
		}
		public IncludeOrExclude getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final IncludeOrExclude toEnum(int retval) {
			if(retval == INCLUDE.value){
				return INCLUDE;
			}
			else if(retval == EXCLUDE.value){
				return EXCLUDE;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class IncludeOrExcludeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	//// Rule controlling whether technique is deemed supported based on GPU vendor
	public static class Gpuvendorrule extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CTechnique::GPUVendorRule", new GpuvendorruleClassFactory());
		}

		native private int get_vendor_void(long pNativeObject);
		public com.earthview.world.graphic.GPUVendor get_vendor()
		{
			int jniValue = get_vendor_void(this.nativeObject.pointer);
			
			return com.earthview.world.graphic.GPUVendor.toEnum(jniValue);
		}
		
		native private void set_vendor_GPUVendor (long pNativeObject, int value);
		public void set_vendor(com.earthview.world.graphic.GPUVendor vendor)
		{
			int vendorParamValue = vendor.getValue();
			
			set_vendor_GPUVendor(this.nativeObject.pointer, vendorParamValue);
		}
		
		native private int get_includeOrExclude_void(long pNativeObject);
		public com.earthview.world.graphic.Technique.IncludeOrExclude get_includeOrExclude()
		{
			int jniValue = get_includeOrExclude_void(this.nativeObject.pointer);
			
			return com.earthview.world.graphic.Technique.IncludeOrExclude.toEnum(jniValue);
		}
		
		native private void set_includeOrExclude_IncludeOrExclude (long pNativeObject, int value);
		public void set_includeOrExclude(com.earthview.world.graphic.Technique.IncludeOrExclude includeOrExclude)
		{
			int includeOrExcludeParamValue = includeOrExclude.getValue();
			
			set_includeOrExclude_IncludeOrExclude(this.nativeObject.pointer, includeOrExcludeParamValue);
		}
		
		/**
		 * GPU供货商规定
		 * @param  
		 */
		public Gpuvendorrule() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("GPUVendorRule", null);
		}

		/**
		 * GPU供货商规定
		 * @param v GPU供货商
		 * @param ie 导入或者导出，0表示导入，1表示导出
		 */
		public Gpuvendorrule(com.earthview.world.graphic.GPUVendor v, com.earthview.world.graphic.Technique.IncludeOrExclude ie) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer vPtr = new BasePointer(v);
			list.add("v", vPtr.get());
			BasePointer iePtr = new BasePointer(ie);
			list.add("ie", iePtr.get());
			Create("GPUVendorRule", list);
		}

		public Gpuvendorrule(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Gpuvendorrule(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static Gpuvendorrule fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Gpuvendorrule obj = null;
 			if(baseObj instanceof Gpuvendorrule)
			{
				obj = (Gpuvendorrule)baseObj;
			} else {
				obj = new Gpuvendorrule(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "GPUVendorRule");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class GpuvendorruleClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Gpuvendorrule emptyInstance = new Gpuvendorrule(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// Rule controlling whether technique is deemed supported based on GPU device name
	public static class Gpudevicenamerule extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CTechnique::GPUDeviceNameRule", new GpudevicenameruleClassFactory());
		}

		native private String get_devicePattern_void(long pNativeObject);
		public String get_devicePattern()
		{
			String jniValue = get_devicePattern_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_devicePattern_EVString (long pNativeObject, String value);
		public void set_devicePattern(String devicePattern)
		{
			String devicePatternParamValue = devicePattern;
			
			set_devicePattern_EVString(this.nativeObject.pointer, devicePatternParamValue);
		}
		
		native private int get_includeOrExclude_void(long pNativeObject);
		public com.earthview.world.graphic.Technique.IncludeOrExclude get_includeOrExclude()
		{
			int jniValue = get_includeOrExclude_void(this.nativeObject.pointer);
			
			return com.earthview.world.graphic.Technique.IncludeOrExclude.toEnum(jniValue);
		}
		
		native private void set_includeOrExclude_IncludeOrExclude (long pNativeObject, int value);
		public void set_includeOrExclude(com.earthview.world.graphic.Technique.IncludeOrExclude includeOrExclude)
		{
			int includeOrExcludeParamValue = includeOrExclude.getValue();
			
			set_includeOrExclude_IncludeOrExclude(this.nativeObject.pointer, includeOrExcludeParamValue);
		}
		
		native private boolean get_caseSensitive_void(long pNativeObject);
		public boolean get_caseSensitive()
		{
			boolean jniValue = get_caseSensitive_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_caseSensitive_ev_bool (long pNativeObject, boolean value);
		public void set_caseSensitive(boolean caseSensitive)
		{
			boolean caseSensitiveParamValue = caseSensitive;
			
			set_caseSensitive_ev_bool(this.nativeObject.pointer, caseSensitiveParamValue);
		}
		
		/**
		 * GPU设备名称规则
		 * @param  
		 */
		public Gpudevicenamerule() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("GPUDeviceNameRule", null);
		}

		/**
		 * GPU设备名称规则
		 * @param pattern 原型
		 * @param ie 导入或者导出，0表示导入，1表示导出
		 * @param caseSen 
		 */
		public Gpudevicenamerule(String pattern, com.earthview.world.graphic.Technique.IncludeOrExclude ie, boolean caseSen) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer patternPtr = new BasePointer(pattern);
			list.add("pattern", patternPtr.get());
			BasePointer iePtr = new BasePointer(ie);
			list.add("ie", iePtr.get());
			BasePointer caseSenPtr = new BasePointer(caseSen);
			list.add("caseSen", caseSenPtr.get());
			Create("GPUDeviceNameRule", list);
		}

		public Gpudevicenamerule(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Gpudevicenamerule(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static Gpudevicenamerule fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Gpudevicenamerule obj = null;
 			if(baseObj instanceof Gpudevicenamerule)
			{
				obj = (Gpudevicenamerule)baseObj;
			} else {
				obj = new Gpudevicenamerule(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "GPUDeviceNameRule");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class GpudevicenameruleClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Gpudevicenamerule emptyInstance = new Gpudevicenamerule(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class Gpuvendorrulelist extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CTechnique::GPUVendorRuleList", new GpuvendorrulelistClassFactory());
		}

		public Gpuvendorrulelist() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("GPUVendorRuleList", null);
		}

		native private void push_back_GPUVendorRule(long pNativeObject, long t);
		public void push_back(com.earthview.world.graphic.Technique.Gpuvendorrule t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_GPUVendorRule(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public com.earthview.world.graphic.Technique.Gpuvendorrule front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Technique.Gpuvendorrule __returnValue = new com.earthview.world.graphic.Technique.Gpuvendorrule(CreatedWhenConstruct.CWC_NotToCreate, "GPUVendorRule");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Technique.Gpuvendorrule)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "GPUVendorRule");
			}
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public com.earthview.world.graphic.Technique.Gpuvendorrule back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Technique.Gpuvendorrule __returnValue = new com.earthview.world.graphic.Technique.Gpuvendorrule(CreatedWhenConstruct.CWC_NotToCreate, "GPUVendorRule");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Technique.Gpuvendorrule)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "GPUVendorRule");
			}
			return __returnValue;
		}
		native private void insert_ev_uint32_GPUVendorRule(long pNativeObject, long pos, long t);
		public void insert(long pos, com.earthview.world.graphic.Technique.Gpuvendorrule t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_GPUVendorRule(this.nativeObject.pointer, posParamValue, tParamValue);
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
		public com.earthview.world.graphic.Technique.Gpuvendorrule OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.Technique.Gpuvendorrule __returnValue = new com.earthview.world.graphic.Technique.Gpuvendorrule(CreatedWhenConstruct.CWC_NotToCreate, "GPUVendorRule");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Technique.Gpuvendorrule)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "GPUVendorRule");
			}
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.Technique.Gpuvendorrule at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.Technique.Gpuvendorrule __returnValue = new com.earthview.world.graphic.Technique.Gpuvendorrule(CreatedWhenConstruct.CWC_NotToCreate, "GPUVendorRule");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Technique.Gpuvendorrule)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "GPUVendorRule");
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
		public Gpuvendorrulelist(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Gpuvendorrulelist(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static Gpuvendorrulelist fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Gpuvendorrulelist obj = null;
 			if(baseObj instanceof Gpuvendorrulelist)
			{
				obj = (Gpuvendorrulelist)baseObj;
			} else {
				obj = new Gpuvendorrulelist(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "GPUVendorRuleList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class GpuvendorrulelistClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Gpuvendorrulelist emptyInstance = new Gpuvendorrulelist(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class Gpudevicenamerulelist extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList", new GpudevicenamerulelistClassFactory());
		}

		public Gpudevicenamerulelist() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("GPUDeviceNameRuleList", null);
		}

		native private void push_back_GPUDeviceNameRule(long pNativeObject, long t);
		public void push_back(com.earthview.world.graphic.Technique.Gpudevicenamerule t)
		{
			long tParamValue = t.nativeObject.pointer;
			push_back_GPUDeviceNameRule(this.nativeObject.pointer, tParamValue);
		}
		native private void pop_back_void(long pNativeObject);
		public void pop_back()
		{
			pop_back_void(this.nativeObject.pointer);
		}
		native private long front_void(long pNativeObject);
		public com.earthview.world.graphic.Technique.Gpudevicenamerule front()
		{
			long returnValue = front_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Technique.Gpudevicenamerule __returnValue = new com.earthview.world.graphic.Technique.Gpudevicenamerule(CreatedWhenConstruct.CWC_NotToCreate, "GPUDeviceNameRule");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Technique.Gpudevicenamerule)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "GPUDeviceNameRule");
			}
			return __returnValue;
		}
		native private long back_void(long pNativeObject);
		public com.earthview.world.graphic.Technique.Gpudevicenamerule back()
		{
			long returnValue = back_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Technique.Gpudevicenamerule __returnValue = new com.earthview.world.graphic.Technique.Gpudevicenamerule(CreatedWhenConstruct.CWC_NotToCreate, "GPUDeviceNameRule");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Technique.Gpudevicenamerule)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "GPUDeviceNameRule");
			}
			return __returnValue;
		}
		native private void insert_ev_uint32_GPUDeviceNameRule(long pNativeObject, long pos, long t);
		public void insert(long pos, com.earthview.world.graphic.Technique.Gpudevicenamerule t)
		{
			long posParamValue = pos;
			long tParamValue = t.nativeObject.pointer;
			insert_ev_uint32_GPUDeviceNameRule(this.nativeObject.pointer, posParamValue, tParamValue);
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
		public com.earthview.world.graphic.Technique.Gpudevicenamerule OperatorIndex(long n)
		{
			long nParamValue = n;
			long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.Technique.Gpudevicenamerule __returnValue = new com.earthview.world.graphic.Technique.Gpudevicenamerule(CreatedWhenConstruct.CWC_NotToCreate, "GPUDeviceNameRule");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Technique.Gpudevicenamerule)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "GPUDeviceNameRule");
			}
			return __returnValue;
		}
		native private long at_ev_size_t(long pNativeObject, long n);
		public com.earthview.world.graphic.Technique.Gpudevicenamerule at(long n)
		{
			long nParamValue = n;
			long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
			com.earthview.world.graphic.Technique.Gpudevicenamerule __returnValue = new com.earthview.world.graphic.Technique.Gpudevicenamerule(CreatedWhenConstruct.CWC_NotToCreate, "GPUDeviceNameRule");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Technique.Gpudevicenamerule)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "GPUDeviceNameRule");
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
		public Gpudevicenamerulelist(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Gpudevicenamerulelist(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static Gpudevicenamerulelist fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Gpudevicenamerulelist obj = null;
 			if(baseObj instanceof Gpudevicenamerulelist)
			{
				obj = (Gpudevicenamerulelist)baseObj;
			} else {
				obj = new Gpudevicenamerulelist(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "GPUDeviceNameRuleList");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class GpudevicenamerulelistClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Gpudevicenamerulelist emptyInstance = new Gpudevicenamerulelist(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 带参数的构造函数
	 * @param parent 
	 */
	public Technique(com.earthview.world.graphic.Material ref_parent) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		Create("CTechnique", list);
	}

	/**
	 * 带参数的构造函数
	 * @param parent 
	 * @param oth 
	 */
	public Technique(com.earthview.world.graphic.Material ref_parent, com.earthview.world.graphic.Technique oth) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer othPtr = new BasePointer(oth);
		list.add("oth", othPtr.get());
		Create("CTechnique", list);
	}

	native private boolean isSupported_void(long pNativeObject);
	/**
	 * 判断该技术是否被当前的显卡所支持
	 * @param  
	 */
	public boolean isSupported()
	{
		boolean returnValue = isSupported_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String _compile_ev_bool(long pNativeObject, boolean autoManageTextureUnits);
	/**
	 * 编译
	 * @param autoManageTextureUnits 是否可以自动运行纹理单元
	 */
	public String _compile(boolean autoManageTextureUnits)
	{
		boolean autoManageTextureUnitsParamValue = autoManageTextureUnits;
		String returnValue = _compile_ev_bool(this.nativeObject.pointer, autoManageTextureUnitsParamValue);
		return returnValue;
	}
	native private void _compileIlluminationPasses_void(long pNativeObject);
	/**
	 * 分裂通路为光照通路
	 * @param  
	 */
	public void _compileIlluminationPasses()
	{
		_compileIlluminationPasses_void(this.nativeObject.pointer);
	}
	native private long createPass_void(long pNativeObject);
	/**
	 * 为该技术创建一个新的通路
	 * @param  
	 */
	public com.earthview.world.graphic.Pass createPass()
	{
		long returnValue = createPass_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Pass __returnValue = new com.earthview.world.graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate, "CPass");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Pass)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPass");
		}
		return __returnValue;
	}
	native private long getPass_ev_uint16(long pNativeObject, int index);
	/**
	 * 根据给定的索引重新获得渲染通路
	 * @param index 给定的索引
	 */
	public com.earthview.world.graphic.Pass getPass(int index)
	{
		int indexParamValue = index;
		long returnValue = getPass_ev_uint16(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Pass __returnValue = new com.earthview.world.graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate, "CPass");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Pass)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPass");
		}
		return __returnValue;
	}
	native private long getPass_EVString(long pNativeObject, String name);
	/**
	 * 重新获得与名称相匹配的的渲染通路
	 * @param name name
	 * @return 如果相匹配的名称找不到则返回0
	 */
	public com.earthview.world.graphic.Pass getPass(String name)
	{
		String nameParamValue = name;
		long returnValue = getPass_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Pass __returnValue = new com.earthview.world.graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate, "CPass");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Pass)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPass");
		}
		return __returnValue;
	}
	native private int getNumPasses_void(long pNativeObject);
	/**
	 * 重新获得渲染通路的数量
	 * @param  
	 * @return 返回通道个数
	 */
	public int getNumPasses()
	{
		int returnValue = getNumPasses_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void removePass_ev_uint16(long pNativeObject, int index);
	/**
	 * 根据给定的索引删除渲染通路
	 * @param index 索引值
	 */
	public void removePass(int index)
	{
		int indexParamValue = index;
		removePass_ev_uint16(this.nativeObject.pointer, indexParamValue);
	}
	native private void removeAllPasses_void(long pNativeObject);
	/**
	 * 从技术中删除所有的渲染通路
	 * @param  
	 */
	public void removeAllPasses()
	{
		removeAllPasses_void(this.nativeObject.pointer);
	}
	native private boolean movePass_ev_uint16_ev_uint16(long pNativeObject, int sourceIndex, int destinationIndex);
	/**
	 * 调整通路的顺序
	 * @param sourceIndex 原索引
	 * @param destinationIndex 目标索引
	 * @return 假如移动成功返回true，失败返回false
	 */
	public boolean movePass(int sourceIndex, int destinationIndex)
	{
		int sourceIndexParamValue = sourceIndex;
		int destinationIndexParamValue = destinationIndex;
		boolean returnValue = movePass_ev_uint16_ev_uint16(this.nativeObject.pointer, sourceIndexParamValue, destinationIndexParamValue);
		return returnValue;
	}
	public static class PassIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CTechnique::PassIterator", new PassIteratorClassFactory());
		}

		public PassIterator(com.earthview.world.graphic.Technique.Passes vec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer vecPtr = new BasePointer(vec);
			list.add("vec", vecPtr.get());
			Create("PassIterator", list);
		}

		public PassIterator(com.earthview.world.graphic.Technique.PassIterator rhs) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rhsPtr = new BasePointer(rhs);
			list.add("rhs", rhsPtr.get());
			Create("PassIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.Pass getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Pass __returnValue = new com.earthview.world.graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate, "CPass");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Pass)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CPass");
			}
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.Pass next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Pass __returnValue = new com.earthview.world.graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate, "CPass");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Pass)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CPass");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.Pass getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Pass __returnValue = new com.earthview.world.graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate, "CPass");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Pass)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CPass");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.Pass getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Pass __returnValue = new com.earthview.world.graphic.Pass(CreatedWhenConstruct.CWC_NotToCreate, "CPass");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Pass)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CPass");
			}
			return __returnValue;
		}
		public PassIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public PassIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static PassIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			PassIterator obj = null;
 			if(baseObj instanceof PassIterator)
			{
				obj = (PassIterator)baseObj;
			} else {
				obj = new PassIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "PassIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class PassIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			PassIterator emptyInstance = new PassIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getPassIterator_void(long pNativeObject);
	///在该技术中通过渲染通路得到迭代器
	public com.earthview.world.graphic.Technique.PassIterator getPassIterator()
	{
		long returnValue = getPassIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Technique.PassIterator __returnValue = new com.earthview.world.graphic.Technique.PassIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "PassIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Technique.PassIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "PassIterator");
		}
		return __returnValue;
	}
	public static class IlluminationPassIterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CTechnique::IlluminationPassIterator", new IlluminationPassIteratorClassFactory());
		}

		public IlluminationPassIterator(com.earthview.world.graphic.IlluminationPassList vec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer vecPtr = new BasePointer(vec);
			list.add("vec", vecPtr.get());
			Create("IlluminationPassIterator", list);
		}

		public IlluminationPassIterator(com.earthview.world.graphic.Technique.IlluminationPassIterator rhs) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rhsPtr = new BasePointer(rhs);
			list.add("rhs", rhsPtr.get());
			Create("IlluminationPassIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.IlluminationPass getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.IlluminationPass __returnValue = new com.earthview.world.graphic.IlluminationPass(CreatedWhenConstruct.CWC_NotToCreate, "IlluminationPass");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.IlluminationPass)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "IlluminationPass");
			}
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.IlluminationPass next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.IlluminationPass __returnValue = new com.earthview.world.graphic.IlluminationPass(CreatedWhenConstruct.CWC_NotToCreate, "IlluminationPass");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.IlluminationPass)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "IlluminationPass");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.IlluminationPass getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.IlluminationPass __returnValue = new com.earthview.world.graphic.IlluminationPass(CreatedWhenConstruct.CWC_NotToCreate, "IlluminationPass");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.IlluminationPass)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "IlluminationPass");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.IlluminationPass getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.IlluminationPass __returnValue = new com.earthview.world.graphic.IlluminationPass(CreatedWhenConstruct.CWC_NotToCreate, "IlluminationPass");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.IlluminationPass)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "IlluminationPass");
			}
			return __returnValue;
		}
		public IlluminationPassIterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public IlluminationPassIterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static IlluminationPassIterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			IlluminationPassIterator obj = null;
 			if(baseObj instanceof IlluminationPassIterator)
			{
				obj = (IlluminationPassIterator)baseObj;
			} else {
				obj = new IlluminationPassIterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "IlluminationPassIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class IlluminationPassIteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			IlluminationPassIterator emptyInstance = new IlluminationPassIterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getIlluminationPassIterator_void(long pNativeObject);
	/**
	 * 得到迭代器
	 * @param  
	 */
	public com.earthview.world.graphic.Technique.IlluminationPassIterator getIlluminationPassIterator()
	{
		long returnValue = getIlluminationPassIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Technique.IlluminationPassIterator __returnValue = new com.earthview.world.graphic.Technique.IlluminationPassIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IlluminationPassIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Technique.IlluminationPassIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IlluminationPassIterator");
		}
		return __returnValue;
	}
	native private long getParent_void(long pNativeObject);
	/**
	 * 得到所属材质
	 * @param  
	 */
	public com.earthview.world.graphic.Material getParent()
	{
		long returnValue = getParent_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Material __returnValue = new com.earthview.world.graphic.Material(CreatedWhenConstruct.CWC_NotToCreate, "CMaterial");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Material)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMaterial");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CTechnique(long pNativeObject, long rhs);
	/**
	 * 重载=
	 * @param  
	 */
	public com.earthview.world.graphic.Technique OperatorAssign(com.earthview.world.graphic.Technique rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		long returnValue = OperatorAssign_CTechnique(this.nativeObject.pointer, rhsParamValue);
		com.earthview.world.graphic.Technique __returnValue = new com.earthview.world.graphic.Technique(CreatedWhenConstruct.CWC_NotToCreate, "CTechnique");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Technique)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTechnique");
		}
		return __returnValue;
	}
	native private String getResourceGroup_void(long pNativeObject);
	/**
	 * 获得资源组名
	 * @param  
	 */
	public String getResourceGroup()
	{
		String returnValue = getResourceGroup_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isTransparent_void(long pNativeObject);
	/**
	 * 判断是否透明
	 * @param  
	 * @return 透明返回true，否则返回false
	 */
	public boolean isTransparent()
	{
		boolean returnValue = isTransparent_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isTransparentSortingEnabled_void(long pNativeObject);
	/**
	 * 判断是否启用透明排序
	 * @param  
	 */
	public boolean isTransparentSortingEnabled()
	{
		boolean returnValue = isTransparentSortingEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isTransparentSortingForced_void(long pNativeObject);
	/**
	 * 判断是否强制透明排序
	 * @param  
	 */
	public boolean isTransparentSortingForced()
	{
		boolean returnValue = isTransparentSortingForced_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void _prepare_void(long pNativeObject);
	/**
	 * 准备
	 * @param  
	 */
	public void _prepare()
	{
		_prepare_void(this.nativeObject.pointer);
	}
	native private void _unprepare_void(long pNativeObject);
	/**
	 * 反准备
	 * @param  
	 */
	public void _unprepare()
	{
		_unprepare_void(this.nativeObject.pointer);
	}
	native private void _load_void(long pNativeObject);
	/**
	 * 加载
	 * @param  
	 */
	public void _load()
	{
		_load_void(this.nativeObject.pointer);
	}
	native private void _unload_void(long pNativeObject);
	/**
	 * 卸载
	 * @param  
	 */
	public void _unload()
	{
		_unload_void(this.nativeObject.pointer);
	}
	native private boolean isLoaded_void(long pNativeObject);
	/**
	 * 是否已经加载
	 * @param  
	 * @return 加载返回true，不能加载返回false
	 */
	public boolean isLoaded()
	{
		boolean returnValue = isLoaded_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void _notifyNeedsRecompile_void(long pNativeObject);
	/**
	 * 提示需要重新编译
	 * @param  
	 */
	public void _notifyNeedsRecompile()
	{
		_notifyNeedsRecompile_void(this.nativeObject.pointer);
	}
	native private long getShadowCasterMaterial_void(long pNativeObject);
	/**
	 * 获得投射阴影的材质
	 * @param  
	 */
	public com.earthview.world.graphic.MaterialPtr getShadowCasterMaterial()
	{
		long returnValue = getShadowCasterMaterial_void(this.nativeObject.pointer);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}
	native private void setShadowCasterMaterial_CMaterialPtr(long pNativeObject, long val);
	/**
	 * 设置投射阴影的材质
	 * @param  
	 */
	public void setShadowCasterMaterial(com.earthview.world.graphic.MaterialPtr val)
	{
		long valParamValue = val.nativeObject.pointer;
		setShadowCasterMaterial_CMaterialPtr(this.nativeObject.pointer, valParamValue);
	}
	native private void setShadowCasterMaterial_EVString(long pNativeObject, String name);
	public void setShadowCasterMaterial(String name)
	{
		String nameParamValue = name;
		setShadowCasterMaterial_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private long getShadowReceiverMaterial_void(long pNativeObject);
	/**
	 * 获得接收阴影的材质
	 * @param  
	 */
	public com.earthview.world.graphic.MaterialPtr getShadowReceiverMaterial()
	{
		long returnValue = getShadowReceiverMaterial_void(this.nativeObject.pointer);
		com.earthview.world.graphic.MaterialPtr __returnValue = new com.earthview.world.graphic.MaterialPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MaterialPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMaterialPtr");
		}
		return __returnValue;
	}
	native private void setShadowReceiverMaterial_CMaterialPtr(long pNativeObject, long val);
	/**
	 * 设置接收阴影的材质
	 * @param  
	 */
	public void setShadowReceiverMaterial(com.earthview.world.graphic.MaterialPtr val)
	{
		long valParamValue = val.nativeObject.pointer;
		setShadowReceiverMaterial_CMaterialPtr(this.nativeObject.pointer, valParamValue);
	}
	native private void setShadowReceiverMaterial_EVString(long pNativeObject, String name);
	public void setShadowReceiverMaterial(String name)
	{
		String nameParamValue = name;
		setShadowReceiverMaterial_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setPointSize_Real(long pNativeObject, double ps);
	/**
	 * 在该技术中为每一个渲染通路设置点的大小属性
	 * @param ps 点的大小
	 */
	public void setPointSize(double ps)
	{
		double psParamValue = ps;
		setPointSize_Real(this.nativeObject.pointer, psParamValue);
	}
	native private void setAmbient_Real_Real_Real(long pNativeObject, double red, double green, double blue);
	/**
	 * 为每一个通道设置环境光反射率
	 * @param red red
	 * @param green green
	 * @param blue blue
	 */
	public void setAmbient(double red, double green, double blue)
	{
		double redParamValue = red;
		double greenParamValue = green;
		double blueParamValue = blue;
		setAmbient_Real_Real_Real(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue);
	}
	native private void setAmbient_CColourValue(long pNativeObject, long ambient);
	/**
	 * 为每一个通道设置环境光反射率
	 * @param ambient EarthView::World::Graphic::CColourValue类对象
	 */
	public void setAmbient(com.earthview.world.graphic.ColourValue ambient)
	{
		long ambientParamValue = ambient.nativeObject.pointer;
		setAmbient_CColourValue(this.nativeObject.pointer, ambientParamValue);
	}
	native private void setDiffuse_Real_Real_Real_Real(long pNativeObject, double red, double green, double blue, double alpha);
	/**
	 * 为每一个通道设置漫反射率
	 * @param red red
	 * @param green green
	 * @param blue blue
	 * @param alpha alpha的值
	 */
	public void setDiffuse(double red, double green, double blue, double alpha)
	{
		double redParamValue = red;
		double greenParamValue = green;
		double blueParamValue = blue;
		double alphaParamValue = alpha;
		setDiffuse_Real_Real_Real_Real(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue, alphaParamValue);
	}
	native private void setDiffuse_CColourValue(long pNativeObject, long diffuse);
	/**
	 * 为每一个通道设置漫反射率
	 * @param diffuse EarthView::World::Graphic::CColourValue类对象，颜色属性
	 */
	public void setDiffuse(com.earthview.world.graphic.ColourValue diffuse)
	{
		long diffuseParamValue = diffuse.nativeObject.pointer;
		setDiffuse_CColourValue(this.nativeObject.pointer, diffuseParamValue);
	}
	native private void setSpecular_Real_Real_Real_Real(long pNativeObject, double red, double green, double blue, double alpha);
	/**
	 * 为每一个通道设置镜面反射率
	 * @param red red
	 * @param green green
	 * @param blue blue
	 * @param alpha alpha的值
	 */
	public void setSpecular(double red, double green, double blue, double alpha)
	{
		double redParamValue = red;
		double greenParamValue = green;
		double blueParamValue = blue;
		double alphaParamValue = alpha;
		setSpecular_Real_Real_Real_Real(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue, alphaParamValue);
	}
	native private void setSpecular_CColourValue(long pNativeObject, long specular);
	/**
	 * 为每一个通道设置镜面反射率
	 * @param specular EarthView::World::Graphic::CColourValue类对象，颜色属性
	 */
	public void setSpecular(com.earthview.world.graphic.ColourValue specular)
	{
		long specularParamValue = specular.nativeObject.pointer;
		setSpecular_CColourValue(this.nativeObject.pointer, specularParamValue);
	}
	native private void setShininess_Real(long pNativeObject, double val);
	/**
	 * 为每一个通道设置镜面高光的亮度
	 * @param val 颜色属性
	 */
	public void setShininess(double val)
	{
		double valParamValue = val;
		setShininess_Real(this.nativeObject.pointer, valParamValue);
	}
	native private void setSelfIllumination_Real_Real_Real(long pNativeObject, double red, double green, double blue);
	/**
	 * 为每一个通道设置自发光颜色
	 * @param red red
	 * @param green green
	 * @param blue blue
	 */
	public void setSelfIllumination(double red, double green, double blue)
	{
		double redParamValue = red;
		double greenParamValue = green;
		double blueParamValue = blue;
		setSelfIllumination_Real_Real_Real(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue);
	}
	native private void setSelfIllumination_CColourValue(long pNativeObject, long selfIllum);
	/**
	 * 为每一个通道设置自发光颜色
	 * @param  
	 */
	public void setSelfIllumination(com.earthview.world.graphic.ColourValue selfIllum)
	{
		long selfIllumParamValue = selfIllum.nativeObject.pointer;
		setSelfIllumination_CColourValue(this.nativeObject.pointer, selfIllumParamValue);
	}
	native private void setDepthCheckEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 为每一个通道设置检测写入是否开启
	 * @param  
	 */
	public void setDepthCheckEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setDepthCheckEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void setDepthWriteEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 为每一个通道设置深度写入是否开启
	 * @param  
	 */
	public void setDepthWriteEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setDepthWriteEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void setDepthFunction_CompareFunction(long pNativeObject, int func);
	/**
	 * 为每一个通道设置深度比较函数
	 * @param  
	 */
	public void setDepthFunction(com.earthview.world.graphic.CompareFunction func)
	{
		int funcParamValue = func.getValue();
		setDepthFunction_CompareFunction(this.nativeObject.pointer, funcParamValue);
	}
	native private void setColourWriteEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 为每一个通道设置颜色缓冲是否写入
	 * @param enabled 是否写入
	 */
	public void setColourWriteEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setColourWriteEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void setCullingMode_CullingMode(long pNativeObject, int mode);
	/**
	 * 为每一个通道设置剔除模式
	 * @param mode 1代表none，2代表顺时针方向，3代表逆时针方向
	 */
	public void setCullingMode(com.earthview.world.graphic.CullingMode mode)
	{
		int modeParamValue = mode.getValue();
		setCullingMode_CullingMode(this.nativeObject.pointer, modeParamValue);
	}
	native private void setManualCullingMode_ManualCullingMode(long pNativeObject, int mode);
	/**
	 * 为每一个通道设置手动的剔除模式，由CPU执行，而不是由硬件执行
	 * @param mode 1代表不选择任何方向，2代表向后，即远离照相机方向，3代表向前，即靠近照相机方向
	 */
	public void setManualCullingMode(com.earthview.world.graphic.ManualCullingMode mode)
	{
		int modeParamValue = mode.getValue();
		setManualCullingMode_ManualCullingMode(this.nativeObject.pointer, modeParamValue);
	}
	native private void setLightingEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 为每一个通道设置是否启用光照
	 * @param enabled 
	 */
	public void setLightingEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setLightingEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void setShadingMode_ShadeOptions(long pNativeObject, int mode);
	/**
	 * 设置光照模型
	 * @param mode 光阴影类型SO_FLAT,SO_GOURAUD,SO_PHONG
	 */
	public void setShadingMode(com.earthview.world.graphic.ShadeOptions mode)
	{
		int modeParamValue = mode.getValue();
		setShadingMode_ShadeOptions(this.nativeObject.pointer, modeParamValue);
	}
	native private void setFog_ev_bool_FogMode_CColourValue_Real_Real_Real(long pNativeObject, boolean overrideScene, int mode, long colour, double expDensity, double linearStart, double linearEnd);
	/**
	 * 设置应用于每一个通道的雾化模式
	 * @param overrideScene 假如为true，则允许该通道忽略场景的雾化参数，而用它自己的设置，默认为false，
	 * @param mode 雾化模式，假如overrideScene为true时，才可设置该参数
	 * @param colour 雾的颜色
	 * @param expDensity 在FOG_EXP或者FOG_EXP2模式的密度，其值在0到1之间，默认值是0.001
	 * @param linearStart 只有当FOG_LINEAR模式下可用
	 * @param linearEnd 只有当FOG_LINEAR模式下可用
	 */
	public void setFog(boolean overrideScene, com.earthview.world.graphic.FogMode mode, com.earthview.world.graphic.ColourValue colour, double expDensity, double linearStart, double linearEnd)
	{
		boolean overrideSceneParamValue = overrideScene;
		int modeParamValue = mode.getValue();
		long colourParamValue = colour.nativeObject.pointer;
		double expDensityParamValue = expDensity;
		double linearStartParamValue = linearStart;
		double linearEndParamValue = linearEnd;
		setFog_ev_bool_FogMode_CColourValue_Real_Real_Real(this.nativeObject.pointer, overrideSceneParamValue, modeParamValue, colourParamValue, expDensityParamValue, linearStartParamValue, linearEndParamValue);
	}
	native private void setFog_ev_bool_FogMode_CColourValue_Real_Real(long pNativeObject, boolean overrideScene, int mode, long colour, double expDensity, double linearStart);
	public void setFog(boolean overrideScene, com.earthview.world.graphic.FogMode mode, com.earthview.world.graphic.ColourValue colour, double expDensity, double linearStart)
	{
		boolean overrideSceneParamValue = overrideScene;
		int modeParamValue = mode.getValue();
		long colourParamValue = colour.nativeObject.pointer;
		double expDensityParamValue = expDensity;
		double linearStartParamValue = linearStart;
		setFog_ev_bool_FogMode_CColourValue_Real_Real(this.nativeObject.pointer, overrideSceneParamValue, modeParamValue, colourParamValue, expDensityParamValue, linearStartParamValue);
	}
	native private void setFog_ev_bool_FogMode_CColourValue_Real(long pNativeObject, boolean overrideScene, int mode, long colour, double expDensity);
	public void setFog(boolean overrideScene, com.earthview.world.graphic.FogMode mode, com.earthview.world.graphic.ColourValue colour, double expDensity)
	{
		boolean overrideSceneParamValue = overrideScene;
		int modeParamValue = mode.getValue();
		long colourParamValue = colour.nativeObject.pointer;
		double expDensityParamValue = expDensity;
		setFog_ev_bool_FogMode_CColourValue_Real(this.nativeObject.pointer, overrideSceneParamValue, modeParamValue, colourParamValue, expDensityParamValue);
	}
	native private void setFog_ev_bool_FogMode_CColourValue(long pNativeObject, boolean overrideScene, int mode, long colour);
	public void setFog(boolean overrideScene, com.earthview.world.graphic.FogMode mode, com.earthview.world.graphic.ColourValue colour)
	{
		boolean overrideSceneParamValue = overrideScene;
		int modeParamValue = mode.getValue();
		long colourParamValue = colour.nativeObject.pointer;
		setFog_ev_bool_FogMode_CColourValue(this.nativeObject.pointer, overrideSceneParamValue, modeParamValue, colourParamValue);
	}
	native private void setFog_ev_bool_FogMode(long pNativeObject, boolean overrideScene, int mode);
	public void setFog(boolean overrideScene, com.earthview.world.graphic.FogMode mode)
	{
		boolean overrideSceneParamValue = overrideScene;
		int modeParamValue = mode.getValue();
		setFog_ev_bool_FogMode(this.nativeObject.pointer, overrideSceneParamValue, modeParamValue);
	}
	native private void setFog_ev_bool(long pNativeObject, boolean overrideScene);
	public void setFog(boolean overrideScene)
	{
		boolean overrideSceneParamValue = overrideScene;
		setFog_ev_bool(this.nativeObject.pointer, overrideSceneParamValue);
	}
	native private void setDepthBias_ev_real32_ev_real32(long pNativeObject, float constantBias, float slopeScaleBias);
	/**
	 * 为每一个通道设置深度偏移值
	 * @param constantBias 
	 * @param slopeScaleBias 
	 */
	public void setDepthBias(float constantBias, float slopeScaleBias)
	{
		float constantBiasParamValue = constantBias;
		float slopeScaleBiasParamValue = slopeScaleBias;
		setDepthBias_ev_real32_ev_real32(this.nativeObject.pointer, constantBiasParamValue, slopeScaleBiasParamValue);
	}
	native private void setTextureFiltering_TextureFilterOptions(long pNativeObject, int filterType);
	/**
	 * 为每一个通道上的每一个纹理设置纹理过滤方式
	 * @param filterType 纹理过滤选项
	 */
	public void setTextureFiltering(com.earthview.world.graphic.TextureFilterOptions filterType)
	{
		int filterTypeParamValue = filterType.getValue();
		setTextureFiltering_TextureFilterOptions(this.nativeObject.pointer, filterTypeParamValue);
	}
	native private void setTextureAnisotropy_ev_uint32(long pNativeObject, long maxAniso);
	/**
	 * 为所有的纹理设置纹理各向异性值
	 * @param maxAniso 最大的差异水平，在2和硬件所提供的最大值之间，默认值是1
	 */
	public void setTextureAnisotropy(long maxAniso)
	{
		long maxAnisoParamValue = maxAniso;
		setTextureAnisotropy_ev_uint32(this.nativeObject.pointer, maxAnisoParamValue);
	}
	native private void setSceneBlending_SceneBlendType(long pNativeObject, int sbt);
	/**
	 * 设置混合类型
	 * @param sbt 混合场景类型
	 */
	public void setSceneBlending(com.earthview.world.graphic.SceneBlendType sbt)
	{
		int sbtParamValue = sbt.getValue();
		setSceneBlending_SceneBlendType(this.nativeObject.pointer, sbtParamValue);
	}
	native private void setSeparateSceneBlending_SceneBlendType_SceneBlendType(long pNativeObject, int sbt, int sbta);
	/**
	 * 为rgb通道和alpha通道分别设置场景混合方式
	 * @param sbt 源混合类型
	 * @param sbta 目标混合类型
	 */
	public void setSeparateSceneBlending(com.earthview.world.graphic.SceneBlendType sbt, com.earthview.world.graphic.SceneBlendType sbta)
	{
		int sbtParamValue = sbt.getValue();
		int sbtaParamValue = sbta.getValue();
		setSeparateSceneBlending_SceneBlendType_SceneBlendType(this.nativeObject.pointer, sbtParamValue, sbtaParamValue);
	}
	native private void setSceneBlending_SceneBlendFactor_SceneBlendFactor(long pNativeObject, int sourceFactor, int destFactor);
	/**
	 * 设置场景混合方式
	 * @param sourceFactor 源混合因子
	 * @param destFactor 目标混合因子
	 */
	public void setSceneBlending(com.earthview.world.graphic.SceneBlendFactor sourceFactor, com.earthview.world.graphic.SceneBlendFactor destFactor)
	{
		int sourceFactorParamValue = sourceFactor.getValue();
		int destFactorParamValue = destFactor.getValue();
		setSceneBlending_SceneBlendFactor_SceneBlendFactor(this.nativeObject.pointer, sourceFactorParamValue, destFactorParamValue);
	}
	native private void setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor(long pNativeObject, int sourceFactor, int destFactor, int sourceFactorAlpha, int destFactorAlpha);
	/**
	 * 为rgb通道和alpha通道分别设置场景混合方式
	 * @param sourceFactor RGB通道源混合因子
	 * @param destFactor RGB通道目标混合因子
	 * @param sourceFactorAlpha alpha通道源混合因子
	 * @param destFactorAlpha alpha通道目标混合因子
	 */
	public void setSeparateSceneBlending(com.earthview.world.graphic.SceneBlendFactor sourceFactor, com.earthview.world.graphic.SceneBlendFactor destFactor, com.earthview.world.graphic.SceneBlendFactor sourceFactorAlpha, com.earthview.world.graphic.SceneBlendFactor destFactorAlpha)
	{
		int sourceFactorParamValue = sourceFactor.getValue();
		int destFactorParamValue = destFactor.getValue();
		int sourceFactorAlphaParamValue = sourceFactorAlpha.getValue();
		int destFactorAlphaParamValue = destFactorAlpha.getValue();
		setSeparateSceneBlending_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor(this.nativeObject.pointer, sourceFactorParamValue, destFactorParamValue, sourceFactorAlphaParamValue, destFactorAlphaParamValue);
	}
	native private void setLodIndex_ev_uint16(long pNativeObject, int index);
	/**
	 * 为EarthView::World::Graphic::CTechnique设置Lod索引值
	 * @param index 索引值
	 */
	public void setLodIndex(int index)
	{
		int indexParamValue = index;
		setLodIndex_ev_uint16(this.nativeObject.pointer, indexParamValue);
	}
	native private int getLodIndex_void(long pNativeObject);
	/**
	 * 获得Lod索引值
	 * @param index 索引值
	 */
	public int getLodIndex()
	{
		int returnValue = getLodIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSchemeName_EVString(long pNativeObject, String schemeName);
	/**
	 * 设置方案名称
	 * @param schemeName 配置名称
	 */
	public void setSchemeName(String schemeName)
	{
		String schemeNameParamValue = schemeName;
		setSchemeName_EVString(this.nativeObject.pointer, schemeNameParamValue);
	}
	native private String getSchemeName_void(long pNativeObject);
	/**
	 * 获得方案名称
	 * @param  
	 */
	public String getSchemeName()
	{
		String returnValue = getSchemeName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int _getSchemeIndex_void(long pNativeObject);
	/**
	 * 得到方案索引
	 * @param  
	 */
	public int _getSchemeIndex()
	{
		int returnValue = _getSchemeIndex_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isDepthWriteEnabled_void(long pNativeObject);
	/**
	 * 获取深度写入是否开启
	 * @param  
	 */
	public boolean isDepthWriteEnabled()
	{
		boolean returnValue = isDepthWriteEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isDepthCheckEnabled_void(long pNativeObject);
	/**
	 * 获取深度测试是否开启
	 * @param  
	 */
	public boolean isDepthCheckEnabled()
	{
		boolean returnValue = isDepthCheckEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasColourWriteDisabled_void(long pNativeObject);
	/**
	 * 获取颜色写入是否关闭
	 * @param  
	 */
	public boolean hasColourWriteDisabled()
	{
		boolean returnValue = hasColourWriteDisabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置技术的名称
	 * @param name name是可选的
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private long getName_void(long pNativeObject);
	/**
	 * 得到技术的名称
	 * @param  
	 * @return 返回得到的名称
	 */
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private boolean applyTextureAliases_CommonStringPairList_ev_bool(long pNativeObject, long aliasList, boolean apply);
	/**
	 * 应用纹理别名
	 * @param aliasList 纹理名称键值对
	 * @param apply true，应用；false，只匹配别名并不应用
	 * @return 假如匹配的纹理别名找到了，则返回true，否则返回false
	 */
	public boolean applyTextureAliases(com.earthview.world.core.CommonStringPairList aliasList, boolean apply)
	{
		long aliasListParamValue = aliasList.nativeObject.pointer;
		boolean applyParamValue = apply;
		boolean returnValue = applyTextureAliases_CommonStringPairList_ev_bool(this.nativeObject.pointer, aliasListParamValue, applyParamValue);
		return returnValue;
	}
	native private boolean applyTextureAliases_CommonStringPairList(long pNativeObject, long aliasList);
	public boolean applyTextureAliases(com.earthview.world.core.CommonStringPairList aliasList)
	{
		long aliasListParamValue = aliasList.nativeObject.pointer;
		boolean returnValue = applyTextureAliases_CommonStringPairList(this.nativeObject.pointer, aliasListParamValue);
		return returnValue;
	}
	native private void addGPUVendorRule_GPUVendor_IncludeOrExclude(long pNativeObject, int vendor, int includeOrExclude);
	/**
	 * 基于GPU供应商，为该技术增加一个规则
	 * @param vendor GPU供应商
	 * @param includeOrExclude 包含的还是排斥的规则
	 */
	public void addGPUVendorRule(com.earthview.world.graphic.GPUVendor vendor, com.earthview.world.graphic.Technique.IncludeOrExclude includeOrExclude)
	{
		int vendorParamValue = vendor.getValue();
		int includeOrExcludeParamValue = includeOrExclude.getValue();
		addGPUVendorRule_GPUVendor_IncludeOrExclude(this.nativeObject.pointer, vendorParamValue, includeOrExcludeParamValue);
	}
	native private void addGPUVendorRule_GPUVendorRule(long pNativeObject, long rule);
	/**
	 * 基于GPU供应商，为该技术增加一个规则
	 * @param rule 在增加这个规则以前，其他相同供应商的规则将被删除
	 */
	public void addGPUVendorRule(com.earthview.world.graphic.Technique.Gpuvendorrule rule)
	{
		long ruleParamValue = rule.nativeObject.pointer;
		addGPUVendorRule_GPUVendorRule(this.nativeObject.pointer, ruleParamValue);
	}
	native private void removeGPUVendorRule_GPUVendor(long pNativeObject, int vendor);
	/**
	 * 删除相匹配的规则
	 * @param vendor GPU供应商
	 */
	public void removeGPUVendorRule(com.earthview.world.graphic.GPUVendor vendor)
	{
		int vendorParamValue = vendor.getValue();
		removeGPUVendorRule_GPUVendor(this.nativeObject.pointer, vendorParamValue);
	}
	///typedef EarthView::World::Core::CConstVectorIterator<EarthView::World::Graphic::CTechnique::GPUVendorRuleList> EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator;
	public static class Gpuvendorruleiterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator", new GpuvendorruleiteratorClassFactory());
		}

		public Gpuvendorruleiterator(com.earthview.world.graphic.Technique.Gpuvendorrulelist vec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer vecPtr = new BasePointer(vec);
			list.add("vec", vecPtr.get());
			Create("GPUVendorRuleIterator", list);
		}

		public Gpuvendorruleiterator(com.earthview.world.graphic.Technique.Gpuvendorruleiterator rhs) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rhsPtr = new BasePointer(rhs);
			list.add("rhs", rhsPtr.get());
			Create("GPUVendorRuleIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.Technique.Gpuvendorrule getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Technique.Gpuvendorrule __returnValue = new com.earthview.world.graphic.Technique.Gpuvendorrule(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "GPUVendorRule");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Technique.Gpuvendorrule)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "GPUVendorRule");
			}
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.Technique.Gpuvendorrule next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Technique.Gpuvendorrule __returnValue = new com.earthview.world.graphic.Technique.Gpuvendorrule(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "GPUVendorRule");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Technique.Gpuvendorrule)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "GPUVendorRule");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.Technique.Gpuvendorrule getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Technique.Gpuvendorrule __returnValue = new com.earthview.world.graphic.Technique.Gpuvendorrule(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "GPUVendorRule");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Technique.Gpuvendorrule)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "GPUVendorRule");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.Technique.Gpuvendorrule getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Technique.Gpuvendorrule __returnValue = new com.earthview.world.graphic.Technique.Gpuvendorrule(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "GPUVendorRule");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Technique.Gpuvendorrule)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "GPUVendorRule");
			}
			return __returnValue;
		}
		public Gpuvendorruleiterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Gpuvendorruleiterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static Gpuvendorruleiterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Gpuvendorruleiterator obj = null;
 			if(baseObj instanceof Gpuvendorruleiterator)
			{
				obj = (Gpuvendorruleiterator)baseObj;
			} else {
				obj = new Gpuvendorruleiterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "GPUVendorRuleIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class GpuvendorruleiteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Gpuvendorruleiterator emptyInstance = new Gpuvendorruleiterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getGPUVendorRuleIterator_void(long pNativeObject);
	//// Get an iterator over the currently registered vendor rules.
	public com.earthview.world.graphic.Technique.Gpuvendorruleiterator getGPUVendorRuleIterator()
	{
		long returnValue = getGPUVendorRuleIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Technique.Gpuvendorruleiterator __returnValue = new com.earthview.world.graphic.Technique.Gpuvendorruleiterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "GPUVendorRuleIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Technique.Gpuvendorruleiterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GPUVendorRuleIterator");
		}
		return __returnValue;
	}
	native private void addGPUDeviceNameRule_EVString_IncludeOrExclude_ev_bool(long pNativeObject, String devicePattern, int includeOrExclude, boolean caseSensitive);
	public void addGPUDeviceNameRule(String devicePattern, com.earthview.world.graphic.Technique.IncludeOrExclude includeOrExclude, boolean caseSensitive)
	{
		String devicePatternParamValue = devicePattern;
		int includeOrExcludeParamValue = includeOrExclude.getValue();
		boolean caseSensitiveParamValue = caseSensitive;
		addGPUDeviceNameRule_EVString_IncludeOrExclude_ev_bool(this.nativeObject.pointer, devicePatternParamValue, includeOrExcludeParamValue, caseSensitiveParamValue);
	}
	native private void addGPUDeviceNameRule_EVString_IncludeOrExclude(long pNativeObject, String devicePattern, int includeOrExclude);
	public void addGPUDeviceNameRule(String devicePattern, com.earthview.world.graphic.Technique.IncludeOrExclude includeOrExclude)
	{
		String devicePatternParamValue = devicePattern;
		int includeOrExcludeParamValue = includeOrExclude.getValue();
		addGPUDeviceNameRule_EVString_IncludeOrExclude(this.nativeObject.pointer, devicePatternParamValue, includeOrExcludeParamValue);
	}
	native private void addGPUDeviceNameRule_GPUDeviceNameRule(long pNativeObject, long rule);
	public void addGPUDeviceNameRule(com.earthview.world.graphic.Technique.Gpudevicenamerule rule)
	{
		long ruleParamValue = rule.nativeObject.pointer;
		addGPUDeviceNameRule_GPUDeviceNameRule(this.nativeObject.pointer, ruleParamValue);
	}
	native private void removeGPUDeviceNameRule_EVString(long pNativeObject, String devicePattern);
	public void removeGPUDeviceNameRule(String devicePattern)
	{
		String devicePatternParamValue = devicePattern;
		removeGPUDeviceNameRule_EVString(this.nativeObject.pointer, devicePatternParamValue);
	}
	///typedef EarthView::World::Core::CConstVectorIterator<EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList> EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator;
	public static class Gpudevicenameruleiterator extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator", new GpudevicenameruleiteratorClassFactory());
		}

		public Gpudevicenameruleiterator(com.earthview.world.graphic.Technique.Gpudevicenamerulelist vec) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer vecPtr = new BasePointer(vec);
			list.add("vec", vecPtr.get());
			Create("GPUDeviceNameRuleIterator", list);
		}

		public Gpudevicenameruleiterator(com.earthview.world.graphic.Technique.Gpudevicenameruleiterator rhs) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rhsPtr = new BasePointer(rhs);
			list.add("rhs", rhsPtr.get());
			Create("GPUDeviceNameRuleIterator", list);
		}

		native private boolean hasMoreElements_void(long pNativeObject);
		public boolean hasMoreElements()
		{
			boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void moveNext_void(long pNativeObject);
		public void moveNext()
		{
			moveNext_void(this.nativeObject.pointer);
		}
		native private long getCurrent_void(long pNativeObject);
		public com.earthview.world.graphic.Technique.Gpudevicenamerule getCurrent()
		{
			long returnValue = getCurrent_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Technique.Gpudevicenamerule __returnValue = new com.earthview.world.graphic.Technique.Gpudevicenamerule(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "GPUDeviceNameRule");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Technique.Gpudevicenamerule)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "GPUDeviceNameRule");
			}
			return __returnValue;
		}
		native private long next_void(long pNativeObject);
		public com.earthview.world.graphic.Technique.Gpudevicenamerule next()
		{
			long returnValue = next_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Technique.Gpudevicenamerule __returnValue = new com.earthview.world.graphic.Technique.Gpudevicenamerule(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "GPUDeviceNameRule");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Technique.Gpudevicenamerule)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "GPUDeviceNameRule");
			}
			return __returnValue;
		}
		native private long getBegin_void(long pNativeObject);
		public com.earthview.world.graphic.Technique.Gpudevicenamerule getBegin()
		{
			long returnValue = getBegin_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Technique.Gpudevicenamerule __returnValue = new com.earthview.world.graphic.Technique.Gpudevicenamerule(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "GPUDeviceNameRule");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Technique.Gpudevicenamerule)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "GPUDeviceNameRule");
			}
			return __returnValue;
		}
		native private long getEnd_void(long pNativeObject);
		public com.earthview.world.graphic.Technique.Gpudevicenamerule getEnd()
		{
			long returnValue = getEnd_void(this.nativeObject.pointer);
			com.earthview.world.graphic.Technique.Gpudevicenamerule __returnValue = new com.earthview.world.graphic.Technique.Gpudevicenamerule(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.bindNativeObject(__instancePointer, "GPUDeviceNameRule");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Technique.Gpudevicenamerule)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "GPUDeviceNameRule");
			}
			return __returnValue;
		}
		public Gpudevicenameruleiterator(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Gpudevicenameruleiterator(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static Gpudevicenameruleiterator fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Gpudevicenameruleiterator obj = null;
 			if(baseObj instanceof Gpudevicenameruleiterator)
			{
				obj = (Gpudevicenameruleiterator)baseObj;
			} else {
				obj = new Gpudevicenameruleiterator(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "GPUDeviceNameRuleIterator");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class GpudevicenameruleiteratorClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Gpudevicenameruleiterator emptyInstance = new Gpudevicenameruleiterator(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getGPUDeviceNameRuleIterator_void(long pNativeObject);
	//// Get an iterator over the currently registered device name rules.
	public com.earthview.world.graphic.Technique.Gpudevicenameruleiterator getGPUDeviceNameRuleIterator()
	{
		long returnValue = getGPUDeviceNameRuleIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.Technique.Gpudevicenameruleiterator __returnValue = new com.earthview.world.graphic.Technique.Gpudevicenameruleiterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "GPUDeviceNameRuleIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Technique.Gpudevicenameruleiterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GPUDeviceNameRuleIterator");
		}
		return __returnValue;
	}
	native private long getUserObjectBindings_void(long pNativeObject);
	public com.earthview.world.graphic.UserObjectBindings getUserObjectBindings()
	{
		long returnValue = getUserObjectBindings_void(this.nativeObject.pointer);
		com.earthview.world.graphic.UserObjectBindings __returnValue = new com.earthview.world.graphic.UserObjectBindings(CreatedWhenConstruct.CWC_NotToCreate, "CUserObjectBindings");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.UserObjectBindings)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CUserObjectBindings");
		}
		return __returnValue;
	}
	public Technique(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Technique(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Technique fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Technique obj = null;
 		if(baseObj instanceof Technique)
		{
			obj = (Technique)baseObj;
		} else {
			obj = new Technique(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTechnique");
			obj.increaseCast();
		}

		return obj;
	}
}
