package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneQueryMovableObjectPairClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SceneQueryMovableObjectPair emptyInstance = new SceneQueryMovableObjectPair(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
