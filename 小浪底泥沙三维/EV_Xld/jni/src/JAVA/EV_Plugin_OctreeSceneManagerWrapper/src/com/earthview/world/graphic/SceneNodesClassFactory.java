package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneNodesClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SceneNodes emptyInstance = new SceneNodes(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
