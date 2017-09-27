package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ConvexBodyClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ConvexBody emptyInstance = new ConvexBody(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
