package com.earthview.world.frameworkproxy.atlasmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayerVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LayerVector emptyInstance = new LayerVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
