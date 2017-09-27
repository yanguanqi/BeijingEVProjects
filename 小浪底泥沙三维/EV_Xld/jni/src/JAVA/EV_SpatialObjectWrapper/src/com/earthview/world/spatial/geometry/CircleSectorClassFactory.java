package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CircleSectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CircleSector emptyInstance = new CircleSector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
