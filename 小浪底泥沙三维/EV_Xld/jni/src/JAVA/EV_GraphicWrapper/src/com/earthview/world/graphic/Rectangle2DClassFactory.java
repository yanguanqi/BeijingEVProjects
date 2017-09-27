package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Rectangle2DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Rectangle2D emptyInstance = new Rectangle2D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
