package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IntersectionSceneQueryResultClassFactory implements IClassFactory {
	public BaseObject create()
	{
		IntersectionSceneQueryResult emptyInstance = new IntersectionSceneQueryResult(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
