package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RegionSceneQuery extends com.earthview.world.graphic.SceneQuery {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRegionSceneQuery", new RegionSceneQueryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCRegionSceneQueryProxy", new RegionSceneQueryClassFactory());
	}

	public static class RegionSceneQueryListener extends com.earthview.world.graphic.SceneQueryListener {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener", new RegionSceneQueryListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CRegionSceneQuery::JCRegionSceneQueryListenerProxy", new RegionSceneQueryListenerClassFactory());
		}

		public RegionSceneQueryListener(com.earthview.world.graphic.RegionSceneQuery ref_parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			Create("JCRegionSceneQueryListenerProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.RegionSceneQuery$RegionSceneQueryListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private boolean queryResult_CMovableObject(long pNativeObject, long first);
		public boolean queryResult(com.earthview.world.graphic.MovableObject first)
		{
			long firstParamValue = (first == null ? 0L : first.nativeObject.pointer);
			boolean returnValue = queryResult_CMovableObject(this.nativeObject.pointer, firstParamValue);
			return returnValue;
		}
		native private boolean queryResult_CMovableObject_NoVirtual(long pNativeObject, long first);
		protected boolean queryResult_NoVirtual(com.earthview.world.graphic.MovableObject first)
		{
			long firstParamValue = (first == null ? 0L : first.nativeObject.pointer);
			boolean returnValue = queryResult_CMovableObject_NoVirtual(this.nativeObject.pointer, firstParamValue);
			return returnValue;
		}

		native private boolean queryResult_CMovableObject_IntVector(long pNativeObject, long first, long indexVec);
		public boolean queryResult(com.earthview.world.graphic.MovableObject first, com.earthview.world.core.IntVector indexVec)
		{
			long firstParamValue = (first == null ? 0L : first.nativeObject.pointer);
			long indexVecParamValue = indexVec.nativeObject.pointer;
			boolean returnValue = queryResult_CMovableObject_IntVector(this.nativeObject.pointer, firstParamValue, indexVecParamValue);
			return returnValue;
		}
		native private boolean queryResult_CMovableObject_IntVector_NoVirtual(long pNativeObject, long first, long indexVec);
		protected boolean queryResult_NoVirtual(com.earthview.world.graphic.MovableObject first, com.earthview.world.core.IntVector indexVec)
		{
			long firstParamValue = (first == null ? 0L : first.nativeObject.pointer);
			long indexVecParamValue = indexVec.nativeObject.pointer;
			boolean returnValue = queryResult_CMovableObject_IntVector_NoVirtual(this.nativeObject.pointer, firstParamValue, indexVecParamValue);
			return returnValue;
		}

		native private boolean queryResult_WorldFragment(long pNativeObject, long fragment);
		public boolean queryResult(com.earthview.world.graphic.SceneQuery.WorldFragment fragment)
		{
			long fragmentParamValue = (fragment == null ? 0L : fragment.nativeObject.pointer);
			boolean returnValue = queryResult_WorldFragment(this.nativeObject.pointer, fragmentParamValue);
			return returnValue;
		}
		native private boolean queryResult_WorldFragment_NoVirtual(long pNativeObject, long fragment);
		protected boolean queryResult_NoVirtual(com.earthview.world.graphic.SceneQuery.WorldFragment fragment)
		{
			long fragmentParamValue = (fragment == null ? 0L : fragment.nativeObject.pointer);
			boolean returnValue = queryResult_WorldFragment_NoVirtual(this.nativeObject.pointer, fragmentParamValue);
			return returnValue;
		}

		public RegionSceneQueryListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public RegionSceneQueryListener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_queryResult_CMovableObject(long pNativeObject, String method);
		native protected void register_queryResult_CMovableObject_IntVector(long pNativeObject, String method);
		native protected void register_queryResult_WorldFragment(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_queryResult_CMovableObject(this.nativeObject.pointer, "queryResult_CMovableObject_callback");
				this.register_queryResult_CMovableObject_IntVector(this.nativeObject.pointer, "queryResult_CMovableObject_IntVector_callback");
				this.register_queryResult_WorldFragment(this.nativeObject.pointer, "queryResult_WorldFragment_callback");
			}
		}
		
		public static RegionSceneQueryListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			RegionSceneQueryListener obj = null;
 			if(baseObj instanceof RegionSceneQueryListener)
			{
				obj = (RegionSceneQueryListener)baseObj;
			} else {
				obj = new RegionSceneQueryListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CRegionSceneQueryListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class RegionSceneQueryListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			RegionSceneQueryListener emptyInstance = new RegionSceneQueryListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private long getListenerPtr_void(long pNativeObject);
	public com.earthview.world.graphic.RegionSceneQuery.RegionSceneQueryListener getListenerPtr()
	{
		long returnValue = getListenerPtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RegionSceneQuery.RegionSceneQueryListener __returnValue = new com.earthview.world.graphic.RegionSceneQuery.RegionSceneQueryListener(CreatedWhenConstruct.CWC_NotToCreate, "CRegionSceneQueryListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RegionSceneQuery.RegionSceneQueryListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRegionSceneQueryListener");
		}
		return __returnValue;
	}
	///const EarthView::World::Graphic::CRegionSceneQuery::CRegionSceneQueryListener& getListener();
	public RegionSceneQuery(com.earthview.world.graphic.SceneManager ref_mgr) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_mgrPtr = new BasePointer(ref_mgr);
		list.add("ref_mgr", ref_mgrPtr.get());
		Create("JCRegionSceneQueryProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.RegionSceneQuery".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long execute_void_callback()
	{
		com.earthview.world.graphic.SceneQueryResult returnValue = execute();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long execute_void(long pNativeObject);
	public com.earthview.world.graphic.SceneQueryResult execute()
	{
		long returnValue = execute_void(this.nativeObject.pointer);
		com.earthview.world.graphic.SceneQueryResult __returnValue = new com.earthview.world.graphic.SceneQueryResult(CreatedWhenConstruct.CWC_NotToCreate, "SceneQueryResult");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneQueryResult)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "SceneQueryResult");
		}
		return __returnValue;
	}
	native private long execute_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.SceneQueryResult execute_NoVirtual()
	{
		long returnValue = execute_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.SceneQueryResult __returnValue = new com.earthview.world.graphic.SceneQueryResult(CreatedWhenConstruct.CWC_NotToCreate, "SceneQueryResult");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneQueryResult)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "SceneQueryResult");
		}
		return __returnValue;
	}

	protected  void execute_CSceneQueryListener_callback(long listener)
	{
		com.earthview.world.graphic.SceneQueryListener listenerParamValue = (listener == 0L ? null : new com.earthview.world.graphic.SceneQueryListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(listenerParamValue != null)
		{
		listenerParamValue.setDelegate(true);
		listenerParamValue.setInstancePointer(new InstancePointer(listener));
		IClassFactory listenerParamValueClassFactory = GlobalClassFactoryMap.get(listenerParamValue.getCppInstanceTypeName());
		if (listenerParamValueClassFactory != null)
		{
			listenerParamValue.setDelegate(true);
			listenerParamValue = (com.earthview.world.graphic.SceneQueryListener)listenerParamValueClassFactory.create();
			listenerParamValue.setDelegate(true);
			listenerParamValue.setInstancePointer(new InstancePointer(listener));
		}
		}
		execute(listenerParamValue);
	}

	native private void execute_CSceneQueryListener(long pNativeObject, long listener);
	public void execute(com.earthview.world.graphic.SceneQueryListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		execute_CSceneQueryListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private void execute_CSceneQueryListener_NoVirtual(long pNativeObject, long listener);
	protected void execute_NoVirtual(com.earthview.world.graphic.SceneQueryListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		execute_CSceneQueryListener_NoVirtual(this.nativeObject.pointer, listenerParamValue);
	}

	protected  long getLastResults_void_callback()
	{
		com.earthview.world.graphic.SceneQueryResult returnValue = getLastResults();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLastResults_void(long pNativeObject);
	public com.earthview.world.graphic.SceneQueryResult getLastResults()
	{
		long returnValue = getLastResults_void(this.nativeObject.pointer);
		com.earthview.world.graphic.SceneQueryResult __returnValue = new com.earthview.world.graphic.SceneQueryResult(CreatedWhenConstruct.CWC_NotToCreate, "SceneQueryResult");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneQueryResult)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "SceneQueryResult");
		}
		return __returnValue;
	}
	native private long getLastResults_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.SceneQueryResult getLastResults_NoVirtual()
	{
		long returnValue = getLastResults_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.SceneQueryResult __returnValue = new com.earthview.world.graphic.SceneQueryResult(CreatedWhenConstruct.CWC_NotToCreate, "SceneQueryResult");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneQueryResult)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "SceneQueryResult");
		}
		return __returnValue;
	}

	protected  void clearResults_void_callback()
	{
		clearResults();
	}

	native private void clearResults_void(long pNativeObject);
	public void clearResults()
	{
		clearResults_void(this.nativeObject.pointer);
	}
	native private void clearResults_void_NoVirtual(long pNativeObject);
	protected void clearResults_NoVirtual()
	{
		clearResults_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean queryResult_CMovableObject_callback(long first)
	{
		com.earthview.world.graphic.MovableObject firstParamValue = (first == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(firstParamValue != null)
		{
		firstParamValue.setDelegate(true);
		firstParamValue.setInstancePointer(new InstancePointer(first));
		IClassFactory firstParamValueClassFactory = GlobalClassFactoryMap.get(firstParamValue.getCppInstanceTypeName());
		if (firstParamValueClassFactory != null)
		{
			firstParamValue.setDelegate(true);
			firstParamValue = (com.earthview.world.graphic.MovableObject)firstParamValueClassFactory.create();
			firstParamValue.setDelegate(true);
			firstParamValue.setInstancePointer(new InstancePointer(first));
		}
		}
		boolean returnValue = queryResult(firstParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean queryResult_CMovableObject(long pNativeObject, long first);
	public boolean queryResult(com.earthview.world.graphic.MovableObject first)
	{
		long firstParamValue = (first == null ? 0L : first.nativeObject.pointer);
		boolean returnValue = queryResult_CMovableObject(this.nativeObject.pointer, firstParamValue);
		return returnValue;
	}
	native private boolean queryResult_CMovableObject_NoVirtual(long pNativeObject, long first);
	protected boolean queryResult_NoVirtual(com.earthview.world.graphic.MovableObject first)
	{
		long firstParamValue = (first == null ? 0L : first.nativeObject.pointer);
		boolean returnValue = queryResult_CMovableObject_NoVirtual(this.nativeObject.pointer, firstParamValue);
		return returnValue;
	}

	protected  boolean queryResult_CMovableObject_IntVector_callback(long first, long indexVec)
	{
		com.earthview.world.graphic.MovableObject firstParamValue = (first == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(firstParamValue != null)
		{
		firstParamValue.setDelegate(true);
		firstParamValue.setInstancePointer(new InstancePointer(first));
		IClassFactory firstParamValueClassFactory = GlobalClassFactoryMap.get(firstParamValue.getCppInstanceTypeName());
		if (firstParamValueClassFactory != null)
		{
			firstParamValue.setDelegate(true);
			firstParamValue = (com.earthview.world.graphic.MovableObject)firstParamValueClassFactory.create();
			firstParamValue.setDelegate(true);
			firstParamValue.setInstancePointer(new InstancePointer(first));
		}
		}
		com.earthview.world.core.IntVector indexVecParamValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		indexVecParamValue.setDelegate(true);
		indexVecParamValue.setInstancePointer(new InstancePointer(indexVec));
		IClassFactory indexVecParamValueClassFactory = GlobalClassFactoryMap.get(indexVecParamValue.getCppInstanceTypeName());
		if (indexVecParamValueClassFactory != null)
		{
			indexVecParamValue.setDelegate(true);
			indexVecParamValue = (com.earthview.world.core.IntVector)indexVecParamValueClassFactory.create();
			indexVecParamValue.setDelegate(true);
			indexVecParamValue.setInstancePointer(new InstancePointer(indexVec));
		}
		boolean returnValue = queryResult(firstParamValue, indexVecParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean queryResult_CMovableObject_IntVector(long pNativeObject, long first, long indexVec);
	public boolean queryResult(com.earthview.world.graphic.MovableObject first, com.earthview.world.core.IntVector indexVec)
	{
		long firstParamValue = (first == null ? 0L : first.nativeObject.pointer);
		long indexVecParamValue = indexVec.nativeObject.pointer;
		boolean returnValue = queryResult_CMovableObject_IntVector(this.nativeObject.pointer, firstParamValue, indexVecParamValue);
		return returnValue;
	}
	native private boolean queryResult_CMovableObject_IntVector_NoVirtual(long pNativeObject, long first, long indexVec);
	protected boolean queryResult_NoVirtual(com.earthview.world.graphic.MovableObject first, com.earthview.world.core.IntVector indexVec)
	{
		long firstParamValue = (first == null ? 0L : first.nativeObject.pointer);
		long indexVecParamValue = indexVec.nativeObject.pointer;
		boolean returnValue = queryResult_CMovableObject_IntVector_NoVirtual(this.nativeObject.pointer, firstParamValue, indexVecParamValue);
		return returnValue;
	}

	protected  boolean queryResult_WorldFragment_callback(long fragment)
	{
		com.earthview.world.graphic.SceneQuery.WorldFragment fragmentParamValue = (fragment == 0L ? null : new com.earthview.world.graphic.SceneQuery.WorldFragment(CreatedWhenConstruct.CWC_NotToCreate));
		if(fragmentParamValue != null)
		{
		fragmentParamValue.setDelegate(true);
		fragmentParamValue.setInstancePointer(new InstancePointer(fragment));
		IClassFactory fragmentParamValueClassFactory = GlobalClassFactoryMap.get(fragmentParamValue.getCppInstanceTypeName());
		if (fragmentParamValueClassFactory != null)
		{
			fragmentParamValue.setDelegate(true);
			fragmentParamValue = (com.earthview.world.graphic.SceneQuery.WorldFragment)fragmentParamValueClassFactory.create();
			fragmentParamValue.setDelegate(true);
			fragmentParamValue.setInstancePointer(new InstancePointer(fragment));
		}
		}
		boolean returnValue = queryResult(fragmentParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean queryResult_WorldFragment(long pNativeObject, long fragment);
	public boolean queryResult(com.earthview.world.graphic.SceneQuery.WorldFragment fragment)
	{
		long fragmentParamValue = (fragment == null ? 0L : fragment.nativeObject.pointer);
		boolean returnValue = queryResult_WorldFragment(this.nativeObject.pointer, fragmentParamValue);
		return returnValue;
	}
	native private boolean queryResult_WorldFragment_NoVirtual(long pNativeObject, long fragment);
	protected boolean queryResult_NoVirtual(com.earthview.world.graphic.SceneQuery.WorldFragment fragment)
	{
		long fragmentParamValue = (fragment == null ? 0L : fragment.nativeObject.pointer);
		boolean returnValue = queryResult_WorldFragment_NoVirtual(this.nativeObject.pointer, fragmentParamValue);
		return returnValue;
	}

	public RegionSceneQuery(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RegionSceneQuery(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public void setQueryMask(long mask)
	{
		super.setQueryMask_NoVirtual(mask);
	}
	public long getQueryMask()
	{
		return super.getQueryMask_NoVirtual();
	}
	public void setQueryTypeMask(long mask)
	{
		super.setQueryTypeMask_NoVirtual(mask);
	}
	public long getQueryTypeMask()
	{
		return super.getQueryTypeMask_NoVirtual();
	}
	public void setWorldFragmentType(com.earthview.world.graphic.SceneQuery.WorldFragmentType wft)
	{
		super.setWorldFragmentType_NoVirtual(wft);
	}
	public com.earthview.world.graphic.SceneQuery.WorldFragmentType getWorldFragmentType()
	{
		return super.getWorldFragmentType_NoVirtual();
	}
	public com.earthview.world.graphic.SceneQuery.WorldFragmentTypeSet getSupportedWorldFragmentTypes()
	{
		return super.getSupportedWorldFragmentTypes_NoVirtual();
	}
	
	native protected void register_execute_void(long pNativeObject, String method);
	native protected void register_execute_CSceneQueryListener(long pNativeObject, String method);
	native protected void register_getLastResults_void(long pNativeObject, String method);
	native protected void register_clearResults_void(long pNativeObject, String method);
	native protected void register_queryResult_CMovableObject(long pNativeObject, String method);
	native protected void register_queryResult_CMovableObject_IntVector(long pNativeObject, String method);
	native protected void register_queryResult_WorldFragment(long pNativeObject, String method);
	native protected void register_setQueryMask_ev_uint32(long pNativeObject, String method);
	native protected void register_getQueryMask_void(long pNativeObject, String method);
	native protected void register_setQueryTypeMask_ev_uint32(long pNativeObject, String method);
	native protected void register_getQueryTypeMask_void(long pNativeObject, String method);
	native protected void register_setWorldFragmentType_WorldFragmentType(long pNativeObject, String method);
	native protected void register_getWorldFragmentType_void(long pNativeObject, String method);
	native protected void register_getSupportedWorldFragmentTypes_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_execute_void(this.nativeObject.pointer, "execute_void_callback");
			this.register_execute_CSceneQueryListener(this.nativeObject.pointer, "execute_CSceneQueryListener_callback");
			this.register_getLastResults_void(this.nativeObject.pointer, "getLastResults_void_callback");
			this.register_clearResults_void(this.nativeObject.pointer, "clearResults_void_callback");
			this.register_queryResult_CMovableObject(this.nativeObject.pointer, "queryResult_CMovableObject_callback");
			this.register_queryResult_CMovableObject_IntVector(this.nativeObject.pointer, "queryResult_CMovableObject_IntVector_callback");
			this.register_queryResult_WorldFragment(this.nativeObject.pointer, "queryResult_WorldFragment_callback");
			this.register_setQueryMask_ev_uint32(this.nativeObject.pointer, "setQueryMask_ev_uint32_callback");
			this.register_getQueryMask_void(this.nativeObject.pointer, "getQueryMask_void_callback");
			this.register_setQueryTypeMask_ev_uint32(this.nativeObject.pointer, "setQueryTypeMask_ev_uint32_callback");
			this.register_getQueryTypeMask_void(this.nativeObject.pointer, "getQueryTypeMask_void_callback");
			this.register_setWorldFragmentType_WorldFragmentType(this.nativeObject.pointer, "setWorldFragmentType_WorldFragmentType_callback");
			this.register_getWorldFragmentType_void(this.nativeObject.pointer, "getWorldFragmentType_void_callback");
			this.register_getSupportedWorldFragmentTypes_void(this.nativeObject.pointer, "getSupportedWorldFragmentTypes_void_callback");
		}
	}
	
	public static RegionSceneQuery fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RegionSceneQuery obj = null;
 		if(baseObj instanceof RegionSceneQuery)
		{
			obj = (RegionSceneQuery)baseObj;
		} else {
			obj = new RegionSceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRegionSceneQuery");
			obj.increaseCast();
		}

		return obj;
	}
}
