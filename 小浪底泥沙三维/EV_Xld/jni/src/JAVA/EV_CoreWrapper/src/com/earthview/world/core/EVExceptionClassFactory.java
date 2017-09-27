package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class EVExceptionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EVException emptyInstance = new EVException(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
