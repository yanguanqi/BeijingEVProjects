package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvmodellayerinfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evmodellayerinfo emptyInstance = new Evmodellayerinfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
