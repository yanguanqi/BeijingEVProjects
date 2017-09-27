package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class Int3VectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Int3Vector emptyInstance = new Int3Vector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
