package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HeightRangeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		HeightRange emptyInstance = new HeightRange(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
