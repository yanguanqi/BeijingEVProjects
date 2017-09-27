package global;

import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Ftpclient extends BaseObject {
	
	static {
		GlobalClassFactoryMap.put("FTPClient", new FtpclientClassFactory());
	}

	/**
	 * 
	 * @param  
	 */
	public Ftpclient(String remotepath) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer remotepathPtr = new BasePointer(remotepath);
		list.add("remotepath", remotepathPtr.get());
		Create("FTPClient", list);
	}

	/**
	 * 
	 * @param  
	 */
	public Ftpclient(String user, String password, String remotepath) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer userPtr = new BasePointer(user);
		list.add("user", userPtr.get());
		BasePointer passwordPtr = new BasePointer(password);
		list.add("password", passwordPtr.get());
		BasePointer remotepathPtr = new BasePointer(remotepath);
		list.add("remotepath", remotepathPtr.get());
		Create("FTPClient", list);
	}

	native private String pwd_void(long pNativeObject);
	/**
	 * 获取当前目录
	 * @param  
	 */
	public String pwd()
	{
		String returnValue = pwd_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long dir_void(long pNativeObject);
	/**
	 * 当前目录文件和文件夹列表
	 * @param  
	 */
	public com.earthview.world.core.StringArray dir()
	{
		long returnValue = dir_void(this.nativeObject.pointer);
		com.earthview.world.core.StringArray __returnValue = new com.earthview.world.core.StringArray(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CStringArray");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringArray)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CStringArray");
		}
		return __returnValue;
	}
	native private boolean cd_EVString(long pNativeObject, String param);
	/**
	 * 改变当前目录
	 * @param  
	 */
	public boolean cd(String param)
	{
		String paramParamValue = param;
		boolean returnValue = cd_EVString(this.nativeObject.pointer, paramParamValue);
		return returnValue;
	}
	native private long get_EVString_ev_int32(long pNativeObject, String filename, int fileformat);
	/**
	 * 获取文件
	 * @param  
	 */
	public com.earthview.world.core.MemoryDataStreamPtr get(String filename, int fileformat)
	{
		String filenameParamValue = filename;
		int fileformatParamValue = fileformat;
		long returnValue = get_EVString_ev_int32(this.nativeObject.pointer, filenameParamValue, fileformatParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	native private int put_MemoryDataStreamPtr_EVString_ev_int32(long pNativeObject, long data, String filename, int fileformat);
	/**
	 * 上传文件
	 * @param  
	 */
	public int put(com.earthview.world.core.MemoryDataStreamPtr data, String filename, int fileformat)
	{
		long dataParamValue = data.nativeObject.pointer;
		String filenameParamValue = filename;
		int fileformatParamValue = fileformat;
		int returnValue = put_MemoryDataStreamPtr_EVString_ev_int32(this.nativeObject.pointer, dataParamValue, filenameParamValue, fileformatParamValue);
		return returnValue;
	}
	native private boolean remove_EVString(long pNativeObject, String filename);
	/**
	 * 删除文件
	 * @param  
	 */
	public boolean remove(String filename)
	{
		String filenameParamValue = filename;
		boolean returnValue = remove_EVString(this.nativeObject.pointer, filenameParamValue);
		return returnValue;
	}
	native private int errorCode_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public int errorCode()
	{
		int returnValue = errorCode_void(this.nativeObject.pointer);
		return returnValue;
	}
	public Ftpclient(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ftpclient(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Ftpclient fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ftpclient obj = null;
 		if(baseObj instanceof Ftpclient)
		{
			obj = (Ftpclient)baseObj;
		} else {
			obj = new Ftpclient(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "FTPClient");
			obj.increaseCast();
		}

		return obj;
	}
}
