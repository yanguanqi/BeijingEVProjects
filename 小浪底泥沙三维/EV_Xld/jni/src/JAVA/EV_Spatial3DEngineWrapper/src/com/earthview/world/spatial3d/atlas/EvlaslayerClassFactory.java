package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvlaslayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evlaslayer emptyInstance = new Evlaslayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
