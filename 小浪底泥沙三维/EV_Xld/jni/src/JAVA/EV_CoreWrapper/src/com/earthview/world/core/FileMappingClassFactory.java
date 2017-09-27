package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class FileMappingClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FileMapping emptyInstance = new FileMapping(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
