package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IvectorlayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ivectorlayer emptyInstance = new Ivectorlayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
