package com.earthview.world.spatial3d.effectmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Effect emptyInstance = new Effect(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
