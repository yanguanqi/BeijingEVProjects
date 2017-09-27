package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LineClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Line emptyInstance = new Line(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
