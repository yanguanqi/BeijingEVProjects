package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IntConstantListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		IntConstantList emptyInstance = new IntConstantList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
