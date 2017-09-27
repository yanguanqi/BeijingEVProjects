package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvgeocodelayerinfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evgeocodelayerinfo emptyInstance = new Evgeocodelayerinfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
