package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MapActiveEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MapActiveEvent emptyInstance = new MapActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
