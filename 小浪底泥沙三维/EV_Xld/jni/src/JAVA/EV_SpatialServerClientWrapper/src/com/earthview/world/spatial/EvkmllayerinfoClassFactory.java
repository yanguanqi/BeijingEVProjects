package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvkmllayerinfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evkmllayerinfo emptyInstance = new Evkmllayerinfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
