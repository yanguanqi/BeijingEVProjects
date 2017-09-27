package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeSelectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeSelection emptyInstance = new GlobeSelection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
