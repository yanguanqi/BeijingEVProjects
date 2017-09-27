package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ServerSetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ServerSet emptyInstance = new ServerSet(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
