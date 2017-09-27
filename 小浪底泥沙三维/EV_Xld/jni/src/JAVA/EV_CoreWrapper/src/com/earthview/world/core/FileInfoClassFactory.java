package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class FileInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FileInfo emptyInstance = new FileInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
