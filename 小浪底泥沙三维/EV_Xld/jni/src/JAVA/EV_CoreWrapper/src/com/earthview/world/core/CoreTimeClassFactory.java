package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class CoreTimeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CoreTime emptyInstance = new CoreTime(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
