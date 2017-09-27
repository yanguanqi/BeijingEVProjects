package com.earthview.world.spatial3d.effectmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectUserDataClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectUserData emptyInstance = new EffectUserData(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
