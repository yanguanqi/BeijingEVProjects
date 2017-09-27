package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BackgroundWorkManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BackgroundWorkManager emptyInstance = new BackgroundWorkManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
