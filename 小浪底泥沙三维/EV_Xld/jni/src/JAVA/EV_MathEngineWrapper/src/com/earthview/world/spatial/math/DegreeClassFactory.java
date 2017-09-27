package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DegreeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Degree emptyInstance = new Degree(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
