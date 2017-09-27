package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvbasemodellayerinfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evbasemodellayerinfo emptyInstance = new Evbasemodellayerinfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
