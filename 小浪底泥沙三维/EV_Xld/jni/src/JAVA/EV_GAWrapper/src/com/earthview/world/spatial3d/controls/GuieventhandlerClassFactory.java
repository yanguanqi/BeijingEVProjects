package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GuieventhandlerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Guieventhandler emptyInstance = new Guieventhandler(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
