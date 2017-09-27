package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvdemlayerinfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evdemlayerinfo emptyInstance = new Evdemlayerinfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
