package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvdemlayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evdemlayer emptyInstance = new Evdemlayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
