package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvmodellayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evmodellayer emptyInstance = new Evmodellayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
