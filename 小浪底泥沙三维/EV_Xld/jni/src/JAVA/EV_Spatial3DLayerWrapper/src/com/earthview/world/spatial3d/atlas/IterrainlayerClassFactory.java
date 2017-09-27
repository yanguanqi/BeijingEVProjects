package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IterrainlayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Iterrainlayer emptyInstance = new Iterrainlayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
