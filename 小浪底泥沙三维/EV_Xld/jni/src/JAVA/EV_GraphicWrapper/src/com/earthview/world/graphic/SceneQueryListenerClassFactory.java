package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneQueryListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SceneQueryListener emptyInstance = new SceneQueryListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
