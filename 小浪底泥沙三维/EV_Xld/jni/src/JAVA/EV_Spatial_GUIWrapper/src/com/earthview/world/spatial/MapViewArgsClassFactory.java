package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MapViewArgsClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MapViewArgs emptyInstance = new MapViewArgs(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
