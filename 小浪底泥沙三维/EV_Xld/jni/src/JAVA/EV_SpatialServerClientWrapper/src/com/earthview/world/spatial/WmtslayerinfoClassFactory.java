package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WmtslayerinfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wmtslayerinfo emptyInstance = new Wmtslayerinfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
