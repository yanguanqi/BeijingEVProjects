package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvwfslayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evwfslayer emptyInstance = new Evwfslayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
