package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WakeGeneratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WakeGenerator emptyInstance = new WakeGenerator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
