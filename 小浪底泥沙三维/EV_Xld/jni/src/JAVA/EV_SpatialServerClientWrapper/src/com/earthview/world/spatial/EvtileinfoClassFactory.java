package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvtileinfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evtileinfo emptyInstance = new Evtileinfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
