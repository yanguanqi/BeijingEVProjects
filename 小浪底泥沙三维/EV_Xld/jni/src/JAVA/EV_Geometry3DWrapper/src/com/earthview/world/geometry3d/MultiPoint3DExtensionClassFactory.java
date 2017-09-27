package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MultiPoint3DExtensionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MultiPoint3DExtension emptyInstance = new MultiPoint3DExtension(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
