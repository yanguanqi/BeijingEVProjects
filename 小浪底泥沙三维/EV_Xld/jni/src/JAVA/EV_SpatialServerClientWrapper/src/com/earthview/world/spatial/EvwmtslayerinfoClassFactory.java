package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvwmtslayerinfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evwmtslayerinfo emptyInstance = new Evwmtslayerinfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
