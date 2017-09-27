package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MapLayerActiveEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MapLayerActiveEvent emptyInstance = new MapLayerActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
