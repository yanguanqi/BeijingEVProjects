package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class GuidClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Guid emptyInstance = new Guid(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
