package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class FileNotFoundExceptionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FileNotFoundException emptyInstance = new FileNotFoundException(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
