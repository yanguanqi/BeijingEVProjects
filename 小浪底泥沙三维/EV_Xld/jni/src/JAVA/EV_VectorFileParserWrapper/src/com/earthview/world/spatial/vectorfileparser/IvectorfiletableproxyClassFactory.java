package com.earthview.world.spatial.vectorfileparser;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IvectorfiletableproxyClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ivectorfiletableproxy emptyInstance = new Ivectorfiletableproxy(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
