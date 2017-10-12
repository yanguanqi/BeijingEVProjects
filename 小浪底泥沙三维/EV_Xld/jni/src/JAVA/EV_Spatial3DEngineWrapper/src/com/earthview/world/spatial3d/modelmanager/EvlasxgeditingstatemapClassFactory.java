package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvlasxgeditingstatemapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evlasxgeditingstatemap emptyInstance = new Evlasxgeditingstatemap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
