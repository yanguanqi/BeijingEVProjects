package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WfsserverinfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wfsserverinfo emptyInstance = new Wfsserverinfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
