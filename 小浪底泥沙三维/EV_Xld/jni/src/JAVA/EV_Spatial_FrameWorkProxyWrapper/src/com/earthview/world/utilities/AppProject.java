package com.earthview.world.utilities;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AppProject extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Utilities::AppProject", new AppProjectClassFactory());
	}

	/**
	 * 构造函数。
	 */
	public AppProject() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("AppProject", null);
	}

	native private boolean open_EVString(long pNativeObject, String filepath);
	/**
	 * 打开工程文件。
	 * @param filepath 文件路径+文件名。
	 * @return 打开是否成功。
	 */
	public boolean open(String filepath)
	{
		String filepathParamValue = filepath;
		boolean returnValue = open_EVString(this.nativeObject.pointer, filepathParamValue);
		return returnValue;
	}
	native private void close_void(long pNativeObject);
	/**
	 * 关闭工程文件。
	 */
	public void close()
	{
		close_void(this.nativeObject.pointer);
	}
	native private boolean create_void(long pNativeObject);
	/**
	 * 创建工程文件。
	 * @return 创建是否成功。
	 */
	public boolean create()
	{
		boolean returnValue = create_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean save_void(long pNativeObject);
	/**
	 * 保存已经打开的工程文件。
	 * @return 保存是否成功。
	 */
	public boolean save()
	{
		boolean returnValue = save_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean saveAs_EVString(long pNativeObject, String filepath);
	/**
	 * 指定文件名保存工程文件。（另存为）
	 * @param filepath 文件路径+文件名。
	 * @return 保存是否成功。
	 */
	public boolean saveAs(String filepath)
	{
		String filepathParamValue = filepath;
		boolean returnValue = saveAs_EVString(this.nativeObject.pointer, filepathParamValue);
		return returnValue;
	}
	public AppProject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AppProject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static AppProject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AppProject obj = null;
 		if(baseObj instanceof AppProject)
		{
			obj = (AppProject)baseObj;
		} else {
			obj = new AppProject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "AppProject");
			obj.increaseCast();
		}

		return obj;
	}
}
