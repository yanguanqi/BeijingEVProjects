package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvwmtslayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evwmtslayer emptyInstance = new Evwmtslayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
