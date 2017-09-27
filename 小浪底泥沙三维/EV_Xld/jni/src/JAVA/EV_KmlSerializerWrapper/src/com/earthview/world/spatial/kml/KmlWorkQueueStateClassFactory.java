package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlWorkQueueStateClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlWorkQueueState emptyInstance = new KmlWorkQueueState(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
