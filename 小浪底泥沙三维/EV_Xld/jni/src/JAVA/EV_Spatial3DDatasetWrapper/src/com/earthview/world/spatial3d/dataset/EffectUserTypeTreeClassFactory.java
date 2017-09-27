package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectUserTypeTreeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectUserTypeTree emptyInstance = new EffectUserTypeTree(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
