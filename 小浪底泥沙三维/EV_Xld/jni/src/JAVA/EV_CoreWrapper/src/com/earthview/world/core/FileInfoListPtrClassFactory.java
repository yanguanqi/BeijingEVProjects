package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class FileInfoListPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FileInfoListPtr emptyInstance = new FileInfoListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
