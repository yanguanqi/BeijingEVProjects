package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

/**
 * Abstractfactoryclass,archivecodecpluginscanregisterconcretesubclassesofthis.@remarksAllaccessto'archives'(collectionsoffiles,compressedorjustfolders,maybeevenremote)ismanagedviatheabstractCArchiveclass.Pluginsareexpectedtoprovidetheimplementationfortheactualcodecitself,butbecauseasubclassofCArchivehastobecreatedforeveryarchive,afactoryclassisrequiredtocreatetheappropriatesubclass.@parSoarchivepluginscreateasubclassofCArchiveANDasubclassofCArchiveFactorywhichcreatesinstancesoftheCArchivesubclass.Seethe'Zip'and'FileSystem'pluginsforexamples.EachCArchiveandCArchiveFactorysubclasspairdealwithasinglearchivetype(identifiedbyastring).
 */
public class ArchiveFactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CArchiveFactory", new ArchiveFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCArchiveFactoryProxy", new ArchiveFactoryClassFactory());
	}

	public ArchiveFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCArchiveFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.core.ArchiveFactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  String getType_void_callback()
	{
		String returnValue = getType();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getType_void(long pNativeObject);
	public String getType()
	{
		String returnValue = getType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getType_void_NoVirtual(long pNativeObject);
	protected String getType_NoVirtual()
	{
		String returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long createInstance_EVString_callback(String name)
	{
		String nameParamValue = name;
		com.earthview.world.core.Archive returnValue = createInstance(nameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createInstance_EVString(long pNativeObject, String name);
	/**
	 * Createsanewobject.
	 * @param  name="name"Nameoftheobjecttocreate
	 * @return returnAnobjectcreatedbythefactory.Thetypeoftheobjectdependsonthefactory.
	 */
	public com.earthview.world.core.Archive createInstance(String name)
	{
		String nameParamValue = name;
		long returnValue = createInstance_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.Archive __returnValue = new com.earthview.world.core.Archive(CreatedWhenConstruct.CWC_NotToCreate, "CArchive");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Archive)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CArchive");
		}
		return __returnValue;
	}
	native private long createInstance_EVString_NoVirtual(long pNativeObject, String name);
	protected com.earthview.world.core.Archive createInstance_NoVirtual(String name)
	{
		String nameParamValue = name;
		long returnValue = createInstance_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.Archive __returnValue = new com.earthview.world.core.Archive(CreatedWhenConstruct.CWC_NotToCreate, "CArchive");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.Archive)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CArchive");
		}
		return __returnValue;
	}

	protected  void destroyInstance_CArchive_callback(long ptr)
	{
		com.earthview.world.core.Archive ptrParamValue = (ptr == 0L ? null : new com.earthview.world.core.Archive(CreatedWhenConstruct.CWC_NotToCreate));
		if(ptrParamValue != null)
		{
		ptrParamValue.setDelegate(true);
		ptrParamValue.setInstancePointer(new InstancePointer(ptr));
		IClassFactory ptrParamValueClassFactory = GlobalClassFactoryMap.get(ptrParamValue.getCppInstanceTypeName());
		if (ptrParamValueClassFactory != null)
		{
			ptrParamValue.setDelegate(true);
			ptrParamValue = (com.earthview.world.core.Archive)ptrParamValueClassFactory.create();
			ptrParamValue.setDelegate(true);
			ptrParamValue.setInstancePointer(new InstancePointer(ptr));
		}
		}
		destroyInstance(ptrParamValue);
	}

	native private void destroyInstance_CArchive(long pNativeObject, long ptr);
	/**
	 * Destroysanobjectwhichwascreatedbythisfactory.
	 * @param  name="ptr"Pointertotheobjecttodestroy
	 */
	public void destroyInstance(com.earthview.world.core.Archive ptr)
	{
		long ptrParamValue = (ptr == null ? 0L : ptr.nativeObject.pointer);
		destroyInstance_CArchive(this.nativeObject.pointer, ptrParamValue);
	}
	native private void destroyInstance_CArchive_NoVirtual(long pNativeObject, long ptr);
	protected void destroyInstance_NoVirtual(com.earthview.world.core.Archive ptr)
	{
		long ptrParamValue = (ptr == null ? 0L : ptr.nativeObject.pointer);
		destroyInstance_CArchive_NoVirtual(this.nativeObject.pointer, ptrParamValue);
	}

	public ArchiveFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ArchiveFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_createInstance_EVString(long pNativeObject, String method);
	native protected void register_destroyInstance_CArchive(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_createInstance_EVString(this.nativeObject.pointer, "createInstance_EVString_callback");
			this.register_destroyInstance_CArchive(this.nativeObject.pointer, "destroyInstance_CArchive_callback");
		}
	}
	
	public static ArchiveFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ArchiveFactory obj = null;
 		if(baseObj instanceof ArchiveFactory)
		{
			obj = (ArchiveFactory)baseObj;
		} else {
			obj = new ArchiveFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CArchiveFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
