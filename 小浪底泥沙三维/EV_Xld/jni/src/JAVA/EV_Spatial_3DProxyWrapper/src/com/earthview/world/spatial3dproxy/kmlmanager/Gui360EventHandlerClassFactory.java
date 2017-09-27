package com.earthview.world.spatial3dproxy.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Gui360EventHandlerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Gui360EventHandler emptyInstance = new Gui360EventHandler(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
