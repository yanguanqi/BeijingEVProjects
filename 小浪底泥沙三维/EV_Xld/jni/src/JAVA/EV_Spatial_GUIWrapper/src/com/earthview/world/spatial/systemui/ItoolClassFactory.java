package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ItoolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Itool emptyInstance = new Itool(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
