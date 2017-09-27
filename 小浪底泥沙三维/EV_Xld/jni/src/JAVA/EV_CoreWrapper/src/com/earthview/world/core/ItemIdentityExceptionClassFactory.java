package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class ItemIdentityExceptionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ItemIdentityException emptyInstance = new ItemIdentityException(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
