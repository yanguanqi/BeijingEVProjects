package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class IntVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		IntVector emptyInstance = new IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
