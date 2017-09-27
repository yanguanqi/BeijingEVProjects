package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class FileSystemArchiveClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FileSystemArchive emptyInstance = new FileSystemArchive(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
