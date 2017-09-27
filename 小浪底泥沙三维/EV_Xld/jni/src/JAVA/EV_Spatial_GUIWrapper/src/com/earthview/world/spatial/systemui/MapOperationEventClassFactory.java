package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MapOperationEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MapOperationEvent emptyInstance = new MapOperationEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
