package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IspatialcontrolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ispatialcontrol emptyInstance = new Ispatialcontrol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
