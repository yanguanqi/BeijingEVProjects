package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvlasxgeditingstateClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evlasxgeditingstate emptyInstance = new Evlasxgeditingstate(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
