package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneNodeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SceneNode emptyInstance = new SceneNode(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
