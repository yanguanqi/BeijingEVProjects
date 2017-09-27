package com.earthview.world.frameworkproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GroupStringinterfaceMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GroupStringinterfaceMap emptyInstance = new GroupStringinterfaceMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
