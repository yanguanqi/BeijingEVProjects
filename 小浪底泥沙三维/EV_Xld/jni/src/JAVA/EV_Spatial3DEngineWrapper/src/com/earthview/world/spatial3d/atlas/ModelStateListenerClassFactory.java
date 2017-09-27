package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelStateListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelStateListener emptyInstance = new ModelStateListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
