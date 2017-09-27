package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class Archive extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CArchive", new ArchiveClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCArchiveProxy", new ArchiveClassFactory());
	}

	/**
	 * Constructor-don'tcalldirect,usedbyCArchiveFactory
	 * @param name 
	 * @param archType 
	 */
	public Archive(String name, String archType) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer archTypePtr = new BasePointer(archType);
		list.add("archType", archTypePtr.get());
		Create("JCArchiveProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.core.Archive".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getName_void(long pNativeObject);
	/**
	 * Getthenameofthisarchive
	 * @param  
	 * @return EVString
	 */
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	protected  boolean isCaseSensitive_void_callback()
	{
		boolean returnValue = isCaseSensitive();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isCaseSensitive_void(long pNativeObject);
	/**
	 * Returnswhetherthisarchiveiscasesensitiveinthewayitmatchesfiles
	 * @param  
	 * @return casesensitivereturnstrue,elsereturnfalse
	 */
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

	protected  void load_void_callback()
	{
		load();
	}

	native private void load_void(long pNativeObject);
	/**
	 * Loadsthearchive.Thisinitializesalltheinternaldataoftheclass.Donotcallthisfunctiondirectly,itismeanttobeusedonlybytheCArchiveManagerclass.
	 * @param  
	 */
	public void load()
	{
		load_void(this.nativeObject.pointer);
	}
	native private void load_void_NoVirtual(long pNativeObject);
	protected void load_NoVirtual()
	{
		load_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void unload_void_callback()
	{
		unload();
	}

	native private void unload_void(long pNativeObject);
	/**
	 * Unloadsthearchive.warningDonotcallthisfunctiondirectly,itismeanttobeusedonlybytheCArchiveManagerclass.
	 * @param  
	 */
	public void unload()
	{
		unload_void(this.nativeObject.pointer);
	}
	native private void unload_void_NoVirtual(long pNativeObject);
	protected void unload_NoVirtual()
	{
		unload_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean isReadOnly_void_callback()
	{
		boolean returnValue = isReadOnly();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isReadOnly_void(long pNativeObject);
	/**
	 * ReportswhetherthisEarthView::World::Core::CArchiveisread-only,orwhetherthecontents	canbeupdated.
	 * @param  
	 * @return whetherisitreadonly?readonlyreturnstrue,elsereturnsfalse
	 */
	public boolean isReadOnly()
	{
		boolean returnValue = isReadOnly_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isReadOnly_void_NoVirtual(long pNativeObject);
	protected boolean isReadOnly_NoVirtual()
	{
		boolean returnValue = isReadOnly_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long open_EVString_callback(String filename)
	{
		String filenameParamValue = filename;
		com.earthview.world.core.DataStreamPtr returnValue = open(filenameParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long open_EVString(long pNativeObject, String filename);
	/**
	 * Openastreamonagivenfile.noteThereisnoequivalent'close'method;thereturnedstreamcontrolsthelifecycleofthisfileoperation.
	 * @param  name="filename"Thefullyqualifiednameofthefile
	 * @param  name="readOnly"Whethertoopenthefileinread-onlymodeornot(note,	ifthearchiveisread-onlythenthiscannotbesettofalse
	 * @return AsharedpointertoaCDataStreamwhichcanbeusedtoread/writethefile.Ifthefileisnotpresent,returnsanull	sharedpointer.
	 */
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

	protected  long open_EVString_ev_bool_callback(String filename, boolean readOnly)
	{
		String filenameParamValue = filename;
		boolean readOnlyParamValue = readOnly;
		com.earthview.world.core.DataStreamPtr returnValue = open(filenameParamValue, readOnlyParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
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

	protected  long create_EVString_callback(String filename)
	{
		String filenameParamValue = filename;
		com.earthview.world.core.DataStreamPtr returnValue = create(filenameParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long create_EVString(long pNativeObject, String filename);
	/**
	 * Createanewfile(oroverwriteonealreadythere).noteIfthearchiveisread-onlythenthismethodwillfail.
	 * @param  name="filename"Thefullyqualifiednameofthefile
	 * @return AsharedpointertoaCDataStreamwhichcanbeusedtoread/writethefile.
	 */
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

	protected  void remove_EVString_callback(String filename)
	{
		String filenameParamValue = filename;
		remove(filenameParamValue);
	}

	native private void remove_EVString(long pNativeObject, String filename);
	/**
	 * Deleteanamedfile.remarksNotpossibleonread-onlyarchives
	 * @param  name="filename"Thefullyqualifiednameofthefile
	 */
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

	protected  long list_ev_bool_ev_bool_callback(boolean recursive, boolean dirs)
	{
		boolean recursiveParamValue = recursive;
		boolean dirsParamValue = dirs;
		com.earthview.world.core.StringVectorPtr returnValue = list(recursiveParamValue, dirsParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long list_ev_bool_ev_bool(long pNativeObject, boolean recursive, boolean dirs);
	/**
	 * Listallfilenamesinthearchive.noteThismethodonlyreturnsfilenames,youcanalsoretrieveother
	 * @param  name="recursive"Whetherallpathsofthearchivearesearched(ifthearchivehasaconceptofthat
	 * @param  name="dirs"Settotrueifyouwantthedirectoriestobelistedinsteadoffiles
	 * @return Alistoffilenamesmatchingthecriteria,allarefullyqualified
	 */
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

	protected  long list_ev_bool_callback(boolean recursive)
	{
		boolean recursiveParamValue = recursive;
		com.earthview.world.core.StringVectorPtr returnValue = list(recursiveParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
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

	protected  long list_void_callback()
	{
		com.earthview.world.core.StringVectorPtr returnValue = list();
		long __returnValue = returnValue.nativeObject.pointer;
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

	protected  long listFileInfo_ev_bool_ev_bool_callback(boolean recursive, boolean dirs)
	{
		boolean recursiveParamValue = recursive;
		boolean dirsParamValue = dirs;
		com.earthview.world.core.FileInfoListPtr returnValue = listFileInfo(recursiveParamValue, dirsParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long listFileInfo_ev_bool_ev_bool(long pNativeObject, boolean recursive, boolean dirs);
	/**
	 * Listallfilesinthearchivewithaccompanyinginformation.
	 * @param  name="recursive"Whetherallpathsofthearchivearesearched(ifthearchivehasaconceptofthat)
	 * @param  name="dirs"Settotrueifyouwantthedirectoriestobelistedinsteadoffiles
	 * @return Alistofstructuresdetailingquitealotofinformationaboutallthefilesinthearchive.
	 */
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

	protected  long listFileInfo_ev_bool_callback(boolean recursive)
	{
		boolean recursiveParamValue = recursive;
		com.earthview.world.core.FileInfoListPtr returnValue = listFileInfo(recursiveParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
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

	protected  long listFileInfo_void_callback()
	{
		com.earthview.world.core.FileInfoListPtr returnValue = listFileInfo();
		long __returnValue = returnValue.nativeObject.pointer;
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

	protected  long find_EVString_ev_bool_ev_bool_callback(String pattern, boolean recursive, boolean dirs)
	{
		String patternParamValue = pattern;
		boolean recursiveParamValue = recursive;
		boolean dirsParamValue = dirs;
		com.earthview.world.core.StringVectorPtr returnValue = find(patternParamValue, recursiveParamValue, dirsParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long find_EVString_ev_bool_ev_bool(long pNativeObject, String pattern, boolean recursive, boolean dirs);
	/**
	 * Findallfileordirectorynamesmatchingagivenpatterninthisarchive.noteThismethodonlyreturnsfilenames,youcanalsoretrieveother
	 * @param  name="pattern"Thepatterntosearchfor;wildcards(*)areallowed
	 * @param  name="recursive"Whetherallpathsofthearchivearesearched(ifthearchivehasaconceptofthat)
	 * @param  name="dirs"Settotrueifyouwantthedirectoriestobelistedinsteadoffiles
	 * @return Alistoffilenamesmatchingthecriteria,allarefullyqualified
	 */
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

	protected  long find_EVString_ev_bool_callback(String pattern, boolean recursive)
	{
		String patternParamValue = pattern;
		boolean recursiveParamValue = recursive;
		com.earthview.world.core.StringVectorPtr returnValue = find(patternParamValue, recursiveParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
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

	protected  long find_EVString_callback(String pattern)
	{
		String patternParamValue = pattern;
		com.earthview.world.core.StringVectorPtr returnValue = find(patternParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
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

	protected  boolean exists_EVString_callback(String filename)
	{
		String filenameParamValue = filename;
		boolean returnValue = exists(filenameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean exists_EVString(long pNativeObject, String filename);
	/**
	 * Findoutifthenamedfileexists(note:fullyqualifiedfilenamerequired)
	 * @param  name="filename"namedfile
	 * @return existreturntrue,elsereturnfalse.
	 */
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

	protected  long findFileInfo_EVString_ev_bool_ev_bool_callback(String pattern, boolean recursive, boolean dirs)
	{
		String patternParamValue = pattern;
		boolean recursiveParamValue = recursive;
		boolean dirsParamValue = dirs;
		com.earthview.world.core.FileInfoListPtr returnValue = findFileInfo(patternParamValue, recursiveParamValue, dirsParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long findFileInfo_EVString_ev_bool_ev_bool(long pNativeObject, String pattern, boolean recursive, boolean dirs);
	/**
	 * Findallfilesordirectoriesmatchingagivenpatterninthisarchiveandgetsomedetailedinformationaboutthem.
	 * @param  name="pattern"Thepatterntosearchfor;wildcards(*)areallowed
	 * @param  name="recursive"Whetherallpathsofthearchivearesearched(ifthearchivehasaconceptofthat)
	 * @param  name="dirs"Settotrueifyouwantthedirectoriestobelistedinsteadoffiles
	 * @return Alistoffileinformationstructuresforallfilesmatchingthecriteria.
	 */
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

	protected  long findFileInfo_EVString_ev_bool_callback(String pattern, boolean recursive)
	{
		String patternParamValue = pattern;
		boolean recursiveParamValue = recursive;
		com.earthview.world.core.FileInfoListPtr returnValue = findFileInfo(patternParamValue, recursiveParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
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

	protected  long findFileInfo_EVString_callback(String pattern)
	{
		String patternParamValue = pattern;
		com.earthview.world.core.FileInfoListPtr returnValue = findFileInfo(patternParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
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

	native private long getType_void(long pNativeObject);
	/// <summary> Return the type code of this EarthView::World::Core::CArchive
	/// <param></param>
	/// <returns> type </returns>
	public StringPointer getType()
	{
		long returnValue = getType_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	protected  long getModifiedTime_EVString_callback(String filename)
	{
		String filenameParamValue = filename;
		long returnValue = getModifiedTime(filenameParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getModifiedTime_EVString(long pNativeObject, String filename);
	/**
	 * Retrievethemodificationtimeofagivenfile
	 * @param  name="filename"
	 * @return timeelapsedfrommodified
	 */
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

	public Archive(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Archive(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static Archive fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Archive obj = null;
 		if(baseObj instanceof Archive)
		{
			obj = (Archive)baseObj;
		} else {
			obj = new Archive(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CArchive");
			obj.increaseCast();
		}

		return obj;
	}
}
