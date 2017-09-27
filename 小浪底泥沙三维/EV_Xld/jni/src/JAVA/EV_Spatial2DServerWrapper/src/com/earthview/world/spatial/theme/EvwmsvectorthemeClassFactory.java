package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvwmsvectorthemeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evwmsvectortheme emptyInstance = new Evwmsvectortheme(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
