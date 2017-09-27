package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class VariantArrayClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VariantArray emptyInstance = new VariantArray(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
