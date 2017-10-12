package com.earthview.world.spatiallasconvertproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LasMergeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LasMerge emptyInstance = new LasMerge(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
