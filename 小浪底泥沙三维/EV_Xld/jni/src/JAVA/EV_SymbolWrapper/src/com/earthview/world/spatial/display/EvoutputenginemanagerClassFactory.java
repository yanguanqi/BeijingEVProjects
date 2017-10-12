package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvoutputenginemanagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evoutputenginemanager emptyInstance = new Evoutputenginemanager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
