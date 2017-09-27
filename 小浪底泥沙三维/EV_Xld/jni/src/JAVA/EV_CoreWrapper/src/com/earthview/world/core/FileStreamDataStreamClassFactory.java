package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class FileStreamDataStreamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FileStreamDataStream emptyInstance = new FileStreamDataStream(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
