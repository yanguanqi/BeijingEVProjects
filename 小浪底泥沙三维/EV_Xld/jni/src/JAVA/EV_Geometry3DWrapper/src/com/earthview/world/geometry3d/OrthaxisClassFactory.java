package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OrthaxisClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Orthaxis emptyInstance = new Orthaxis(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
