package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Map emptyInstance = new Map(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
