package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class IoexceptionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ioexception emptyInstance = new Ioexception(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
