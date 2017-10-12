package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OutputEngineClassFactory implements IClassFactory {
	public BaseObject create()
	{
		OutputEngine emptyInstance = new OutputEngine(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
