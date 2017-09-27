package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class LoggerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Logger emptyInstance = new Logger(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
