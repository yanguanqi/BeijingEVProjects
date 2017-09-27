package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Ispatialcontrol extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::ISpatialControl", new IspatialcontrolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::JISpatialControlProxy", new IspatialcontrolClassFactory());
	}

	public Ispatialcontrol() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JISpatialControlProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.atlas.Ispatialcontrol".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  int getType_void_callback()
	{
		com.earthview.world.spatial.atlas.EVSpatialControlType returnValue = getType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取控件类型
	 * @param  
	 * @return 类型
	 */
	public com.earthview.world.spatial.atlas.EVSpatialControlType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVSpatialControlType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.EVSpatialControlType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVSpatialControlType.toEnum(returnValue);
	}

	protected  String getName_void_callback()
	{
		String returnValue = getName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取控件的名称
	 * @param  
	 * @return 名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getTypeString_void_callback()
	{
		String returnValue = getTypeString();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getTypeString_void(long pNativeObject);
	/**
	 * 获取控件类型的字符串形式
	 * @param  
	 */
	public String getTypeString()
	{
		String returnValue = getTypeString_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getTypeString_void_NoVirtual(long pNativeObject);
	protected String getTypeString_NoVirtual()
	{
		String returnValue = getTypeString_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void notifyViewChanged_IViewArgs_callback(long args)
	{
		com.earthview.world.spatial.Iviewargs argsParamValue = (args == 0L ? null : new com.earthview.world.spatial.Iviewargs(CreatedWhenConstruct.CWC_NotToCreate));
		if(argsParamValue != null)
		{
		argsParamValue.setDelegate(true);
		argsParamValue.setInstancePointer(new InstancePointer(args));
		IClassFactory argsParamValueClassFactory = GlobalClassFactoryMap.get(argsParamValue.getCppInstanceTypeName());
		if (argsParamValueClassFactory != null)
		{
			argsParamValue.setDelegate(true);
			argsParamValue = (com.earthview.world.spatial.Iviewargs)argsParamValueClassFactory.create();
			argsParamValue.setDelegate(true);
			argsParamValue.setInstancePointer(new InstancePointer(args));
		}
		}
		notifyViewChanged(argsParamValue);
	}

	native private void notifyViewChanged_IViewArgs(long pNativeObject, long args);
	/**
	 * 接收外部通知，刷新控件的视口区域
	 * @param args 视口参数
	 */
	public void notifyViewChanged(com.earthview.world.spatial.Iviewargs args)
	{
		long argsParamValue = (args == null ? 0L : args.nativeObject.pointer);
		notifyViewChanged_IViewArgs(this.nativeObject.pointer, argsParamValue);
	}
	native private void notifyViewChanged_IViewArgs_NoVirtual(long pNativeObject, long args);
	protected void notifyViewChanged_NoVirtual(com.earthview.world.spatial.Iviewargs args)
	{
		long argsParamValue = (args == null ? 0L : args.nativeObject.pointer);
		notifyViewChanged_IViewArgs_NoVirtual(this.nativeObject.pointer, argsParamValue);
	}

	protected  boolean addViewListener_IViewListener_callback(long ref_externalListener)
	{
		com.earthview.world.spatial.Iviewlistener ref_externalListenerParamValue = (ref_externalListener == 0L ? null : new com.earthview.world.spatial.Iviewlistener(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_externalListenerParamValue != null)
		{
		ref_externalListenerParamValue.setDelegate(true);
		ref_externalListenerParamValue.setInstancePointer(new InstancePointer(ref_externalListener));
		IClassFactory ref_externalListenerParamValueClassFactory = GlobalClassFactoryMap.get(ref_externalListenerParamValue.getCppInstanceTypeName());
		if (ref_externalListenerParamValueClassFactory != null)
		{
			ref_externalListenerParamValue.setDelegate(true);
			ref_externalListenerParamValue = (com.earthview.world.spatial.Iviewlistener)ref_externalListenerParamValueClassFactory.create();
			ref_externalListenerParamValue.setDelegate(true);
			ref_externalListenerParamValue.setInstancePointer(new InstancePointer(ref_externalListener));
		}
		}
		boolean returnValue = addViewListener(ref_externalListenerParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean addViewListener_IViewListener(long pNativeObject, long ref_externalListener);
	/**
	 * 添加视口监听
	 * @param externalListener 监听器
	 */
	public boolean addViewListener(com.earthview.world.spatial.Iviewlistener ref_externalListener)
	{
		long ref_externalListenerParamValue = (ref_externalListener == null ? 0L : ref_externalListener.nativeObject.pointer);
		boolean returnValue = addViewListener_IViewListener(this.nativeObject.pointer, ref_externalListenerParamValue);
		return returnValue;
	}
	native private boolean addViewListener_IViewListener_NoVirtual(long pNativeObject, long ref_externalListener);
	protected boolean addViewListener_NoVirtual(com.earthview.world.spatial.Iviewlistener ref_externalListener)
	{
		long ref_externalListenerParamValue = (ref_externalListener == null ? 0L : ref_externalListener.nativeObject.pointer);
		boolean returnValue = addViewListener_IViewListener_NoVirtual(this.nativeObject.pointer, ref_externalListenerParamValue);
		return returnValue;
	}

	protected  long getViewListenerCount_void_callback()
	{
		long returnValue = getViewListenerCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getViewListenerCount_void(long pNativeObject);
	/**
	 * 获取视口监听器的数量
	 * @param  
	 * @return 数量
	 */
	public long getViewListenerCount()
	{
		long returnValue = getViewListenerCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getViewListenerCount_void_NoVirtual(long pNativeObject);
	protected long getViewListenerCount_NoVirtual()
	{
		long returnValue = getViewListenerCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getViewListener_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.Iviewlistener returnValue = getViewListener(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getViewListener_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引徙的视口监听对象
	 * @param index 索引
	 */
	public com.earthview.world.spatial.Iviewlistener getViewListener(long index)
	{
		long indexParamValue = index;
		long returnValue = getViewListener_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Iviewlistener __returnValue = new com.earthview.world.spatial.Iviewlistener(CreatedWhenConstruct.CWC_NotToCreate, "IViewListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Iviewlistener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IViewListener");
		}
		return __returnValue;
	}
	native private long getViewListener_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.Iviewlistener getViewListener_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getViewListener_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Iviewlistener __returnValue = new com.earthview.world.spatial.Iviewlistener(CreatedWhenConstruct.CWC_NotToCreate, "IViewListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Iviewlistener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IViewListener");
		}
		return __returnValue;
	}

	protected  boolean existViewListener_IViewListener_callback(long externalListener)
	{
		com.earthview.world.spatial.Iviewlistener externalListenerParamValue = (externalListener == 0L ? null : new com.earthview.world.spatial.Iviewlistener(CreatedWhenConstruct.CWC_NotToCreate));
		if(externalListenerParamValue != null)
		{
		externalListenerParamValue.setDelegate(true);
		externalListenerParamValue.setInstancePointer(new InstancePointer(externalListener));
		IClassFactory externalListenerParamValueClassFactory = GlobalClassFactoryMap.get(externalListenerParamValue.getCppInstanceTypeName());
		if (externalListenerParamValueClassFactory != null)
		{
			externalListenerParamValue.setDelegate(true);
			externalListenerParamValue = (com.earthview.world.spatial.Iviewlistener)externalListenerParamValueClassFactory.create();
			externalListenerParamValue.setDelegate(true);
			externalListenerParamValue.setInstancePointer(new InstancePointer(externalListener));
		}
		}
		boolean returnValue = existViewListener(externalListenerParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean existViewListener_IViewListener(long pNativeObject, long externalListener);
	/**
	 * 判断指定的监听是否存在
	 * @param externalListener 监听
	 */
	public boolean existViewListener(com.earthview.world.spatial.Iviewlistener externalListener)
	{
		long externalListenerParamValue = (externalListener == null ? 0L : externalListener.nativeObject.pointer);
		boolean returnValue = existViewListener_IViewListener(this.nativeObject.pointer, externalListenerParamValue);
		return returnValue;
	}
	native private boolean existViewListener_IViewListener_NoVirtual(long pNativeObject, long externalListener);
	protected boolean existViewListener_NoVirtual(com.earthview.world.spatial.Iviewlistener externalListener)
	{
		long externalListenerParamValue = (externalListener == null ? 0L : externalListener.nativeObject.pointer);
		boolean returnValue = existViewListener_IViewListener_NoVirtual(this.nativeObject.pointer, externalListenerParamValue);
		return returnValue;
	}

	protected  boolean removeViewListener_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		boolean returnValue = removeViewListener(indexParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean removeViewListener_ev_uint32(long pNativeObject, long index);
	/**
	 * 移除指定索引处的监听
	 * @param index 监听索引
	 * @return 如果移除成功则返回true,反之则否
	 */
	public boolean removeViewListener(long index)
	{
		long indexParamValue = index;
		boolean returnValue = removeViewListener_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private boolean removeViewListener_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected boolean removeViewListener_NoVirtual(long index)
	{
		long indexParamValue = index;
		boolean returnValue = removeViewListener_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  boolean removeViewListener_IViewListener_callback(long externalListener)
	{
		com.earthview.world.spatial.Iviewlistener externalListenerParamValue = (externalListener == 0L ? null : new com.earthview.world.spatial.Iviewlistener(CreatedWhenConstruct.CWC_NotToCreate));
		if(externalListenerParamValue != null)
		{
		externalListenerParamValue.setDelegate(true);
		externalListenerParamValue.setInstancePointer(new InstancePointer(externalListener));
		IClassFactory externalListenerParamValueClassFactory = GlobalClassFactoryMap.get(externalListenerParamValue.getCppInstanceTypeName());
		if (externalListenerParamValueClassFactory != null)
		{
			externalListenerParamValue.setDelegate(true);
			externalListenerParamValue = (com.earthview.world.spatial.Iviewlistener)externalListenerParamValueClassFactory.create();
			externalListenerParamValue.setDelegate(true);
			externalListenerParamValue.setInstancePointer(new InstancePointer(externalListener));
		}
		}
		boolean returnValue = removeViewListener(externalListenerParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean removeViewListener_IViewListener(long pNativeObject, long externalListener);
	/**
	 * 移除指定的监听
	 * @param externalListener 监听
	 * @return 如果移除成功则返回true,反之则否
	 */
	public boolean removeViewListener(com.earthview.world.spatial.Iviewlistener externalListener)
	{
		long externalListenerParamValue = (externalListener == null ? 0L : externalListener.nativeObject.pointer);
		boolean returnValue = removeViewListener_IViewListener(this.nativeObject.pointer, externalListenerParamValue);
		return returnValue;
	}
	native private boolean removeViewListener_IViewListener_NoVirtual(long pNativeObject, long externalListener);
	protected boolean removeViewListener_NoVirtual(com.earthview.world.spatial.Iviewlistener externalListener)
	{
		long externalListenerParamValue = (externalListener == null ? 0L : externalListener.nativeObject.pointer);
		boolean returnValue = removeViewListener_IViewListener_NoVirtual(this.nativeObject.pointer, externalListenerParamValue);
		return returnValue;
	}

	protected  void clearViewListeners_void_callback()
	{
		clearViewListeners();
	}

	native private void clearViewListeners_void(long pNativeObject);
	/**
	 * 清空所有的监听
	 * @param  
	 */
	public void clearViewListeners()
	{
		clearViewListeners_void(this.nativeObject.pointer);
	}
	native private void clearViewListeners_void_NoVirtual(long pNativeObject);
	protected void clearViewListeners_NoVirtual()
	{
		clearViewListeners_void_NoVirtual(this.nativeObject.pointer);
	}

	public Ispatialcontrol(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ispatialcontrol(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getTypeString_void(long pNativeObject, String method);
	native protected void register_notifyViewChanged_IViewArgs(long pNativeObject, String method);
	native protected void register_addViewListener_IViewListener(long pNativeObject, String method);
	native protected void register_getViewListenerCount_void(long pNativeObject, String method);
	native protected void register_getViewListener_ev_uint32(long pNativeObject, String method);
	native protected void register_existViewListener_IViewListener(long pNativeObject, String method);
	native protected void register_removeViewListener_ev_uint32(long pNativeObject, String method);
	native protected void register_removeViewListener_IViewListener(long pNativeObject, String method);
	native protected void register_clearViewListeners_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getTypeString_void(this.nativeObject.pointer, "getTypeString_void_callback");
			this.register_notifyViewChanged_IViewArgs(this.nativeObject.pointer, "notifyViewChanged_IViewArgs_callback");
			this.register_addViewListener_IViewListener(this.nativeObject.pointer, "addViewListener_IViewListener_callback");
			this.register_getViewListenerCount_void(this.nativeObject.pointer, "getViewListenerCount_void_callback");
			this.register_getViewListener_ev_uint32(this.nativeObject.pointer, "getViewListener_ev_uint32_callback");
			this.register_existViewListener_IViewListener(this.nativeObject.pointer, "existViewListener_IViewListener_callback");
			this.register_removeViewListener_ev_uint32(this.nativeObject.pointer, "removeViewListener_ev_uint32_callback");
			this.register_removeViewListener_IViewListener(this.nativeObject.pointer, "removeViewListener_IViewListener_callback");
			this.register_clearViewListeners_void(this.nativeObject.pointer, "clearViewListeners_void_callback");
		}
	}
	
	public static Ispatialcontrol fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ispatialcontrol obj = null;
 		if(baseObj instanceof Ispatialcontrol)
		{
			obj = (Ispatialcontrol)baseObj;
		} else {
			obj = new Ispatialcontrol(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ISpatialControl");
			obj.increaseCast();
		}

		return obj;
	}
}
