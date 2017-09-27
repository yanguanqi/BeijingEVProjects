package com.earthview.world.frameworkproxy.datasourcemanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DatasetActiveEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DatasetActiveEvent emptyInstance = new DatasetActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
