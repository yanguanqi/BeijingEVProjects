package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class FileSystemArchiveFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FileSystemArchiveFactory emptyInstance = new FileSystemArchiveFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
