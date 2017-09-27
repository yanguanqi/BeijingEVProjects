package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class StringUtilClassFactory implements IClassFactory {
	public BaseObject create()
	{
		StringUtil emptyInstance = new StringUtil(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
