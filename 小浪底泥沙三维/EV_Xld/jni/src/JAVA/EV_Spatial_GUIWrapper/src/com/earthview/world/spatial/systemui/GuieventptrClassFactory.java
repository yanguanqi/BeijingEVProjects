package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GuieventptrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Guieventptr emptyInstance = new Guieventptr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
