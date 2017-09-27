package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IpropertysetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ipropertyset emptyInstance = new Ipropertyset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
