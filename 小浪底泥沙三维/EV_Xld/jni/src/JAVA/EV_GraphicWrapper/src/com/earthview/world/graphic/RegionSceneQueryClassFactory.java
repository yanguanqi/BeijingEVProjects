package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RegionSceneQueryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RegionSceneQuery emptyInstance = new RegionSceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
