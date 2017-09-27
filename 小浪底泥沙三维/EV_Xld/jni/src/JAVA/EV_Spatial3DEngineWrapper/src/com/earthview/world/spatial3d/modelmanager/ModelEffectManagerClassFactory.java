package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelEffectManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelEffectManager emptyInstance = new ModelEffectManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
