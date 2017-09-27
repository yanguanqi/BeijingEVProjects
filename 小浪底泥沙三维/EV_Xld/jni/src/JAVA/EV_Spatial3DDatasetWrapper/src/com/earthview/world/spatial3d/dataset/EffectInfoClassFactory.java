package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectInfo emptyInstance = new EffectInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
