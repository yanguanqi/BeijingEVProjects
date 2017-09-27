package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvkmllayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evkmllayer emptyInstance = new Evkmllayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
