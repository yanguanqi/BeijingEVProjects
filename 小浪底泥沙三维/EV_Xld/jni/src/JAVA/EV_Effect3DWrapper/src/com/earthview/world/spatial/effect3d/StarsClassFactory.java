package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class StarsClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Stars emptyInstance = new Stars(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
