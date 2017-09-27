package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectObjectMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectObjectMap emptyInstance = new EffectObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
