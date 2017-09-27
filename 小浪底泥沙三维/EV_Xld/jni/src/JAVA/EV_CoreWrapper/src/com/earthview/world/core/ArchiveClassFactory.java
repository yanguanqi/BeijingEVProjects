package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class ArchiveClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Archive emptyInstance = new Archive(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
