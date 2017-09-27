package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NetworkAnalystClassFactory implements IClassFactory {
	public BaseObject create()
	{
		NetworkAnalyst emptyInstance = new NetworkAnalyst(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
