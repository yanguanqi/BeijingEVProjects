package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class DirectoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Directory emptyInstance = new Directory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
