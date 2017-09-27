package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IntersectionSceneQueryListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		IntersectionSceneQueryListener emptyInstance = new IntersectionSceneQueryListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
