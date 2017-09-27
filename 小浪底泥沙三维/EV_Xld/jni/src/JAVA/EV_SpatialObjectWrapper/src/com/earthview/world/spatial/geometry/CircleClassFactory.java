package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CircleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Circle emptyInstance = new Circle(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
