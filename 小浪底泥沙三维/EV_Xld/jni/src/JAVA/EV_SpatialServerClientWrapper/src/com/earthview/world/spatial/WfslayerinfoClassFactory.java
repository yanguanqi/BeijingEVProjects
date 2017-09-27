package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WfslayerinfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wfslayerinfo emptyInstance = new Wfslayerinfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
