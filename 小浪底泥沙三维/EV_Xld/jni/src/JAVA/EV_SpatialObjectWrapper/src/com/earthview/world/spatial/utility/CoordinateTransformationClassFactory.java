package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CoordinateTransformationClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CoordinateTransformation emptyInstance = new CoordinateTransformation(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
