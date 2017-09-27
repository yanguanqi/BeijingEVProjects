package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ServerStyleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ServerStyle emptyInstance = new ServerStyle(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
