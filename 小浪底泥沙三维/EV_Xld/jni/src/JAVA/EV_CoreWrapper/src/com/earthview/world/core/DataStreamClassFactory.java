package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class DataStreamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataStream emptyInstance = new DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
