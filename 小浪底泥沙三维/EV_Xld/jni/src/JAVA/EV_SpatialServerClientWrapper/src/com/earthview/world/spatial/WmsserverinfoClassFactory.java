package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WmsserverinfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wmsserverinfo emptyInstance = new Wmsserverinfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
