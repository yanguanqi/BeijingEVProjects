package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectResourceInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectResourceInfo emptyInstance = new EffectResourceInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
