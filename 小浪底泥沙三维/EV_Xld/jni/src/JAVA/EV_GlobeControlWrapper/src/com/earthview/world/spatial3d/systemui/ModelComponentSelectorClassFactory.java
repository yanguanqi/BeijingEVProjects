package com.earthview.world.spatial3d.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelComponentSelectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelComponentSelector emptyInstance = new ModelComponentSelector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
