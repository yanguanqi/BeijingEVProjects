package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RealRectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RealRect emptyInstance = new RealRect(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
