package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class CommonStringPairListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommonStringPairList emptyInstance = new CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
