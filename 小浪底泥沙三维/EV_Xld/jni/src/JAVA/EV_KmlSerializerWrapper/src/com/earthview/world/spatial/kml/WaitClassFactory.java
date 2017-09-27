package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WaitClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wait emptyInstance = new Wait(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
