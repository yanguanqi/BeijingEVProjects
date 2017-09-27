package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PlanargridClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Planargrid emptyInstance = new Planargrid(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
