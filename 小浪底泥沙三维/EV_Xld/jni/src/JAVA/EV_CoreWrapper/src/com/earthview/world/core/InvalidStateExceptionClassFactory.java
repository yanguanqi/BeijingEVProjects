package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class InvalidStateExceptionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		InvalidStateException emptyInstance = new InvalidStateException(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
