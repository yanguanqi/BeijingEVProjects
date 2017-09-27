package com.earthview.world.spatial3d.effectmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectManager emptyInstance = new EffectManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
