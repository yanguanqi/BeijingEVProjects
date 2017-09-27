package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ServerIconClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ServerIcon emptyInstance = new ServerIcon(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
