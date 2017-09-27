package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class IntPairVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		IntPairVector emptyInstance = new IntPairVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
