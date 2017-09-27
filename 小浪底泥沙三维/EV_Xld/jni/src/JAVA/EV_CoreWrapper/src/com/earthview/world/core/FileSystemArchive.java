package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class FileSystemArchive extends com.earthview.world.core.Archive {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CFileSystemArchive", new FileSystemArchiveClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCFileSystemArchiveProxy", new FileSystemArchiveClassFactory());
	}

	public FileSystemArchive(String name, String archType) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer archTypePtr = new BasePointer(archType);
		list.add("archType", archTypePtr.get());
		Create("JCFileSystemArchiveProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.core.FileSystemArchive".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean isCaseSensitive_void(long pNativeObject);
	//// @copydoc CArchive::isCaseSensitive
	public boolean isCaseSensitive()
	{
		boolean returnValue = isCaseSensitive_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isCaseSensitive_void_NoVirtual(long pNativeObject);
	protected boolean isCaseSensitive_NoVirtual()
	{
		boolean returnValue = isCaseSensitive_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void load_void(long pNativeObject);
	//// @copydoc CArchive::load
	public void load()
	{
		load_void(this.nativeObject.pointer);
	}
	native private void load_void_NoVirtual(long pNativeObject);
	protected void load_NoVirtual()
	{
		load_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void unload_void(long pNativeObject);
	//// @copydoc CArchive::unload
	public void unload()
	{
		unload_void(this.nativeObject.pointer);
	}
	native private void unload_void_NoVirtual(long pNativeObject);
	protected void unload_NoVirtual()
	{
		unload_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long open_EVString(long pNativeObject, String filename);
	//// @copydoc CArchive::open
	public com.earthview.world.core.DataStreamPtr open(String filename)
	{
		String filenameParamValue = filename;
		long returnValue = open_EVString(this.nativeObject.pointer, filenameParamValue);
		com.earthview.world.core.DataStreamPtr __returnValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.DataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		}
		return __returnValue;
	}
	native private long open_EVString_NoVirtual(long pNativeObject, String filename);
	protected com.earthview.world.core.DataStreamPtr open_NoVirtual(String filename)
	{
		String filenameParamValue = filename;
		long returnValue = open_EVString_NoVirtual(this.nativeObject.pointer, filenameParamValue);
		com.earthview.world.core.DataStreamPtr __returnValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.DataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		}
		return __returnValue;
	}

	native private long open_EVString_ev_bool(long pNativeObject, String filename, boolean readOnly);
	public com.earthview.world.core.DataStreamPtr open(String filename, boolean readOnly)
	{
		String filenameParamValue = filename;
		boolean readOnlyParamValue = readOnly;
		long returnValue = open_EVString_ev_bool(this.nativeObject.pointer, filenameParamValue, readOnlyParamValue);
		com.earthview.world.core.DataStreamPtr __returnValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.DataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		}
		return __returnValue;
	}
	native private long open_EVString_ev_bool_NoVirtual(long pNativeObject, String filename, boolean readOnly);
	protected com.earthview.world.core.DataStreamPtr open_NoVirtual(String filename, boolean readOnly)
	{
		String filenameParamValue = filename;
		boolean readOnlyParamValue = readOnly;
		long returnValue = open_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, filenameParamValue, readOnlyParamValue);
		com.earthview.world.core.DataStreamPtr __returnValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.DataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		}
		return __returnValue;
	}

	native private long create_EVString(long pNativeObject, String filename);
	//// @copydoc CArchive::create
	public com.earthview.world.core.DataStreamPtr create(String filename)
	{
		String filenameParamValue = filename;
		long returnValue = create_EVString(this.nativeObject.pointer, filenameParamValue);
		com.earthview.world.core.DataStreamPtr __returnValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.DataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		}
		return __returnValue;
	}
	native private long create_EVString_NoVirtual(long pNativeObject, String filename);
	protected com.earthview.world.core.DataStreamPtr create_NoVirtual(String filename)
	{
		String filenameParamValue = filename;
		long returnValue = create_EVString_NoVirtual(this.nativeObject.pointer, filenameParamValue);
		com.earthview.world.core.DataStreamPtr __returnValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.DataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		}
		return __returnValue;
	}

	native private void remove_EVString(long pNativeObject, String filename);
	//// @copydoc CArchive::delete
	public void remove(String filename)
	{
		String filenameParamValue = filename;
		remove_EVString(this.nativeObject.pointer, filenameParamValue);
	}
	native private void remove_EVString_NoVirtual(long pNativeObject, String filename);
	protected void remove_NoVirtual(String filename)
	{
		String filenameParamValue = filename;
		remove_EVString_NoVirtual(this.nativeObject.pointer, filenameParamValue);
	}

	native private long list_ev_bool_ev_bool(long pNativeObject, boolean recursive, boolean dirs);
	//// @copydoc CArchive::list
	public com.earthview.world.core.StringVectorPtr list(boolean recursive, boolean dirs)
	{
		boolean recursiveParamValue = recursive;
		boolean dirsParamValue = dirs;
		long returnValue = list_ev_bool_ev_bool(this.nativeObject.pointer, recursiveParamValue, dirsParamValue);
		com.earthview.world.core.StringVectorPtr __returnValue = new com.earthview.world.core.StringVectorPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVectorPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		}
		return __returnValue;
	}
	native private long list_ev_bool_ev_bool_NoVirtual(long pNativeObject, boolean recursive, boolean dirs);
	protected com.earthview.world.core.StringVectorPtr list_NoVirtual(boolean recursive, boolean dirs)
	{
		boolean recursiveParamValue = recursive;
		boolean dirsParamValue = dirs;
		long returnValue = list_ev_bool_ev_bool_NoVirtual(this.nativeObject.pointer, recursiveParamValue, dirsParamValue);
		com.earthview.world.core.StringVectorPtr __returnValue = new com.earthview.world.core.StringVectorPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVectorPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		}
		return __returnValue;
	}

	native private long list_ev_bool(long pNativeObject, boolean recursive);
	public com.earthview.world.core.StringVectorPtr list(boolean recursive)
	{
		boolean recursiveParamValue = recursive;
		long returnValue = list_ev_bool(this.nativeObject.pointer, recursiveParamValue);
		com.earthview.world.core.StringVectorPtr __returnValue = new com.earthview.world.core.StringVectorPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVectorPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		}
		return __returnValue;
	}
	native private long list_ev_bool_NoVirtual(long pNativeObject, boolean recursive);
	protected com.earthview.world.core.StringVectorPtr list_NoVirtual(boolean recursive)
	{
		boolean recursiveParamValue = recursive;
		long returnValue = list_ev_bool_NoVirtual(this.nativeObject.pointer, recursiveParamValue);
		com.earthview.world.core.StringVectorPtr __returnValue = new com.earthview.world.core.StringVectorPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVectorPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		}
		return __returnValue;
	}

	native private long list_void(long pNativeObject);
	public com.earthview.world.core.StringVectorPtr list()
	{
		long returnValue = list_void(this.nativeObject.pointer);
		com.earthview.world.core.StringVectorPtr __returnValue = new com.earthview.world.core.StringVectorPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVectorPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		}
		return __returnValue;
	}
	native private long list_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.StringVectorPtr list_NoVirtual()
	{
		long returnValue = list_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.StringVectorPtr __returnValue = new com.earthview.world.core.StringVectorPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVectorPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		}
		return __returnValue;
	}

	native private long listFileInfo_ev_bool_ev_bool(long pNativeObject, boolean recursive, boolean dirs);
	//// @copydoc CArchive::listFileInfo
	public com.earthview.world.core.FileInfoListPtr listFileInfo(boolean recursive, boolean dirs)
	{
		boolean recursiveParamValue = recursive;
		boolean dirsParamValue = dirs;
		long returnValue = listFileInfo_ev_bool_ev_bool(this.nativeObject.pointer, recursiveParamValue, dirsParamValue);
		com.earthview.world.core.FileInfoListPtr __returnValue = new com.earthview.world.core.FileInfoListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.FileInfoListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		}
		return __returnValue;
	}
	native private long listFileInfo_ev_bool_ev_bool_NoVirtual(long pNativeObject, boolean recursive, boolean dirs);
	protected com.earthview.world.core.FileInfoListPtr listFileInfo_NoVirtual(boolean recursive, boolean dirs)
	{
		boolean recursiveParamValue = recursive;
		boolean dirsParamValue = dirs;
		long returnValue = listFileInfo_ev_bool_ev_bool_NoVirtual(this.nativeObject.pointer, recursiveParamValue, dirsParamValue);
		com.earthview.world.core.FileInfoListPtr __returnValue = new com.earthview.world.core.FileInfoListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.FileInfoListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		}
		return __returnValue;
	}

	native private long listFileInfo_ev_bool(long pNativeObject, boolean recursive);
	public com.earthview.world.core.FileInfoListPtr listFileInfo(boolean recursive)
	{
		boolean recursiveParamValue = recursive;
		long returnValue = listFileInfo_ev_bool(this.nativeObject.pointer, recursiveParamValue);
		com.earthview.world.core.FileInfoListPtr __returnValue = new com.earthview.world.core.FileInfoListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.FileInfoListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		}
		return __returnValue;
	}
	native private long listFileInfo_ev_bool_NoVirtual(long pNativeObject, boolean recursive);
	protected com.earthview.world.core.FileInfoListPtr listFileInfo_NoVirtual(boolean recursive)
	{
		boolean recursiveParamValue = recursive;
		long returnValue = listFileInfo_ev_bool_NoVirtual(this.nativeObject.pointer, recursiveParamValue);
		com.earthview.world.core.FileInfoListPtr __returnValue = new com.earthview.world.core.FileInfoListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.FileInfoListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		}
		return __returnValue;
	}

	native private long listFileInfo_void(long pNativeObject);
	public com.earthview.world.core.FileInfoListPtr listFileInfo()
	{
		long returnValue = listFileInfo_void(this.nativeObject.pointer);
		com.earthview.world.core.FileInfoListPtr __returnValue = new com.earthview.world.core.FileInfoListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.FileInfoListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		}
		return __returnValue;
	}
	native private long listFileInfo_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.FileInfoListPtr listFileInfo_NoVirtual()
	{
		long returnValue = listFileInfo_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.FileInfoListPtr __returnValue = new com.earthview.world.core.FileInfoListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.FileInfoListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		}
		return __returnValue;
	}

	native private long find_EVString_ev_bool_ev_bool(long pNativeObject, String pattern, boolean recursive, boolean dirs);
	//// @copydoc CArchive::find
	public com.earthview.world.core.StringVectorPtr find(String pattern, boolean recursive, boolean dirs)
	{
		String patternParamValue = pattern;
		boolean recursiveParamValue = recursive;
		boolean dirsParamValue = dirs;
		long returnValue = find_EVString_ev_bool_ev_bool(this.nativeObject.pointer, patternParamValue, recursiveParamValue, dirsParamValue);
		com.earthview.world.core.StringVectorPtr __returnValue = new com.earthview.world.core.StringVectorPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVectorPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		}
		return __returnValue;
	}
	native private long find_EVString_ev_bool_ev_bool_NoVirtual(long pNativeObject, String pattern, boolean recursive, boolean dirs);
	protected com.earthview.world.core.StringVectorPtr find_NoVirtual(String pattern, boolean recursive, boolean dirs)
	{
		String patternParamValue = pattern;
		boolean recursiveParamValue = recursive;
		boolean dirsParamValue = dirs;
		long returnValue = find_EVString_ev_bool_ev_bool_NoVirtual(this.nativeObject.pointer, patternParamValue, recursiveParamValue, dirsParamValue);
		com.earthview.world.core.StringVectorPtr __returnValue = new com.earthview.world.core.StringVectorPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVectorPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		}
		return __returnValue;
	}

	native private long find_EVString_ev_bool(long pNativeObject, String pattern, boolean recursive);
	public com.earthview.world.core.StringVectorPtr find(String pattern, boolean recursive)
	{
		String patternParamValue = pattern;
		boolean recursiveParamValue = recursive;
		long returnValue = find_EVString_ev_bool(this.nativeObject.pointer, patternParamValue, recursiveParamValue);
		com.earthview.world.core.StringVectorPtr __returnValue = new com.earthview.world.core.StringVectorPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVectorPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		}
		return __returnValue;
	}
	native private long find_EVString_ev_bool_NoVirtual(long pNativeObject, String pattern, boolean recursive);
	protected com.earthview.world.core.StringVectorPtr find_NoVirtual(String pattern, boolean recursive)
	{
		String patternParamValue = pattern;
		boolean recursiveParamValue = recursive;
		long returnValue = find_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, patternParamValue, recursiveParamValue);
		com.earthview.world.core.StringVectorPtr __returnValue = new com.earthview.world.core.StringVectorPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVectorPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		}
		return __returnValue;
	}

	native private long find_EVString(long pNativeObject, String pattern);
	public com.earthview.world.core.StringVectorPtr find(String pattern)
	{
		String patternParamValue = pattern;
		long returnValue = find_EVString(this.nativeObject.pointer, patternParamValue);
		com.earthview.world.core.StringVectorPtr __returnValue = new com.earthview.world.core.StringVectorPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVectorPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		}
		return __returnValue;
	}
	native private long find_EVString_NoVirtual(long pNativeObject, String pattern);
	protected com.earthview.world.core.StringVectorPtr find_NoVirtual(String pattern)
	{
		String patternParamValue = pattern;
		long returnValue = find_EVString_NoVirtual(this.nativeObject.pointer, patternParamValue);
		com.earthview.world.core.StringVectorPtr __returnValue = new com.earthview.world.core.StringVectorPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVectorPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVectorPtr");
		}
		return __returnValue;
	}

	native private long findFileInfo_EVString_ev_bool_ev_bool(long pNativeObject, String pattern, boolean recursive, boolean dirs);
	//// @copydoc CArchive::findFileInfo
	public com.earthview.world.core.FileInfoListPtr findFileInfo(String pattern, boolean recursive, boolean dirs)
	{
		String patternParamValue = pattern;
		boolean recursiveParamValue = recursive;
		boolean dirsParamValue = dirs;
		long returnValue = findFileInfo_EVString_ev_bool_ev_bool(this.nativeObject.pointer, patternParamValue, recursiveParamValue, dirsParamValue);
		com.earthview.world.core.FileInfoListPtr __returnValue = new com.earthview.world.core.FileInfoListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.FileInfoListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		}
		return __returnValue;
	}
	native private long findFileInfo_EVString_ev_bool_ev_bool_NoVirtual(long pNativeObject, String pattern, boolean recursive, boolean dirs);
	protected com.earthview.world.core.FileInfoListPtr findFileInfo_NoVirtual(String pattern, boolean recursive, boolean dirs)
	{
		String patternParamValue = pattern;
		boolean recursiveParamValue = recursive;
		boolean dirsParamValue = dirs;
		long returnValue = findFileInfo_EVString_ev_bool_ev_bool_NoVirtual(this.nativeObject.pointer, patternParamValue, recursiveParamValue, dirsParamValue);
		com.earthview.world.core.FileInfoListPtr __returnValue = new com.earthview.world.core.FileInfoListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.FileInfoListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		}
		return __returnValue;
	}

	native private long findFileInfo_EVString_ev_bool(long pNativeObject, String pattern, boolean recursive);
	public com.earthview.world.core.FileInfoListPtr findFileInfo(String pattern, boolean recursive)
	{
		String patternParamValue = pattern;
		boolean recursiveParamValue = recursive;
		long returnValue = findFileInfo_EVString_ev_bool(this.nativeObject.pointer, patternParamValue, recursiveParamValue);
		com.earthview.world.core.FileInfoListPtr __returnValue = new com.earthview.world.core.FileInfoListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.FileInfoListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		}
		return __returnValue;
	}
	native private long findFileInfo_EVString_ev_bool_NoVirtual(long pNativeObject, String pattern, boolean recursive);
	protected com.earthview.world.core.FileInfoListPtr findFileInfo_NoVirtual(String pattern, boolean recursive)
	{
		String patternParamValue = pattern;
		boolean recursiveParamValue = recursive;
		long returnValue = findFileInfo_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, patternParamValue, recursiveParamValue);
		com.earthview.world.core.FileInfoListPtr __returnValue = new com.earthview.world.core.FileInfoListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.FileInfoListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		}
		return __returnValue;
	}

	native private long findFileInfo_EVString(long pNativeObject, String pattern);
	public com.earthview.world.core.FileInfoListPtr findFileInfo(String pattern)
	{
		String patternParamValue = pattern;
		long returnValue = findFileInfo_EVString(this.nativeObject.pointer, patternParamValue);
		com.earthview.world.core.FileInfoListPtr __returnValue = new com.earthview.world.core.FileInfoListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.FileInfoListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		}
		return __returnValue;
	}
	native private long findFileInfo_EVString_NoVirtual(long pNativeObject, String pattern);
	protected com.earthview.world.core.FileInfoListPtr findFileInfo_NoVirtual(String pattern)
	{
		String patternParamValue = pattern;
		long returnValue = findFileInfo_EVString_NoVirtual(this.nativeObject.pointer, patternParamValue);
		com.earthview.world.core.FileInfoListPtr __returnValue = new com.earthview.world.core.FileInfoListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.FileInfoListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "FileInfoListPtr");
		}
		return __returnValue;
	}

	native private boolean exists_EVString(long pNativeObject, String filename);
	//// @copydoc CArchive::exists
	public boolean exists(String filename)
	{
		String filenameParamValue = filename;
		boolean returnValue = exists_EVString(this.nativeObject.pointer, filenameParamValue);
		return returnValue;
	}
	native private boolean exists_EVString_NoVirtual(long pNativeObject, String filename);
	protected boolean exists_NoVirtual(String filename)
	{
		String filenameParamValue = filename;
		boolean returnValue = exists_EVString_NoVirtual(this.nativeObject.pointer, filenameParamValue);
		return returnValue;
	}

	native private static void setIgnoreHidden_ev_bool(boolean ignore);
	//// Set whether filesystem enumeration will include hidden files or not.
	//// This should be called prior to declaring and/or initializing filesystem
	//// resource locations. The default is true (ignore hidden files).
	public static void setIgnoreHidden(boolean ignore)
	{
		boolean ignoreParamValue = ignore;
		setIgnoreHidden_ev_bool(ignoreParamValue);
	}
	native private static boolean getIgnoreHidden_void();
	//// Get whether hidden files are ignored during filesystem enumeration.
	public static boolean getIgnoreHidden()
	{
		boolean returnValue = getIgnoreHidden_void();
		return returnValue;
	}
	native private static boolean get_ms_IgnoreHidden_void();
	public static boolean get_ms_IgnoreHidden()
	{
		boolean jniValue = get_ms_IgnoreHidden_void();
		
		return jniValue;
	}
	
	native private static void set_ms_IgnoreHidden_ev_bool (boolean value);
	public static void set_ms_IgnoreHidden(boolean ms_IgnoreHidden)
	{
		boolean ms_IgnoreHiddenParamValue = ms_IgnoreHidden;
		
		set_ms_IgnoreHidden_ev_bool(ms_IgnoreHiddenParamValue);
	}
	
	native private long getModifiedTime_EVString(long pNativeObject, String filename);
	////ev_private:
	//// @copydoc CArchive::getModifiedTime
	public long getModifiedTime(String filename)
	{
		String filenameParamValue = filename;
		long returnValue = getModifiedTime_EVString(this.nativeObject.pointer, filenameParamValue);
		return returnValue;
	}
	native private long getModifiedTime_EVString_NoVirtual(long pNativeObject, String filename);
	protected long getModifiedTime_NoVirtual(String filename)
	{
		String filenameParamValue = filename;
		long returnValue = getModifiedTime_EVString_NoVirtual(this.nativeObject.pointer, filenameParamValue);
		return returnValue;
	}

	public FileSystemArchive(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FileSystemArchive(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * ReportswhetherthisEarthView::World::Core::CArchiveisread-only,orwhetherthecontents	canbeupdated.
	 * @param  
	 * @return whetherisitreadonly?readonlyreturnstrue,elsereturnsfalse
	 */
	public boolean isReadOnly()
	{
		return super.isReadOnly_NoVirtual();
	}
	
	native protected void register_isCaseSensitive_void(long pNativeObject, String method);
	native protected void register_load_void(long pNativeObject, String method);
	native protected void register_unload_void(long pNativeObject, String method);
	native protected void register_isReadOnly_void(long pNativeObject, String method);
	native protected void register_open_EVString(long pNativeObject, String method);
	native protected void register_open_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_create_EVString(long pNativeObject, String method);
	native protected void register_remove_EVString(long pNativeObject, String method);
	native protected void register_list_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_list_ev_bool(long pNativeObject, String method);
	native protected void register_list_void(long pNativeObject, String method);
	native protected void register_listFileInfo_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_listFileInfo_ev_bool(long pNativeObject, String method);
	native protected void register_listFileInfo_void(long pNativeObject, String method);
	native protected void register_find_EVString_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_find_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_find_EVString(long pNativeObject, String method);
	native protected void register_exists_EVString(long pNativeObject, String method);
	native protected void register_findFileInfo_EVString_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_findFileInfo_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_findFileInfo_EVString(long pNativeObject, String method);
	native protected void register_getModifiedTime_EVString(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_isCaseSensitive_void(this.nativeObject.pointer, "isCaseSensitive_void_callback");
			this.register_load_void(this.nativeObject.pointer, "load_void_callback");
			this.register_unload_void(this.nativeObject.pointer, "unload_void_callback");
			this.register_isReadOnly_void(this.nativeObject.pointer, "isReadOnly_void_callback");
			this.register_open_EVString(this.nativeObject.pointer, "open_EVString_callback");
			this.register_open_EVString_ev_bool(this.nativeObject.pointer, "open_EVString_ev_bool_callback");
			this.register_create_EVString(this.nativeObject.pointer, "create_EVString_callback");
			this.register_remove_EVString(this.nativeObject.pointer, "remove_EVString_callback");
			this.register_list_ev_bool_ev_bool(this.nativeObject.pointer, "list_ev_bool_ev_bool_callback");
			this.register_list_ev_bool(this.nativeObject.pointer, "list_ev_bool_callback");
			this.register_list_void(this.nativeObject.pointer, "list_void_callback");
			this.register_listFileInfo_ev_bool_ev_bool(this.nativeObject.pointer, "listFileInfo_ev_bool_ev_bool_callback");
			this.register_listFileInfo_ev_bool(this.nativeObject.pointer, "listFileInfo_ev_bool_callback");
			this.register_listFileInfo_void(this.nativeObject.pointer, "listFileInfo_void_callback");
			this.register_find_EVString_ev_bool_ev_bool(this.nativeObject.pointer, "find_EVString_ev_bool_ev_bool_callback");
			this.register_find_EVString_ev_bool(this.nativeObject.pointer, "find_EVString_ev_bool_callback");
			this.register_find_EVString(this.nativeObject.pointer, "find_EVString_callback");
			this.register_exists_EVString(this.nativeObject.pointer, "exists_EVString_callback");
			this.register_findFileInfo_EVString_ev_bool_ev_bool(this.nativeObject.pointer, "findFileInfo_EVString_ev_bool_ev_bool_callback");
			this.register_findFileInfo_EVString_ev_bool(this.nativeObject.pointer, "findFileInfo_EVString_ev_bool_callback");
			this.register_findFileInfo_EVString(this.nativeObject.pointer, "findFileInfo_EVString_callback");
			this.register_getModifiedTime_EVString(this.nativeObject.pointer, "getModifiedTime_EVString_callback");
		}
	}
	
	public static FileSystemArchive fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FileSystemArchive obj = null;
 		if(baseObj instanceof FileSystemArchive)
		{
			obj = (FileSystemArchive)baseObj;
		} else {
			obj = new FileSystemArchive(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFileSystemArchive");
			obj.increaseCast();
		}

		return obj;
	}
}
