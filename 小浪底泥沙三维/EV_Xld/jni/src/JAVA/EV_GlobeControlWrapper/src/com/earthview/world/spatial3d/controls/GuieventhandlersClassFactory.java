package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GuieventhandlersClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Guieventhandlers emptyInstance = new Guieventhandlers(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
