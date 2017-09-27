package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MercatorPoleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MercatorPole emptyInstance = new MercatorPole(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
