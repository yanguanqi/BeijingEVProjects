package com.earthview.world.frameworkproxy.datasourcemanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DatasetActiveEventArrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DatasetActiveEventArr emptyInstance = new DatasetActiveEventArr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
