package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SqlkeycheckerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Sqlkeychecker emptyInstance = new Sqlkeychecker(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
