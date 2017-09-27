package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class RenderingAPIExceptionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderingAPIException emptyInstance = new RenderingAPIException(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
