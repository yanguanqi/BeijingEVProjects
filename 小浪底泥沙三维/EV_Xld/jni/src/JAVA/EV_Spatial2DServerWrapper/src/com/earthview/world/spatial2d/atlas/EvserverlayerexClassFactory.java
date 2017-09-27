package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvserverlayerexClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evserverlayerex emptyInstance = new Evserverlayerex(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
