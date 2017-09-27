package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class InternalErrorExceptionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		InternalErrorException emptyInstance = new InternalErrorException(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
