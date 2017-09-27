package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class DataStreamReaderClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataStreamReader emptyInstance = new DataStreamReader(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
