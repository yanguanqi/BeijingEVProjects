package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MapLayersAddedEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MapLayersAddedEvent emptyInstance = new MapLayersAddedEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
