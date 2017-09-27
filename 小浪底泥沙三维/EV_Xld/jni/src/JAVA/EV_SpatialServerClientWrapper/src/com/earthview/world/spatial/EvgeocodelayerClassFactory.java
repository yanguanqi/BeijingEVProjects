package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvgeocodelayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evgeocodelayer emptyInstance = new Evgeocodelayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
