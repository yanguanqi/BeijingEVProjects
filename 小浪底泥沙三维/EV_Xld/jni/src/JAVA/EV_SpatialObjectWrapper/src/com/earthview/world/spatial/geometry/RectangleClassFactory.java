package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RectangleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Rectangle emptyInstance = new Rectangle(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
