package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class FileInfoListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FileInfoList emptyInstance = new FileInfoList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
