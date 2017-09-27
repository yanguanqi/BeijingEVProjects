package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvwfslayerinfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evwfslayerinfo emptyInstance = new Evwfslayerinfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
