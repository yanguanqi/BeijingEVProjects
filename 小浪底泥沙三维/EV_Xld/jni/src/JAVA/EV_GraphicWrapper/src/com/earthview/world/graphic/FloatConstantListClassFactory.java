package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FloatConstantListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FloatConstantList emptyInstance = new FloatConstantList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
