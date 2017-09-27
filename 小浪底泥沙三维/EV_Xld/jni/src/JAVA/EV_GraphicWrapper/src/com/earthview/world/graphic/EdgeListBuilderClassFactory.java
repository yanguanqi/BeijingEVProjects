package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EdgeListBuilderClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EdgeListBuilder emptyInstance = new EdgeListBuilder(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
