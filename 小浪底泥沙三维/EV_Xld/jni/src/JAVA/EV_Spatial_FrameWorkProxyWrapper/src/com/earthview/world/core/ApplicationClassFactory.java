package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ApplicationClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Application emptyInstance = new Application(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
