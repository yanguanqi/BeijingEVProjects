package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class DataStreamWriterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataStreamWriter emptyInstance = new DataStreamWriter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
