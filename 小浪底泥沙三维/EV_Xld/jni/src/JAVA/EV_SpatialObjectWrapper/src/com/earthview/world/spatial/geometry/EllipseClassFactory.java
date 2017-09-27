package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EllipseClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ellipse emptyInstance = new Ellipse(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
