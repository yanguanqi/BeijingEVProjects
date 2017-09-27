package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IntersectionSceneQuery extends com.earthview.world.graphic.SceneQuery {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CIntersectionSceneQuery", new IntersectionSceneQueryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCIntersectionSceneQueryProxy", new IntersectionSceneQueryClassFactory());
	}

	public static class IntersectionSceneQueryInternalListener extends com.earthview.world.graphic.IntersectionSceneQueryListener {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener", new IntersectionSceneQueryInternalListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CIntersectionSceneQuery::JCIntersectionSceneQueryInternalListenerProxy", new IntersectionSceneQueryInternalListenerClassFactory());
		}

		public IntersectionSceneQueryInternalListener(com.earthview.world.graphic.IntersectionSceneQuery ref_parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_parentPtr = new BasePointer(ref_parent);
			list.add("ref_parent", ref_parentPtr.get());
			Create("JCIntersectionSceneQueryInternalListenerProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.IntersectionSceneQuery$IntersectionSceneQueryInternalListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private boolean queryResult_CMovableObject_CMovableObject(long pNativeObject, long first, long second);
		public boolean queryResult(com.earthview.world.graphic.MovableObject first, com.earthview.world.graphic.MovableObject second)
		{
			long firstParamValue = (first == null ? 0L : first.nativeObject.pointer);
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			boolean returnValue = queryResult_CMovableObject_CMovableObject(this.nativeObject.pointer, firstParamValue, secondParamValue);
			return returnValue;
		}
		native private boolean queryResult_CMovableObject_CMovableObject_NoVirtual(long pNativeObject, long first, long second);
		protected boolean queryResult_NoVirtual(com.earthview.world.graphic.MovableObject first, com.earthview.world.graphic.MovableObject second)
		{
			long firstParamValue = (first == null ? 0L : first.nativeObject.pointer);
			long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
			boolean returnValue = queryResult_CMovableObject_CMovableObject_NoVirtual(this.nativeObject.pointer, firstParamValue, secondParamValue);
			return returnValue;
		}

		native private boolean queryResult_CMovableObject_WorldFragment(long pNativeObject, long movable, long fragment);
		public boolean queryResult(com.earthview.world.graphic.MovableObject movable, com.earthview.world.graphic.SceneQuery.WorldFragment fragment)
		{
			long movableParamValue = (movable == null ? 0L : movable.nativeObject.pointer);
			long fragmentParamValue = (fragment == null ? 0L : fragment.nativeObject.pointer);
			boolean returnValue = queryResult_CMovableObject_WorldFragment(this.nativeObject.pointer, movableParamValue, fragmentParamValue);
			return returnValue;
		}
		native private boolean queryResult_CMovableObject_WorldFragment_NoVirtual(long pNativeObject, long movable, long fragment);
		protected boolean queryResult_NoVirtual(com.earthview.world.graphic.MovableObject movable, com.earthview.world.graphic.SceneQuery.WorldFragment fragment)
		{
			long movableParamValue = (movable == null ? 0L : movable.nativeObject.pointer);
			long fragmentParamValue = (fragment == null ? 0L : fragment.nativeObject.pointer);
			boolean returnValue = queryResult_CMovableObject_WorldFragment_NoVirtual(this.nativeObject.pointer, movableParamValue, fragmentParamValue);
			return returnValue;
		}

		public IntersectionSceneQueryInternalListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public IntersectionSceneQueryInternalListener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_queryResult_CMovableObject_CMovableObject(long pNativeObject, String method);
		native protected void register_queryResult_CMovableObject_WorldFragment(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_queryResult_CMovableObject_CMovableObject(this.nativeObject.pointer, "queryResult_CMovableObject_CMovableObject_callback");
				this.register_queryResult_CMovableObject_WorldFragment(this.nativeObject.pointer, "queryResult_CMovableObject_WorldFragment_callback");
			}
		}
		
		public static IntersectionSceneQueryInternalListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			IntersectionSceneQueryInternalListener obj = null;
 			if(baseObj instanceof IntersectionSceneQueryInternalListener)
			{
				obj = (IntersectionSceneQueryInternalListener)baseObj;
			} else {
				obj = new IntersectionSceneQueryInternalListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CIntersectionSceneQueryInternalListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class IntersectionSceneQueryInternalListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			IntersectionSceneQueryInternalListener emptyInstance = new IntersectionSceneQueryInternalListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  boolean queryResult_CMovableObject_CMovableObject_callback(long first, long second)
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
		com.earthview.world.graphic.MovableObject secondParamValue = (second == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(secondParamValue != null)
		{
		secondParamValue.setDelegate(true);
		secondParamValue.setInstancePointer(new InstancePointer(second));
		IClassFactory secondParamValueClassFactory = GlobalClassFactoryMap.get(secondParamValue.getCppInstanceTypeName());
		if (secondParamValueClassFactory != null)
		{
			secondParamValue.setDelegate(true);
			secondParamValue = (com.earthview.world.graphic.MovableObject)secondParamValueClassFactory.create();
			secondParamValue.setDelegate(true);
			secondParamValue.setInstancePointer(new InstancePointer(second));
		}
		}
		boolean returnValue = queryResult(firstParamValue, secondParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean queryResult_CMovableObject_CMovableObject(long pNativeObject, long first, long second);
	public boolean queryResult(com.earthview.world.graphic.MovableObject first, com.earthview.world.graphic.MovableObject second)
	{
		long firstParamValue = (first == null ? 0L : first.nativeObject.pointer);
		long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
		boolean returnValue = queryResult_CMovableObject_CMovableObject(this.nativeObject.pointer, firstParamValue, secondParamValue);
		return returnValue;
	}
	native private boolean queryResult_CMovableObject_CMovableObject_NoVirtual(long pNativeObject, long first, long second);
	protected boolean queryResult_NoVirtual(com.earthview.world.graphic.MovableObject first, com.earthview.world.graphic.MovableObject second)
	{
		long firstParamValue = (first == null ? 0L : first.nativeObject.pointer);
		long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
		boolean returnValue = queryResult_CMovableObject_CMovableObject_NoVirtual(this.nativeObject.pointer, firstParamValue, secondParamValue);
		return returnValue;
	}

	protected  boolean queryResult_CMovableObject_WorldFragment_callback(long movable, long fragment)
	{
		com.earthview.world.graphic.MovableObject movableParamValue = (movable == 0L ? null : new com.earthview.world.graphic.MovableObject(CreatedWhenConstruct.CWC_NotToCreate));
		if(movableParamValue != null)
		{
		movableParamValue.setDelegate(true);
		movableParamValue.setInstancePointer(new InstancePointer(movable));
		IClassFactory movableParamValueClassFactory = GlobalClassFactoryMap.get(movableParamValue.getCppInstanceTypeName());
		if (movableParamValueClassFactory != null)
		{
			movableParamValue.setDelegate(true);
			movableParamValue = (com.earthview.world.graphic.MovableObject)movableParamValueClassFactory.create();
			movableParamValue.setDelegate(true);
			movableParamValue.setInstancePointer(new InstancePointer(movable));
		}
		}
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
		boolean returnValue = queryResult(movableParamValue, fragmentParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean queryResult_CMovableObject_WorldFragment(long pNativeObject, long movable, long fragment);
	public boolean queryResult(com.earthview.world.graphic.MovableObject movable, com.earthview.world.graphic.SceneQuery.WorldFragment fragment)
	{
		long movableParamValue = (movable == null ? 0L : movable.nativeObject.pointer);
		long fragmentParamValue = (fragment == null ? 0L : fragment.nativeObject.pointer);
		boolean returnValue = queryResult_CMovableObject_WorldFragment(this.nativeObject.pointer, movableParamValue, fragmentParamValue);
		return returnValue;
	}
	native private boolean queryResult_CMovableObject_WorldFragment_NoVirtual(long pNativeObject, long movable, long fragment);
	protected boolean queryResult_NoVirtual(com.earthview.world.graphic.MovableObject movable, com.earthview.world.graphic.SceneQuery.WorldFragment fragment)
	{
		long movableParamValue = (movable == null ? 0L : movable.nativeObject.pointer);
		long fragmentParamValue = (fragment == null ? 0L : fragment.nativeObject.pointer);
		boolean returnValue = queryResult_CMovableObject_WorldFragment_NoVirtual(this.nativeObject.pointer, movableParamValue, fragmentParamValue);
		return returnValue;
	}

	protected  long getListenerPtr_void_callback()
	{
		com.earthview.world.graphic.IntersectionSceneQuery.IntersectionSceneQueryInternalListener returnValue = getListenerPtr();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getListenerPtr_void(long pNativeObject);
	public com.earthview.world.graphic.IntersectionSceneQuery.IntersectionSceneQueryInternalListener getListenerPtr()
	{
		long returnValue = getListenerPtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.IntersectionSceneQuery.IntersectionSceneQueryInternalListener __returnValue = new com.earthview.world.graphic.IntersectionSceneQuery.IntersectionSceneQueryInternalListener(CreatedWhenConstruct.CWC_NotToCreate, "CIntersectionSceneQueryInternalListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.IntersectionSceneQuery.IntersectionSceneQueryInternalListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CIntersectionSceneQueryInternalListener");
		}
		return __returnValue;
	}
	native private long getListenerPtr_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.IntersectionSceneQuery.IntersectionSceneQueryInternalListener getListenerPtr_NoVirtual()
	{
		long returnValue = getListenerPtr_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.IntersectionSceneQuery.IntersectionSceneQueryInternalListener __returnValue = new com.earthview.world.graphic.IntersectionSceneQuery.IntersectionSceneQueryInternalListener(CreatedWhenConstruct.CWC_NotToCreate, "CIntersectionSceneQueryInternalListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.IntersectionSceneQuery.IntersectionSceneQueryInternalListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CIntersectionSceneQueryInternalListener");
		}
		return __returnValue;
	}

	///virtual const EarthView::World::Graphic::CIntersectionSceneQuery::CIntersectionSceneQueryInternalListener& getListener();
	public IntersectionSceneQuery(com.earthview.world.graphic.SceneManager ref_mgr) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_mgrPtr = new BasePointer(ref_mgr);
		list.add("ref_mgr", ref_mgrPtr.get());
		Create("JCIntersectionSceneQueryProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.IntersectionSceneQuery".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long execute_void_callback()
	{
		com.earthview.world.graphic.IntersectionSceneQueryResult returnValue = execute();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long execute_void(long pNativeObject);
	public com.earthview.world.graphic.IntersectionSceneQueryResult execute()
	{
		long returnValue = execute_void(this.nativeObject.pointer);
		com.earthview.world.graphic.IntersectionSceneQueryResult __returnValue = new com.earthview.world.graphic.IntersectionSceneQueryResult(CreatedWhenConstruct.CWC_NotToCreate, "IntersectionSceneQueryResult");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.IntersectionSceneQueryResult)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IntersectionSceneQueryResult");
		}
		return __returnValue;
	}
	native private long execute_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.IntersectionSceneQueryResult execute_NoVirtual()
	{
		long returnValue = execute_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.IntersectionSceneQueryResult __returnValue = new com.earthview.world.graphic.IntersectionSceneQueryResult(CreatedWhenConstruct.CWC_NotToCreate, "IntersectionSceneQueryResult");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.IntersectionSceneQueryResult)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IntersectionSceneQueryResult");
		}
		return __returnValue;
	}

	protected  void execute_CIntersectionSceneQueryListener_callback(long listener)
	{
		com.earthview.world.graphic.IntersectionSceneQueryListener listenerParamValue = (listener == 0L ? null : new com.earthview.world.graphic.IntersectionSceneQueryListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(listenerParamValue != null)
		{
		listenerParamValue.setDelegate(true);
		listenerParamValue.setInstancePointer(new InstancePointer(listener));
		IClassFactory listenerParamValueClassFactory = GlobalClassFactoryMap.get(listenerParamValue.getCppInstanceTypeName());
		if (listenerParamValueClassFactory != null)
		{
			listenerParamValue.setDelegate(true);
			listenerParamValue = (com.earthview.world.graphic.IntersectionSceneQueryListener)listenerParamValueClassFactory.create();
			listenerParamValue.setDelegate(true);
			listenerParamValue.setInstancePointer(new InstancePointer(listener));
		}
		}
		execute(listenerParamValue);
	}

	native private void execute_CIntersectionSceneQueryListener(long pNativeObject, long listener);
	public void execute(com.earthview.world.graphic.IntersectionSceneQueryListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		execute_CIntersectionSceneQueryListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private void execute_CIntersectionSceneQueryListener_NoVirtual(long pNativeObject, long listener);
	protected void execute_NoVirtual(com.earthview.world.graphic.IntersectionSceneQueryListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		execute_CIntersectionSceneQueryListener_NoVirtual(this.nativeObject.pointer, listenerParamValue);
	}

	protected  long getLastResults_void_callback()
	{
		com.earthview.world.graphic.IntersectionSceneQueryResult returnValue = getLastResults();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLastResults_void(long pNativeObject);
	public com.earthview.world.graphic.IntersectionSceneQueryResult getLastResults()
	{
		long returnValue = getLastResults_void(this.nativeObject.pointer);
		com.earthview.world.graphic.IntersectionSceneQueryResult __returnValue = new com.earthview.world.graphic.IntersectionSceneQueryResult(CreatedWhenConstruct.CWC_NotToCreate, "IntersectionSceneQueryResult");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.IntersectionSceneQueryResult)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IntersectionSceneQueryResult");
		}
		return __returnValue;
	}
	native private long getLastResults_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.IntersectionSceneQueryResult getLastResults_NoVirtual()
	{
		long returnValue = getLastResults_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.graphic.IntersectionSceneQueryResult __returnValue = new com.earthview.world.graphic.IntersectionSceneQueryResult(CreatedWhenConstruct.CWC_NotToCreate, "IntersectionSceneQueryResult");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.IntersectionSceneQueryResult)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IntersectionSceneQueryResult");
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

	public IntersectionSceneQuery(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public IntersectionSceneQuery(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	native protected void register_queryResult_CMovableObject_CMovableObject(long pNativeObject, String method);
	native protected void register_queryResult_CMovableObject_WorldFragment(long pNativeObject, String method);
	native protected void register_getListenerPtr_void(long pNativeObject, String method);
	native protected void register_execute_void(long pNativeObject, String method);
	native protected void register_execute_CIntersectionSceneQueryListener(long pNativeObject, String method);
	native protected void register_getLastResults_void(long pNativeObject, String method);
	native protected void register_clearResults_void(long pNativeObject, String method);
	native protected void register_setQueryMask_ev_uint32(long pNativeObject, String method);
	native protected void register_getQueryMask_void(long pNativeObject, String method);
	native protected void register_setQueryTypeMask_ev_uint32(long pNativeObject, String method);
	native protected void register_getQueryTypeMask_void(long pNativeObject, String method);
	native protected void register_setWorldFragmentType_WorldFragmentType(long pNativeObject, String method);
	native protected void register_getWorldFragmentType_void(long pNativeObject, String method);
	native protected void register_getSupportedWorldFragmentTypes_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_queryResult_CMovableObject_CMovableObject(this.nativeObject.pointer, "queryResult_CMovableObject_CMovableObject_callback");
			this.register_queryResult_CMovableObject_WorldFragment(this.nativeObject.pointer, "queryResult_CMovableObject_WorldFragment_callback");
			this.register_getListenerPtr_void(this.nativeObject.pointer, "getListenerPtr_void_callback");
			this.register_execute_void(this.nativeObject.pointer, "execute_void_callback");
			this.register_execute_CIntersectionSceneQueryListener(this.nativeObject.pointer, "execute_CIntersectionSceneQueryListener_callback");
			this.register_getLastResults_void(this.nativeObject.pointer, "getLastResults_void_callback");
			this.register_clearResults_void(this.nativeObject.pointer, "clearResults_void_callback");
			this.register_setQueryMask_ev_uint32(this.nativeObject.pointer, "setQueryMask_ev_uint32_callback");
			this.register_getQueryMask_void(this.nativeObject.pointer, "getQueryMask_void_callback");
			this.register_setQueryTypeMask_ev_uint32(this.nativeObject.pointer, "setQueryTypeMask_ev_uint32_callback");
			this.register_getQueryTypeMask_void(this.nativeObject.pointer, "getQueryTypeMask_void_callback");
			this.register_setWorldFragmentType_WorldFragmentType(this.nativeObject.pointer, "setWorldFragmentType_WorldFragmentType_callback");
			this.register_getWorldFragmentType_void(this.nativeObject.pointer, "getWorldFragmentType_void_callback");
			this.register_getSupportedWorldFragmentTypes_void(this.nativeObject.pointer, "getSupportedWorldFragmentTypes_void_callback");
		}
	}
	
	public static IntersectionSceneQuery fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		IntersectionSceneQuery obj = null;
 		if(baseObj instanceof IntersectionSceneQuery)
		{
			obj = (IntersectionSceneQuery)baseObj;
		} else {
			obj = new IntersectionSceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CIntersectionSceneQuery");
			obj.increaseCast();
		}

		return obj;
	}
}
