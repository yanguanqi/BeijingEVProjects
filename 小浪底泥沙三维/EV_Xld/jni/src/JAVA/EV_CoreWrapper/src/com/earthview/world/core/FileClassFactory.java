package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class FileClassFactory implements IClassFactory {
	public BaseObject create()
	{
		File emptyInstance = new File(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
