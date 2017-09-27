package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WmtslayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wmtslayer emptyInstance = new Wmtslayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
