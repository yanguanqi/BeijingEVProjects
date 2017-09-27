package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectRefInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectRefInfo emptyInstance = new EffectRefInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
