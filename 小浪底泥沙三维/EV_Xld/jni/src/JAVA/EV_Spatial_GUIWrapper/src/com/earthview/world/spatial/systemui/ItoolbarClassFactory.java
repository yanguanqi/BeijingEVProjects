package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ItoolbarClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Itoolbar emptyInstance = new Itoolbar(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
