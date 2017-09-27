package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class FileAttributesClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FileAttributes emptyInstance = new FileAttributes(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
