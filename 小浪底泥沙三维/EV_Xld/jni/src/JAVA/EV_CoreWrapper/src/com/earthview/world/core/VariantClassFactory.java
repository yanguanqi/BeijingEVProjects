package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class VariantClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Variant emptyInstance = new Variant(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
