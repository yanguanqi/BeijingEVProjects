package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class FileHandleDataStreamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FileHandleDataStream emptyInstance = new FileHandleDataStream(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
