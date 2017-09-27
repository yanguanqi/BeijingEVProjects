package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayerFactoryEnumeratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LayerFactoryEnumerator emptyInstance = new LayerFactoryEnumerator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
