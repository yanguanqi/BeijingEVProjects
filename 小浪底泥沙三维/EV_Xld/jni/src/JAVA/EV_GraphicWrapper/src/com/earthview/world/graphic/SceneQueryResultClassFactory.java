package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneQueryResultClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SceneQueryResult emptyInstance = new SceneQueryResult(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
