package com.earthview.world.spatial3dproxy.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GotoListener360ClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GotoListener360 emptyInstance = new GotoListener360(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
