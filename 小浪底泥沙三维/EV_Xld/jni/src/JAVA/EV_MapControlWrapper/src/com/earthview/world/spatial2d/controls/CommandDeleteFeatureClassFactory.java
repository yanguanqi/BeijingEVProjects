package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandDeleteFeatureClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandDeleteFeature emptyInstance = new CommandDeleteFeature(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
