package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvmodeltemplatelayerinfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evmodeltemplatelayerinfo emptyInstance = new Evmodeltemplatelayerinfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
