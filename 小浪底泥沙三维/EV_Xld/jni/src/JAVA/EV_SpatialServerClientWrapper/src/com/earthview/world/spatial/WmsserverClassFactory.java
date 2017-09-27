package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WmsserverClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wmsserver emptyInstance = new Wmsserver(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
