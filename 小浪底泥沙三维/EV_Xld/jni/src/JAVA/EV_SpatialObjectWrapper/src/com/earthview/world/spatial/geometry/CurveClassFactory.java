package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CurveClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Curve emptyInstance = new Curve(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
