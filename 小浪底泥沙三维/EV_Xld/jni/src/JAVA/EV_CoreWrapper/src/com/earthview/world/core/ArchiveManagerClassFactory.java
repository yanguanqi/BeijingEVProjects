package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class ArchiveManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ArchiveManager emptyInstance = new ArchiveManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
