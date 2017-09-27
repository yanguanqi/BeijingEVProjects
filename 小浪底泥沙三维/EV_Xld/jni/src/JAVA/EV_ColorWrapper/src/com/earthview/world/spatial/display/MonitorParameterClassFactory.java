package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MonitorParameterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MonitorParameter emptyInstance = new MonitorParameter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
