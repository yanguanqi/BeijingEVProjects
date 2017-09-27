package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneQueryMovableIntersectionListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SceneQueryMovableIntersectionList emptyInstance = new SceneQueryMovableIntersectionList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
