package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ClampLineExtensionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ClampLineExtension emptyInstance = new ClampLineExtension(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
