package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ReferenceGridClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ReferenceGrid emptyInstance = new ReferenceGrid(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
