package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class RealVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RealVector emptyInstance = new RealVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
