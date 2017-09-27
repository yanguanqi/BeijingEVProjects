package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DefaultIntersectionSceneQueryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DefaultIntersectionSceneQuery emptyInstance = new DefaultIntersectionSceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
