package com.earthview.world.frameworkproxy.atlasmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayerSimplePropertyClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LayerSimpleProperty emptyInstance = new LayerSimpleProperty(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
