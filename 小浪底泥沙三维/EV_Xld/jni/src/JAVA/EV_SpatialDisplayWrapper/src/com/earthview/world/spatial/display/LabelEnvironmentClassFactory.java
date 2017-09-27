package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LabelEnvironmentClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LabelEnvironment emptyInstance = new LabelEnvironment(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
