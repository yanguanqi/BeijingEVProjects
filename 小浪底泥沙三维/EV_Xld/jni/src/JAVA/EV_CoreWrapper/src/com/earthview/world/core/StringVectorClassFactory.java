package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class StringVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		StringVector emptyInstance = new StringVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
