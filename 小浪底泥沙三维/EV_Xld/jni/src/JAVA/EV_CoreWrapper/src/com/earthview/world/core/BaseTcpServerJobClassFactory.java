package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class BaseTcpServerJobClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BaseTcpServerJob emptyInstance = new BaseTcpServerJob(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
